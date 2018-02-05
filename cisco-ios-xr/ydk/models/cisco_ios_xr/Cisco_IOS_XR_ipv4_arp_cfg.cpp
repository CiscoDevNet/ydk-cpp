
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_arp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_arp_cfg {

Arp::Arp()
    :
    max_entries{YType::uint32, "max-entries"},
    inner_cos{YType::uint32, "inner-cos"},
    outer_cos{YType::uint32, "outer-cos"}
{

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Arp::~Arp()
{
}

bool Arp::has_data() const
{
    return max_entries.is_set
	|| inner_cos.is_set
	|| outer_cos.is_set;
}

bool Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_entries.yfilter)
	|| ydk::is_set(inner_cos.yfilter)
	|| ydk::is_set(outer_cos.yfilter);
}

std::string Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_entries.is_set || is_set(max_entries.yfilter)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.yfilter)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (outer_cos.is_set || is_set(outer_cos.yfilter)) leaf_name_data.push_back(outer_cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-entries")
    {
        max_entries = value;
        max_entries.value_namespace = name_space;
        max_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
        inner_cos.value_namespace = name_space;
        inner_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-cos")
    {
        outer_cos = value;
        outer_cos.value_namespace = name_space;
        outer_cos.value_namespace_prefix = name_space_prefix;
    }
}

void Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-entries")
    {
        max_entries.yfilter = yfilter;
    }
    if(value_path == "inner-cos")
    {
        inner_cos.yfilter = yfilter;
    }
    if(value_path == "outer-cos")
    {
        outer_cos.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Arp::clone_ptr() const
{
    return std::make_shared<Arp>();
}

std::string Arp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Arp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Arp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Arp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-entries" || name == "inner-cos" || name == "outer-cos")
        return true;
    return false;
}

IedgeCfg::IedgeCfg()
    :
    subscriber_uncond_proxy{YType::empty, "subscriber-uncond-proxy"},
    subscriber_scale_mode{YType::empty, "subscriber-scale-mode"}
{

    yang_name = "iedge-cfg"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

IedgeCfg::~IedgeCfg()
{
}

bool IedgeCfg::has_data() const
{
    return subscriber_uncond_proxy.is_set
	|| subscriber_scale_mode.is_set;
}

bool IedgeCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_uncond_proxy.yfilter)
	|| ydk::is_set(subscriber_scale_mode.yfilter);
}

std::string IedgeCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:iedge-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_uncond_proxy.is_set || is_set(subscriber_uncond_proxy.yfilter)) leaf_name_data.push_back(subscriber_uncond_proxy.get_name_leafdata());
    if (subscriber_scale_mode.is_set || is_set(subscriber_scale_mode.yfilter)) leaf_name_data.push_back(subscriber_scale_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IedgeCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IedgeCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IedgeCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-uncond-proxy")
    {
        subscriber_uncond_proxy = value;
        subscriber_uncond_proxy.value_namespace = name_space;
        subscriber_uncond_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-scale-mode")
    {
        subscriber_scale_mode = value;
        subscriber_scale_mode.value_namespace = name_space;
        subscriber_scale_mode.value_namespace_prefix = name_space_prefix;
    }
}

void IedgeCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-uncond-proxy")
    {
        subscriber_uncond_proxy.yfilter = yfilter;
    }
    if(value_path == "subscriber-scale-mode")
    {
        subscriber_scale_mode.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> IedgeCfg::clone_ptr() const
{
    return std::make_shared<IedgeCfg>();
}

std::string IedgeCfg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IedgeCfg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IedgeCfg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IedgeCfg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IedgeCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-uncond-proxy" || name == "subscriber-scale-mode")
        return true;
    return false;
}

Arpgmp::Arpgmp()
{

    yang_name = "arpgmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Arpgmp::~Arpgmp()
{
}

bool Arpgmp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Arpgmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arpgmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arpgmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arpgmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arpgmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Arpgmp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arpgmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Arpgmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arpgmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Arpgmp::clone_ptr() const
{
    return std::make_shared<Arpgmp>();
}

std::string Arpgmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Arpgmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Arpgmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Arpgmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Arpgmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Arpgmp::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    entries(std::make_shared<Arpgmp::Vrf::Entries>())
{
    entries->parent = this;

    yang_name = "vrf"; yang_parent_name = "arpgmp"; is_top_level_class = false; has_list_ancestor = false;
}

Arpgmp::Vrf::~Vrf()
{
}

bool Arpgmp::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (entries !=  nullptr && entries->has_data());
}

bool Arpgmp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (entries !=  nullptr && entries->has_operation());
}

std::string Arpgmp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arpgmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Arpgmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arpgmp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arpgmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entries")
    {
        if(entries == nullptr)
        {
            entries = std::make_shared<Arpgmp::Vrf::Entries>();
        }
        return entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arpgmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(entries != nullptr)
    {
        children["entries"] = entries;
    }

    return children;
}

void Arpgmp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Arpgmp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Arpgmp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries" || name == "vrf-name")
        return true;
    return false;
}

