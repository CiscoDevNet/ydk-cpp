
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_acl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_oper {

Ipv6AclAndPrefixList::Ipv6AclAndPrefixList()
    :
    access_list_manager(std::make_shared<Ipv6AclAndPrefixList::AccessListManager>())
    , oor(std::make_shared<Ipv6AclAndPrefixList::Oor>())
{
    access_list_manager->parent = this;
    oor->parent = this;

    yang_name = "ipv6-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv6-acl-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::~Ipv6AclAndPrefixList()
{
}

bool Ipv6AclAndPrefixList::has_data() const
{
    if (is_presence_container) return true;
    return (access_list_manager !=  nullptr && access_list_manager->has_data())
	|| (oor !=  nullptr && oor->has_data());
}

bool Ipv6AclAndPrefixList::has_operation() const
{
    return is_set(yfilter)
	|| (access_list_manager !=  nullptr && access_list_manager->has_operation())
	|| (oor !=  nullptr && oor->has_operation());
}

std::string Ipv6AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-manager")
    {
        if(access_list_manager == nullptr)
        {
            access_list_manager = std::make_shared<Ipv6AclAndPrefixList::AccessListManager>();
        }
        return access_list_manager;
    }

    if(child_yang_name == "oor")
    {
        if(oor == nullptr)
        {
            oor = std::make_shared<Ipv6AclAndPrefixList::Oor>();
        }
        return oor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_list_manager != nullptr)
    {
        children["access-list-manager"] = access_list_manager;
    }

    if(oor != nullptr)
    {
        children["oor"] = oor;
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
    if(name == "access-list-manager" || name == "oor")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::AccessListManager()
    :
    prefixes(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes>())
    , usages(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages>())
    , accesses(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses>())
{
    prefixes->parent = this;
    usages->parent = this;
    accesses->parent = this;

    yang_name = "access-list-manager"; yang_parent_name = "ipv6-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::~AccessListManager()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (usages !=  nullptr && usages->has_data())
	|| (accesses !=  nullptr && accesses->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (usages !=  nullptr && usages->has_operation())
	|| (accesses !=  nullptr && accesses->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "usages")
    {
        if(usages == nullptr)
        {
            usages = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages>();
        }
        return usages;
    }

    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses>();
        }
        return accesses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(usages != nullptr)
    {
        children["usages"] = usages;
    }

    if(accesses != nullptr)
    {
        children["accesses"] = accesses;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "usages" || name == "accesses")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefixes()
    :
    prefix(this, {"prefix_list_name"})
{

    yang_name = "prefixes"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::~Prefixes()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix>();
        c->parent = this;
        prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::Prefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"}
        ,
    prefix_list_sequences(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>())
{
    prefix_list_sequences->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::~Prefix()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    ADD_KEY_TOKEN(prefix_list_name, "prefix-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-sequences")
    {
        if(prefix_list_sequences == nullptr)
        {
            prefix_list_sequences = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>();
        }
        return prefix_list_sequences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_list_sequences != nullptr)
    {
        children["prefix-list-sequences"] = prefix_list_sequences;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-sequences" || name == "prefix-list-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequences()
    :
    prefix_list_sequence(this, {"sequence_number"})
{

    yang_name = "prefix-list-sequences"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::~PrefixListSequences()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list_sequence.len(); index++)
    {
        if(prefix_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_sequence.len(); index++)
    {
        if(prefix_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-sequence")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence>();
        c->parent = this;
        prefix_list_sequence.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefix_list_sequence.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-sequence")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::PrefixListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    is_ace_type{YType::enumeration, "is-ace-type"},
    is_ace_sequence_number{YType::uint32, "is-ace-sequence-number"},
    is_packet_allow_or_deny{YType::enumeration, "is-packet-allow-or-deny"},
    is_address_in_numbers{YType::str, "is-address-in-numbers"},
    is_address_mask_length{YType::uint32, "is-address-mask-length"},
    is_length_operator{YType::enumeration, "is-length-operator"},
    is_packet_minimum_length{YType::uint32, "is-packet-minimum-length"},
    is_packet_maximum_length{YType::uint32, "is-packet-maximum-length"},
    hits{YType::uint32, "hits"},
    is_comment_for_entry{YType::str, "is-comment-for-entry"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "prefix-list-sequence"; yang_parent_name = "prefix-list-sequences"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::~PrefixListSequence()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| is_ace_type.is_set
	|| is_ace_sequence_number.is_set
	|| is_packet_allow_or_deny.is_set
	|| is_address_in_numbers.is_set
	|| is_address_mask_length.is_set
	|| is_length_operator.is_set
	|| is_packet_minimum_length.is_set
	|| is_packet_maximum_length.is_set
	|| hits.is_set
	|| is_comment_for_entry.is_set
	|| acl_name.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(is_ace_type.yfilter)
	|| ydk::is_set(is_ace_sequence_number.yfilter)
	|| ydk::is_set(is_packet_allow_or_deny.yfilter)
	|| ydk::is_set(is_address_in_numbers.yfilter)
	|| ydk::is_set(is_address_mask_length.yfilter)
	|| ydk::is_set(is_length_operator.yfilter)
	|| ydk::is_set(is_packet_minimum_length.yfilter)
	|| ydk::is_set(is_packet_maximum_length.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(is_comment_for_entry.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequence";
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (is_ace_type.is_set || is_set(is_ace_type.yfilter)) leaf_name_data.push_back(is_ace_type.get_name_leafdata());
    if (is_ace_sequence_number.is_set || is_set(is_ace_sequence_number.yfilter)) leaf_name_data.push_back(is_ace_sequence_number.get_name_leafdata());
    if (is_packet_allow_or_deny.is_set || is_set(is_packet_allow_or_deny.yfilter)) leaf_name_data.push_back(is_packet_allow_or_deny.get_name_leafdata());
    if (is_address_in_numbers.is_set || is_set(is_address_in_numbers.yfilter)) leaf_name_data.push_back(is_address_in_numbers.get_name_leafdata());
    if (is_address_mask_length.is_set || is_set(is_address_mask_length.yfilter)) leaf_name_data.push_back(is_address_mask_length.get_name_leafdata());
    if (is_length_operator.is_set || is_set(is_length_operator.yfilter)) leaf_name_data.push_back(is_length_operator.get_name_leafdata());
    if (is_packet_minimum_length.is_set || is_set(is_packet_minimum_length.yfilter)) leaf_name_data.push_back(is_packet_minimum_length.get_name_leafdata());
    if (is_packet_maximum_length.is_set || is_set(is_packet_maximum_length.yfilter)) leaf_name_data.push_back(is_packet_maximum_length.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (is_comment_for_entry.is_set || is_set(is_comment_for_entry.yfilter)) leaf_name_data.push_back(is_comment_for_entry.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type = value;
        is_ace_type.value_namespace = name_space;
        is_ace_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number = value;
        is_ace_sequence_number.value_namespace = name_space;
        is_ace_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny = value;
        is_packet_allow_or_deny.value_namespace = name_space;
        is_packet_allow_or_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-address-in-numbers")
    {
        is_address_in_numbers = value;
        is_address_in_numbers.value_namespace = name_space;
        is_address_in_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-address-mask-length")
    {
        is_address_mask_length = value;
        is_address_mask_length.value_namespace = name_space;
        is_address_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-length-operator")
    {
        is_length_operator = value;
        is_length_operator.value_namespace = name_space;
        is_length_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-minimum-length")
    {
        is_packet_minimum_length = value;
        is_packet_minimum_length.value_namespace = name_space;
        is_packet_minimum_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-maximum-length")
    {
        is_packet_maximum_length = value;
        is_packet_maximum_length.value_namespace = name_space;
        is_packet_maximum_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry = value;
        is_comment_for_entry.value_namespace = name_space;
        is_comment_for_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type.yfilter = yfilter;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny.yfilter = yfilter;
    }
    if(value_path == "is-address-in-numbers")
    {
        is_address_in_numbers.yfilter = yfilter;
    }
    if(value_path == "is-address-mask-length")
    {
        is_address_mask_length.yfilter = yfilter;
    }
    if(value_path == "is-length-operator")
    {
        is_length_operator.yfilter = yfilter;
    }
    if(value_path == "is-packet-minimum-length")
    {
        is_packet_minimum_length.yfilter = yfilter;
    }
    if(value_path == "is-packet-maximum-length")
    {
        is_packet_maximum_length.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number" || name == "is-ace-type" || name == "is-ace-sequence-number" || name == "is-packet-allow-or-deny" || name == "is-address-in-numbers" || name == "is-address-mask-length" || name == "is-length-operator" || name == "is-packet-minimum-length" || name == "is-packet-maximum-length" || name == "hits" || name == "is-comment-for-entry" || name == "acl-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usages()
    :
    usage(this, {})
{

    yang_name = "usages"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Usages::~Usages()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Usages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages::Usage>();
        c->parent = this;
        usage.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Usages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usage.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::Usage()
    :
    node_name{YType::str, "node-name"},
    application_id{YType::enumeration, "application-id"},
    access_list_name{YType::str, "access-list-name"},
    usage_details{YType::str, "usage-details"}
{

    yang_name = "usage"; yang_parent_name = "usages"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::~Usage()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| application_id.is_set
	|| access_list_name.is_set
	|| usage_details.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(application_id.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(usage_details.yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/usages/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (application_id.is_set || is_set(application_id.yfilter)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.yfilter)) leaf_name_data.push_back(usage_details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-id")
    {
        application_id = value;
        application_id.value_namespace = name_space;
        application_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-details")
    {
        usage_details = value;
        usage_details.value_namespace = name_space;
        usage_details.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "application-id")
    {
        application_id.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "usage-details")
    {
        usage_details.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "application-id" || name == "access-list-name" || name == "usage-details")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Accesses()
    :
    access(this, {"access_list_name"})
{

    yang_name = "accesses"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::~Accesses()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access>();
        c->parent = this;
        access.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
        ,
    access_list_sequences(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>())
{
    access_list_sequences->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::~Access()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-sequences")
    {
        if(access_list_sequences == nullptr)
        {
            access_list_sequences = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>();
        }
        return access_list_sequences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_list_sequences != nullptr)
    {
        children["access-list-sequences"] = access_list_sequences;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-sequences" || name == "access-list-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequences()
    :
    access_list_sequence(this, {"sequence_number"})
{

    yang_name = "access-list-sequences"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::~AccessListSequences()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_sequence.len(); index++)
    {
        if(access_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_operation() const
{
    for (std::size_t index=0; index<access_list_sequence.len(); index++)
    {
        if(access_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-sequence")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence>();
        c->parent = this;
        access_list_sequence.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_list_sequence.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-sequence")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::AccessListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    is_ace_type{YType::enumeration, "is-ace-type"},
    is_ace_sequence_number{YType::uint32, "is-ace-sequence-number"},
    is_packet_allow_or_deny{YType::enumeration, "is-packet-allow-or-deny"},
    is_protocol_operator{YType::enumeration, "is-protocol-operator"},
    is_ipv6_protocol_type{YType::int32, "is-ipv6-protocol-type"},
    is_ipv6_protocol2_type{YType::int32, "is-ipv6-protocol2-type"},
    is_source_address_in_numbers{YType::str, "is-source-address-in-numbers"},
    is_source_address_prefix_length{YType::uint32, "is-source-address-prefix-length"},
    source_mask{YType::str, "source-mask"},
    is_destination_address_in_numbers{YType::str, "is-destination-address-in-numbers"},
    is_destination_address_prefix_length{YType::uint32, "is-destination-address-prefix-length"},
    destination_mask{YType::str, "destination-mask"},
    is_source_operator{YType::enumeration, "is-source-operator"},
    is_source_port1{YType::uint32, "is-source-port1"},
    is_source_port2{YType::uint32, "is-source-port2"},
    is_destination_operator{YType::enumeration, "is-destination-operator"},
    is_destination_port1{YType::uint32, "is-destination-port1"},
    is_destination_port2{YType::uint32, "is-destination-port2"},
    is_log_option{YType::enumeration, "is-log-option"},
    counter_name{YType::str, "counter-name"},
    is_tcp_bits_operator{YType::enumeration, "is-tcp-bits-operator"},
    is_tcp_bits{YType::uint32, "is-tcp-bits"},
    is_tcp_bits_mask{YType::uint32, "is-tcp-bits-mask"},
    is_dscp_present{YType::int32, "is-dscp-present"},
    dscp_operator{YType::uint8, "dscp-operator"},
    is_dscp_valu{YType::uint8, "is-dscp-valu"},
    is_dscp_valu2{YType::uint8, "is-dscp-valu2"},
    is_precedence_present{YType::int32, "is-precedence-present"},
    is_precedence_value{YType::uint32, "is-precedence-value"},
    is_header_matches{YType::uint32, "is-header-matches"},
    is_packet_length_operator{YType::enumeration, "is-packet-length-operator"},
    is_packet_length_start{YType::uint32, "is-packet-length-start"},
    is_packet_length_end{YType::uint32, "is-packet-length-end"},
    is_time_to_live_operator{YType::enumeration, "is-time-to-live-operator"},
    is_time_to_live_start{YType::uint32, "is-time-to-live-start"},
    is_time_to_live_end{YType::uint32, "is-time-to-live-end"},
    no_stats{YType::int32, "no-stats"},
    hits{YType::uint64, "hits"},
    capture{YType::boolean, "capture"},
    undetermined_transport{YType::boolean, "undetermined-transport"},
    is_icmp_message_off{YType::int32, "is-icmp-message-off"},
    qos_group{YType::uint16, "qos-group"},
    is_comment_for_entry{YType::str, "is-comment-for-entry"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    is_flow_id{YType::uint32, "is-flow-id"},
    source_prefix_group{YType::str, "source-prefix-group"},
    destination_prefix_group{YType::str, "destination-prefix-group"},
    source_port_group{YType::str, "source-port-group"},
    destination_port_group{YType::str, "destination-port-group"},
    acl_name{YType::str, "acl-name"},
    sequence_str{YType::str, "sequence-str"},
    set_ttl{YType::uint16, "set-ttl"}
        ,
    hw_next_hop_info(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>())
    , next_hop_info(this, {})
    , udf(this, {})
{
    hw_next_hop_info->parent = this;

    yang_name = "access-list-sequence"; yang_parent_name = "access-list-sequences"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::~AccessListSequence()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_info.len(); index++)
    {
        if(next_hop_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<udf.len(); index++)
    {
        if(udf[index]->has_data())
            return true;
    }
    return sequence_number.is_set
	|| is_ace_type.is_set
	|| is_ace_sequence_number.is_set
	|| is_packet_allow_or_deny.is_set
	|| is_protocol_operator.is_set
	|| is_ipv6_protocol_type.is_set
	|| is_ipv6_protocol2_type.is_set
	|| is_source_address_in_numbers.is_set
	|| is_source_address_prefix_length.is_set
	|| source_mask.is_set
	|| is_destination_address_in_numbers.is_set
	|| is_destination_address_prefix_length.is_set
	|| destination_mask.is_set
	|| is_source_operator.is_set
	|| is_source_port1.is_set
	|| is_source_port2.is_set
	|| is_destination_operator.is_set
	|| is_destination_port1.is_set
	|| is_destination_port2.is_set
	|| is_log_option.is_set
	|| counter_name.is_set
	|| is_tcp_bits_operator.is_set
	|| is_tcp_bits.is_set
	|| is_tcp_bits_mask.is_set
	|| is_dscp_present.is_set
	|| dscp_operator.is_set
	|| is_dscp_valu.is_set
	|| is_dscp_valu2.is_set
	|| is_precedence_present.is_set
	|| is_precedence_value.is_set
	|| is_header_matches.is_set
	|| is_packet_length_operator.is_set
	|| is_packet_length_start.is_set
	|| is_packet_length_end.is_set
	|| is_time_to_live_operator.is_set
	|| is_time_to_live_start.is_set
	|| is_time_to_live_end.is_set
	|| no_stats.is_set
	|| hits.is_set
	|| capture.is_set
	|| undetermined_transport.is_set
	|| is_icmp_message_off.is_set
	|| qos_group.is_set
	|| is_comment_for_entry.is_set
	|| next_hop_type.is_set
	|| is_flow_id.is_set
	|| source_prefix_group.is_set
	|| destination_prefix_group.is_set
	|| source_port_group.is_set
	|| destination_port_group.is_set
	|| acl_name.is_set
	|| sequence_str.is_set
	|| set_ttl.is_set
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_operation() const
{
    for (std::size_t index=0; index<next_hop_info.len(); index++)
    {
        if(next_hop_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<udf.len(); index++)
    {
        if(udf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(is_ace_type.yfilter)
	|| ydk::is_set(is_ace_sequence_number.yfilter)
	|| ydk::is_set(is_packet_allow_or_deny.yfilter)
	|| ydk::is_set(is_protocol_operator.yfilter)
	|| ydk::is_set(is_ipv6_protocol_type.yfilter)
	|| ydk::is_set(is_ipv6_protocol2_type.yfilter)
	|| ydk::is_set(is_source_address_in_numbers.yfilter)
	|| ydk::is_set(is_source_address_prefix_length.yfilter)
	|| ydk::is_set(source_mask.yfilter)
	|| ydk::is_set(is_destination_address_in_numbers.yfilter)
	|| ydk::is_set(is_destination_address_prefix_length.yfilter)
	|| ydk::is_set(destination_mask.yfilter)
	|| ydk::is_set(is_source_operator.yfilter)
	|| ydk::is_set(is_source_port1.yfilter)
	|| ydk::is_set(is_source_port2.yfilter)
	|| ydk::is_set(is_destination_operator.yfilter)
	|| ydk::is_set(is_destination_port1.yfilter)
	|| ydk::is_set(is_destination_port2.yfilter)
	|| ydk::is_set(is_log_option.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(is_tcp_bits_operator.yfilter)
	|| ydk::is_set(is_tcp_bits.yfilter)
	|| ydk::is_set(is_tcp_bits_mask.yfilter)
	|| ydk::is_set(is_dscp_present.yfilter)
	|| ydk::is_set(dscp_operator.yfilter)
	|| ydk::is_set(is_dscp_valu.yfilter)
	|| ydk::is_set(is_dscp_valu2.yfilter)
	|| ydk::is_set(is_precedence_present.yfilter)
	|| ydk::is_set(is_precedence_value.yfilter)
	|| ydk::is_set(is_header_matches.yfilter)
	|| ydk::is_set(is_packet_length_operator.yfilter)
	|| ydk::is_set(is_packet_length_start.yfilter)
	|| ydk::is_set(is_packet_length_end.yfilter)
	|| ydk::is_set(is_time_to_live_operator.yfilter)
	|| ydk::is_set(is_time_to_live_start.yfilter)
	|| ydk::is_set(is_time_to_live_end.yfilter)
	|| ydk::is_set(no_stats.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(capture.yfilter)
	|| ydk::is_set(undetermined_transport.yfilter)
	|| ydk::is_set(is_icmp_message_off.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(is_comment_for_entry.yfilter)
	|| ydk::is_set(next_hop_type.yfilter)
	|| ydk::is_set(is_flow_id.yfilter)
	|| ydk::is_set(source_prefix_group.yfilter)
	|| ydk::is_set(destination_prefix_group.yfilter)
	|| ydk::is_set(source_port_group.yfilter)
	|| ydk::is_set(destination_port_group.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(sequence_str.yfilter)
	|| ydk::is_set(set_ttl.yfilter)
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequence";
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (is_ace_type.is_set || is_set(is_ace_type.yfilter)) leaf_name_data.push_back(is_ace_type.get_name_leafdata());
    if (is_ace_sequence_number.is_set || is_set(is_ace_sequence_number.yfilter)) leaf_name_data.push_back(is_ace_sequence_number.get_name_leafdata());
    if (is_packet_allow_or_deny.is_set || is_set(is_packet_allow_or_deny.yfilter)) leaf_name_data.push_back(is_packet_allow_or_deny.get_name_leafdata());
    if (is_protocol_operator.is_set || is_set(is_protocol_operator.yfilter)) leaf_name_data.push_back(is_protocol_operator.get_name_leafdata());
    if (is_ipv6_protocol_type.is_set || is_set(is_ipv6_protocol_type.yfilter)) leaf_name_data.push_back(is_ipv6_protocol_type.get_name_leafdata());
    if (is_ipv6_protocol2_type.is_set || is_set(is_ipv6_protocol2_type.yfilter)) leaf_name_data.push_back(is_ipv6_protocol2_type.get_name_leafdata());
    if (is_source_address_in_numbers.is_set || is_set(is_source_address_in_numbers.yfilter)) leaf_name_data.push_back(is_source_address_in_numbers.get_name_leafdata());
    if (is_source_address_prefix_length.is_set || is_set(is_source_address_prefix_length.yfilter)) leaf_name_data.push_back(is_source_address_prefix_length.get_name_leafdata());
    if (source_mask.is_set || is_set(source_mask.yfilter)) leaf_name_data.push_back(source_mask.get_name_leafdata());
    if (is_destination_address_in_numbers.is_set || is_set(is_destination_address_in_numbers.yfilter)) leaf_name_data.push_back(is_destination_address_in_numbers.get_name_leafdata());
    if (is_destination_address_prefix_length.is_set || is_set(is_destination_address_prefix_length.yfilter)) leaf_name_data.push_back(is_destination_address_prefix_length.get_name_leafdata());
    if (destination_mask.is_set || is_set(destination_mask.yfilter)) leaf_name_data.push_back(destination_mask.get_name_leafdata());
    if (is_source_operator.is_set || is_set(is_source_operator.yfilter)) leaf_name_data.push_back(is_source_operator.get_name_leafdata());
    if (is_source_port1.is_set || is_set(is_source_port1.yfilter)) leaf_name_data.push_back(is_source_port1.get_name_leafdata());
    if (is_source_port2.is_set || is_set(is_source_port2.yfilter)) leaf_name_data.push_back(is_source_port2.get_name_leafdata());
    if (is_destination_operator.is_set || is_set(is_destination_operator.yfilter)) leaf_name_data.push_back(is_destination_operator.get_name_leafdata());
    if (is_destination_port1.is_set || is_set(is_destination_port1.yfilter)) leaf_name_data.push_back(is_destination_port1.get_name_leafdata());
    if (is_destination_port2.is_set || is_set(is_destination_port2.yfilter)) leaf_name_data.push_back(is_destination_port2.get_name_leafdata());
    if (is_log_option.is_set || is_set(is_log_option.yfilter)) leaf_name_data.push_back(is_log_option.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (is_tcp_bits_operator.is_set || is_set(is_tcp_bits_operator.yfilter)) leaf_name_data.push_back(is_tcp_bits_operator.get_name_leafdata());
    if (is_tcp_bits.is_set || is_set(is_tcp_bits.yfilter)) leaf_name_data.push_back(is_tcp_bits.get_name_leafdata());
    if (is_tcp_bits_mask.is_set || is_set(is_tcp_bits_mask.yfilter)) leaf_name_data.push_back(is_tcp_bits_mask.get_name_leafdata());
    if (is_dscp_present.is_set || is_set(is_dscp_present.yfilter)) leaf_name_data.push_back(is_dscp_present.get_name_leafdata());
    if (dscp_operator.is_set || is_set(dscp_operator.yfilter)) leaf_name_data.push_back(dscp_operator.get_name_leafdata());
    if (is_dscp_valu.is_set || is_set(is_dscp_valu.yfilter)) leaf_name_data.push_back(is_dscp_valu.get_name_leafdata());
    if (is_dscp_valu2.is_set || is_set(is_dscp_valu2.yfilter)) leaf_name_data.push_back(is_dscp_valu2.get_name_leafdata());
    if (is_precedence_present.is_set || is_set(is_precedence_present.yfilter)) leaf_name_data.push_back(is_precedence_present.get_name_leafdata());
    if (is_precedence_value.is_set || is_set(is_precedence_value.yfilter)) leaf_name_data.push_back(is_precedence_value.get_name_leafdata());
    if (is_header_matches.is_set || is_set(is_header_matches.yfilter)) leaf_name_data.push_back(is_header_matches.get_name_leafdata());
    if (is_packet_length_operator.is_set || is_set(is_packet_length_operator.yfilter)) leaf_name_data.push_back(is_packet_length_operator.get_name_leafdata());
    if (is_packet_length_start.is_set || is_set(is_packet_length_start.yfilter)) leaf_name_data.push_back(is_packet_length_start.get_name_leafdata());
    if (is_packet_length_end.is_set || is_set(is_packet_length_end.yfilter)) leaf_name_data.push_back(is_packet_length_end.get_name_leafdata());
    if (is_time_to_live_operator.is_set || is_set(is_time_to_live_operator.yfilter)) leaf_name_data.push_back(is_time_to_live_operator.get_name_leafdata());
    if (is_time_to_live_start.is_set || is_set(is_time_to_live_start.yfilter)) leaf_name_data.push_back(is_time_to_live_start.get_name_leafdata());
    if (is_time_to_live_end.is_set || is_set(is_time_to_live_end.yfilter)) leaf_name_data.push_back(is_time_to_live_end.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.yfilter)) leaf_name_data.push_back(no_stats.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (capture.is_set || is_set(capture.yfilter)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (undetermined_transport.is_set || is_set(undetermined_transport.yfilter)) leaf_name_data.push_back(undetermined_transport.get_name_leafdata());
    if (is_icmp_message_off.is_set || is_set(is_icmp_message_off.yfilter)) leaf_name_data.push_back(is_icmp_message_off.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (is_comment_for_entry.is_set || is_set(is_comment_for_entry.yfilter)) leaf_name_data.push_back(is_comment_for_entry.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (is_flow_id.is_set || is_set(is_flow_id.yfilter)) leaf_name_data.push_back(is_flow_id.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.yfilter)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.yfilter)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.yfilter)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.yfilter)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.yfilter)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (set_ttl.is_set || is_set(set_ttl.yfilter)) leaf_name_data.push_back(set_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-next-hop-info")
    {
        if(hw_next_hop_info == nullptr)
        {
            hw_next_hop_info = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>();
        }
        return hw_next_hop_info;
    }

    if(child_yang_name == "next-hop-info")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo>();
        c->parent = this;
        next_hop_info.append(c);
        return c;
    }

    if(child_yang_name == "udf")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf>();
        c->parent = this;
        udf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hw_next_hop_info != nullptr)
    {
        children["hw-next-hop-info"] = hw_next_hop_info;
    }

    count = 0;
    for (auto c : next_hop_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : udf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type = value;
        is_ace_type.value_namespace = name_space;
        is_ace_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number = value;
        is_ace_sequence_number.value_namespace = name_space;
        is_ace_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny = value;
        is_packet_allow_or_deny.value_namespace = name_space;
        is_packet_allow_or_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protocol-operator")
    {
        is_protocol_operator = value;
        is_protocol_operator.value_namespace = name_space;
        is_protocol_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipv6-protocol-type")
    {
        is_ipv6_protocol_type = value;
        is_ipv6_protocol_type.value_namespace = name_space;
        is_ipv6_protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipv6-protocol2-type")
    {
        is_ipv6_protocol2_type = value;
        is_ipv6_protocol2_type.value_namespace = name_space;
        is_ipv6_protocol2_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-source-address-in-numbers")
    {
        is_source_address_in_numbers = value;
        is_source_address_in_numbers.value_namespace = name_space;
        is_source_address_in_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-source-address-prefix-length")
    {
        is_source_address_prefix_length = value;
        is_source_address_prefix_length.value_namespace = name_space;
        is_source_address_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mask")
    {
        source_mask = value;
        source_mask.value_namespace = name_space;
        source_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-address-in-numbers")
    {
        is_destination_address_in_numbers = value;
        is_destination_address_in_numbers.value_namespace = name_space;
        is_destination_address_in_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-address-prefix-length")
    {
        is_destination_address_prefix_length = value;
        is_destination_address_prefix_length.value_namespace = name_space;
        is_destination_address_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mask")
    {
        destination_mask = value;
        destination_mask.value_namespace = name_space;
        destination_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-source-operator")
    {
        is_source_operator = value;
        is_source_operator.value_namespace = name_space;
        is_source_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-source-port1")
    {
        is_source_port1 = value;
        is_source_port1.value_namespace = name_space;
        is_source_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-source-port2")
    {
        is_source_port2 = value;
        is_source_port2.value_namespace = name_space;
        is_source_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-operator")
    {
        is_destination_operator = value;
        is_destination_operator.value_namespace = name_space;
        is_destination_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-port1")
    {
        is_destination_port1 = value;
        is_destination_port1.value_namespace = name_space;
        is_destination_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-port2")
    {
        is_destination_port2 = value;
        is_destination_port2.value_namespace = name_space;
        is_destination_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-log-option")
    {
        is_log_option = value;
        is_log_option.value_namespace = name_space;
        is_log_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tcp-bits-operator")
    {
        is_tcp_bits_operator = value;
        is_tcp_bits_operator.value_namespace = name_space;
        is_tcp_bits_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tcp-bits")
    {
        is_tcp_bits = value;
        is_tcp_bits.value_namespace = name_space;
        is_tcp_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tcp-bits-mask")
    {
        is_tcp_bits_mask = value;
        is_tcp_bits_mask.value_namespace = name_space;
        is_tcp_bits_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dscp-present")
    {
        is_dscp_present = value;
        is_dscp_present.value_namespace = name_space;
        is_dscp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-operator")
    {
        dscp_operator = value;
        dscp_operator.value_namespace = name_space;
        dscp_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dscp-valu")
    {
        is_dscp_valu = value;
        is_dscp_valu.value_namespace = name_space;
        is_dscp_valu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dscp-valu2")
    {
        is_dscp_valu2 = value;
        is_dscp_valu2.value_namespace = name_space;
        is_dscp_valu2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-precedence-present")
    {
        is_precedence_present = value;
        is_precedence_present.value_namespace = name_space;
        is_precedence_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-precedence-value")
    {
        is_precedence_value = value;
        is_precedence_value.value_namespace = name_space;
        is_precedence_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-header-matches")
    {
        is_header_matches = value;
        is_header_matches.value_namespace = name_space;
        is_header_matches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-length-operator")
    {
        is_packet_length_operator = value;
        is_packet_length_operator.value_namespace = name_space;
        is_packet_length_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-length-start")
    {
        is_packet_length_start = value;
        is_packet_length_start.value_namespace = name_space;
        is_packet_length_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-length-end")
    {
        is_packet_length_end = value;
        is_packet_length_end.value_namespace = name_space;
        is_packet_length_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-time-to-live-operator")
    {
        is_time_to_live_operator = value;
        is_time_to_live_operator.value_namespace = name_space;
        is_time_to_live_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-time-to-live-start")
    {
        is_time_to_live_start = value;
        is_time_to_live_start.value_namespace = name_space;
        is_time_to_live_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-time-to-live-end")
    {
        is_time_to_live_end = value;
        is_time_to_live_end.value_namespace = name_space;
        is_time_to_live_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-stats")
    {
        no_stats = value;
        no_stats.value_namespace = name_space;
        no_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-icmp-message-off")
    {
        is_icmp_message_off = value;
        is_icmp_message_off.value_namespace = name_space;
        is_icmp_message_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry = value;
        is_comment_for_entry.value_namespace = name_space;
        is_comment_for_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-id")
    {
        is_flow_id = value;
        is_flow_id.value_namespace = name_space;
        is_flow_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
        sequence_str.value_namespace = name_space;
        sequence_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-ttl")
    {
        set_ttl = value;
        set_ttl.value_namespace = name_space;
        set_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type.yfilter = yfilter;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny.yfilter = yfilter;
    }
    if(value_path == "is-protocol-operator")
    {
        is_protocol_operator.yfilter = yfilter;
    }
    if(value_path == "is-ipv6-protocol-type")
    {
        is_ipv6_protocol_type.yfilter = yfilter;
    }
    if(value_path == "is-ipv6-protocol2-type")
    {
        is_ipv6_protocol2_type.yfilter = yfilter;
    }
    if(value_path == "is-source-address-in-numbers")
    {
        is_source_address_in_numbers.yfilter = yfilter;
    }
    if(value_path == "is-source-address-prefix-length")
    {
        is_source_address_prefix_length.yfilter = yfilter;
    }
    if(value_path == "source-mask")
    {
        source_mask.yfilter = yfilter;
    }
    if(value_path == "is-destination-address-in-numbers")
    {
        is_destination_address_in_numbers.yfilter = yfilter;
    }
    if(value_path == "is-destination-address-prefix-length")
    {
        is_destination_address_prefix_length.yfilter = yfilter;
    }
    if(value_path == "destination-mask")
    {
        destination_mask.yfilter = yfilter;
    }
    if(value_path == "is-source-operator")
    {
        is_source_operator.yfilter = yfilter;
    }
    if(value_path == "is-source-port1")
    {
        is_source_port1.yfilter = yfilter;
    }
    if(value_path == "is-source-port2")
    {
        is_source_port2.yfilter = yfilter;
    }
    if(value_path == "is-destination-operator")
    {
        is_destination_operator.yfilter = yfilter;
    }
    if(value_path == "is-destination-port1")
    {
        is_destination_port1.yfilter = yfilter;
    }
    if(value_path == "is-destination-port2")
    {
        is_destination_port2.yfilter = yfilter;
    }
    if(value_path == "is-log-option")
    {
        is_log_option.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "is-tcp-bits-operator")
    {
        is_tcp_bits_operator.yfilter = yfilter;
    }
    if(value_path == "is-tcp-bits")
    {
        is_tcp_bits.yfilter = yfilter;
    }
    if(value_path == "is-tcp-bits-mask")
    {
        is_tcp_bits_mask.yfilter = yfilter;
    }
    if(value_path == "is-dscp-present")
    {
        is_dscp_present.yfilter = yfilter;
    }
    if(value_path == "dscp-operator")
    {
        dscp_operator.yfilter = yfilter;
    }
    if(value_path == "is-dscp-valu")
    {
        is_dscp_valu.yfilter = yfilter;
    }
    if(value_path == "is-dscp-valu2")
    {
        is_dscp_valu2.yfilter = yfilter;
    }
    if(value_path == "is-precedence-present")
    {
        is_precedence_present.yfilter = yfilter;
    }
    if(value_path == "is-precedence-value")
    {
        is_precedence_value.yfilter = yfilter;
    }
    if(value_path == "is-header-matches")
    {
        is_header_matches.yfilter = yfilter;
    }
    if(value_path == "is-packet-length-operator")
    {
        is_packet_length_operator.yfilter = yfilter;
    }
    if(value_path == "is-packet-length-start")
    {
        is_packet_length_start.yfilter = yfilter;
    }
    if(value_path == "is-packet-length-end")
    {
        is_packet_length_end.yfilter = yfilter;
    }
    if(value_path == "is-time-to-live-operator")
    {
        is_time_to_live_operator.yfilter = yfilter;
    }
    if(value_path == "is-time-to-live-start")
    {
        is_time_to_live_start.yfilter = yfilter;
    }
    if(value_path == "is-time-to-live-end")
    {
        is_time_to_live_end.yfilter = yfilter;
    }
    if(value_path == "no-stats")
    {
        no_stats.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "capture")
    {
        capture.yfilter = yfilter;
    }
    if(value_path == "undetermined-transport")
    {
        undetermined_transport.yfilter = yfilter;
    }
    if(value_path == "is-icmp-message-off")
    {
        is_icmp_message_off.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry.yfilter = yfilter;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
    if(value_path == "is-flow-id")
    {
        is_flow_id.yfilter = yfilter;
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
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "sequence-str")
    {
        sequence_str.yfilter = yfilter;
    }
    if(value_path == "set-ttl")
    {
        set_ttl.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-next-hop-info" || name == "next-hop-info" || name == "udf" || name == "sequence-number" || name == "is-ace-type" || name == "is-ace-sequence-number" || name == "is-packet-allow-or-deny" || name == "is-protocol-operator" || name == "is-ipv6-protocol-type" || name == "is-ipv6-protocol2-type" || name == "is-source-address-in-numbers" || name == "is-source-address-prefix-length" || name == "source-mask" || name == "is-destination-address-in-numbers" || name == "is-destination-address-prefix-length" || name == "destination-mask" || name == "is-source-operator" || name == "is-source-port1" || name == "is-source-port2" || name == "is-destination-operator" || name == "is-destination-port1" || name == "is-destination-port2" || name == "is-log-option" || name == "counter-name" || name == "is-tcp-bits-operator" || name == "is-tcp-bits" || name == "is-tcp-bits-mask" || name == "is-dscp-present" || name == "dscp-operator" || name == "is-dscp-valu" || name == "is-dscp-valu2" || name == "is-precedence-present" || name == "is-precedence-value" || name == "is-header-matches" || name == "is-packet-length-operator" || name == "is-packet-length-start" || name == "is-packet-length-end" || name == "is-time-to-live-operator" || name == "is-time-to-live-start" || name == "is-time-to-live-end" || name == "no-stats" || name == "hits" || name == "capture" || name == "undetermined-transport" || name == "is-icmp-message-off" || name == "qos-group" || name == "is-comment-for-entry" || name == "next-hop-type" || name == "is-flow-id" || name == "source-prefix-group" || name == "destination-prefix-group" || name == "source-port-group" || name == "destination-port-group" || name == "acl-name" || name == "sequence-str" || name == "set-ttl")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::HwNextHopInfo()
    :
    type{YType::enumeration, "type"},
    next_hop{YType::str, "next-hop"},
    table_id{YType::uint32, "table-id"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "hw-next-hop-info"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::~HwNextHopInfo()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| next_hop.is_set
	|| table_id.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-next-hop-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "next-hop" || name == "table-id" || name == "vrf-name")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::NextHopInfo()
    :
    next_hop{YType::str, "next-hop"},
    vrf_name{YType::str, "vrf-name"},
    track_name{YType::str, "track-name"},
    status{YType::enumeration, "status"},
    at_status{YType::enumeration, "at-status"},
    acl_nh_exist{YType::int32, "acl-nh-exist"}
{

    yang_name = "next-hop-info"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::~NextHopInfo()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| vrf_name.is_set
	|| track_name.is_set
	|| status.is_set
	|| at_status.is_set
	|| acl_nh_exist.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(at_status.yfilter)
	|| ydk::is_set(acl_nh_exist.yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (at_status.is_set || is_set(at_status.yfilter)) leaf_name_data.push_back(at_status.get_name_leafdata());
    if (acl_nh_exist.is_set || is_set(acl_nh_exist.yfilter)) leaf_name_data.push_back(acl_nh_exist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-status")
    {
        at_status = value;
        at_status.value_namespace = name_space;
        at_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-nh-exist")
    {
        acl_nh_exist = value;
        acl_nh_exist.value_namespace = name_space;
        acl_nh_exist.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "at-status")
    {
        at_status.yfilter = yfilter;
    }
    if(value_path == "acl-nh-exist")
    {
        acl_nh_exist.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf-name" || name == "track-name" || name == "status" || name == "at-status" || name == "acl-nh-exist")
        return true;
    return false;
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::Udf()
    :
    udf_name{YType::str, "udf-name"},
    udf_value{YType::uint32, "udf-value"},
    udf_mask{YType::uint32, "udf-mask"}
{

    yang_name = "udf"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::~Udf()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_data() const
{
    if (is_presence_container) return true;
    return udf_name.is_set
	|| udf_value.is_set
	|| udf_mask.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udf_name.yfilter)
	|| ydk::is_set(udf_value.yfilter)
	|| ydk::is_set(udf_mask.yfilter);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udf_name.is_set || is_set(udf_name.yfilter)) leaf_name_data.push_back(udf_name.get_name_leafdata());
    if (udf_value.is_set || is_set(udf_value.yfilter)) leaf_name_data.push_back(udf_value.get_name_leafdata());
    if (udf_mask.is_set || is_set(udf_mask.yfilter)) leaf_name_data.push_back(udf_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udf-name")
    {
        udf_name = value;
        udf_name.value_namespace = name_space;
        udf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf-value")
    {
        udf_value = value;
        udf_value.value_namespace = name_space;
        udf_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf-mask")
    {
        udf_mask = value;
        udf_mask.value_namespace = name_space;
        udf_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udf-name")
    {
        udf_name.yfilter = yfilter;
    }
    if(value_path == "udf-value")
    {
        udf_value.yfilter = yfilter;
    }
    if(value_path == "udf-mask")
    {
        udf_mask.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-name" || name == "udf-value" || name == "udf-mask")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::Oor()
    :
    details(std::make_shared<Ipv6AclAndPrefixList::Oor::Details>())
    , prefix_list_summary(std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary>())
    , oor_accesses(std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses>())
    , oor_prefixes(std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes>())
    , access_list_summary(std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary>())
{
    details->parent = this;
    prefix_list_summary->parent = this;
    oor_accesses->parent = this;
    oor_prefixes->parent = this;
    access_list_summary->parent = this;

    yang_name = "oor"; yang_parent_name = "ipv6-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::~Oor()
{
}

bool Ipv6AclAndPrefixList::Oor::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_data())
	|| (oor_accesses !=  nullptr && oor_accesses->has_data())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_data())
	|| (access_list_summary !=  nullptr && access_list_summary->has_data());
}

bool Ipv6AclAndPrefixList::Oor::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_operation())
	|| (oor_accesses !=  nullptr && oor_accesses->has_operation())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_operation())
	|| (access_list_summary !=  nullptr && access_list_summary->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::Details>();
        }
        return details;
    }

    if(child_yang_name == "prefix-list-summary")
    {
        if(prefix_list_summary == nullptr)
        {
            prefix_list_summary = std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary>();
        }
        return prefix_list_summary;
    }

    if(child_yang_name == "oor-accesses")
    {
        if(oor_accesses == nullptr)
        {
            oor_accesses = std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses>();
        }
        return oor_accesses;
    }

    if(child_yang_name == "oor-prefixes")
    {
        if(oor_prefixes == nullptr)
        {
            oor_prefixes = std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes>();
        }
        return oor_prefixes;
    }

    if(child_yang_name == "access-list-summary")
    {
        if(access_list_summary == nullptr)
        {
            access_list_summary = std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary>();
        }
        return access_list_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    if(prefix_list_summary != nullptr)
    {
        children["prefix-list-summary"] = prefix_list_summary;
    }

    if(oor_accesses != nullptr)
    {
        children["oor-accesses"] = oor_accesses;
    }

    if(oor_prefixes != nullptr)
    {
        children["oor-prefixes"] = oor_prefixes;
    }

    if(access_list_summary != nullptr)
    {
        children["access-list-summary"] = access_list_summary;
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Oor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Oor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "prefix-list-summary" || name == "oor-accesses" || name == "oor-prefixes" || name == "access-list-summary")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::Details::Details()
    :
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::Details::has_data() const
{
    if (is_presence_container) return true;
    return is_default_maximum_configurable_ac_ls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set;
}

bool Ipv6AclAndPrefixList::Oor::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_es.yfilter)
	|| ydk::is_set(is_current_configured_ac_ls.yfilter)
	|| ydk::is_set(is_current_configured_aces.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_acls.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_aces.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_es.yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.yfilter)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.yfilter)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Oor::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
        is_default_maximum_configurable_ac_ls.value_namespace = name_space;
        is_default_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
        is_default_maximum_configurable_ac_es.value_namespace = name_space;
        is_default_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
        is_current_configured_ac_ls.value_namespace = name_space;
        is_current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
        is_current_configured_aces.value_namespace = name_space;
        is_current_configured_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
        is_current_maximum_configurable_acls.value_namespace = name_space;
        is_current_maximum_configurable_acls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
        is_current_maximum_configurable_aces.value_namespace = name_space;
        is_current_maximum_configurable_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
        is_maximum_configurable_ac_ls.value_namespace = name_space;
        is_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
        is_maximum_configurable_ac_es.value_namespace = name_space;
        is_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Oor::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Oor::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-default-maximum-configurable-ac-ls" || name == "is-default-maximum-configurable-ac-es" || name == "is-current-configured-ac-ls" || name == "is-current-configured-aces" || name == "is-current-maximum-configurable-acls" || name == "is-current-maximum-configurable-aces" || name == "is-maximum-configurable-ac-ls" || name == "is-maximum-configurable-ac-es")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::PrefixListSummary()
    :
    details(std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details>())
{
    details->parent = this;

    yang_name = "prefix-list-summary"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::~PrefixListSummary()
{
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::Details()
    :
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "prefix-list-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::has_data() const
{
    if (is_presence_container) return true;
    return is_default_maximum_configurable_ac_ls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set;
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_es.yfilter)
	|| ydk::is_set(is_current_configured_ac_ls.yfilter)
	|| ydk::is_set(is_current_configured_aces.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_acls.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_aces.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_es.yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/prefix-list-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.yfilter)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.yfilter)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
        is_default_maximum_configurable_ac_ls.value_namespace = name_space;
        is_default_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
        is_default_maximum_configurable_ac_es.value_namespace = name_space;
        is_default_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
        is_current_configured_ac_ls.value_namespace = name_space;
        is_current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
        is_current_configured_aces.value_namespace = name_space;
        is_current_configured_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
        is_current_maximum_configurable_acls.value_namespace = name_space;
        is_current_maximum_configurable_acls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
        is_current_maximum_configurable_aces.value_namespace = name_space;
        is_current_maximum_configurable_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
        is_maximum_configurable_ac_ls.value_namespace = name_space;
        is_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
        is_maximum_configurable_ac_es.value_namespace = name_space;
        is_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-default-maximum-configurable-ac-ls" || name == "is-default-maximum-configurable-ac-es" || name == "is-current-configured-ac-ls" || name == "is-current-configured-aces" || name == "is-current-maximum-configurable-acls" || name == "is-current-maximum-configurable-aces" || name == "is-maximum-configurable-ac-ls" || name == "is-maximum-configurable-ac-es")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccesses()
    :
    oor_access(this, {"access_list_name"})
{

    yang_name = "oor-accesses"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::OorAccesses::~OorAccesses()
{
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oor_access.len(); index++)
    {
        if(oor_access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::has_operation() const
{
    for (std::size_t index=0; index<oor_access.len(); index++)
    {
        if(oor_access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::OorAccesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorAccesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-access")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess>();
        c->parent = this;
        oor_access.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::OorAccesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oor_access.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-access")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::OorAccess()
    :
    access_list_name{YType::str, "access-list-name"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"}
{

    yang_name = "oor-access"; yang_parent_name = "oor-accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::~OorAccess()
{
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set;
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_es.yfilter)
	|| ydk::is_set(is_current_configured_ac_ls.yfilter)
	|| ydk::is_set(is_current_configured_aces.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_acls.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_aces.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_es.yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/oor-accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.yfilter)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.yfilter)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
        is_default_maximum_configurable_ac_ls.value_namespace = name_space;
        is_default_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
        is_default_maximum_configurable_ac_es.value_namespace = name_space;
        is_default_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
        is_current_configured_ac_ls.value_namespace = name_space;
        is_current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
        is_current_configured_aces.value_namespace = name_space;
        is_current_configured_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
        is_current_maximum_configurable_acls.value_namespace = name_space;
        is_current_maximum_configurable_acls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
        is_current_maximum_configurable_aces.value_namespace = name_space;
        is_current_maximum_configurable_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
        is_maximum_configurable_ac_ls.value_namespace = name_space;
        is_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
        is_maximum_configurable_ac_es.value_namespace = name_space;
        is_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "is-default-maximum-configurable-ac-ls" || name == "is-default-maximum-configurable-ac-es" || name == "is-current-configured-ac-ls" || name == "is-current-configured-aces" || name == "is-current-maximum-configurable-acls" || name == "is-current-maximum-configurable-aces" || name == "is-maximum-configurable-ac-ls" || name == "is-maximum-configurable-ac-es")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefixes()
    :
    oor_prefix(this, {"prefix_list_name"})
{

    yang_name = "oor-prefixes"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::~OorPrefixes()
{
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oor_prefix.len(); index++)
    {
        if(oor_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::has_operation() const
{
    for (std::size_t index=0; index<oor_prefix.len(); index++)
    {
        if(oor_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::OorPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-prefix")
    {
        auto c = std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix>();
        c->parent = this;
        oor_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::OorPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oor_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-prefix")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::OorPrefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"}
{

    yang_name = "oor-prefix"; yang_parent_name = "oor-prefixes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::~OorPrefix()
{
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set;
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_es.yfilter)
	|| ydk::is_set(is_current_configured_ac_ls.yfilter)
	|| ydk::is_set(is_current_configured_aces.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_acls.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_aces.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_es.yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/oor-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefix";
    ADD_KEY_TOKEN(prefix_list_name, "prefix-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.yfilter)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.yfilter)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
        is_default_maximum_configurable_ac_ls.value_namespace = name_space;
        is_default_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
        is_default_maximum_configurable_ac_es.value_namespace = name_space;
        is_default_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
        is_current_configured_ac_ls.value_namespace = name_space;
        is_current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
        is_current_configured_aces.value_namespace = name_space;
        is_current_configured_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
        is_current_maximum_configurable_acls.value_namespace = name_space;
        is_current_maximum_configurable_acls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
        is_current_maximum_configurable_aces.value_namespace = name_space;
        is_current_maximum_configurable_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
        is_maximum_configurable_ac_ls.value_namespace = name_space;
        is_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
        is_maximum_configurable_ac_es.value_namespace = name_space;
        is_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-name" || name == "is-default-maximum-configurable-ac-ls" || name == "is-default-maximum-configurable-ac-es" || name == "is-current-configured-ac-ls" || name == "is-current-configured-aces" || name == "is-current-maximum-configurable-acls" || name == "is-current-maximum-configurable-aces" || name == "is-maximum-configurable-ac-ls" || name == "is-maximum-configurable-ac-es")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::AccessListSummary()
    :
    details(std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary::Details>())
{
    details->parent = this;

    yang_name = "access-list-summary"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::~AccessListSummary()
{
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::AccessListSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::AccessListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::AccessListSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::Details()
    :
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "access-list-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::has_data() const
{
    if (is_presence_container) return true;
    return is_default_maximum_configurable_ac_ls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set;
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_default_maximum_configurable_ac_es.yfilter)
	|| ydk::is_set(is_current_configured_ac_ls.yfilter)
	|| ydk::is_set(is_current_configured_aces.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_acls.yfilter)
	|| ydk::is_set(is_current_maximum_configurable_aces.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_ls.yfilter)
	|| ydk::is_set(is_maximum_configurable_ac_es.yfilter);
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/access-list-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.yfilter)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.yfilter)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.yfilter)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.yfilter)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
        is_default_maximum_configurable_ac_ls.value_namespace = name_space;
        is_default_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
        is_default_maximum_configurable_ac_es.value_namespace = name_space;
        is_default_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
        is_current_configured_ac_ls.value_namespace = name_space;
        is_current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
        is_current_configured_aces.value_namespace = name_space;
        is_current_configured_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
        is_current_maximum_configurable_acls.value_namespace = name_space;
        is_current_maximum_configurable_acls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
        is_current_maximum_configurable_aces.value_namespace = name_space;
        is_current_maximum_configurable_aces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
        is_maximum_configurable_ac_ls.value_namespace = name_space;
        is_maximum_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
        is_maximum_configurable_ac_es.value_namespace = name_space;
        is_maximum_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls.yfilter = yfilter;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-default-maximum-configurable-ac-ls" || name == "is-default-maximum-configurable-ac-es" || name == "is-current-configured-ac-ls" || name == "is-current-configured-aces" || name == "is-current-maximum-configurable-acls" || name == "is-current-maximum-configurable-aces" || name == "is-maximum-configurable-ac-ls" || name == "is-maximum-configurable-ac-es")
        return true;
    return false;
}

const Enum::YLeaf AclTcpflagsOperator::match_none {0, "match-none"};
const Enum::YLeaf AclTcpflagsOperator::match_all {1, "match-all"};
const Enum::YLeaf AclTcpflagsOperator::match_any_old {2, "match-any-old"};
const Enum::YLeaf AclTcpflagsOperator::match_any {3, "match-any"};

const Enum::YLeaf AclPortOperator::none {0, "none"};
const Enum::YLeaf AclPortOperator::eq {1, "eq"};
const Enum::YLeaf AclPortOperator::gt {2, "gt"};
const Enum::YLeaf AclPortOperator::lt {3, "lt"};
const Enum::YLeaf AclPortOperator::neq {4, "neq"};
const Enum::YLeaf AclPortOperator::range {5, "range"};
const Enum::YLeaf AclPortOperator::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator::twobytes {9, "twobytes"};

const Enum::YLeaf AclAce1::normal {0, "normal"};
const Enum::YLeaf AclAce1::remark {1, "remark"};
const Enum::YLeaf AclAce1::abf {2, "abf"};

const Enum::YLeaf AclPortOperator_::none {0, "none"};
const Enum::YLeaf AclPortOperator_::eq {1, "eq"};
const Enum::YLeaf AclPortOperator_::gt {2, "gt"};
const Enum::YLeaf AclPortOperator_::lt {3, "lt"};
const Enum::YLeaf AclPortOperator_::neq {4, "neq"};
const Enum::YLeaf AclPortOperator_::range {5, "range"};
const Enum::YLeaf AclPortOperator_::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator_::twobytes {9, "twobytes"};

const Enum::YLeaf BagAclNhAtStatus::unknown {0, "unknown"};
const Enum::YLeaf BagAclNhAtStatus::up {1, "up"};
const Enum::YLeaf BagAclNhAtStatus::down {2, "down"};
const Enum::YLeaf BagAclNhAtStatus::not_present {3, "not-present"};
const Enum::YLeaf BagAclNhAtStatus::max {4, "max"};

const Enum::YLeaf BagAclNh::nexthop_none {0, "nexthop-none"};
const Enum::YLeaf BagAclNh::nexthop_default {1, "nexthop-default"};
const Enum::YLeaf BagAclNh::nexthop {2, "nexthop"};

const Enum::YLeaf AclPortOperator__::none {0, "none"};
const Enum::YLeaf AclPortOperator__::eq {1, "eq"};
const Enum::YLeaf AclPortOperator__::gt {2, "gt"};
const Enum::YLeaf AclPortOperator__::lt {3, "lt"};
const Enum::YLeaf AclPortOperator__::neq {4, "neq"};
const Enum::YLeaf AclPortOperator__::range {5, "range"};
const Enum::YLeaf AclPortOperator__::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator__::twobytes {9, "twobytes"};

const Enum::YLeaf AclPortOperator___::none {0, "none"};
const Enum::YLeaf AclPortOperator___::eq {1, "eq"};
const Enum::YLeaf AclPortOperator___::gt {2, "gt"};
const Enum::YLeaf AclPortOperator___::lt {3, "lt"};
const Enum::YLeaf AclPortOperator___::neq {4, "neq"};
const Enum::YLeaf AclPortOperator___::range {5, "range"};
const Enum::YLeaf AclPortOperator___::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator___::twobytes {9, "twobytes"};

const Enum::YLeaf AclAction::deny {0, "deny"};
const Enum::YLeaf AclAction::permit {1, "permit"};
const Enum::YLeaf AclAction::encrypt {2, "encrypt"};
const Enum::YLeaf AclAction::bypass {3, "bypass"};
const Enum::YLeaf AclAction::fallthrough {4, "fallthrough"};
const Enum::YLeaf AclAction::invalid {5, "invalid"};

const Enum::YLeaf BagAclNhStatus::not_present {0, "not-present"};
const Enum::YLeaf BagAclNhStatus::unknown {1, "unknown"};
const Enum::YLeaf BagAclNhStatus::down {2, "down"};
const Enum::YLeaf BagAclNhStatus::up {3, "up"};
const Enum::YLeaf BagAclNhStatus::max {4, "max"};

const Enum::YLeaf AclLog::log_none {0, "log-none"};
const Enum::YLeaf AclLog::log {1, "log"};
const Enum::YLeaf AclLog::log_input {2, "log-input"};

const Enum::YLeaf AclAce1_::normal {0, "normal"};
const Enum::YLeaf AclAce1_::remark {1, "remark"};
const Enum::YLeaf AclAce1_::abf {2, "abf"};


}
}

