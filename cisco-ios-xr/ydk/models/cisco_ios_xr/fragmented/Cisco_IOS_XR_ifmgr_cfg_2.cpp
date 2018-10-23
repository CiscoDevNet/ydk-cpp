
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
    , outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_data() const
{
    if (is_presence_container) return true;
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return do_not_use.is_set
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    outbound{YType::str, "outbound"},
    inbound{YType::str, "inbound"}
{

    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    if (is_presence_container) return true;
    return outbound.is_set
	|| inbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outbound.yfilter)
	|| ydk::is_set(inbound.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());
    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
    , inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    if (is_presence_container) return true;
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return do_not_use.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
    :
    span_monitor_session(this, {"session_class"})
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.len(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        ent_->parent = this;
        span_monitor_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : span_monitor_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
        ,
    attachment(nullptr) // presence node
    , acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session";
    ADD_KEY_TOKEN(session_class, "session-class");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attachment != nullptr)
    {
        _children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    if (is_presence_container) return true;
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
{

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    satellite{YType::uint32, "satellite"},
    minimum_required_links{YType::uint32, "minimum-required-links"}
        ,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
    , remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
    , ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
{
    redundancy->parent = this;
    remote_ports->parent = this;
    ethernet_features->parent = this;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    if (is_presence_container) return true;
    return satellite.is_set
	|| minimum_required_links.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite.yfilter)
	|| ydk::is_set(minimum_required_links.yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite.is_set || is_set(satellite.yfilter)) leaf_name_data.push_back(satellite.get_name_leafdata());
    if (minimum_required_links.is_set || is_set(minimum_required_links.yfilter)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>();
        }
        return remote_ports;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>();
        }
        return ethernet_features;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(remote_ports != nullptr)
    {
        _children["remote-ports"] = remote_ports;
    }

    if(ethernet_features != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features"] = ethernet_features;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite")
    {
        satellite = value;
        satellite.value_namespace = name_space;
        satellite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
        minimum_required_links.value_namespace = name_space;
        minimum_required_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite")
    {
        satellite.yfilter = yfilter;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "remote-ports" || name == "ethernet-features" || name == "satellite" || name == "minimum-required-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePorts()
    :
    remote_port(this, {"port_type", "slot", "sub_slot"})
{

    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        ent_->parent = this;
        remote_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    ADD_KEY_TOKEN(port_type, "port-type");
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(sub_slot, "sub-slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>())
{
    cfm->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_data() const
{
    if (is_presence_container) return true;
    return (cfm !=  nullptr && cfm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::Cfm()
    :
    continuity_check_interval{YType::enumeration, "continuity-check-interval"},
    level{YType::uint32, "level"},
    enable{YType::empty, "enable"}
{

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return continuity_check_interval.is_set
	|| level.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(continuity_check_interval.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continuity_check_interval.is_set || is_set(continuity_check_interval.yfilter)) leaf_name_data.push_back(continuity_check_interval.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval = value;
        continuity_check_interval.value_namespace = name_space;
        continuity_check_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check-interval" || name == "level" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
        ,
    satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
    , redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
{
    satellites->parent = this;
    redundancy->parent = this;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (satellites !=  nullptr && satellites->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (satellites !=  nullptr && satellites->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellites")
    {
        if(satellites == nullptr)
        {
            satellites = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>();
        }
        return satellites;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(satellites != nullptr)
    {
        _children["satellites"] = satellites;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellites" || name == "redundancy" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellites()
    :
    satellite(this, {"satellite_id"})
{

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<satellite.len(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.len(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        ent_->parent = this;
        satellite.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : satellite.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::Satellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    enable{YType::empty, "enable"}
        ,
    remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>())
{
    remote_ports->parent = this;

    yang_name = "satellite"; yang_parent_name = "satellites"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::~Satellite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_data() const
{
    if (is_presence_container) return true;
    return satellite_id.is_set
	|| enable.is_set
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";
    ADD_KEY_TOKEN(satellite_id, "satellite-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ports != nullptr)
    {
        _children["remote-ports"] = remote_ports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ports" || name == "satellite-id" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePorts()
    :
    remote_port(this, {"port_type", "slot", "sub_slot"})
{

    yang_name = "remote-ports"; yang_parent_name = "satellite"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        ent_->parent = this;
        remote_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    ADD_KEY_TOKEN(port_type, "port-type");
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(sub_slot, "sub-slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
    :
    service_policy(this, {"service_policy_name"})
{

    yang_name = "service-policies"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::CiscoIOSXRPppMaCfgPpp()
{

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::~CiscoIOSXRPppMaCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::PerformanceManagement()
    :
    stm_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>())
    , minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>())
    , sonet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>())
    , hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>())
    , ethernet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>())
    , minute15otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms>())
    , oc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>())
    , ethernet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>())
    , ho_vc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>())
    , second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>())
    , hour24otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms>())
    , sts_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>())
    , hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>())
    , ho_vc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>())
    , sts_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>())
    , stm_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>())
    , sonet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>())
    , minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>())
    , oc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>())
    , ethernet_second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>())
    , hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>())
    , minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>())
{
    stm_hour24->parent = this;
    minute15_gfp->parent = this;
    sonet_minute15->parent = this;
    hour24_gfp->parent = this;
    ethernet_hour24->parent = this;
    minute15otn_tcms->parent = this;
    oc_hour24->parent = this;
    ethernet_minute15->parent = this;
    ho_vc_hour24->parent = this;
    second30->parent = this;
    hour24otn_tcms->parent = this;
    sts_minute15->parent = this;
    hour24->parent = this;
    ho_vc_minute15->parent = this;
    sts_hour24->parent = this;
    stm_minute15->parent = this;
    sonet_hour24->parent = this;
    minute15_path->parent = this;
    oc_minute15->parent = this;
    ethernet_second30->parent = this;
    hour24_path->parent = this;
    minute15->parent = this;

    yang_name = "performance-management"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::~PerformanceManagement()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_data())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_data())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_data())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (second30 !=  nullptr && second30->has_data())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data())
	|| (hour24 !=  nullptr && hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (minute15_path !=  nullptr && minute15_path->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (hour24_path !=  nullptr && hour24_path->has_data())
	|| (minute15 !=  nullptr && minute15->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation())
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_operation())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_operation())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (second30 !=  nullptr && second30->has_operation())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation())
	|| (hour24 !=  nullptr && hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (minute15_path !=  nullptr && minute15_path->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (hour24_path !=  nullptr && hour24_path->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-cfg:performance-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>();
        }
        return minute15_gfp;
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>();
        }
        return sonet_minute15;
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>();
        }
        return hour24_gfp;
    }

    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 == nullptr)
        {
            ethernet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>();
        }
        return ethernet_hour24;
    }

    if(child_yang_name == "minute15otn-tcms")
    {
        if(minute15otn_tcms == nullptr)
        {
            minute15otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms>();
        }
        return minute15otn_tcms;
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 == nullptr)
        {
            oc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>();
        }
        return oc_hour24;
    }

    if(child_yang_name == "ethernet-minute15")
    {
        if(ethernet_minute15 == nullptr)
        {
            ethernet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>();
        }
        return ethernet_minute15;
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 == nullptr)
        {
            ho_vc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>();
        }
        return ho_vc_hour24;
    }

    if(child_yang_name == "second30")
    {
        if(second30 == nullptr)
        {
            second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>();
        }
        return second30;
    }

    if(child_yang_name == "hour24otn-tcms")
    {
        if(hour24otn_tcms == nullptr)
        {
            hour24otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms>();
        }
        return hour24otn_tcms;
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 == nullptr)
        {
            sts_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>();
        }
        return sts_minute15;
    }

    if(child_yang_name == "hour24")
    {
        if(hour24 == nullptr)
        {
            hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>();
        }
        return hour24;
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 == nullptr)
        {
            ho_vc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>();
        }
        return ho_vc_minute15;
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 == nullptr)
        {
            sts_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>();
        }
        return sts_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>();
        }
        return stm_minute15;
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>();
        }
        return sonet_hour24;
    }

    if(child_yang_name == "minute15-path")
    {
        if(minute15_path == nullptr)
        {
            minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>();
        }
        return minute15_path;
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 == nullptr)
        {
            oc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>();
        }
        return oc_minute15;
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 == nullptr)
        {
            ethernet_second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>();
        }
        return ethernet_second30;
    }

    if(child_yang_name == "hour24-path")
    {
        if(hour24_path == nullptr)
        {
            hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>();
        }
        return hour24_path;
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 == nullptr)
        {
            minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>();
        }
        return minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24 != nullptr)
    {
        _children["stm-hour24"] = stm_hour24;
    }

    if(minute15_gfp != nullptr)
    {
        _children["minute15-gfp"] = minute15_gfp;
    }

    if(sonet_minute15 != nullptr)
    {
        _children["sonet-minute15"] = sonet_minute15;
    }

    if(hour24_gfp != nullptr)
    {
        _children["hour24-gfp"] = hour24_gfp;
    }

    if(ethernet_hour24 != nullptr)
    {
        _children["ethernet-hour24"] = ethernet_hour24;
    }

    if(minute15otn_tcms != nullptr)
    {
        _children["minute15otn-tcms"] = minute15otn_tcms;
    }

    if(oc_hour24 != nullptr)
    {
        _children["oc-hour24"] = oc_hour24;
    }

    if(ethernet_minute15 != nullptr)
    {
        _children["ethernet-minute15"] = ethernet_minute15;
    }

    if(ho_vc_hour24 != nullptr)
    {
        _children["ho-vc-hour24"] = ho_vc_hour24;
    }

    if(second30 != nullptr)
    {
        _children["second30"] = second30;
    }

    if(hour24otn_tcms != nullptr)
    {
        _children["hour24otn-tcms"] = hour24otn_tcms;
    }

    if(sts_minute15 != nullptr)
    {
        _children["sts-minute15"] = sts_minute15;
    }

    if(hour24 != nullptr)
    {
        _children["hour24"] = hour24;
    }

    if(ho_vc_minute15 != nullptr)
    {
        _children["ho-vc-minute15"] = ho_vc_minute15;
    }

    if(sts_hour24 != nullptr)
    {
        _children["sts-hour24"] = sts_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        _children["stm-minute15"] = stm_minute15;
    }

    if(sonet_hour24 != nullptr)
    {
        _children["sonet-hour24"] = sonet_hour24;
    }

    if(minute15_path != nullptr)
    {
        _children["minute15-path"] = minute15_path;
    }

    if(oc_minute15 != nullptr)
    {
        _children["oc-minute15"] = oc_minute15;
    }

    if(ethernet_second30 != nullptr)
    {
        _children["ethernet-second30"] = ethernet_second30;
    }

    if(hour24_path != nullptr)
    {
        _children["hour24-path"] = hour24_path;
    }

    if(minute15 != nullptr)
    {
        _children["minute15"] = minute15;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24" || name == "minute15-gfp" || name == "sonet-minute15" || name == "hour24-gfp" || name == "ethernet-hour24" || name == "minute15otn-tcms" || name == "oc-hour24" || name == "ethernet-minute15" || name == "ho-vc-hour24" || name == "second30" || name == "hour24otn-tcms" || name == "sts-minute15" || name == "hour24" || name == "ho-vc-minute15" || name == "sts-hour24" || name == "stm-minute15" || name == "sonet-hour24" || name == "minute15-path" || name == "oc-minute15" || name == "ethernet-second30" || name == "hour24-path" || name == "minute15")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24()
    :
    stm_hour24_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>())
{
    stm_hour24_stm->parent = this;

    yang_name = "stm-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::~StmHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm")
    {
        if(stm_hour24_stm == nullptr)
        {
            stm_hour24_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>();
        }
        return stm_hour24_stm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24_stm != nullptr)
    {
        _children["stm-hour24-stm"] = stm_hour24_stm;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24Stm()
    :
    stm_hour24_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>())
    , stm_hour24_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>())
{
    stm_hour24_stm_reports->parent = this;
    stm_hour24_stm_thresholds->parent = this;

    yang_name = "stm-hour24-stm"; yang_parent_name = "stm-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::~StmHour24Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_data() const
{
    if (is_presence_container) return true;
    return (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_data())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_operation())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-reports")
    {
        if(stm_hour24_stm_reports == nullptr)
        {
            stm_hour24_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>();
        }
        return stm_hour24_stm_reports;
    }

    if(child_yang_name == "stm-hour24-stm-thresholds")
    {
        if(stm_hour24_stm_thresholds == nullptr)
        {
            stm_hour24_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>();
        }
        return stm_hour24_stm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_hour24_stm_reports != nullptr)
    {
        _children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
    }

    if(stm_hour24_stm_thresholds != nullptr)
    {
        _children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-reports" || name == "stm-hour24-stm-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReports()
    :
    stm_hour24_stm_report(this, {"stm_report"})
{

    yang_name = "stm-hour24-stm-reports"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::~StmHour24StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_hour24_stm_report.len(); index++)
    {
        if(stm_hour24_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.len(); index++)
    {
        if(stm_hour24_stm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport>();
        ent_->parent = this;
        stm_hour24_stm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_hour24_stm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::StmHour24StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "stm-hour24-stm-report"; yang_parent_name = "stm-hour24-stm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::~StmHour24StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_data() const
{
    if (is_presence_container) return true;
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-report";
    ADD_KEY_TOKEN(stm_report, "stm-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.yfilter)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
        stm_report.value_namespace = name_space;
        stm_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-report")
    {
        stm_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThresholds()
    :
    stm_hour24_stm_threshold(this, {"stm_threshold"})
{

    yang_name = "stm-hour24-stm-thresholds"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::~StmHour24StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_hour24_stm_threshold.len(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.len(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold>();
        ent_->parent = this;
        stm_hour24_stm_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_hour24_stm_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::StmHour24StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::uint32, "stm-threshold-value"}
{

    yang_name = "stm-hour24-stm-threshold"; yang_parent_name = "stm-hour24-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::~StmHour24StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_data() const
{
    if (is_presence_container) return true;
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_threshold.yfilter)
	|| ydk::is_set(stm_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-threshold";
    ADD_KEY_TOKEN(stm_threshold, "stm-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.yfilter)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.yfilter)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
        stm_threshold.value_namespace = name_space;
        stm_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
        stm_threshold_value.value_namespace = name_space;
        stm_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold.yfilter = yfilter;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-threshold" || name == "stm-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp()
    :
    minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>())
{
    minute15_gfp->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::~Minute15Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_gfp !=  nullptr && minute15_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>();
        }
        return minute15_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_gfp != nullptr)
    {
        _children["minute15-gfp"] = minute15_gfp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15Gfp_()
    :
    minute15_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>())
    , minute15_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>())
{
    minute15_gfp_reports->parent = this;
    minute15_gfp_thresholds->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::~Minute15Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_data())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_operation())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-reports")
    {
        if(minute15_gfp_reports == nullptr)
        {
            minute15_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>();
        }
        return minute15_gfp_reports;
    }

    if(child_yang_name == "minute15-gfp-thresholds")
    {
        if(minute15_gfp_thresholds == nullptr)
        {
            minute15_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>();
        }
        return minute15_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_gfp_reports != nullptr)
    {
        _children["minute15-gfp-reports"] = minute15_gfp_reports;
    }

    if(minute15_gfp_thresholds != nullptr)
    {
        _children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-reports" || name == "minute15-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReports()
    :
    minute15_gfp_report(this, {"gfp_report"})
{

    yang_name = "minute15-gfp-reports"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::~Minute15GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_gfp_report.len(); index++)
    {
        if(minute15_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_report.len(); index++)
    {
        if(minute15_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport>();
        ent_->parent = this;
        minute15_gfp_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_gfp_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::Minute15GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "minute15-gfp-report"; yang_parent_name = "minute15-gfp-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::~Minute15GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_data() const
{
    if (is_presence_container) return true;
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-report";
    ADD_KEY_TOKEN(gfp_report, "gfp-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThresholds()
    :
    minute15_gfp_threshold(this, {"gfp_threshold"})
{

    yang_name = "minute15-gfp-thresholds"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::~Minute15GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_gfp_threshold.len(); index++)
    {
        if(minute15_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.len(); index++)
    {
        if(minute15_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold>();
        ent_->parent = this;
        minute15_gfp_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_gfp_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::Minute15GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::uint32, "gfp-threshold-value"}
{

    yang_name = "minute15-gfp-threshold"; yang_parent_name = "minute15-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::~Minute15GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_data() const
{
    if (is_presence_container) return true;
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-threshold";
    ADD_KEY_TOKEN(gfp_threshold, "gfp-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>())
    , sonet_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>())
{
    sonet_minute15_path->parent = this;
    sonet_minute15_ocn->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::~SonetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_data())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_operation())
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path")
    {
        if(sonet_minute15_path == nullptr)
        {
            sonet_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>();
        }
        return sonet_minute15_path;
    }

    if(child_yang_name == "sonet-minute15-ocn")
    {
        if(sonet_minute15_ocn == nullptr)
        {
            sonet_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>();
        }
        return sonet_minute15_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_path != nullptr)
    {
        _children["sonet-minute15-path"] = sonet_minute15_path;
    }

    if(sonet_minute15_ocn != nullptr)
    {
        _children["sonet-minute15-ocn"] = sonet_minute15_ocn;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path" || name == "sonet-minute15-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15Path()
    :
    sonet_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>())
    , sonet_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>())
{
    sonet_minute15_path_reports->parent = this;
    sonet_minute15_path_thresholds->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::~SonetMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_data())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_operation())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-reports")
    {
        if(sonet_minute15_path_reports == nullptr)
        {
            sonet_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>();
        }
        return sonet_minute15_path_reports;
    }

    if(child_yang_name == "sonet-minute15-path-thresholds")
    {
        if(sonet_minute15_path_thresholds == nullptr)
        {
            sonet_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>();
        }
        return sonet_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_path_reports != nullptr)
    {
        _children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
    }

    if(sonet_minute15_path_thresholds != nullptr)
    {
        _children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-reports" || name == "sonet-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReports()
    :
    sonet_minute15_path_report(this, {"path_report"})
{

    yang_name = "sonet-minute15-path-reports"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::~SonetMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_report.len(); index++)
    {
        if(sonet_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.len(); index++)
    {
        if(sonet_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport>();
        ent_->parent = this;
        sonet_minute15_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::SonetMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{

    yang_name = "sonet-minute15-path-report"; yang_parent_name = "sonet-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::~SonetMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_data() const
{
    if (is_presence_container) return true;
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThresholds()
    :
    sonet_minute15_path_threshold(this, {"path_threshold"})
{

    yang_name = "sonet-minute15-path-thresholds"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::~SonetMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_threshold.len(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.len(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold>();
        ent_->parent = this;
        sonet_minute15_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::SonetMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sonet-minute15-path-threshold"; yang_parent_name = "sonet-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::~SonetMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_data() const
{
    if (is_presence_container) return true;
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    sonet_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>())
    , sonet_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>())
{
    sonet_minute15_ocn_reports->parent = this;
    sonet_minute15_ocn_thresholds->parent = this;

    yang_name = "sonet-minute15-ocn"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_data())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_operation())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-reports")
    {
        if(sonet_minute15_ocn_reports == nullptr)
        {
            sonet_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>();
        }
        return sonet_minute15_ocn_reports;
    }

    if(child_yang_name == "sonet-minute15-ocn-thresholds")
    {
        if(sonet_minute15_ocn_thresholds == nullptr)
        {
            sonet_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>();
        }
        return sonet_minute15_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_ocn_reports != nullptr)
    {
        _children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
    }

    if(sonet_minute15_ocn_thresholds != nullptr)
    {
        _children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-reports" || name == "sonet-minute15-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReports()
    :
    sonet_minute15_ocn_report(this, {"ocn_report"})
{

    yang_name = "sonet-minute15-ocn-reports"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::~SonetMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_ocn_report.len(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.len(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport>();
        ent_->parent = this;
        sonet_minute15_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::SonetMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{

    yang_name = "sonet-minute15-ocn-report"; yang_parent_name = "sonet-minute15-ocn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::~SonetMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_data() const
{
    if (is_presence_container) return true;
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThresholds()
    :
    sonet_minute15_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "sonet-minute15-ocn-thresholds"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::~SonetMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.len(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.len(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold>();
        ent_->parent = this;
        sonet_minute15_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::SonetMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "sonet-minute15-ocn-threshold"; yang_parent_name = "sonet-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::~SonetMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp()
    :
    hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>())
{
    hour24_gfp->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::~Hour24Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_gfp !=  nullptr && hour24_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp == nullptr)
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>();
        }
        return hour24_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_gfp != nullptr)
    {
        _children["hour24-gfp"] = hour24_gfp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24Gfp_()
    :
    hour24_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>())
    , hour24_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>())
{
    hour24_gfp_reports->parent = this;
    hour24_gfp_thresholds->parent = this;

    yang_name = "hour24-gfp"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::~Hour24Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_data())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_operation())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-reports")
    {
        if(hour24_gfp_reports == nullptr)
        {
            hour24_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>();
        }
        return hour24_gfp_reports;
    }

    if(child_yang_name == "hour24-gfp-thresholds")
    {
        if(hour24_gfp_thresholds == nullptr)
        {
            hour24_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>();
        }
        return hour24_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_gfp_reports != nullptr)
    {
        _children["hour24-gfp-reports"] = hour24_gfp_reports;
    }

    if(hour24_gfp_thresholds != nullptr)
    {
        _children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-reports" || name == "hour24-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReports()
    :
    hour24_gfp_report(this, {"gfp_report"})
{

    yang_name = "hour24-gfp-reports"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::~Hour24GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_gfp_report.len(); index++)
    {
        if(hour24_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_report.len(); index++)
    {
        if(hour24_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport>();
        ent_->parent = this;
        hour24_gfp_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_gfp_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::Hour24GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "hour24-gfp-report"; yang_parent_name = "hour24-gfp-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::~Hour24GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_data() const
{
    if (is_presence_container) return true;
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-report";
    ADD_KEY_TOKEN(gfp_report, "gfp-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThresholds()
    :
    hour24_gfp_threshold(this, {"gfp_threshold"})
{

    yang_name = "hour24-gfp-thresholds"; yang_parent_name = "hour24-gfp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::~Hour24GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_gfp_threshold.len(); index++)
    {
        if(hour24_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.len(); index++)
    {
        if(hour24_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-gfp-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold>();
        ent_->parent = this;
        hour24_gfp_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_gfp_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::Hour24GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::uint32, "gfp-threshold-value"}
{

    yang_name = "hour24-gfp-threshold"; yang_parent_name = "hour24-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::~Hour24GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_data() const
{
    if (is_presence_container) return true;
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-threshold";
    ADD_KEY_TOKEN(gfp_threshold, "gfp-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::EthernetHour24()
    :
    hour24_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>())
{
    hour24_ether->parent = this;

    yang_name = "ethernet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::~EthernetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_ether !=  nullptr && hour24_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether !=  nullptr && hour24_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether")
    {
        if(hour24_ether == nullptr)
        {
            hour24_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>();
        }
        return hour24_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_ether != nullptr)
    {
        _children["hour24-ether"] = hour24_ether;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24Ether()
    :
    hour24_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>())
    , hour24_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>())
{
    hour24_ether_thresholds->parent = this;
    hour24_ether_reports->parent = this;

    yang_name = "hour24-ether"; yang_parent_name = "ethernet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::~Hour24Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_data())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_operation())
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-thresholds")
    {
        if(hour24_ether_thresholds == nullptr)
        {
            hour24_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>();
        }
        return hour24_ether_thresholds;
    }

    if(child_yang_name == "hour24-ether-reports")
    {
        if(hour24_ether_reports == nullptr)
        {
            hour24_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>();
        }
        return hour24_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_ether_thresholds != nullptr)
    {
        _children["hour24-ether-thresholds"] = hour24_ether_thresholds;
    }

    if(hour24_ether_reports != nullptr)
    {
        _children["hour24-ether-reports"] = hour24_ether_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-thresholds" || name == "hour24-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThresholds()
    :
    hour24_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "hour24-ether-thresholds"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::~Hour24EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_ether_threshold.len(); index++)
    {
        if(hour24_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.len(); index++)
    {
        if(hour24_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold>();
        ent_->parent = this;
        hour24_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::Hour24EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "hour24-ether-threshold"; yang_parent_name = "hour24-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::~Hour24EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReports()
    :
    hour24_ether_report(this, {"ether_report"})
{

    yang_name = "hour24-ether-reports"; yang_parent_name = "hour24-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::~Hour24EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_ether_report.len(); index++)
    {
        if(hour24_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_report.len(); index++)
    {
        if(hour24_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport>();
        ent_->parent = this;
        hour24_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::Hour24EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "hour24-ether-report"; yang_parent_name = "hour24-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::~Hour24EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcms()
    :
    minute15otn_tcm(this, {"tcm_number"})
{

    yang_name = "minute15otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::~Minute15otnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_tcm.len(); index++)
    {
        if(minute15otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm.len(); index++)
    {
        if(minute15otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm>();
        ent_->parent = this;
        minute15otn_tcm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_tcm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcm()
    :
    tcm_number{YType::uint32, "tcm-number"}
        ,
    min15_otn_tcm_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes>())
    , minute15otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports>())
{
    min15_otn_tcm_threshes->parent = this;
    minute15otn_tcm_reports->parent = this;

    yang_name = "minute15otn-tcm"; yang_parent_name = "minute15otn-tcms"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::~Minute15otnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_data() const
{
    if (is_presence_container) return true;
    return tcm_number.is_set
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_data())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_operation())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm";
    ADD_KEY_TOKEN(tcm_number, "tcm-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-threshes")
    {
        if(min15_otn_tcm_threshes == nullptr)
        {
            min15_otn_tcm_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes>();
        }
        return min15_otn_tcm_threshes;
    }

    if(child_yang_name == "minute15otn-tcm-reports")
    {
        if(minute15otn_tcm_reports == nullptr)
        {
            minute15otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports>();
        }
        return minute15otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min15_otn_tcm_threshes != nullptr)
    {
        _children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
    }

    if(minute15otn_tcm_reports != nullptr)
    {
        _children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-threshes" || name == "minute15otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThreshes()
    :
    min15_otn_tcm_thresh(this, {"otn_threshold"})
{

    yang_name = "min15-otn-tcm-threshes"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::~Min15OtnTcmThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<min15_otn_tcm_thresh.len(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.len(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh>();
        ent_->parent = this;
        min15_otn_tcm_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : min15_otn_tcm_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::Min15OtnTcmThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "min15-otn-tcm-thresh"; yang_parent_name = "min15-otn-tcm-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::~Min15OtnTcmThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReports()
    :
    minute15otn_tcm_report(this, {"otn_report"})
{

    yang_name = "minute15otn-tcm-reports"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::~Minute15otnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_tcm_report.len(); index++)
    {
        if(minute15otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.len(); index++)
    {
        if(minute15otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport>();
        ent_->parent = this;
        minute15otn_tcm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_tcm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::Minute15otnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-tcm-report"; yang_parent_name = "minute15otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::~Minute15otnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24()
    :
    oc_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>())
{
    oc_hour24_ocn->parent = this;

    yang_name = "oc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::~OcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_data() const
{
    if (is_presence_container) return true;
    return (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn")
    {
        if(oc_hour24_ocn == nullptr)
        {
            oc_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>();
        }
        return oc_hour24_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_hour24_ocn != nullptr)
    {
        _children["oc-hour24-ocn"] = oc_hour24_ocn;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24Ocn()
    :
    oc_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>())
    , oc_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>())
{
    oc_hour24_ocn_reports->parent = this;
    oc_hour24_ocn_thresholds->parent = this;

    yang_name = "oc-hour24-ocn"; yang_parent_name = "oc-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::~OcHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_data() const
{
    if (is_presence_container) return true;
    return (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_data())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_operation())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-reports")
    {
        if(oc_hour24_ocn_reports == nullptr)
        {
            oc_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>();
        }
        return oc_hour24_ocn_reports;
    }

    if(child_yang_name == "oc-hour24-ocn-thresholds")
    {
        if(oc_hour24_ocn_thresholds == nullptr)
        {
            oc_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>();
        }
        return oc_hour24_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_hour24_ocn_reports != nullptr)
    {
        _children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
    }

    if(oc_hour24_ocn_thresholds != nullptr)
    {
        _children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-reports" || name == "oc-hour24-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
    :
    oc_hour24_ocn_report(this, {"ocn_report"})
{

    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        ent_->parent = this;
        oc_hour24_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::OcHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "oc-hour24-ocn-report"; yang_parent_name = "oc-hour24-ocn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::~OcHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_data() const
{
    if (is_presence_container) return true;
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThresholds()
    :
    oc_hour24_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        ent_->parent = this;
        oc_hour24_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::OcHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether == nullptr)
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
        }
        return minute15_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether != nullptr)
    {
        _children["minute15-ether"] = minute15_ether;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
    , minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
{
    minute15_ether_thresholds->parent = this;
    minute15_ether_reports->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds == nullptr)
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
        }
        return minute15_ether_thresholds;
    }

    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports == nullptr)
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
        }
        return minute15_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether_thresholds != nullptr)
    {
        _children["minute15-ether-thresholds"] = minute15_ether_thresholds;
    }

    if(minute15_ether_reports != nullptr)
    {
        _children["minute15-ether-reports"] = minute15_ether_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-thresholds" || name == "minute15-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
    :
    minute15_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        ent_->parent = this;
        minute15_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
    :
    minute15_ether_report(this, {"ether_report"})
{

    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        ent_->parent = this;
        minute15_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>())
{
    ho_vc_hour24ho_vc->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc == nullptr)
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>();
        }
        return ho_vc_hour24ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc != nullptr)
    {
        _children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>())
    , ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    ho_vc_hour24ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::~HoVcHour24hoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports == nullptr)
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>();
        }
        return ho_vc_hour24ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds == nullptr)
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>();
        }
        return ho_vc_hour24ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc_reports != nullptr)
    {
        _children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
    }

    if(ho_vc_hour24ho_vc_thresholds != nullptr)
    {
        _children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-reports" || name == "ho-vc-hour24ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReports()
    :
    ho_vc_hour24ho_vc_report(this, {"ho_vc_report"})
{

    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::~HoVcHour24hoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::HoVcHour24hoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::~HoVcHour24hoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report";
    ADD_KEY_TOKEN(ho_vc_report, "ho-vc-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
        ho_vc_report.value_namespace = name_space;
        ho_vc_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThresholds()
    :
    ho_vc_hour24ho_vc_threshold(this, {"ho_vc_threshold"})
{

    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::~HoVcHour24hoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::HoVcHour24hoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::uint32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::~HoVcHour24hoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold";
    ADD_KEY_TOKEN(ho_vc_threshold, "ho-vc-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
        ho_vc_threshold.value_namespace = name_space;
        ho_vc_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
        ho_vc_threshold_value.value_namespace = name_space;
        ho_vc_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold.yfilter = yfilter;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>())
    , second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>())
    , second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
    , second30secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>())
    , second30secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>())
    , second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>())
    , second30secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>())
{
    second30pcs->parent = this;
    second30fec->parent = this;
    second30_optics->parent = this;
    second30secyif->parent = this;
    second30secyrx->parent = this;
    second30otn->parent = this;
    second30secytx->parent = this;

    yang_name = "second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::~Second30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_data() const
{
    if (is_presence_container) return true;
    return (second30pcs !=  nullptr && second30pcs->has_data())
	|| (second30fec !=  nullptr && second30fec->has_data())
	|| (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30secyif !=  nullptr && second30secyif->has_data())
	|| (second30secyrx !=  nullptr && second30secyrx->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data())
	|| (second30secytx !=  nullptr && second30secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs !=  nullptr && second30pcs->has_operation())
	|| (second30fec !=  nullptr && second30fec->has_operation())
	|| (second30_optics !=  nullptr && second30_optics->has_operation())
	|| (second30secyif !=  nullptr && second30secyif->has_operation())
	|| (second30secyrx !=  nullptr && second30secyrx->has_operation())
	|| (second30otn !=  nullptr && second30otn->has_operation())
	|| (second30secytx !=  nullptr && second30secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs")
    {
        if(second30pcs == nullptr)
        {
            second30pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>();
        }
        return second30pcs;
    }

    if(child_yang_name == "second30fec")
    {
        if(second30fec == nullptr)
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>();
        }
        return second30fec;
    }

    if(child_yang_name == "second30-optics")
    {
        if(second30_optics == nullptr)
        {
            second30_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>();
        }
        return second30_optics;
    }

    if(child_yang_name == "second30secyif")
    {
        if(second30secyif == nullptr)
        {
            second30secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>();
        }
        return second30secyif;
    }

    if(child_yang_name == "second30secyrx")
    {
        if(second30secyrx == nullptr)
        {
            second30secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>();
        }
        return second30secyrx;
    }

    if(child_yang_name == "second30otn")
    {
        if(second30otn == nullptr)
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>();
        }
        return second30otn;
    }

    if(child_yang_name == "second30secytx")
    {
        if(second30secytx == nullptr)
        {
            second30secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>();
        }
        return second30secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs != nullptr)
    {
        _children["second30pcs"] = second30pcs;
    }

    if(second30fec != nullptr)
    {
        _children["second30fec"] = second30fec;
    }

    if(second30_optics != nullptr)
    {
        _children["second30-optics"] = second30_optics;
    }

    if(second30secyif != nullptr)
    {
        _children["second30secyif"] = second30secyif;
    }

    if(second30secyrx != nullptr)
    {
        _children["second30secyrx"] = second30secyrx;
    }

    if(second30otn != nullptr)
    {
        _children["second30otn"] = second30otn;
    }

    if(second30secytx != nullptr)
    {
        _children["second30secytx"] = second30secytx;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs" || name == "second30fec" || name == "second30-optics" || name == "second30secyif" || name == "second30secyrx" || name == "second30otn" || name == "second30secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcs()
    :
    second30pcs_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds>())
    , second30pcs_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports>())
{
    second30pcs_thresholds->parent = this;
    second30pcs_reports->parent = this;

    yang_name = "second30pcs"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::~Second30pcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_data() const
{
    if (is_presence_container) return true;
    return (second30pcs_thresholds !=  nullptr && second30pcs_thresholds->has_data())
	|| (second30pcs_reports !=  nullptr && second30pcs_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs_thresholds !=  nullptr && second30pcs_thresholds->has_operation())
	|| (second30pcs_reports !=  nullptr && second30pcs_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-thresholds")
    {
        if(second30pcs_thresholds == nullptr)
        {
            second30pcs_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds>();
        }
        return second30pcs_thresholds;
    }

    if(child_yang_name == "second30pcs-reports")
    {
        if(second30pcs_reports == nullptr)
        {
            second30pcs_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports>();
        }
        return second30pcs_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs_thresholds != nullptr)
    {
        _children["second30pcs-thresholds"] = second30pcs_thresholds;
    }

    if(second30pcs_reports != nullptr)
    {
        _children["second30pcs-reports"] = second30pcs_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-thresholds" || name == "second30pcs-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThresholds()
    :
    second30pcs_threshold(this, {"pcs_threshold"})
{

    yang_name = "second30pcs-thresholds"; yang_parent_name = "second30pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::~Second30pcsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_threshold.len(); index++)
    {
        if(second30pcs_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_threshold.len(); index++)
    {
        if(second30pcs_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold>();
        ent_->parent = this;
        second30pcs_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::Second30pcsThreshold()
    :
    pcs_threshold{YType::enumeration, "pcs-threshold"},
    pcs_threshold_value{YType::str, "pcs-threshold-value"}
{

    yang_name = "second30pcs-threshold"; yang_parent_name = "second30pcs-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::~Second30pcsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return pcs_threshold.is_set
	|| pcs_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_threshold.yfilter)
	|| ydk::is_set(pcs_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-threshold";
    ADD_KEY_TOKEN(pcs_threshold, "pcs-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_threshold.is_set || is_set(pcs_threshold.yfilter)) leaf_name_data.push_back(pcs_threshold.get_name_leafdata());
    if (pcs_threshold_value.is_set || is_set(pcs_threshold_value.yfilter)) leaf_name_data.push_back(pcs_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold = value;
        pcs_threshold.value_namespace = name_space;
        pcs_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value = value;
        pcs_threshold_value.value_namespace = name_space;
        pcs_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold.yfilter = yfilter;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-threshold" || name == "pcs-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReports()
    :
    second30pcs_report(this, {"pcs_report"})
{

    yang_name = "second30pcs-reports"; yang_parent_name = "second30pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::~Second30pcsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_report.len(); index++)
    {
        if(second30pcs_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_report.len(); index++)
    {
        if(second30pcs_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport>();
        ent_->parent = this;
        second30pcs_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::Second30pcsReport()
    :
    pcs_report{YType::enumeration, "pcs-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30pcs-report"; yang_parent_name = "second30pcs-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::~Second30pcsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_data() const
{
    if (is_presence_container) return true;
    return pcs_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-report";
    ADD_KEY_TOKEN(pcs_report, "pcs-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_report.is_set || is_set(pcs_report.yfilter)) leaf_name_data.push_back(pcs_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-report")
    {
        pcs_report = value;
        pcs_report.value_namespace = name_space;
        pcs_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-report")
    {
        pcs_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fec()
    :
    second30fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds>())
    , second30fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports>())
{
    second30fec_thresholds->parent = this;
    second30fec_reports->parent = this;

    yang_name = "second30fec"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::~Second30fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_data() const
{
    if (is_presence_container) return true;
    return (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_data())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_operation() const
{
    return is_set(yfilter)
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_operation())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-thresholds")
    {
        if(second30fec_thresholds == nullptr)
        {
            second30fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds>();
        }
        return second30fec_thresholds;
    }

    if(child_yang_name == "second30fec-reports")
    {
        if(second30fec_reports == nullptr)
        {
            second30fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports>();
        }
        return second30fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30fec_thresholds != nullptr)
    {
        _children["second30fec-thresholds"] = second30fec_thresholds;
    }

    if(second30fec_reports != nullptr)
    {
        _children["second30fec-reports"] = second30fec_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-thresholds" || name == "second30fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThresholds()
    :
    second30fec_threshold(this, {"fec_threshold"})
{

    yang_name = "second30fec-thresholds"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::~Second30fecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30fec_threshold.len(); index++)
    {
        if(second30fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30fec_threshold.len(); index++)
    {
        if(second30fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold>();
        ent_->parent = this;
        second30fec_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30fec_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::Second30fecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "second30fec-threshold"; yang_parent_name = "second30fec-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::~Second30fecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_data() const
{
    if (is_presence_container) return true;
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-threshold";
    ADD_KEY_TOKEN(fec_threshold, "fec-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
        fec_threshold.value_namespace = name_space;
        fec_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
        fec_threshold_value.value_namespace = name_space;
        fec_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold.yfilter = yfilter;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReports()
    :
    second30fec_report(this, {"fec_report"})
{

    yang_name = "second30fec-reports"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::~Second30fecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30fec_report.len(); index++)
    {
        if(second30fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_operation() const
{
    for (std::size_t index=0; index<second30fec_report.len(); index++)
    {
        if(second30fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport>();
        ent_->parent = this;
        second30fec_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30fec_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::Second30fecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30fec-report"; yang_parent_name = "second30fec-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::~Second30fecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_data() const
{
    if (is_presence_container) return true;
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-report";
    ADD_KEY_TOKEN(fec_report, "fec-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
        fec_report.value_namespace = name_space;
        fec_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-report")
    {
        fec_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30Optics()
    :
    second30_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>())
    , second30_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>())
{
    second30_optics_reports->parent = this;
    second30_optics_thresholds->parent = this;

    yang_name = "second30-optics"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::~Second30Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_data() const
{
    if (is_presence_container) return true;
    return (second30_optics_reports !=  nullptr && second30_optics_reports->has_data())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_operation() const
{
    return is_set(yfilter)
	|| (second30_optics_reports !=  nullptr && second30_optics_reports->has_operation())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-reports")
    {
        if(second30_optics_reports == nullptr)
        {
            second30_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>();
        }
        return second30_optics_reports;
    }

    if(child_yang_name == "second30-optics-thresholds")
    {
        if(second30_optics_thresholds == nullptr)
        {
            second30_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>();
        }
        return second30_optics_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_optics_reports != nullptr)
    {
        _children["second30-optics-reports"] = second30_optics_reports;
    }

    if(second30_optics_thresholds != nullptr)
    {
        _children["second30-optics-thresholds"] = second30_optics_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-reports" || name == "second30-optics-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReports()
    :
    second30_optics_report(this, {"optics_report"})
{

    yang_name = "second30-optics-reports"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::~Second30OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_optics_report.len(); index++)
    {
        if(second30_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_report.len(); index++)
    {
        if(second30_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport>();
        ent_->parent = this;
        second30_optics_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_optics_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::Second30OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "second30-optics-report"; yang_parent_name = "second30-optics-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::~Second30OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_data() const
{
    if (is_presence_container) return true;
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-report";
    ADD_KEY_TOKEN(optics_report, "optics-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThresholds()
    :
    second30_optics_threshold(this, {"optics_threshold"})
{

    yang_name = "second30-optics-thresholds"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::~Second30OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_optics_threshold.len(); index++)
    {
        if(second30_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_threshold.len(); index++)
    {
        if(second30_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold>();
        ent_->parent = this;
        second30_optics_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_optics_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::Second30OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    optics_threshold_value{YType::int32, "optics-threshold-value"},
    dbm{YType::uint32, "dbm"}
{

    yang_name = "second30-optics-threshold"; yang_parent_name = "second30-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::~Second30OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return optics_threshold.is_set
	|| optics_threshold_value.is_set
	|| dbm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter)
	|| ydk::is_set(dbm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-threshold";
    ADD_KEY_TOKEN(optics_threshold, "optics-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "optics-threshold-value" || name == "dbm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyif()
    :
    second30secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds>())
    , second30secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports>())
{
    second30secyif_thresholds->parent = this;
    second30secyif_reports->parent = this;

    yang_name = "second30secyif"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::~Second30secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_data() const
{
    if (is_presence_container) return true;
    return (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_data())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_operation())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-thresholds")
    {
        if(second30secyif_thresholds == nullptr)
        {
            second30secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds>();
        }
        return second30secyif_thresholds;
    }

    if(child_yang_name == "second30secyif-reports")
    {
        if(second30secyif_reports == nullptr)
        {
            second30secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports>();
        }
        return second30secyif_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secyif_thresholds != nullptr)
    {
        _children["second30secyif-thresholds"] = second30secyif_thresholds;
    }

    if(second30secyif_reports != nullptr)
    {
        _children["second30secyif-reports"] = second30secyif_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-thresholds" || name == "second30secyif-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThresholds()
    :
    second30secyif_threshold(this, {"secyif_threshold"})
{

    yang_name = "second30secyif-thresholds"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::~Second30secyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyif_threshold.len(); index++)
    {
        if(second30secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_threshold.len(); index++)
    {
        if(second30secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold>();
        ent_->parent = this;
        second30secyif_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyif_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::Second30secyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::uint32, "secyif-threshold-value"}
{

    yang_name = "second30secyif-threshold"; yang_parent_name = "second30secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::~Second30secyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-threshold";
    ADD_KEY_TOKEN(secyif_threshold, "secyif-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold = value;
        secyif_threshold.value_namespace = name_space;
        secyif_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value = value;
        secyif_threshold_value.value_namespace = name_space;
        secyif_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold.yfilter = yfilter;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReports()
    :
    second30secyif_report(this, {"secyif_report"})
{

    yang_name = "second30secyif-reports"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::~Second30secyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyif_report.len(); index++)
    {
        if(second30secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_report.len(); index++)
    {
        if(second30secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport>();
        ent_->parent = this;
        second30secyif_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyif_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::Second30secyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyif-report"; yang_parent_name = "second30secyif-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::~Second30secyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_data() const
{
    if (is_presence_container) return true;
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-report";
    ADD_KEY_TOKEN(secyif_report, "secyif-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-report")
    {
        secyif_report = value;
        secyif_report.value_namespace = name_space;
        secyif_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-report")
    {
        secyif_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrx()
    :
    second30secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds>())
    , second30secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports>())
{
    second30secyrx_thresholds->parent = this;
    second30secyrx_reports->parent = this;

    yang_name = "second30secyrx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::~Second30secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_data() const
{
    if (is_presence_container) return true;
    return (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_data())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_operation())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-thresholds")
    {
        if(second30secyrx_thresholds == nullptr)
        {
            second30secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds>();
        }
        return second30secyrx_thresholds;
    }

    if(child_yang_name == "second30secyrx-reports")
    {
        if(second30secyrx_reports == nullptr)
        {
            second30secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports>();
        }
        return second30secyrx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secyrx_thresholds != nullptr)
    {
        _children["second30secyrx-thresholds"] = second30secyrx_thresholds;
    }

    if(second30secyrx_reports != nullptr)
    {
        _children["second30secyrx-reports"] = second30secyrx_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-thresholds" || name == "second30secyrx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThresholds()
    :
    second30secyrx_threshold(this, {"secyrx_threshold"})
{

    yang_name = "second30secyrx-thresholds"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::~Second30secyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyrx_threshold.len(); index++)
    {
        if(second30secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_threshold.len(); index++)
    {
        if(second30secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold>();
        ent_->parent = this;
        second30secyrx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyrx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::Second30secyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::uint32, "secyrx-threshold-value"}
{

    yang_name = "second30secyrx-threshold"; yang_parent_name = "second30secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::~Second30secyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-threshold";
    ADD_KEY_TOKEN(secyrx_threshold, "secyrx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold = value;
        secyrx_threshold.value_namespace = name_space;
        secyrx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value = value;
        secyrx_threshold_value.value_namespace = name_space;
        secyrx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold.yfilter = yfilter;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReports()
    :
    second30secyrx_report(this, {"secyrx_report"})
{

    yang_name = "second30secyrx-reports"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::~Second30secyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyrx_report.len(); index++)
    {
        if(second30secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_report.len(); index++)
    {
        if(second30secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport>();
        ent_->parent = this;
        second30secyrx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyrx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::Second30secyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyrx-report"; yang_parent_name = "second30secyrx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::~Second30secyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-report";
    ADD_KEY_TOKEN(secyrx_report, "secyrx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report = value;
        secyrx_report.value_namespace = name_space;
        secyrx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otn()
    :
    second30_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes>())
    , second30otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports>())
{
    second30_otn_threshes->parent = this;
    second30otn_reports->parent = this;

    yang_name = "second30otn"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::~Second30otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_data() const
{
    if (is_presence_container) return true;
    return (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_data())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_operation() const
{
    return is_set(yfilter)
	|| (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_operation())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-threshes")
    {
        if(second30_otn_threshes == nullptr)
        {
            second30_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes>();
        }
        return second30_otn_threshes;
    }

    if(child_yang_name == "second30otn-reports")
    {
        if(second30otn_reports == nullptr)
        {
            second30otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports>();
        }
        return second30otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_otn_threshes != nullptr)
    {
        _children["second30-otn-threshes"] = second30_otn_threshes;
    }

    if(second30otn_reports != nullptr)
    {
        _children["second30otn-reports"] = second30otn_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-threshes" || name == "second30otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThreshes()
    :
    second30_otn_thresh(this, {"otn_threshold"})
{

    yang_name = "second30-otn-threshes"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::~Second30OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_otn_thresh.len(); index++)
    {
        if(second30_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<second30_otn_thresh.len(); index++)
    {
        if(second30_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh>();
        ent_->parent = this;
        second30_otn_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_otn_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::Second30OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "second30-otn-thresh"; yang_parent_name = "second30-otn-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::~Second30OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReports()
    :
    second30otn_report(this, {"otn_report"})
{

    yang_name = "second30otn-reports"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::~Second30otnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30otn_report.len(); index++)
    {
        if(second30otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_operation() const
{
    for (std::size_t index=0; index<second30otn_report.len(); index++)
    {
        if(second30otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30otn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport>();
        ent_->parent = this;
        second30otn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30otn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::Second30otnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30otn-report"; yang_parent_name = "second30otn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::~Second30otnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytx()
    :
    second30secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds>())
    , second30secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports>())
{
    second30secytx_thresholds->parent = this;
    second30secytx_reports->parent = this;

    yang_name = "second30secytx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::~Second30secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_data() const
{
    if (is_presence_container) return true;
    return (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_data())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_operation())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-thresholds")
    {
        if(second30secytx_thresholds == nullptr)
        {
            second30secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds>();
        }
        return second30secytx_thresholds;
    }

    if(child_yang_name == "second30secytx-reports")
    {
        if(second30secytx_reports == nullptr)
        {
            second30secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports>();
        }
        return second30secytx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secytx_thresholds != nullptr)
    {
        _children["second30secytx-thresholds"] = second30secytx_thresholds;
    }

    if(second30secytx_reports != nullptr)
    {
        _children["second30secytx-reports"] = second30secytx_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-thresholds" || name == "second30secytx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThresholds()
    :
    second30secytx_threshold(this, {"secytx_threshold"})
{

    yang_name = "second30secytx-thresholds"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::~Second30secytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secytx_threshold.len(); index++)
    {
        if(second30secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_threshold.len(); index++)
    {
        if(second30secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold>();
        ent_->parent = this;
        second30secytx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secytx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::Second30secytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::uint32, "secytx-threshold-value"}
{

    yang_name = "second30secytx-threshold"; yang_parent_name = "second30secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::~Second30secytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-threshold";
    ADD_KEY_TOKEN(secytx_threshold, "secytx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold = value;
        secytx_threshold.value_namespace = name_space;
        secytx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value = value;
        secytx_threshold_value.value_namespace = name_space;
        secytx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold.yfilter = yfilter;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReports()
    :
    second30secytx_report(this, {"secytx_report"})
{

    yang_name = "second30secytx-reports"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::~Second30secytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secytx_report.len(); index++)
    {
        if(second30secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_report.len(); index++)
    {
        if(second30secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport>();
        ent_->parent = this;
        second30secytx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secytx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::Second30secytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secytx-report"; yang_parent_name = "second30secytx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::~Second30secytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_data() const
{
    if (is_presence_container) return true;
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-report";
    ADD_KEY_TOKEN(secytx_report, "secytx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-report")
    {
        secytx_report = value;
        secytx_report.value_namespace = name_space;
        secytx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-report")
    {
        secytx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcms()
    :
    hour24otn_tcm(this, {"tcm_number"})
{

    yang_name = "hour24otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::~Hour24otnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm.len(); index++)
    {
        if(hour24otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm.len(); index++)
    {
        if(hour24otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm>();
        ent_->parent = this;
        hour24otn_tcm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcm()
    :
    tcm_number{YType::uint32, "tcm-number"}
        ,
    hour24otn_tcm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds>())
    , hour24otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports>())
{
    hour24otn_tcm_thresholds->parent = this;
    hour24otn_tcm_reports->parent = this;

    yang_name = "hour24otn-tcm"; yang_parent_name = "hour24otn-tcms"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::~Hour24otnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_data() const
{
    if (is_presence_container) return true;
    return tcm_number.is_set
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_data())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_operation())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm";
    ADD_KEY_TOKEN(tcm_number, "tcm-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-thresholds")
    {
        if(hour24otn_tcm_thresholds == nullptr)
        {
            hour24otn_tcm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds>();
        }
        return hour24otn_tcm_thresholds;
    }

    if(child_yang_name == "hour24otn-tcm-reports")
    {
        if(hour24otn_tcm_reports == nullptr)
        {
            hour24otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports>();
        }
        return hour24otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_tcm_thresholds != nullptr)
    {
        _children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
    }

    if(hour24otn_tcm_reports != nullptr)
    {
        _children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-thresholds" || name == "hour24otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThresholds()
    :
    hour24otn_tcm_threshold(this, {"otn_threshold"})
{

    yang_name = "hour24otn-tcm-thresholds"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::~Hour24otnTcmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm_threshold.len(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.len(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold>();
        ent_->parent = this;
        hour24otn_tcm_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::Hour24otnTcmThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "hour24otn-tcm-threshold"; yang_parent_name = "hour24otn-tcm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::~Hour24otnTcmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-threshold";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReports()
    :
    hour24otn_tcm_report(this, {"otn_report"})
{

    yang_name = "hour24otn-tcm-reports"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::~Hour24otnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm_report.len(); index++)
    {
        if(hour24otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.len(); index++)
    {
        if(hour24otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport>();
        ent_->parent = this;
        hour24otn_tcm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::Hour24otnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-tcm-report"; yang_parent_name = "hour24otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::~Hour24otnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15()
    :
    sts_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>())
{
    sts_minute15_path->parent = this;

    yang_name = "sts-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::~StsMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (sts_minute15_path !=  nullptr && sts_minute15_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_path !=  nullptr && sts_minute15_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path")
    {
        if(sts_minute15_path == nullptr)
        {
            sts_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>();
        }
        return sts_minute15_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path != nullptr)
    {
        _children["sts-minute15-path"] = sts_minute15_path;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15Path()
    :
    sts_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>())
    , sts_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>())
{
    sts_minute15_path_reports->parent = this;
    sts_minute15_path_thresholds->parent = this;

    yang_name = "sts-minute15-path"; yang_parent_name = "sts-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::~StsMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_data() const
{
    if (is_presence_container) return true;
    return (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_data())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_operation())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-reports")
    {
        if(sts_minute15_path_reports == nullptr)
        {
            sts_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>();
        }
        return sts_minute15_path_reports;
    }

    if(child_yang_name == "sts-minute15-path-thresholds")
    {
        if(sts_minute15_path_thresholds == nullptr)
        {
            sts_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>();
        }
        return sts_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path_reports != nullptr)
    {
        _children["sts-minute15-path-reports"] = sts_minute15_path_reports;
    }

    if(sts_minute15_path_thresholds != nullptr)
    {
        _children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-reports" || name == "sts-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReports()
    :
    sts_minute15_path_report(this, {"path_report"})
{

    yang_name = "sts-minute15-path-reports"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::~StsMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_report.len(); index++)
    {
        if(sts_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.len(); index++)
    {
        if(sts_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport>();
        ent_->parent = this;
        sts_minute15_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::StsMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "sts-minute15-path-report"; yang_parent_name = "sts-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::~StsMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_data() const
{
    if (is_presence_container) return true;
    return path_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThresholds()
    :
    sts_minute15_path_threshold(this, {"path_threshold"})
{

    yang_name = "sts-minute15-path-thresholds"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::~StsMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_threshold.len(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.len(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold>();
        ent_->parent = this;
        sts_minute15_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::StsMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sts-minute15-path-threshold"; yang_parent_name = "sts-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::~StsMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_data() const
{
    if (is_presence_container) return true;
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24()
    :
    hour24otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn>())
    , hour24_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>())
    , hour24pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs>())
    , hour24fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec>())
    , hour24secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif>())
    , hour24secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx>())
    , hour24secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx>())
{
    hour24otn->parent = this;
    hour24_optics->parent = this;
    hour24pcs->parent = this;
    hour24fec->parent = this;
    hour24secyif->parent = this;
    hour24secyrx->parent = this;
    hour24secytx->parent = this;

    yang_name = "hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::~Hour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_data() const
{
    if (is_presence_container) return true;
    return (hour24otn !=  nullptr && hour24otn->has_data())
	|| (hour24_optics !=  nullptr && hour24_optics->has_data())
	|| (hour24pcs !=  nullptr && hour24pcs->has_data())
	|| (hour24fec !=  nullptr && hour24fec->has_data())
	|| (hour24secyif !=  nullptr && hour24secyif->has_data())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_data())
	|| (hour24secytx !=  nullptr && hour24secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn !=  nullptr && hour24otn->has_operation())
	|| (hour24_optics !=  nullptr && hour24_optics->has_operation())
	|| (hour24pcs !=  nullptr && hour24pcs->has_operation())
	|| (hour24fec !=  nullptr && hour24fec->has_operation())
	|| (hour24secyif !=  nullptr && hour24secyif->has_operation())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_operation())
	|| (hour24secytx !=  nullptr && hour24secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn")
    {
        if(hour24otn == nullptr)
        {
            hour24otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn>();
        }
        return hour24otn;
    }

    if(child_yang_name == "hour24-optics")
    {
        if(hour24_optics == nullptr)
        {
            hour24_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>();
        }
        return hour24_optics;
    }

    if(child_yang_name == "hour24pcs")
    {
        if(hour24pcs == nullptr)
        {
            hour24pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs>();
        }
        return hour24pcs;
    }

    if(child_yang_name == "hour24fec")
    {
        if(hour24fec == nullptr)
        {
            hour24fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec>();
        }
        return hour24fec;
    }

    if(child_yang_name == "hour24secyif")
    {
        if(hour24secyif == nullptr)
        {
            hour24secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif>();
        }
        return hour24secyif;
    }

    if(child_yang_name == "hour24secyrx")
    {
        if(hour24secyrx == nullptr)
        {
            hour24secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx>();
        }
        return hour24secyrx;
    }

    if(child_yang_name == "hour24secytx")
    {
        if(hour24secytx == nullptr)
        {
            hour24secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx>();
        }
        return hour24secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn != nullptr)
    {
        _children["hour24otn"] = hour24otn;
    }

    if(hour24_optics != nullptr)
    {
        _children["hour24-optics"] = hour24_optics;
    }

    if(hour24pcs != nullptr)
    {
        _children["hour24pcs"] = hour24pcs;
    }

    if(hour24fec != nullptr)
    {
        _children["hour24fec"] = hour24fec;
    }

    if(hour24secyif != nullptr)
    {
        _children["hour24secyif"] = hour24secyif;
    }

    if(hour24secyrx != nullptr)
    {
        _children["hour24secyrx"] = hour24secyrx;
    }

    if(hour24secytx != nullptr)
    {
        _children["hour24secytx"] = hour24secytx;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn" || name == "hour24-optics" || name == "hour24pcs" || name == "hour24fec" || name == "hour24secyif" || name == "hour24secyrx" || name == "hour24secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otn()
    :
    hour24otn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds>())
    , hour24otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports>())
{
    hour24otn_thresholds->parent = this;
    hour24otn_reports->parent = this;

    yang_name = "hour24otn"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::~Hour24otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_data() const
{
    if (is_presence_container) return true;
    return (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_data())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_operation())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-thresholds")
    {
        if(hour24otn_thresholds == nullptr)
        {
            hour24otn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds>();
        }
        return hour24otn_thresholds;
    }

    if(child_yang_name == "hour24otn-reports")
    {
        if(hour24otn_reports == nullptr)
        {
            hour24otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports>();
        }
        return hour24otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_thresholds != nullptr)
    {
        _children["hour24otn-thresholds"] = hour24otn_thresholds;
    }

    if(hour24otn_reports != nullptr)
    {
        _children["hour24otn-reports"] = hour24otn_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-thresholds" || name == "hour24otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThresholds()
    :
    hour24otn_threshold(this, {"otn_threshold"})
{

    yang_name = "hour24otn-thresholds"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::~Hour24otnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_threshold.len(); index++)
    {
        if(hour24otn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_threshold.len(); index++)
    {
        if(hour24otn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold>();
        ent_->parent = this;
        hour24otn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::Hour24otnThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "hour24otn-threshold"; yang_parent_name = "hour24otn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::~Hour24otnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-threshold";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReports()
    :
    hour24otn_report(this, {"otn_report"})
{

    yang_name = "hour24otn-reports"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::~Hour24otnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_report.len(); index++)
    {
        if(hour24otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_report.len(); index++)
    {
        if(hour24otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport>();
        ent_->parent = this;
        hour24otn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::Hour24otnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-report"; yang_parent_name = "hour24otn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::~Hour24otnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24Optics()
    :
    hour24_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>())
    , hour24_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>())
{
    hour24_optics_thresholds->parent = this;
    hour24_optics_reports->parent = this;

    yang_name = "hour24-optics"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::~Hour24Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_data() const
{
    if (is_presence_container) return true;
    return (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_data())
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_operation())
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-thresholds")
    {
        if(hour24_optics_thresholds == nullptr)
        {
            hour24_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>();
        }
        return hour24_optics_thresholds;
    }

    if(child_yang_name == "hour24-optics-reports")
    {
        if(hour24_optics_reports == nullptr)
        {
            hour24_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>();
        }
        return hour24_optics_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_optics_thresholds != nullptr)
    {
        _children["hour24-optics-thresholds"] = hour24_optics_thresholds;
    }

    if(hour24_optics_reports != nullptr)
    {
        _children["hour24-optics-reports"] = hour24_optics_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-thresholds" || name == "hour24-optics-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThresholds()
    :
    hour24_optics_threshold(this, {"optics_threshold"})
{

    yang_name = "hour24-optics-thresholds"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::~Hour24OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_optics_threshold.len(); index++)
    {
        if(hour24_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.len(); index++)
    {
        if(hour24_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold>();
        ent_->parent = this;
        hour24_optics_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_optics_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::Hour24OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    optics_threshold_value{YType::int32, "optics-threshold-value"},
    dbm{YType::uint32, "dbm"}
{

    yang_name = "hour24-optics-threshold"; yang_parent_name = "hour24-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::~Hour24OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return optics_threshold.is_set
	|| optics_threshold_value.is_set
	|| dbm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter)
	|| ydk::is_set(dbm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-threshold";
    ADD_KEY_TOKEN(optics_threshold, "optics-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "optics-threshold-value" || name == "dbm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReports()
    :
    hour24_optics_report(this, {"optics_report"})
{

    yang_name = "hour24-optics-reports"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::~Hour24OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_optics_report.len(); index++)
    {
        if(hour24_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_report.len(); index++)
    {
        if(hour24_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport>();
        ent_->parent = this;
        hour24_optics_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_optics_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::Hour24OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "hour24-optics-report"; yang_parent_name = "hour24-optics-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::~Hour24OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_data() const
{
    if (is_presence_container) return true;
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-report";
    ADD_KEY_TOKEN(optics_report, "optics-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcs()
    :
    hour24pcs_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds>())
    , hour24pcs_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports>())
{
    hour24pcs_thresholds->parent = this;
    hour24pcs_reports->parent = this;

    yang_name = "hour24pcs"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::~Hour24pcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_data() const
{
    if (is_presence_container) return true;
    return (hour24pcs_thresholds !=  nullptr && hour24pcs_thresholds->has_data())
	|| (hour24pcs_reports !=  nullptr && hour24pcs_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_operation() const
{
    return is_set(yfilter)
	|| (hour24pcs_thresholds !=  nullptr && hour24pcs_thresholds->has_operation())
	|| (hour24pcs_reports !=  nullptr && hour24pcs_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-thresholds")
    {
        if(hour24pcs_thresholds == nullptr)
        {
            hour24pcs_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds>();
        }
        return hour24pcs_thresholds;
    }

    if(child_yang_name == "hour24pcs-reports")
    {
        if(hour24pcs_reports == nullptr)
        {
            hour24pcs_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports>();
        }
        return hour24pcs_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24pcs_thresholds != nullptr)
    {
        _children["hour24pcs-thresholds"] = hour24pcs_thresholds;
    }

    if(hour24pcs_reports != nullptr)
    {
        _children["hour24pcs-reports"] = hour24pcs_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-thresholds" || name == "hour24pcs-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThresholds()
    :
    hour24pcs_threshold(this, {"pcs_threshold"})
{

    yang_name = "hour24pcs-thresholds"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::~Hour24pcsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24pcs_threshold.len(); index++)
    {
        if(hour24pcs_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24pcs_threshold.len(); index++)
    {
        if(hour24pcs_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold>();
        ent_->parent = this;
        hour24pcs_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24pcs_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::Hour24pcsThreshold()
    :
    pcs_threshold{YType::enumeration, "pcs-threshold"},
    pcs_threshold_value{YType::str, "pcs-threshold-value"}
{

    yang_name = "hour24pcs-threshold"; yang_parent_name = "hour24pcs-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::~Hour24pcsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return pcs_threshold.is_set
	|| pcs_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_threshold.yfilter)
	|| ydk::is_set(pcs_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-threshold";
    ADD_KEY_TOKEN(pcs_threshold, "pcs-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_threshold.is_set || is_set(pcs_threshold.yfilter)) leaf_name_data.push_back(pcs_threshold.get_name_leafdata());
    if (pcs_threshold_value.is_set || is_set(pcs_threshold_value.yfilter)) leaf_name_data.push_back(pcs_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold = value;
        pcs_threshold.value_namespace = name_space;
        pcs_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value = value;
        pcs_threshold_value.value_namespace = name_space;
        pcs_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold.yfilter = yfilter;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-threshold" || name == "pcs-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReports()
    :
    hour24pcs_report(this, {"pcs_report"})
{

    yang_name = "hour24pcs-reports"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::~Hour24pcsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24pcs_report.len(); index++)
    {
        if(hour24pcs_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24pcs_report.len(); index++)
    {
        if(hour24pcs_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport>();
        ent_->parent = this;
        hour24pcs_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24pcs_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-report")
        return true;
    return false;
}


}
}