Arpgmp::Vrf::Entries::Entries()
{

    yang_name = "entries"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Arpgmp::Vrf::Entries::~Entries()
{
}

bool Arpgmp::Vrf::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arpgmp::Vrf::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Arpgmp::Vrf::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arpgmp::Vrf::Entries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Arpgmp::Vrf::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<Arpgmp::Vrf::Entries::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arpgmp::Vrf::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Arpgmp::Vrf::Entries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Arpgmp::Vrf::Entries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Arpgmp::Vrf::Entries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Arpgmp::Vrf::Entries::Entry::Entry()
    :
    address{YType::str, "address"},
    mac_address{YType::str, "mac-address"},
    encapsulation{YType::enumeration, "encapsulation"},
    entry_type{YType::enumeration, "entry-type"},
    interface{YType::str, "interface"}
{

    yang_name = "entry"; yang_parent_name = "entries"; is_top_level_class = false; has_list_ancestor = true;
}

Arpgmp::Vrf::Entries::Entry::~Entry()
{
}

bool Arpgmp::Vrf::Entries::Entry::has_data() const
{
    return address.is_set
	|| mac_address.is_set
	|| encapsulation.is_set
	|| entry_type.is_set
	|| interface.is_set;
}

bool Arpgmp::Vrf::Entries::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(entry_type.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Arpgmp::Vrf::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Arpgmp::Vrf::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.yfilter)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Arpgmp::Vrf::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Arpgmp::Vrf::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Arpgmp::Vrf::Entries::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
        entry_type.value_namespace = name_space;
        entry_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Arpgmp::Vrf::Entries::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "entry-type")
    {
        entry_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Arpgmp::Vrf::Entries::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mac-address" || name == "encapsulation" || name == "entry-type" || name == "interface")
        return true;
    return false;
}

ArpRedundancy::ArpRedundancy()
    :
    redundancy(nullptr) // presence node
{

    yang_name = "arp-redundancy"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

ArpRedundancy::~ArpRedundancy()
{
}

bool ArpRedundancy::has_data() const
{
    return (redundancy !=  nullptr && redundancy->has_data());
}

bool ArpRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string ArpRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<ArpRedundancy::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void ArpRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ArpRedundancy::clone_ptr() const
{
    return std::make_shared<ArpRedundancy>();
}

std::string ArpRedundancy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ArpRedundancy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ArpRedundancy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ArpRedundancy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ArpRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    groups(std::make_shared<ArpRedundancy::Redundancy::Groups>())
{
    groups->parent = this;

    yang_name = "redundancy"; yang_parent_name = "arp-redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

ArpRedundancy::Redundancy::~Redundancy()
{
}

bool ArpRedundancy::Redundancy::has_data() const
{
    return enable.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool ArpRedundancy::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string ArpRedundancy::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpRedundancy::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<ArpRedundancy::Redundancy::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void ArpRedundancy::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void ArpRedundancy::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool ArpRedundancy::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "enable")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

ArpRedundancy::Redundancy::Groups::~Groups()
{
}

bool ArpRedundancy::Redundancy::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpRedundancy::Redundancy::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpRedundancy::Redundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<ArpRedundancy::Redundancy::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpRedundancy::Redundancy::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpRedundancy::Redundancy::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    source_interface{YType::str, "source-interface"}
    	,
    peers(std::make_shared<ArpRedundancy::Redundancy::Groups::Group::Peers>())
	,interface_list(nullptr) // presence node
{
    peers->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
}

ArpRedundancy::Redundancy::Groups::Group::~Group()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::has_data() const
{
    return group_id.is_set
	|| source_interface.is_set
	|| (peers !=  nullptr && peers->has_data())
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool ArpRedundancy::Redundancy::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (peers !=  nullptr && peers->has_operation())
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string ArpRedundancy::Redundancy::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/redundancy/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string ArpRedundancy::Redundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ArpRedundancy::Redundancy::Groups::Group::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<ArpRedundancy::Redundancy::Groups::Group::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void ArpRedundancy::Redundancy::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool ArpRedundancy::Redundancy::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "interface-list" || name == "group-id" || name == "source-interface")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

ArpRedundancy::Redundancy::Groups::Group::Peers::~Peers()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpRedundancy::Redundancy::Groups::Group::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<ArpRedundancy::Redundancy::Groups::Group::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::Peer()
    :
    prefix_string{YType::str, "prefix-string"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::~Peer()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::has_data() const
{
    return prefix_string.is_set;
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_string.yfilter);
}

std::string ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[prefix-string='" <<prefix_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-string")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    enable{YType::empty, "enable"}
    	,
    interfaces(std::make_shared<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-list"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::~InterfaceList()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::has_data() const
{
    return enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "enable")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::~Interfaces()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::uint32, "interface-id"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::~Interface()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_id.is_set;
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-id")
        return true;
    return false;
}

const Enum::YLeaf ArpEntry::static_ {0, "static"};
const Enum::YLeaf ArpEntry::alias {1, "alias"};

const Enum::YLeaf ArpEncap::arpa {1, "arpa"};
const Enum::YLeaf ArpEncap::srp {4, "srp"};
const Enum::YLeaf ArpEncap::srpa {5, "srpa"};
const Enum::YLeaf ArpEncap::srpb {6, "srpb"};


}
}

