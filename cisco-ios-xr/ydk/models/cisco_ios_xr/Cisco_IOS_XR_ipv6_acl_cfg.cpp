
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_acl_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_cfg {

Ipv6AclAndPrefixList::Ipv6AclAndPrefixList()
    :
    prefixes(std::make_shared<Ipv6AclAndPrefixList::Prefixes>())
	,log_update(std::make_shared<Ipv6AclAndPrefixList::LogUpdate>())
	,accesses(std::make_shared<Ipv6AclAndPrefixList::Accesses>())
{
    prefixes->parent = this;
    log_update->parent = this;
    accesses->parent = this;

    yang_name = "ipv6-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv6-acl-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::~Ipv6AclAndPrefixList()
{
}

bool Ipv6AclAndPrefixList::has_data() const
{
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (accesses !=  nullptr && accesses->has_data());
}

bool Ipv6AclAndPrefixList::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (accesses !=  nullptr && accesses->has_operation());
}

std::string Ipv6AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Ipv6AclAndPrefixList::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Ipv6AclAndPrefixList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Ipv6AclAndPrefixList::Accesses>();
        }
        return accesses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(log_update != nullptr)
    {
        children["log-update"] = log_update;
    }

    if(accesses != nullptr)
    {
        children["accesses"] = accesses;
    }

    return children;
}

void Ipv6AclAndPrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::clone_ptr() const
{
    return std::make_shared<Ipv6AclAndPrefixList>();
}

std::string Ipv6AclAndPrefixList::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6AclAndPrefixList::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6AclAndPrefixList::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6AclAndPrefixList::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6AclAndPrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "log-update" || name == "accesses")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "ipv6-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::Prefixes::~Prefixes()
{
}

