
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_acl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_oper {

Ipv4AclAndPrefixList::Ipv4AclAndPrefixList()
    :
    access_list_manager(std::make_shared<Ipv4AclAndPrefixList::AccessListManager>())
    , oor(std::make_shared<Ipv4AclAndPrefixList::Oor>())
{
    access_list_manager->parent = this;
    oor->parent = this;

    yang_name = "ipv4-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv4-acl-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::~Ipv4AclAndPrefixList()
{
}

bool Ipv4AclAndPrefixList::has_data() const
{
    if (is_presence_container) return true;
    return (access_list_manager !=  nullptr && access_list_manager->has_data())
	|| (oor !=  nullptr && oor->has_data());
}

bool Ipv4AclAndPrefixList::has_operation() const
{
    return is_set(yfilter)
	|| (access_list_manager !=  nullptr && access_list_manager->has_operation())
	|| (oor !=  nullptr && oor->has_operation());
}

std::string Ipv4AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-manager")
    {
        if(access_list_manager == nullptr)
        {
            access_list_manager = std::make_shared<Ipv4AclAndPrefixList::AccessListManager>();
        }
        return access_list_manager;
    }

    if(child_yang_name == "oor")
    {
        if(oor == nullptr)
        {
            oor = std::make_shared<Ipv4AclAndPrefixList::Oor>();
        }
        return oor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list_manager != nullptr)
    {
        _children["access-list-manager"] = access_list_manager;
    }

    if(oor != nullptr)
    {
        _children["oor"] = oor;
    }

    return _children;
}

void Ipv4AclAndPrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::clone_ptr() const
{
    return std::make_shared<Ipv4AclAndPrefixList>();
}

std::string Ipv4AclAndPrefixList::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4AclAndPrefixList::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4AclAndPrefixList::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4AclAndPrefixList::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4AclAndPrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-manager" || name == "oor")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::AccessListManager()
    :
    prefixes(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes>())
    , accesses(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses>())
    , usages(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Usages>())
{
    prefixes->parent = this;
    accesses->parent = this;
    usages->parent = this;

    yang_name = "access-list-manager"; yang_parent_name = "ipv4-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::~AccessListManager()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (accesses !=  nullptr && accesses->has_data())
	|| (usages !=  nullptr && usages->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (usages !=  nullptr && usages->has_operation());
}

std::string Ipv4AclAndPrefixList::AccessListManager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses>();
        }
        return accesses;
    }

    if(child_yang_name == "usages")
    {
        if(usages == nullptr)
        {
            usages = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Usages>();
        }
        return usages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    if(accesses != nullptr)
    {
        _children["accesses"] = accesses;
    }

    if(usages != nullptr)
    {
        _children["usages"] = usages;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "accesses" || name == "usages")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefixes()
    :
    prefix(this, {"prefix_list_name"})
{

    yang_name = "prefixes"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::~Prefixes()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::Prefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"}
        ,
    prefix_list_sequences(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>())
{
    prefix_list_sequences->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::~Prefix()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_operation());
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    ADD_KEY_TOKEN(prefix_list_name, "prefix-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-sequences")
    {
        if(prefix_list_sequences == nullptr)
        {
            prefix_list_sequences = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>();
        }
        return prefix_list_sequences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_list_sequences != nullptr)
    {
        _children["prefix-list-sequences"] = prefix_list_sequences;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-sequences" || name == "prefix-list-name")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequences()
    :
    prefix_list_sequence(this, {"sequence_number"})
{

    yang_name = "prefix-list-sequences"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::~PrefixListSequences()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list_sequence.len(); index++)
    {
        if(prefix_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_sequence.len(); index++)
    {
        if(prefix_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-sequence")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence>();
        ent_->parent = this;
        prefix_list_sequence.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_list_sequence.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-sequence")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::PrefixListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    item_type{YType::enumeration, "item-type"},
    sequence{YType::uint32, "sequence"},
    grant{YType::enumeration, "grant"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    operator_{YType::enumeration, "operator"},
    minimum_length{YType::uint32, "minimum-length"},
    maximum_length{YType::uint32, "maximum-length"},
    hits{YType::uint32, "hits"},
    remark{YType::str, "remark"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "prefix-list-sequence"; yang_parent_name = "prefix-list-sequences"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::~PrefixListSequence()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| item_type.is_set
	|| sequence.is_set
	|| grant.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| operator_.is_set
	|| minimum_length.is_set
	|| maximum_length.is_set
	|| hits.is_set
	|| remark.is_set
	|| acl_name.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(item_type.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(minimum_length.yfilter)
	|| ydk::is_set(maximum_length.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequence";
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (item_type.is_set || is_set(item_type.yfilter)) leaf_name_data.push_back(item_type.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (minimum_length.is_set || is_set(minimum_length.yfilter)) leaf_name_data.push_back(minimum_length.get_name_leafdata());
    if (maximum_length.is_set || is_set(maximum_length.yfilter)) leaf_name_data.push_back(maximum_length.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-type")
    {
        item_type = value;
        item_type.value_namespace = name_space;
        item_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grant")
    {
        grant = value;
        grant.value_namespace = name_space;
        grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-length")
    {
        minimum_length = value;
        minimum_length.value_namespace = name_space;
        minimum_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-length")
    {
        maximum_length = value;
        maximum_length.value_namespace = name_space;
        maximum_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "item-type")
    {
        item_type.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "grant")
    {
        grant.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "minimum-length")
    {
        minimum_length.yfilter = yfilter;
    }
    if(value_path == "maximum-length")
    {
        maximum_length.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number" || name == "item-type" || name == "sequence" || name == "grant" || name == "prefix" || name == "prefix-length" || name == "operator" || name == "minimum-length" || name == "maximum-length" || name == "hits" || name == "remark" || name == "acl-name")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Accesses()
    :
    access(this, {"access_list_name"})
{

    yang_name = "accesses"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::~Accesses()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access>();
        ent_->parent = this;
        access.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
        ,
    access_list_sequences(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>())
    , object_group(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup>())
{
    access_list_sequences->parent = this;
    object_group->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::~Access()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_data())
	|| (object_group !=  nullptr && object_group->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_operation())
	|| (object_group !=  nullptr && object_group->has_operation());
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-sequences")
    {
        if(access_list_sequences == nullptr)
        {
            access_list_sequences = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>();
        }
        return access_list_sequences;
    }

    if(child_yang_name == "object-group")
    {
        if(object_group == nullptr)
        {
            object_group = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup>();
        }
        return object_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list_sequences != nullptr)
    {
        _children["access-list-sequences"] = access_list_sequences;
    }

    if(object_group != nullptr)
    {
        _children["object-group"] = object_group;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-sequences" || name == "object-group" || name == "access-list-name")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequences()
    :
    access_list_sequence(this, {"sequence_number"})
{

    yang_name = "access-list-sequences"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::~AccessListSequences()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_list_sequence.len(); index++)
    {
        if(access_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_operation() const
{
    for (std::size_t index=0; index<access_list_sequence.len(); index++)
    {
        if(access_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-sequence")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence>();
        ent_->parent = this;
        access_list_sequence.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_list_sequence.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-sequence")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::AccessListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    item_type{YType::enumeration, "item-type"},
    sequence{YType::uint32, "sequence"},
    grant{YType::enumeration, "grant"},
    protocol_operator{YType::uint16, "protocol-operator"},
    protocol{YType::uint16, "protocol"},
    protocol2{YType::uint16, "protocol2"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    destination_address{YType::str, "destination-address"},
    destination_address_mask{YType::str, "destination-address-mask"},
    source_operator{YType::enumeration, "source-operator"},
    source_port1{YType::uint16, "source-port1"},
    source_port2{YType::uint16, "source-port2"},
    sorce_operator{YType::enumeration, "sorce-operator"},
    sorce_port1{YType::uint16, "sorce-port1"},
    sorce_port2{YType::uint16, "sorce-port2"},
    destination_operator{YType::enumeration, "destination-operator"},
    destination_port1{YType::uint16, "destination-port1"},
    destination_port2{YType::uint16, "destination-port2"},
    log_option{YType::enumeration, "log-option"},
    counter_name{YType::str, "counter-name"},
    capture{YType::boolean, "capture"},
    dscp_present{YType::boolean, "dscp-present"},
    dscp{YType::uint8, "dscp"},
    dscp2{YType::uint8, "dscp2"},
    dscp_operator{YType::uint8, "dscp-operator"},
    precedence_present{YType::boolean, "precedence-present"},
    precedence{YType::uint8, "precedence"},
    tcp_flags_operator{YType::enumeration, "tcp-flags-operator"},
    tcp_flags{YType::uint8, "tcp-flags"},
    tcp_flags_mask{YType::uint8, "tcp-flags-mask"},
    fragments{YType::uint8, "fragments"},
    packet_length_operator{YType::enumeration, "packet-length-operator"},
    packet_length1{YType::uint16, "packet-length1"},
    packet_length2{YType::uint16, "packet-length2"},
    ttl_operator{YType::enumeration, "ttl-operator"},
    ttl1{YType::uint16, "ttl1"},
    ttl2{YType::uint16, "ttl2"},
    no_stats{YType::boolean, "no-stats"},
    hits{YType::uint64, "hits"},
    is_icmp_off{YType::boolean, "is-icmp-off"},
    qos_group{YType::uint16, "qos-group"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    remark{YType::str, "remark"},
    dynamic{YType::boolean, "dynamic"},
    source_prefix_group{YType::str, "source-prefix-group"},
    destination_prefix_group{YType::str, "destination-prefix-group"},
    source_port_group{YType::str, "source-port-group"},
    destination_port_group{YType::str, "destination-port-group"},
    acl_name{YType::str, "acl-name"},
    sequence_str{YType::str, "sequence-str"},
    fragment_offset_operator{YType::enumeration, "fragment-offset-operator"},
    fragment_offset1{YType::uint16, "fragment-offset1"},
    fragment_offset2{YType::uint16, "fragment-offset2"},
    set_ttl{YType::uint16, "set-ttl"},
    fragment_flags{YType::uint8, "fragment-flags"}
        ,
    hw_next_hop_info(std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>())
    , next_hop_info(this, {})
    , udf(this, {})
{
    hw_next_hop_info->parent = this;

    yang_name = "access-list-sequence"; yang_parent_name = "access-list-sequences"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::~AccessListSequence()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_data() const
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
	|| item_type.is_set
	|| sequence.is_set
	|| grant.is_set
	|| protocol_operator.is_set
	|| protocol.is_set
	|| protocol2.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| destination_address.is_set
	|| destination_address_mask.is_set
	|| source_operator.is_set
	|| source_port1.is_set
	|| source_port2.is_set
	|| sorce_operator.is_set
	|| sorce_port1.is_set
	|| sorce_port2.is_set
	|| destination_operator.is_set
	|| destination_port1.is_set
	|| destination_port2.is_set
	|| log_option.is_set
	|| counter_name.is_set
	|| capture.is_set
	|| dscp_present.is_set
	|| dscp.is_set
	|| dscp2.is_set
	|| dscp_operator.is_set
	|| precedence_present.is_set
	|| precedence.is_set
	|| tcp_flags_operator.is_set
	|| tcp_flags.is_set
	|| tcp_flags_mask.is_set
	|| fragments.is_set
	|| packet_length_operator.is_set
	|| packet_length1.is_set
	|| packet_length2.is_set
	|| ttl_operator.is_set
	|| ttl1.is_set
	|| ttl2.is_set
	|| no_stats.is_set
	|| hits.is_set
	|| is_icmp_off.is_set
	|| qos_group.is_set
	|| next_hop_type.is_set
	|| remark.is_set
	|| dynamic.is_set
	|| source_prefix_group.is_set
	|| destination_prefix_group.is_set
	|| source_port_group.is_set
	|| destination_port_group.is_set
	|| acl_name.is_set
	|| sequence_str.is_set
	|| fragment_offset_operator.is_set
	|| fragment_offset1.is_set
	|| fragment_offset2.is_set
	|| set_ttl.is_set
	|| fragment_flags.is_set
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_operation() const
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
	|| ydk::is_set(item_type.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(grant.yfilter)
	|| ydk::is_set(protocol_operator.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_mask.yfilter)
	|| ydk::is_set(source_operator.yfilter)
	|| ydk::is_set(source_port1.yfilter)
	|| ydk::is_set(source_port2.yfilter)
	|| ydk::is_set(sorce_operator.yfilter)
	|| ydk::is_set(sorce_port1.yfilter)
	|| ydk::is_set(sorce_port2.yfilter)
	|| ydk::is_set(destination_operator.yfilter)
	|| ydk::is_set(destination_port1.yfilter)
	|| ydk::is_set(destination_port2.yfilter)
	|| ydk::is_set(log_option.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(capture.yfilter)
	|| ydk::is_set(dscp_present.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dscp2.yfilter)
	|| ydk::is_set(dscp_operator.yfilter)
	|| ydk::is_set(precedence_present.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(tcp_flags_operator.yfilter)
	|| ydk::is_set(tcp_flags.yfilter)
	|| ydk::is_set(tcp_flags_mask.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(packet_length_operator.yfilter)
	|| ydk::is_set(packet_length1.yfilter)
	|| ydk::is_set(packet_length2.yfilter)
	|| ydk::is_set(ttl_operator.yfilter)
	|| ydk::is_set(ttl1.yfilter)
	|| ydk::is_set(ttl2.yfilter)
	|| ydk::is_set(no_stats.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(is_icmp_off.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(next_hop_type.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(source_prefix_group.yfilter)
	|| ydk::is_set(destination_prefix_group.yfilter)
	|| ydk::is_set(source_port_group.yfilter)
	|| ydk::is_set(destination_port_group.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(sequence_str.yfilter)
	|| ydk::is_set(fragment_offset_operator.yfilter)
	|| ydk::is_set(fragment_offset1.yfilter)
	|| ydk::is_set(fragment_offset2.yfilter)
	|| ydk::is_set(set_ttl.yfilter)
	|| ydk::is_set(fragment_flags.yfilter)
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_operation());
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequence";
    ADD_KEY_TOKEN(sequence_number, "sequence-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (item_type.is_set || is_set(item_type.yfilter)) leaf_name_data.push_back(item_type.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (grant.is_set || is_set(grant.yfilter)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (protocol_operator.is_set || is_set(protocol_operator.yfilter)) leaf_name_data.push_back(protocol_operator.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.yfilter)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (source_operator.is_set || is_set(source_operator.yfilter)) leaf_name_data.push_back(source_operator.get_name_leafdata());
    if (source_port1.is_set || is_set(source_port1.yfilter)) leaf_name_data.push_back(source_port1.get_name_leafdata());
    if (source_port2.is_set || is_set(source_port2.yfilter)) leaf_name_data.push_back(source_port2.get_name_leafdata());
    if (sorce_operator.is_set || is_set(sorce_operator.yfilter)) leaf_name_data.push_back(sorce_operator.get_name_leafdata());
    if (sorce_port1.is_set || is_set(sorce_port1.yfilter)) leaf_name_data.push_back(sorce_port1.get_name_leafdata());
    if (sorce_port2.is_set || is_set(sorce_port2.yfilter)) leaf_name_data.push_back(sorce_port2.get_name_leafdata());
    if (destination_operator.is_set || is_set(destination_operator.yfilter)) leaf_name_data.push_back(destination_operator.get_name_leafdata());
    if (destination_port1.is_set || is_set(destination_port1.yfilter)) leaf_name_data.push_back(destination_port1.get_name_leafdata());
    if (destination_port2.is_set || is_set(destination_port2.yfilter)) leaf_name_data.push_back(destination_port2.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.yfilter)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (capture.is_set || is_set(capture.yfilter)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (dscp_present.is_set || is_set(dscp_present.yfilter)) leaf_name_data.push_back(dscp_present.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dscp2.is_set || is_set(dscp2.yfilter)) leaf_name_data.push_back(dscp2.get_name_leafdata());
    if (dscp_operator.is_set || is_set(dscp_operator.yfilter)) leaf_name_data.push_back(dscp_operator.get_name_leafdata());
    if (precedence_present.is_set || is_set(precedence_present.yfilter)) leaf_name_data.push_back(precedence_present.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (tcp_flags_operator.is_set || is_set(tcp_flags_operator.yfilter)) leaf_name_data.push_back(tcp_flags_operator.get_name_leafdata());
    if (tcp_flags.is_set || is_set(tcp_flags.yfilter)) leaf_name_data.push_back(tcp_flags.get_name_leafdata());
    if (tcp_flags_mask.is_set || is_set(tcp_flags_mask.yfilter)) leaf_name_data.push_back(tcp_flags_mask.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (packet_length_operator.is_set || is_set(packet_length_operator.yfilter)) leaf_name_data.push_back(packet_length_operator.get_name_leafdata());
    if (packet_length1.is_set || is_set(packet_length1.yfilter)) leaf_name_data.push_back(packet_length1.get_name_leafdata());
    if (packet_length2.is_set || is_set(packet_length2.yfilter)) leaf_name_data.push_back(packet_length2.get_name_leafdata());
    if (ttl_operator.is_set || is_set(ttl_operator.yfilter)) leaf_name_data.push_back(ttl_operator.get_name_leafdata());
    if (ttl1.is_set || is_set(ttl1.yfilter)) leaf_name_data.push_back(ttl1.get_name_leafdata());
    if (ttl2.is_set || is_set(ttl2.yfilter)) leaf_name_data.push_back(ttl2.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.yfilter)) leaf_name_data.push_back(no_stats.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (is_icmp_off.is_set || is_set(is_icmp_off.yfilter)) leaf_name_data.push_back(is_icmp_off.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.yfilter)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.yfilter)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.yfilter)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.yfilter)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.yfilter)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (fragment_offset_operator.is_set || is_set(fragment_offset_operator.yfilter)) leaf_name_data.push_back(fragment_offset_operator.get_name_leafdata());
    if (fragment_offset1.is_set || is_set(fragment_offset1.yfilter)) leaf_name_data.push_back(fragment_offset1.get_name_leafdata());
    if (fragment_offset2.is_set || is_set(fragment_offset2.yfilter)) leaf_name_data.push_back(fragment_offset2.get_name_leafdata());
    if (set_ttl.is_set || is_set(set_ttl.yfilter)) leaf_name_data.push_back(set_ttl.get_name_leafdata());
    if (fragment_flags.is_set || is_set(fragment_flags.yfilter)) leaf_name_data.push_back(fragment_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-next-hop-info")
    {
        if(hw_next_hop_info == nullptr)
        {
            hw_next_hop_info = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>();
        }
        return hw_next_hop_info;
    }

    if(child_yang_name == "next-hop-info")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo>();
        ent_->parent = this;
        next_hop_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "udf")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf>();
        ent_->parent = this;
        udf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_next_hop_info != nullptr)
    {
        _children["hw-next-hop-info"] = hw_next_hop_info;
    }

    count_ = 0;
    for (auto ent_ : next_hop_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : udf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-type")
    {
        item_type = value;
        item_type.value_namespace = name_space;
        item_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
        destination_address_mask.value_namespace = name_space;
        destination_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-operator")
    {
        source_operator = value;
        source_operator.value_namespace = name_space;
        source_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port1")
    {
        source_port1 = value;
        source_port1.value_namespace = name_space;
        source_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port2")
    {
        source_port2 = value;
        source_port2.value_namespace = name_space;
        source_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sorce-operator")
    {
        sorce_operator = value;
        sorce_operator.value_namespace = name_space;
        sorce_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sorce-port1")
    {
        sorce_port1 = value;
        sorce_port1.value_namespace = name_space;
        sorce_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sorce-port2")
    {
        sorce_port2 = value;
        sorce_port2.value_namespace = name_space;
        sorce_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-operator")
    {
        destination_operator = value;
        destination_operator.value_namespace = name_space;
        destination_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port1")
    {
        destination_port1 = value;
        destination_port1.value_namespace = name_space;
        destination_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port2")
    {
        destination_port2 = value;
        destination_port2.value_namespace = name_space;
        destination_port2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-option")
    {
        log_option = value;
        log_option.value_namespace = name_space;
        log_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capture")
    {
        capture = value;
        capture.value_namespace = name_space;
        capture.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-present")
    {
        dscp_present = value;
        dscp_present.value_namespace = name_space;
        dscp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp2")
    {
        dscp2 = value;
        dscp2.value_namespace = name_space;
        dscp2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-operator")
    {
        dscp_operator = value;
        dscp_operator.value_namespace = name_space;
        dscp_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-present")
    {
        precedence_present = value;
        precedence_present.value_namespace = name_space;
        precedence_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flags-operator")
    {
        tcp_flags_operator = value;
        tcp_flags_operator.value_namespace = name_space;
        tcp_flags_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flags")
    {
        tcp_flags = value;
        tcp_flags.value_namespace = name_space;
        tcp_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flags-mask")
    {
        tcp_flags_mask = value;
        tcp_flags_mask.value_namespace = name_space;
        tcp_flags_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length-operator")
    {
        packet_length_operator = value;
        packet_length_operator.value_namespace = name_space;
        packet_length_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length1")
    {
        packet_length1 = value;
        packet_length1.value_namespace = name_space;
        packet_length1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length2")
    {
        packet_length2 = value;
        packet_length2.value_namespace = name_space;
        packet_length2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-operator")
    {
        ttl_operator = value;
        ttl_operator.value_namespace = name_space;
        ttl_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl1")
    {
        ttl1 = value;
        ttl1.value_namespace = name_space;
        ttl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl2")
    {
        ttl2 = value;
        ttl2.value_namespace = name_space;
        ttl2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-icmp-off")
    {
        is_icmp_off = value;
        is_icmp_off.value_namespace = name_space;
        is_icmp_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fragment-offset-operator")
    {
        fragment_offset_operator = value;
        fragment_offset_operator.value_namespace = name_space;
        fragment_offset_operator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-offset1")
    {
        fragment_offset1 = value;
        fragment_offset1.value_namespace = name_space;
        fragment_offset1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-offset2")
    {
        fragment_offset2 = value;
        fragment_offset2.value_namespace = name_space;
        fragment_offset2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-ttl")
    {
        set_ttl = value;
        set_ttl.value_namespace = name_space;
        set_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-flags")
    {
        fragment_flags = value;
        fragment_flags.value_namespace = name_space;
        fragment_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "item-type")
    {
        item_type.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
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
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-operator")
    {
        source_operator.yfilter = yfilter;
    }
    if(value_path == "source-port1")
    {
        source_port1.yfilter = yfilter;
    }
    if(value_path == "source-port2")
    {
        source_port2.yfilter = yfilter;
    }
    if(value_path == "sorce-operator")
    {
        sorce_operator.yfilter = yfilter;
    }
    if(value_path == "sorce-port1")
    {
        sorce_port1.yfilter = yfilter;
    }
    if(value_path == "sorce-port2")
    {
        sorce_port2.yfilter = yfilter;
    }
    if(value_path == "destination-operator")
    {
        destination_operator.yfilter = yfilter;
    }
    if(value_path == "destination-port1")
    {
        destination_port1.yfilter = yfilter;
    }
    if(value_path == "destination-port2")
    {
        destination_port2.yfilter = yfilter;
    }
    if(value_path == "log-option")
    {
        log_option.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "capture")
    {
        capture.yfilter = yfilter;
    }
    if(value_path == "dscp-present")
    {
        dscp_present.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "dscp2")
    {
        dscp2.yfilter = yfilter;
    }
    if(value_path == "dscp-operator")
    {
        dscp_operator.yfilter = yfilter;
    }
    if(value_path == "precedence-present")
    {
        precedence_present.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "tcp-flags-operator")
    {
        tcp_flags_operator.yfilter = yfilter;
    }
    if(value_path == "tcp-flags")
    {
        tcp_flags.yfilter = yfilter;
    }
    if(value_path == "tcp-flags-mask")
    {
        tcp_flags_mask.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "packet-length-operator")
    {
        packet_length_operator.yfilter = yfilter;
    }
    if(value_path == "packet-length1")
    {
        packet_length1.yfilter = yfilter;
    }
    if(value_path == "packet-length2")
    {
        packet_length2.yfilter = yfilter;
    }
    if(value_path == "ttl-operator")
    {
        ttl_operator.yfilter = yfilter;
    }
    if(value_path == "ttl1")
    {
        ttl1.yfilter = yfilter;
    }
    if(value_path == "ttl2")
    {
        ttl2.yfilter = yfilter;
    }
    if(value_path == "no-stats")
    {
        no_stats.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "is-icmp-off")
    {
        is_icmp_off.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
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
    if(value_path == "fragment-offset-operator")
    {
        fragment_offset_operator.yfilter = yfilter;
    }
    if(value_path == "fragment-offset1")
    {
        fragment_offset1.yfilter = yfilter;
    }
    if(value_path == "fragment-offset2")
    {
        fragment_offset2.yfilter = yfilter;
    }
    if(value_path == "set-ttl")
    {
        set_ttl.yfilter = yfilter;
    }
    if(value_path == "fragment-flags")
    {
        fragment_flags.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-next-hop-info" || name == "next-hop-info" || name == "udf" || name == "sequence-number" || name == "item-type" || name == "sequence" || name == "grant" || name == "protocol-operator" || name == "protocol" || name == "protocol2" || name == "source-address" || name == "source-address-mask" || name == "destination-address" || name == "destination-address-mask" || name == "source-operator" || name == "source-port1" || name == "source-port2" || name == "sorce-operator" || name == "sorce-port1" || name == "sorce-port2" || name == "destination-operator" || name == "destination-port1" || name == "destination-port2" || name == "log-option" || name == "counter-name" || name == "capture" || name == "dscp-present" || name == "dscp" || name == "dscp2" || name == "dscp-operator" || name == "precedence-present" || name == "precedence" || name == "tcp-flags-operator" || name == "tcp-flags" || name == "tcp-flags-mask" || name == "fragments" || name == "packet-length-operator" || name == "packet-length1" || name == "packet-length2" || name == "ttl-operator" || name == "ttl1" || name == "ttl2" || name == "no-stats" || name == "hits" || name == "is-icmp-off" || name == "qos-group" || name == "next-hop-type" || name == "remark" || name == "dynamic" || name == "source-prefix-group" || name == "destination-prefix-group" || name == "source-port-group" || name == "destination-port-group" || name == "acl-name" || name == "sequence-str" || name == "fragment-offset-operator" || name == "fragment-offset1" || name == "fragment-offset2" || name == "set-ttl" || name == "fragment-flags")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::HwNextHopInfo()
    :
    next_hop{YType::uint32, "next-hop"},
    type{YType::enumeration, "type"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "hw-next-hop-info"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::~HwNextHopInfo()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| type.is_set
	|| vrf_name.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-next-hop-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "type" || name == "vrf-name")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::NextHopInfo()
    :
    next_hop{YType::str, "next-hop"},
    track_name{YType::str, "track-name"},
    status{YType::enumeration, "status"},
    at_status{YType::enumeration, "at-status"},
    is_acl_next_hop_exist{YType::boolean, "is-acl-next-hop-exist"}
{

    yang_name = "next-hop-info"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::~NextHopInfo()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| track_name.is_set
	|| status.is_set
	|| at_status.is_set
	|| is_acl_next_hop_exist.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(at_status.yfilter)
	|| ydk::is_set(is_acl_next_hop_exist.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (at_status.is_set || is_set(at_status.yfilter)) leaf_name_data.push_back(at_status.get_name_leafdata());
    if (is_acl_next_hop_exist.is_set || is_set(is_acl_next_hop_exist.yfilter)) leaf_name_data.push_back(is_acl_next_hop_exist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-acl-next-hop-exist")
    {
        is_acl_next_hop_exist = value;
        is_acl_next_hop_exist.value_namespace = name_space;
        is_acl_next_hop_exist.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "is-acl-next-hop-exist")
    {
        is_acl_next_hop_exist.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "track-name" || name == "status" || name == "at-status" || name == "is-acl-next-hop-exist")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::Udf()
    :
    udf_name{YType::str, "udf-name"},
    udf_value{YType::uint32, "udf-value"},
    udf_mask{YType::uint32, "udf-mask"}
{

    yang_name = "udf"; yang_parent_name = "access-list-sequence"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::~Udf()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_data() const
{
    if (is_presence_container) return true;
    return udf_name.is_set
	|| udf_value.is_set
	|| udf_mask.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udf_name.yfilter)
	|| ydk::is_set(udf_value.yfilter)
	|| ydk::is_set(udf_mask.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udf_name.is_set || is_set(udf_name.yfilter)) leaf_name_data.push_back(udf_name.get_name_leafdata());
    if (udf_value.is_set || is_set(udf_value.yfilter)) leaf_name_data.push_back(udf_value.get_name_leafdata());
    if (udf_mask.is_set || is_set(udf_mask.yfilter)) leaf_name_data.push_back(udf_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-name" || name == "udf-value" || name == "udf-mask")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjectGroup()
    :
    obj_grp_info(this, {})
{

    yang_name = "object-group"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::~ObjectGroup()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<obj_grp_info.len(); index++)
    {
        if(obj_grp_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::has_operation() const
{
    for (std::size_t index=0; index<obj_grp_info.len(); index++)
    {
        if(obj_grp_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-grp-info")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo>();
        ent_->parent = this;
        obj_grp_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : obj_grp_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-grp-info")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::ObjGrpInfo()
    :
    obj_grp_name{YType::str, "obj-grp-name"},
    obj_grp_type{YType::uint32, "obj-grp-type"}
{

    yang_name = "obj-grp-info"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::~ObjGrpInfo()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::has_data() const
{
    if (is_presence_container) return true;
    return obj_grp_name.is_set
	|| obj_grp_type.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(obj_grp_name.yfilter)
	|| ydk::is_set(obj_grp_type.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-grp-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (obj_grp_name.is_set || is_set(obj_grp_name.yfilter)) leaf_name_data.push_back(obj_grp_name.get_name_leafdata());
    if (obj_grp_type.is_set || is_set(obj_grp_type.yfilter)) leaf_name_data.push_back(obj_grp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "obj-grp-name")
    {
        obj_grp_name = value;
        obj_grp_name.value_namespace = name_space;
        obj_grp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "obj-grp-type")
    {
        obj_grp_type = value;
        obj_grp_type.value_namespace = name_space;
        obj_grp_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "obj-grp-name")
    {
        obj_grp_name.yfilter = yfilter;
    }
    if(value_path == "obj-grp-type")
    {
        obj_grp_type.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-grp-name" || name == "obj-grp-type")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Usages::Usages()
    :
    usage(this, {})
{

    yang_name = "usages"; yang_parent_name = "access-list-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Usages::~Usages()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.len(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Usages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::AccessListManager::Usages::Usage>();
        ent_->parent = this;
        usage.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Usages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usage.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Usages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::AccessListManager::Usages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage")
        return true;
    return false;
}

Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::Usage()
    :
    node_name{YType::str, "node-name"},
    application_id{YType::enumeration, "application-id"},
    access_list_name{YType::str, "access-list-name"},
    usage_details{YType::str, "usage-details"}
{

    yang_name = "usage"; yang_parent_name = "usages"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::~Usage()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| application_id.is_set
	|| access_list_name.is_set
	|| usage_details.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(application_id.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(usage_details.yfilter);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/usages/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (application_id.is_set || is_set(application_id.yfilter)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.yfilter)) leaf_name_data.push_back(usage_details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "application-id" || name == "access-list-name" || name == "usage-details")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::Oor()
    :
    details(std::make_shared<Ipv4AclAndPrefixList::Oor::Details>())
    , oor_prefixes(std::make_shared<Ipv4AclAndPrefixList::Oor::OorPrefixes>())
    , oor_accesses(std::make_shared<Ipv4AclAndPrefixList::Oor::OorAccesses>())
    , access_list_summary(std::make_shared<Ipv4AclAndPrefixList::Oor::AccessListSummary>())
    , prefix_list_summary(std::make_shared<Ipv4AclAndPrefixList::Oor::PrefixListSummary>())
{
    details->parent = this;
    oor_prefixes->parent = this;
    oor_accesses->parent = this;
    access_list_summary->parent = this;
    prefix_list_summary->parent = this;

    yang_name = "oor"; yang_parent_name = "ipv4-acl-and-prefix-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::~Oor()
{
}

bool Ipv4AclAndPrefixList::Oor::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_data())
	|| (oor_accesses !=  nullptr && oor_accesses->has_data())
	|| (access_list_summary !=  nullptr && access_list_summary->has_data())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_data());
}

bool Ipv4AclAndPrefixList::Oor::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_operation())
	|| (oor_accesses !=  nullptr && oor_accesses->has_operation())
	|| (access_list_summary !=  nullptr && access_list_summary->has_operation())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_operation());
}

std::string Ipv4AclAndPrefixList::Oor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv4AclAndPrefixList::Oor::Details>();
        }
        return details;
    }

    if(child_yang_name == "oor-prefixes")
    {
        if(oor_prefixes == nullptr)
        {
            oor_prefixes = std::make_shared<Ipv4AclAndPrefixList::Oor::OorPrefixes>();
        }
        return oor_prefixes;
    }

    if(child_yang_name == "oor-accesses")
    {
        if(oor_accesses == nullptr)
        {
            oor_accesses = std::make_shared<Ipv4AclAndPrefixList::Oor::OorAccesses>();
        }
        return oor_accesses;
    }

    if(child_yang_name == "access-list-summary")
    {
        if(access_list_summary == nullptr)
        {
            access_list_summary = std::make_shared<Ipv4AclAndPrefixList::Oor::AccessListSummary>();
        }
        return access_list_summary;
    }

    if(child_yang_name == "prefix-list-summary")
    {
        if(prefix_list_summary == nullptr)
        {
            prefix_list_summary = std::make_shared<Ipv4AclAndPrefixList::Oor::PrefixListSummary>();
        }
        return prefix_list_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    if(oor_prefixes != nullptr)
    {
        _children["oor-prefixes"] = oor_prefixes;
    }

    if(oor_accesses != nullptr)
    {
        _children["oor-accesses"] = oor_accesses;
    }

    if(access_list_summary != nullptr)
    {
        _children["access-list-summary"] = access_list_summary;
    }

    if(prefix_list_summary != nullptr)
    {
        _children["prefix-list-summary"] = prefix_list_summary;
    }

    return _children;
}

void Ipv4AclAndPrefixList::Oor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::Oor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::Oor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "oor-prefixes" || name == "oor-accesses" || name == "access-list-summary" || name == "prefix-list-summary")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::Details::Details()
    :
    default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
    default_max_ac_es{YType::uint32, "default-max-ac-es"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
    current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
    max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"},
    max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::Details::has_data() const
{
    if (is_presence_container) return true;
    return default_max_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set
	|| max_configurable_ac_es.is_set;
}

bool Ipv4AclAndPrefixList::Oor::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_max_ac_ls.yfilter)
	|| ydk::is_set(default_max_ac_es.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(current_max_configurable_ac_ls.yfilter)
	|| ydk::is_set(current_max_configurable_ac_es.yfilter)
	|| ydk::is_set(max_configurable_ac_ls.yfilter)
	|| ydk::is_set(max_configurable_ac_es.yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.yfilter)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.yfilter)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.yfilter)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::Oor::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
        default_max_ac_ls.value_namespace = name_space;
        default_max_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
        default_max_ac_es.value_namespace = name_space;
        default_max_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
        current_max_configurable_ac_ls.value_namespace = name_space;
        current_max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
        current_max_configurable_ac_es.value_namespace = name_space;
        current_max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
        max_configurable_ac_ls.value_namespace = name_space;
        max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
        max_configurable_ac_es.value_namespace = name_space;
        max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::Oor::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::Oor::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-max-ac-ls" || name == "default-max-ac-es" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "current-max-configurable-ac-ls" || name == "current-max-configurable-ac-es" || name == "max-configurable-ac-ls" || name == "max-configurable-ac-es")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefixes()
    :
    oor_prefix(this, {"prefix_list_name"})
{

    yang_name = "oor-prefixes"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::~OorPrefixes()
{
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oor_prefix.len(); index++)
    {
        if(oor_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::has_operation() const
{
    for (std::size_t index=0; index<oor_prefix.len(); index++)
    {
        if(oor_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::OorPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::OorPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-prefix")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix>();
        ent_->parent = this;
        oor_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::OorPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oor_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-prefix")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::OorPrefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
    default_max_ac_es{YType::uint32, "default-max-ac-es"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
    current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
    max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"},
    max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"}
{

    yang_name = "oor-prefix"; yang_parent_name = "oor-prefixes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::~OorPrefix()
{
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list_name.is_set
	|| default_max_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set
	|| max_configurable_ac_es.is_set;
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list_name.yfilter)
	|| ydk::is_set(default_max_ac_ls.yfilter)
	|| ydk::is_set(default_max_ac_es.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(current_max_configurable_ac_ls.yfilter)
	|| ydk::is_set(current_max_configurable_ac_es.yfilter)
	|| ydk::is_set(max_configurable_ac_ls.yfilter)
	|| ydk::is_set(max_configurable_ac_es.yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/oor-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefix";
    ADD_KEY_TOKEN(prefix_list_name, "prefix-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.yfilter)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.yfilter)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.yfilter)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
        default_max_ac_ls.value_namespace = name_space;
        default_max_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
        default_max_ac_es.value_namespace = name_space;
        default_max_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
        current_max_configurable_ac_ls.value_namespace = name_space;
        current_max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
        current_max_configurable_ac_es.value_namespace = name_space;
        current_max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
        max_configurable_ac_ls.value_namespace = name_space;
        max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
        max_configurable_ac_es.value_namespace = name_space;
        max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-name" || name == "default-max-ac-ls" || name == "default-max-ac-es" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "current-max-configurable-ac-ls" || name == "current-max-configurable-ac-es" || name == "max-configurable-ac-ls" || name == "max-configurable-ac-es")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccesses()
    :
    oor_access(this, {"access_list_name"})
{

    yang_name = "oor-accesses"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::OorAccesses::~OorAccesses()
{
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oor_access.len(); index++)
    {
        if(oor_access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::has_operation() const
{
    for (std::size_t index=0; index<oor_access.len(); index++)
    {
        if(oor_access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::OorAccesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::OorAccesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-access")
    {
        auto ent_ = std::make_shared<Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess>();
        ent_->parent = this;
        oor_access.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::OorAccesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oor_access.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-access")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::OorAccess()
    :
    access_list_name{YType::str, "access-list-name"},
    default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
    default_max_ac_es{YType::uint32, "default-max-ac-es"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
    current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
    max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"},
    max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"}
{

    yang_name = "oor-access"; yang_parent_name = "oor-accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::~OorAccess()
{
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| default_max_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set
	|| max_configurable_ac_es.is_set;
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(default_max_ac_ls.yfilter)
	|| ydk::is_set(default_max_ac_es.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(current_max_configurable_ac_ls.yfilter)
	|| ydk::is_set(current_max_configurable_ac_es.yfilter)
	|| ydk::is_set(max_configurable_ac_ls.yfilter)
	|| ydk::is_set(max_configurable_ac_es.yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/oor-accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.yfilter)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.yfilter)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.yfilter)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
        default_max_ac_ls.value_namespace = name_space;
        default_max_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
        default_max_ac_es.value_namespace = name_space;
        default_max_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
        current_max_configurable_ac_ls.value_namespace = name_space;
        current_max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
        current_max_configurable_ac_es.value_namespace = name_space;
        current_max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
        max_configurable_ac_ls.value_namespace = name_space;
        max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
        max_configurable_ac_es.value_namespace = name_space;
        max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "default-max-ac-ls" || name == "default-max-ac-es" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "current-max-configurable-ac-ls" || name == "current-max-configurable-ac-es" || name == "max-configurable-ac-ls" || name == "max-configurable-ac-es")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::AccessListSummary()
    :
    details(std::make_shared<Ipv4AclAndPrefixList::Oor::AccessListSummary::Details>())
{
    details->parent = this;

    yang_name = "access-list-summary"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::~AccessListSummary()
{
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::AccessListSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::AccessListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv4AclAndPrefixList::Oor::AccessListSummary::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::AccessListSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::Details()
    :
    default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
    default_max_ac_es{YType::uint32, "default-max-ac-es"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
    current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
    max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"},
    max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "access-list-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::has_data() const
{
    if (is_presence_container) return true;
    return default_max_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set
	|| max_configurable_ac_es.is_set;
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_max_ac_ls.yfilter)
	|| ydk::is_set(default_max_ac_es.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(current_max_configurable_ac_ls.yfilter)
	|| ydk::is_set(current_max_configurable_ac_es.yfilter)
	|| ydk::is_set(max_configurable_ac_ls.yfilter)
	|| ydk::is_set(max_configurable_ac_es.yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/access-list-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.yfilter)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.yfilter)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.yfilter)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
        default_max_ac_ls.value_namespace = name_space;
        default_max_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
        default_max_ac_es.value_namespace = name_space;
        default_max_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
        current_max_configurable_ac_ls.value_namespace = name_space;
        current_max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
        current_max_configurable_ac_es.value_namespace = name_space;
        current_max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
        max_configurable_ac_ls.value_namespace = name_space;
        max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
        max_configurable_ac_es.value_namespace = name_space;
        max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-max-ac-ls" || name == "default-max-ac-es" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "current-max-configurable-ac-ls" || name == "current-max-configurable-ac-es" || name == "max-configurable-ac-ls" || name == "max-configurable-ac-es")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::PrefixListSummary()
    :
    details(std::make_shared<Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details>())
{
    details->parent = this;

    yang_name = "prefix-list-summary"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::~PrefixListSummary()
{
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::has_data() const
{
    if (is_presence_container) return true;
    return (details !=  nullptr && details->has_data());
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::Details()
    :
    default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
    default_max_ac_es{YType::uint32, "default-max-ac-es"},
    current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
    current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
    current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
    current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
    max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"},
    max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"}
{

    yang_name = "details"; yang_parent_name = "prefix-list-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::has_data() const
{
    if (is_presence_container) return true;
    return default_max_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_configured_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set
	|| max_configurable_ac_es.is_set;
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_max_ac_ls.yfilter)
	|| ydk::is_set(default_max_ac_es.yfilter)
	|| ydk::is_set(current_configured_ac_ls.yfilter)
	|| ydk::is_set(current_configured_ac_es.yfilter)
	|| ydk::is_set(current_max_configurable_ac_ls.yfilter)
	|| ydk::is_set(current_max_configurable_ac_es.yfilter)
	|| ydk::is_set(max_configurable_ac_ls.yfilter)
	|| ydk::is_set(max_configurable_ac_es.yfilter);
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/prefix-list-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.yfilter)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.yfilter)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.yfilter)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.yfilter)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.yfilter)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.yfilter)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.yfilter)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
        default_max_ac_ls.value_namespace = name_space;
        default_max_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
        default_max_ac_es.value_namespace = name_space;
        default_max_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
        current_configured_ac_ls.value_namespace = name_space;
        current_configured_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
        current_configured_ac_es.value_namespace = name_space;
        current_configured_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
        current_max_configurable_ac_ls.value_namespace = name_space;
        current_max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
        current_max_configurable_ac_es.value_namespace = name_space;
        current_max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
        max_configurable_ac_ls.value_namespace = name_space;
        max_configurable_ac_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
        max_configurable_ac_es.value_namespace = name_space;
        max_configurable_ac_es.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls.yfilter = yfilter;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls.yfilter = yfilter;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es.yfilter = yfilter;
    }
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-max-ac-ls" || name == "default-max-ac-es" || name == "current-configured-ac-ls" || name == "current-configured-ac-es" || name == "current-max-configurable-ac-ls" || name == "current-max-configurable-ac-es" || name == "max-configurable-ac-ls" || name == "max-configurable-ac-es")
        return true;
    return false;
}

const Enum::YLeaf AclPortOperator::none {0, "none"};
const Enum::YLeaf AclPortOperator::eq {1, "eq"};
const Enum::YLeaf AclPortOperator::gt {2, "gt"};
const Enum::YLeaf AclPortOperator::lt {3, "lt"};
const Enum::YLeaf AclPortOperator::neq {4, "neq"};
const Enum::YLeaf AclPortOperator::range {5, "range"};
const Enum::YLeaf AclPortOperator::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator::twobytes {9, "twobytes"};

const Enum::YLeaf BagAclNhAtStatus::unknown {0, "unknown"};
const Enum::YLeaf BagAclNhAtStatus::up {1, "up"};
const Enum::YLeaf BagAclNhAtStatus::down {2, "down"};
const Enum::YLeaf BagAclNhAtStatus::not_present {3, "not-present"};
const Enum::YLeaf BagAclNhAtStatus::max {4, "max"};

const Enum::YLeaf BagAclNhStatus::not_present {0, "not-present"};
const Enum::YLeaf BagAclNhStatus::unknown {1, "unknown"};
const Enum::YLeaf BagAclNhStatus::down {2, "down"};
const Enum::YLeaf BagAclNhStatus::up {3, "up"};
const Enum::YLeaf BagAclNhStatus::max {4, "max"};

const Enum::YLeaf BagAclNh::nexthop_none {0, "nexthop-none"};
const Enum::YLeaf BagAclNh::nexthop_default {1, "nexthop-default"};
const Enum::YLeaf BagAclNh::nexthop {2, "nexthop"};

const Enum::YLeaf AclPortOperator_::none {0, "none"};
const Enum::YLeaf AclPortOperator_::eq {1, "eq"};
const Enum::YLeaf AclPortOperator_::gt {2, "gt"};
const Enum::YLeaf AclPortOperator_::lt {3, "lt"};
const Enum::YLeaf AclPortOperator_::neq {4, "neq"};
const Enum::YLeaf AclPortOperator_::range {5, "range"};
const Enum::YLeaf AclPortOperator_::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator_::twobytes {9, "twobytes"};

const Enum::YLeaf AclPortOperator__::none {0, "none"};
const Enum::YLeaf AclPortOperator__::eq {1, "eq"};
const Enum::YLeaf AclPortOperator__::gt {2, "gt"};
const Enum::YLeaf AclPortOperator__::lt {3, "lt"};
const Enum::YLeaf AclPortOperator__::neq {4, "neq"};
const Enum::YLeaf AclPortOperator__::range {5, "range"};
const Enum::YLeaf AclPortOperator__::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperator__::twobytes {9, "twobytes"};

const Enum::YLeaf AclTcpflagsOperator::match_none {0, "match-none"};
const Enum::YLeaf AclTcpflagsOperator::match_all {1, "match-all"};
const Enum::YLeaf AclTcpflagsOperator::match_any_old {2, "match-any-old"};
const Enum::YLeaf AclTcpflagsOperator::match_any {3, "match-any"};

const Enum::YLeaf AclLog::log_none {0, "log-none"};
const Enum::YLeaf AclLog::log {1, "log"};
const Enum::YLeaf AclLog::log_input {2, "log-input"};

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

const Enum::YLeaf AclAce1::normal {0, "normal"};
const Enum::YLeaf AclAce1::remark {1, "remark"};
const Enum::YLeaf AclAce1::abf {2, "abf"};

const Enum::YLeaf AclAce1_::normal {0, "normal"};
const Enum::YLeaf AclAce1_::remark {1, "remark"};
const Enum::YLeaf AclAce1_::abf {2, "abf"};


}
}