bool Ipv6AclAndPrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::Prefix()
    :
    name{YType::str, "name"}
    	,
    prefix_list_entries(nullptr) // presence node
{

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::~Prefix()
{
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::has_data() const
{
    return name.is_set
	|| (prefix_list_entries !=  nullptr && prefix_list_entries->has_data());
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (prefix_list_entries !=  nullptr && prefix_list_entries->has_operation());
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-entries")
    {
        if(prefix_list_entries == nullptr)
        {
            prefix_list_entries = std::make_shared<Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries>();
        }
        return prefix_list_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_list_entries != nullptr)
    {
        children["prefix-list-entries"] = prefix_list_entries;
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-entries" || name == "name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntries()
{

    yang_name = "prefix-list-entries"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::~PrefixListEntries()
{
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::has_data() const
{
    for (std::size_t index=0; index<prefix_list_entry.size(); index++)
    {
        if(prefix_list_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_entry.size(); index++)
    {
        if(prefix_list_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-entry")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry>();
        c->parent = this;
        prefix_list_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_list_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-entry")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::PrefixListEntry()
    :
    sequence_number{YType::uint32, "sequence-number"},
    grant{YType::enumeration, "grant"},
    ipv6_address_as_string{YType::str, "ipv6-address-as-string"},
    zone{YType::str, "zone"},
    prefix{YType::str, "prefix"},
    prefix_mask{YType::uint8, "prefix-mask"},
    match_exact_length{YType::enumeration, "match-exact-length"},
    exact_prefix_length{YType::uint8, "exact-prefix-length"},
    match_max_length{YType::enumeration, "match-max-length"},
    max_prefix_length{YType::uint8, "max-prefix-length"},
    match_min_length{YType::enumeration, "match-min-length"},
    min_prefix_length{YType::uint8, "min-prefix-length"},
    remark{YType::str, "remark"}
{

    yang_name = "prefix-list-entry"; yang_parent_name = "prefix-list-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::~PrefixListEntry()
{
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::has_data() const
{
    return sequence_number.is_set
	|| grant.is_set
	|| ipv6_address_as_string.is_set
	|| zone.is_set
	|| prefix.is_set
	|| prefix_mask.is_set
	|| match_exact_length.is_set
	|| exact_prefix_length.is_set
	|| match_max_length.is_set
	|| max_prefix_length.is_set
	|| match_min_length.is_set
	|| min_prefix_length.is_set
	|| remark.is_set;
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(ipv6_address_as_string.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_mask.yfilter)
	|| ydk::is_set(match_exact_length.yfilter)
	|| ydk::is_set(exact_prefix_length.yfilter)
	|| ydk::is_set(match_max_length.yfilter)
	|| ydk::is_set(max_prefix_length.yfilter)
	|| ydk::is_set(match_min_length.yfilter)
	|| ydk::is_set(min_prefix_length.yfilter)
	|| ydk::is_set(remark.yfilter);
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-entry" <<"[sequence-number='" <<sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (ipv6_address_as_string.is_set || is_set(ipv6_address_as_string.yfilter)) leaf_name_data.push_back(ipv6_address_as_string.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.yfilter)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (match_exact_length.is_set || is_set(match_exact_length.yfilter)) leaf_name_data.push_back(match_exact_length.get_name_leafdata());
    if (exact_prefix_length.is_set || is_set(exact_prefix_length.yfilter)) leaf_name_data.push_back(exact_prefix_length.get_name_leafdata());
    if (match_max_length.is_set || is_set(match_max_length.yfilter)) leaf_name_data.push_back(match_max_length.get_name_leafdata());
    if (max_prefix_length.is_set || is_set(max_prefix_length.yfilter)) leaf_name_data.push_back(max_prefix_length.get_name_leafdata());
    if (match_min_length.is_set || is_set(match_min_length.yfilter)) leaf_name_data.push_back(match_min_length.get_name_leafdata());
    if (min_prefix_length.is_set || is_set(min_prefix_length.yfilter)) leaf_name_data.push_back(min_prefix_length.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address-as-string")
    {
        ipv6_address_as_string = value;
        ipv6_address_as_string.value_namespace = name_space;
        ipv6_address_as_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
        prefix_mask.value_namespace = name_space;
        prefix_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-exact-length")
    {
        match_exact_length = value;
        match_exact_length.value_namespace = name_space;
        match_exact_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-prefix-length")
    {
        exact_prefix_length = value;
        exact_prefix_length.value_namespace = name_space;
        exact_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-max-length")
    {
        match_max_length = value;
        match_max_length.value_namespace = name_space;
        match_max_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length = value;
        max_prefix_length.value_namespace = name_space;
        max_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-min-length")
    {
        match_min_length = value;
        match_min_length.value_namespace = name_space;
        match_min_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length = value;
        min_prefix_length.value_namespace = name_space;
        min_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "ipv6-address-as-string")
    {
        ipv6_address_as_string.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask.yfilter = yfilter;
    }
    if(value_path == "match-exact-length")
    {
        match_exact_length.yfilter = yfilter;
    }
    if(value_path == "exact-prefix-length")
    {
        exact_prefix_length.yfilter = yfilter;
    }
    if(value_path == "match-max-length")
    {
        match_max_length.yfilter = yfilter;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length.yfilter = yfilter;
    }
    if(value_path == "match-min-length")
    {
        match_min_length.yfilter = yfilter;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number" || name == "grant" || name == "ipv6-address-as-string" || name == "zone" || name == "prefix" || name == "prefix-mask" || name == "match-exact-length" || name == "exact-prefix-length" || name == "match-max-length" || name == "max-prefix-length" || name == "match-min-length" || name == "min-prefix-length" || name == "remark")
        return true;
    return false;
}

Ipv6AclAndPrefixList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint32, "threshold"},
    rate{YType::uint32, "rate"}
{

    yang_name = "log-update"; yang_parent_name = "ipv6-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::LogUpdate::~LogUpdate()
{
}

bool Ipv6AclAndPrefixList::LogUpdate::has_data() const
{
    return threshold.is_set
	|| rate.is_set;
}

bool Ipv6AclAndPrefixList::LogUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Ipv6AclAndPrefixList::LogUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::LogUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::LogUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::LogUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::LogUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "rate")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Accesses()
{

    yang_name = "accesses"; yang_parent_name = "ipv6-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::Accesses::~Accesses()
{
}

bool Ipv6AclAndPrefixList::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access>();
        c->parent = this;
        access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::Access()
    :
    name{YType::str, "name"}
    	,
    access_list_entries(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries>())
{
    access_list_entries->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6AclAndPrefixList::Accesses::Access::~Access()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::has_data() const
{
    return name.is_set
	|| (access_list_entries !=  nullptr && access_list_entries->has_data());
}

bool Ipv6AclAndPrefixList::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (access_list_entries !=  nullptr && access_list_entries->has_operation());
}

std::string Ipv6AclAndPrefixList::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries")
    {
        if(access_list_entries == nullptr)
        {
            access_list_entries = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries>();
        }
        return access_list_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_list_entries != nullptr)
    {
        children["access-list-entries"] = access_list_entries;
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entries" || name == "name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntries()
{

    yang_name = "access-list-entries"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::~AccessListEntries()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::has_data() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::has_operation() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entry")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access_list_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entry")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    sequence_number{YType::uint32, "sequence-number"},
    grant{YType::enumeration, "grant"},
    protocol_operator{YType::enumeration, "protocol-operator"},
    protocol{YType::str, "protocol"},
    protocol2{YType::str, "protocol2"},
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    counter_name{YType::str, "counter-name"},
    log_option{YType::enumeration, "log-option"},
    capture{YType::boolean, "capture"},
    undetermined_transport{YType::boolean, "undetermined-transport"},
    icmp_off{YType::empty, "icmp-off"},
    qos_group{YType::uint32, "qos-group"},
    set_ttl{YType::uint32, "set-ttl"},
    remark{YType::str, "remark"},
    source_prefix_group{YType::str, "source-prefix-group"},
    destination_prefix_group{YType::str, "destination-prefix-group"},
    source_port_group{YType::str, "source-port-group"},
    destination_port_group{YType::str, "destination-port-group"},
    sequence_str{YType::str, "sequence-str"}
    	,
    source_network(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>())
	,destination_network(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>())
	,source_port(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort>())
	,destination_port(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort>())
	,icmp(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp>())
	,tcp(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp>())
	,packet_length(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength>())
	,time_to_live(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive>())
	,next_hop(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop>())
	,header_flags(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags>())
{
    source_network->parent = this;
    destination_network->parent = this;
    source_port->parent = this;
    destination_port->parent = this;
    icmp->parent = this;
    tcp->parent = this;
    packet_length->parent = this;
    time_to_live->parent = this;
    next_hop->parent = this;
    header_flags->parent = this;

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::has_data() const
{
    return sequence_number.is_set
	|| grant.is_set
	|| protocol_operator.is_set
	|| protocol.is_set
	|| protocol2.is_set
	|| dscp.is_set
	|| precedence.is_set
	|| counter_name.is_set
	|| log_option.is_set
	|| capture.is_set
	|| undetermined_transport.is_set
	|| icmp_off.is_set
	|| qos_group.is_set
	|| set_ttl.is_set
	|| remark.is_set
	|| source_prefix_group.is_set
	|| destination_prefix_group.is_set
	|| source_port_group.is_set
	|| destination_port_group.is_set
	|| sequence_str.is_set
	|| (source_network !=  nullptr && source_network->has_data())
	|| (destination_network !=  nullptr && destination_network->has_data())
	|| (source_port !=  nullptr && source_port->has_data())
	|| (destination_port !=  nullptr && destination_port->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (packet_length !=  nullptr && packet_length->has_data())
	|| (time_to_live !=  nullptr && time_to_live->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (header_flags !=  nullptr && header_flags->has_data());
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(protocol_operator.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(log_option.yfilter)
	|| ydk::is_set(capture.yfilter)
	|| ydk::is_set(undetermined_transport.yfilter)
	|| ydk::is_set(icmp_off.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(set_ttl.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(source_prefix_group.yfilter)
	|| ydk::is_set(destination_prefix_group.yfilter)
	|| ydk::is_set(source_port_group.yfilter)
	|| ydk::is_set(destination_port_group.yfilter)
	|| ydk::is_set(sequence_str.yfilter)
	|| (source_network !=  nullptr && source_network->has_operation())
	|| (destination_network !=  nullptr && destination_network->has_operation())
	|| (source_port !=  nullptr && source_port->has_operation())
	|| (destination_port !=  nullptr && destination_port->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (packet_length !=  nullptr && packet_length->has_operation())
	|| (time_to_live !=  nullptr && time_to_live->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (header_flags !=  nullptr && header_flags->has_operation());
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[sequence-number='" <<sequence_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (protocol_operator.is_set || is_set(protocol_operator.yfilter)) leaf_name_data.push_back(protocol_operator.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.yfilter)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (capture.is_set || is_set(capture.yfilter)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (undetermined_transport.is_set || is_set(undetermined_transport.yfilter)) leaf_name_data.push_back(undetermined_transport.get_name_leafdata());
    if (icmp_off.is_set || is_set(icmp_off.yfilter)) leaf_name_data.push_back(icmp_off.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (set_ttl.is_set || is_set(set_ttl.yfilter)) leaf_name_data.push_back(set_ttl.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.yfilter)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.yfilter)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.yfilter)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.yfilter)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.yfilter)) leaf_name_data.push_back(sequence_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-network")
    {
        if(source_network == nullptr)
        {
            source_network = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>();
        }
        return source_network;
    }

    if(child_yang_name == "destination-network")
    {
        if(destination_network == nullptr)
        {
            destination_network = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>();
        }
        return destination_network;
    }

    if(child_yang_name == "source-port")
    {
        if(source_port == nullptr)
        {
            source_port = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort>();
        }
        return source_port;
    }

    if(child_yang_name == "destination-port")
    {
        if(destination_port == nullptr)
        {
            destination_port = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort>();
        }
        return destination_port;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "packet-length")
    {
        if(packet_length == nullptr)
        {
            packet_length = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength>();
        }
        return packet_length;
    }

    if(child_yang_name == "time-to-live")
    {
        if(time_to_live == nullptr)
        {
            time_to_live = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive>();
        }
        return time_to_live;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "header-flags")
    {
        if(header_flags == nullptr)
        {
            header_flags = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags>();
        }
        return header_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_network != nullptr)
    {
        children["source-network"] = source_network;
    }

    if(destination_network != nullptr)
    {
        children["destination-network"] = destination_network;
    }

    if(source_port != nullptr)
    {
        children["source-port"] = source_port;
    }

    if(destination_port != nullptr)
    {
        children["destination-port"] = destination_port;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(packet_length != nullptr)
    {
        children["packet-length"] = packet_length;
    }

    if(time_to_live != nullptr)
    {
        children["time-to-live"] = time_to_live;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(header_flags != nullptr)
    {
        children["header-flags"] = header_flags;
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-operator")
    {
        protocol_operator = value;
        protocol_operator.value_namespace = name_space;
        protocol_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-option")
    {
        log_option = value;
        log_option.value_namespace = name_space;
        log_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture")
    {
        capture = value;
        capture.value_namespace = name_space;
        capture.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undetermined-transport")
    {
        undetermined_transport = value;
        undetermined_transport.value_namespace = name_space;
        undetermined_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-off")
    {
        icmp_off = value;
        icmp_off.value_namespace = name_space;
        icmp_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-ttl")
    {
        set_ttl = value;
        set_ttl.value_namespace = name_space;
        set_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix-group")
    {
        source_prefix_group = value;
        source_prefix_group.value_namespace = name_space;
        source_prefix_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix-group")
    {
        destination_prefix_group = value;
        destination_prefix_group.value_namespace = name_space;
        destination_prefix_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-group")
    {
        source_port_group = value;
        source_port_group.value_namespace = name_space;
        source_port_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-group")
    {
        destination_port_group = value;
        destination_port_group.value_namespace = name_space;
        destination_port_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
        sequence_str.value_namespace = name_space;
        sequence_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "protocol-operator")
    {
        protocol_operator.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "log-option")
    {
        log_option.yfilter = yfilter;
    }
    if(value_path == "capture")
    {
        capture.yfilter = yfilter;
    }
    if(value_path == "undetermined-transport")
    {
        undetermined_transport.yfilter = yfilter;
    }
    if(value_path == "icmp-off")
    {
        icmp_off.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "set-ttl")
    {
        set_ttl.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "source-prefix-group")
    {
        source_prefix_group.yfilter = yfilter;
    }
    if(value_path == "destination-prefix-group")
    {
        destination_prefix_group.yfilter = yfilter;
    }
    if(value_path == "source-port-group")
    {
        source_port_group.yfilter = yfilter;
    }
    if(value_path == "destination-port-group")
    {
        destination_port_group.yfilter = yfilter;
    }
    if(value_path == "sequence-str")
    {
        sequence_str.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-network" || name == "destination-network" || name == "source-port" || name == "destination-port" || name == "icmp" || name == "tcp" || name == "packet-length" || name == "time-to-live" || name == "next-hop" || name == "header-flags" || name == "sequence-number" || name == "grant" || name == "protocol-operator" || name == "protocol" || name == "protocol2" || name == "dscp" || name == "precedence" || name == "counter-name" || name == "log-option" || name == "capture" || name == "undetermined-transport" || name == "icmp-off" || name == "qos-group" || name == "set-ttl" || name == "remark" || name == "source-prefix-group" || name == "destination-prefix-group" || name == "source-port-group" || name == "destination-port-group" || name == "sequence-str")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::SourceNetwork()
    :
    source_address{YType::str, "source-address"},
    source_wild_card_bits{YType::uint8, "source-wild-card-bits"},
    source_mask{YType::str, "source-mask"}
{

    yang_name = "source-network"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::~SourceNetwork()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_data() const
{
    return source_address.is_set
	|| source_wild_card_bits.is_set
	|| source_mask.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_wild_card_bits.yfilter)
	|| ydk::is_set(source_mask.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.yfilter)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());
    if (source_mask.is_set || is_set(source_mask.yfilter)) leaf_name_data.push_back(source_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
        source_wild_card_bits.value_namespace = name_space;
        source_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mask")
    {
        source_mask = value;
        source_mask.value_namespace = name_space;
        source_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits.yfilter = yfilter;
    }
    if(value_path == "source-mask")
    {
        source_mask.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-wild-card-bits" || name == "source-mask")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::DestinationNetwork()
    :
    destination_address{YType::str, "destination-address"},
    destination_wild_card_bits{YType::uint8, "destination-wild-card-bits"},
    destination_mask{YType::str, "destination-mask"}
{

    yang_name = "destination-network"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::~DestinationNetwork()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_data() const
{
    return destination_address.is_set
	|| destination_wild_card_bits.is_set
	|| destination_mask.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_wild_card_bits.yfilter)
	|| ydk::is_set(destination_mask.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.yfilter)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());
    if (destination_mask.is_set || is_set(destination_mask.yfilter)) leaf_name_data.push_back(destination_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
        destination_wild_card_bits.value_namespace = name_space;
        destination_wild_card_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mask")
    {
        destination_mask = value;
        destination_mask.value_namespace = name_space;
        destination_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits.yfilter = yfilter;
    }
    if(value_path == "destination-mask")
    {
        destination_mask.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-wild-card-bits" || name == "destination-mask")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::SourcePort()
    :
    source_operator{YType::enumeration, "source-operator"},
    first_source_port{YType::str, "first-source-port"},
    second_source_port{YType::str, "second-source-port"}
{

    yang_name = "source-port"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::~SourcePort()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::has_data() const
{
    return source_operator.is_set
	|| first_source_port.is_set
	|| second_source_port.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_operator.yfilter)
	|| ydk::is_set(first_source_port.yfilter)
	|| ydk::is_set(second_source_port.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_operator.is_set || is_set(source_operator.yfilter)) leaf_name_data.push_back(source_operator.get_name_leafdata());
    if (first_source_port.is_set || is_set(first_source_port.yfilter)) leaf_name_data.push_back(first_source_port.get_name_leafdata());
    if (second_source_port.is_set || is_set(second_source_port.yfilter)) leaf_name_data.push_back(second_source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-operator")
    {
        source_operator = value;
        source_operator.value_namespace = name_space;
        source_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-source-port")
    {
        first_source_port = value;
        first_source_port.value_namespace = name_space;
        first_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-source-port")
    {
        second_source_port = value;
        second_source_port.value_namespace = name_space;
        second_source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-operator")
    {
        source_operator.yfilter = yfilter;
    }
    if(value_path == "first-source-port")
    {
        first_source_port.yfilter = yfilter;
    }
    if(value_path == "second-source-port")
    {
        second_source_port.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-operator" || name == "first-source-port" || name == "second-source-port")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::DestinationPort()
    :
    destination_operator{YType::enumeration, "destination-operator"},
    first_destination_port{YType::str, "first-destination-port"},
    second_destination_port{YType::str, "second-destination-port"}
{

    yang_name = "destination-port"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::~DestinationPort()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::has_data() const
{
    return destination_operator.is_set
	|| first_destination_port.is_set
	|| second_destination_port.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_operator.yfilter)
	|| ydk::is_set(first_destination_port.yfilter)
	|| ydk::is_set(second_destination_port.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_operator.is_set || is_set(destination_operator.yfilter)) leaf_name_data.push_back(destination_operator.get_name_leafdata());
    if (first_destination_port.is_set || is_set(first_destination_port.yfilter)) leaf_name_data.push_back(first_destination_port.get_name_leafdata());
    if (second_destination_port.is_set || is_set(second_destination_port.yfilter)) leaf_name_data.push_back(second_destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-operator")
    {
        destination_operator = value;
        destination_operator.value_namespace = name_space;
        destination_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-destination-port")
    {
        first_destination_port = value;
        first_destination_port.value_namespace = name_space;
        first_destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-destination-port")
    {
        second_destination_port = value;
        second_destination_port.value_namespace = name_space;
        second_destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-operator")
    {
        destination_operator.yfilter = yfilter;
    }
    if(value_path == "first-destination-port")
    {
        first_destination_port.yfilter = yfilter;
    }
    if(value_path == "second-destination-port")
    {
        second_destination_port.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-operator" || name == "first-destination-port" || name == "second-destination-port")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::Icmp()
    :
    icmp_type_code{YType::enumeration, "icmp-type-code"}
{

    yang_name = "icmp"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::~Icmp()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::has_data() const
{
    return icmp_type_code.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmp_type_code.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp_type_code.is_set || is_set(icmp_type_code.yfilter)) leaf_name_data.push_back(icmp_type_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmp-type-code")
    {
        icmp_type_code = value;
        icmp_type_code.value_namespace = name_space;
        icmp_type_code.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmp-type-code")
    {
        icmp_type_code.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-type-code")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::Tcp()
    :
    tcp_bits_match_operator{YType::enumeration, "tcp-bits-match-operator"},
    tcp_bits{YType::str, "tcp-bits"},
    tcp_bits_mask{YType::str, "tcp-bits-mask"}
{

    yang_name = "tcp"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::~Tcp()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::has_data() const
{
    return tcp_bits_match_operator.is_set
	|| tcp_bits.is_set
	|| tcp_bits_mask.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_bits_match_operator.yfilter)
	|| ydk::is_set(tcp_bits.yfilter)
	|| ydk::is_set(tcp_bits_mask.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_bits_match_operator.is_set || is_set(tcp_bits_match_operator.yfilter)) leaf_name_data.push_back(tcp_bits_match_operator.get_name_leafdata());
    if (tcp_bits.is_set || is_set(tcp_bits.yfilter)) leaf_name_data.push_back(tcp_bits.get_name_leafdata());
    if (tcp_bits_mask.is_set || is_set(tcp_bits_mask.yfilter)) leaf_name_data.push_back(tcp_bits_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-bits-match-operator")
    {
        tcp_bits_match_operator = value;
        tcp_bits_match_operator.value_namespace = name_space;
        tcp_bits_match_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bits")
    {
        tcp_bits = value;
        tcp_bits.value_namespace = name_space;
        tcp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-bits-mask")
    {
        tcp_bits_mask = value;
        tcp_bits_mask.value_namespace = name_space;
        tcp_bits_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-bits-match-operator")
    {
        tcp_bits_match_operator.yfilter = yfilter;
    }
    if(value_path == "tcp-bits")
    {
        tcp_bits.yfilter = yfilter;
    }
    if(value_path == "tcp-bits-mask")
    {
        tcp_bits_mask.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-bits-match-operator" || name == "tcp-bits" || name == "tcp-bits-mask")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::PacketLength()
    :
    packet_length_operator{YType::enumeration, "packet-length-operator"},
    packet_length_min{YType::uint32, "packet-length-min"},
    packet_length_max{YType::uint32, "packet-length-max"}
{

    yang_name = "packet-length"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::~PacketLength()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::has_data() const
{
    return packet_length_operator.is_set
	|| packet_length_min.is_set
	|| packet_length_max.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_length_operator.yfilter)
	|| ydk::is_set(packet_length_min.yfilter)
	|| ydk::is_set(packet_length_max.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_length_operator.is_set || is_set(packet_length_operator.yfilter)) leaf_name_data.push_back(packet_length_operator.get_name_leafdata());
    if (packet_length_min.is_set || is_set(packet_length_min.yfilter)) leaf_name_data.push_back(packet_length_min.get_name_leafdata());
    if (packet_length_max.is_set || is_set(packet_length_max.yfilter)) leaf_name_data.push_back(packet_length_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-length-operator")
    {
        packet_length_operator = value;
        packet_length_operator.value_namespace = name_space;
        packet_length_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-min")
    {
        packet_length_min = value;
        packet_length_min.value_namespace = name_space;
        packet_length_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-max")
    {
        packet_length_max = value;
        packet_length_max.value_namespace = name_space;
        packet_length_max.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-length-operator")
    {
        packet_length_operator.yfilter = yfilter;
    }
    if(value_path == "packet-length-min")
    {
        packet_length_min.yfilter = yfilter;
    }
    if(value_path == "packet-length-max")
    {
        packet_length_max.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-length-operator" || name == "packet-length-min" || name == "packet-length-max")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::TimeToLive()
    :
    time_to_live_operator{YType::enumeration, "time-to-live-operator"},
    time_to_live_min{YType::uint32, "time-to-live-min"},
    time_to_live_max{YType::uint32, "time-to-live-max"}
{

    yang_name = "time-to-live"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::~TimeToLive()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::has_data() const
{
    return time_to_live_operator.is_set
	|| time_to_live_min.is_set
	|| time_to_live_max.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_to_live_operator.yfilter)
	|| ydk::is_set(time_to_live_min.yfilter)
	|| ydk::is_set(time_to_live_max.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-to-live";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_to_live_operator.is_set || is_set(time_to_live_operator.yfilter)) leaf_name_data.push_back(time_to_live_operator.get_name_leafdata());
    if (time_to_live_min.is_set || is_set(time_to_live_min.yfilter)) leaf_name_data.push_back(time_to_live_min.get_name_leafdata());
    if (time_to_live_max.is_set || is_set(time_to_live_max.yfilter)) leaf_name_data.push_back(time_to_live_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-to-live-operator")
    {
        time_to_live_operator = value;
        time_to_live_operator.value_namespace = name_space;
        time_to_live_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-live-min")
    {
        time_to_live_min = value;
        time_to_live_min.value_namespace = name_space;
        time_to_live_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-live-max")
    {
        time_to_live_max = value;
        time_to_live_max.value_namespace = name_space;
        time_to_live_max.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-to-live-operator")
    {
        time_to_live_operator.yfilter = yfilter;
    }
    if(value_path == "time-to-live-min")
    {
        time_to_live_min.yfilter = yfilter;
    }
    if(value_path == "time-to-live-max")
    {
        time_to_live_max.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-to-live-operator" || name == "time-to-live-min" || name == "time-to-live-max")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop()
    :
    next_hop_type{YType::enumeration, "next-hop-type"}
    	,
    next_hop_1(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1>())
	,next_hop_2(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2>())
	,next_hop_3(std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3>())
{
    next_hop_1->parent = this;
    next_hop_2->parent = this;
    next_hop_3->parent = this;

    yang_name = "next-hop"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::~NextHop()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::has_data() const
{
    return next_hop_type.is_set
	|| (next_hop_1 !=  nullptr && next_hop_1->has_data())
	|| (next_hop_2 !=  nullptr && next_hop_2->has_data())
	|| (next_hop_3 !=  nullptr && next_hop_3->has_data());
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_type.yfilter)
	|| (next_hop_1 !=  nullptr && next_hop_1->has_operation())
	|| (next_hop_2 !=  nullptr && next_hop_2->has_operation())
	|| (next_hop_3 !=  nullptr && next_hop_3->has_operation());
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-1")
    {
        if(next_hop_1 == nullptr)
        {
            next_hop_1 = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1>();
        }
        return next_hop_1;
    }

    if(child_yang_name == "next-hop-2")
    {
        if(next_hop_2 == nullptr)
        {
            next_hop_2 = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2>();
        }
        return next_hop_2;
    }

    if(child_yang_name == "next-hop-3")
    {
        if(next_hop_3 == nullptr)
        {
            next_hop_3 = std::make_shared<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3>();
        }
        return next_hop_3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_1 != nullptr)
    {
        children["next-hop-1"] = next_hop_1;
    }

    if(next_hop_2 != nullptr)
    {
        children["next-hop-2"] = next_hop_2;
    }

    if(next_hop_3 != nullptr)
    {
        children["next-hop-3"] = next_hop_3;
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-1" || name == "next-hop-2" || name == "next-hop-3" || name == "next-hop-type")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::NextHop1()
    :
    next_hop{YType::str, "next-hop"},
    vrf_name{YType::str, "vrf-name"},
    track_name{YType::str, "track-name"}
{

    yang_name = "next-hop-1"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::~NextHop1()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::has_data() const
{
    return next_hop.is_set
	|| vrf_name.is_set
	|| track_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(track_name.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf-name" || name == "track-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::NextHop2()
    :
    next_hop{YType::str, "next-hop"},
    vrf_name{YType::str, "vrf-name"},
    track_name{YType::str, "track-name"}
{

    yang_name = "next-hop-2"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::~NextHop2()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::has_data() const
{
    return next_hop.is_set
	|| vrf_name.is_set
	|| track_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(track_name.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf-name" || name == "track-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::NextHop3()
    :
    next_hop{YType::str, "next-hop"},
    vrf_name{YType::str, "vrf-name"},
    track_name{YType::str, "track-name"}
{

    yang_name = "next-hop-3"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::~NextHop3()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::has_data() const
{
    return next_hop.is_set
	|| vrf_name.is_set
	|| track_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(track_name.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf-name" || name == "track-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::HeaderFlags()
    :
    routing{YType::empty, "routing"},
    destopts{YType::empty, "destopts"},
    hop_by_hop{YType::empty, "hop-by-hop"},
    fragments{YType::empty, "fragments"},
    authen{YType::empty, "authen"}
{

    yang_name = "header-flags"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::~HeaderFlags()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::has_data() const
{
    return routing.is_set
	|| destopts.is_set
	|| hop_by_hop.is_set
	|| fragments.is_set
	|| authen.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(destopts.yfilter)
	|| ydk::is_set(hop_by_hop.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(authen.yfilter);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (destopts.is_set || is_set(destopts.yfilter)) leaf_name_data.push_back(destopts.get_name_leafdata());
    if (hop_by_hop.is_set || is_set(hop_by_hop.yfilter)) leaf_name_data.push_back(hop_by_hop.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (authen.is_set || is_set(authen.yfilter)) leaf_name_data.push_back(authen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destopts")
    {
        destopts = value;
        destopts.value_namespace = name_space;
        destopts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-by-hop")
    {
        hop_by_hop = value;
        hop_by_hop.value_namespace = name_space;
        hop_by_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen")
    {
        authen = value;
        authen.value_namespace = name_space;
        authen.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "destopts")
    {
        destopts.yfilter = yfilter;
    }
    if(value_path == "hop-by-hop")
    {
        hop_by_hop.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "authen")
    {
        authen.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing" || name == "destopts" || name == "hop-by-hop" || name == "fragments" || name == "authen")
        return true;
    return false;
}

const Enum::YLeaf NextHopType::none_next_hop {0, "none-next-hop"};
const Enum::YLeaf NextHopType::regular_next_hop {1, "regular-next-hop"};
const Enum::YLeaf NextHopType::default_next_hop {2, "default-next-hop"};


}
}

