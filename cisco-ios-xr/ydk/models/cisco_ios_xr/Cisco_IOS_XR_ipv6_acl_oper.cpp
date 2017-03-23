
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_acl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_oper {

Ipv6AclAndPrefixList::Ipv6AclAndPrefixList()
    :
    access_list_manager(std::make_shared<Ipv6AclAndPrefixList::AccessListManager>())
	,oor(std::make_shared<Ipv6AclAndPrefixList::Oor>())
{
    access_list_manager->parent = this;
    children["access-list-manager"] = access_list_manager;

    oor->parent = this;
    children["oor"] = oor;

    yang_name = "ipv6-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv6-acl-oper";
}

Ipv6AclAndPrefixList::~Ipv6AclAndPrefixList()
{
}

bool Ipv6AclAndPrefixList::has_data() const
{
    return (access_list_manager !=  nullptr && access_list_manager->has_data())
	|| (oor !=  nullptr && oor->has_data());
}

bool Ipv6AclAndPrefixList::has_operation() const
{
    return is_set(operation)
	|| (access_list_manager !=  nullptr && access_list_manager->has_operation())
	|| (oor !=  nullptr && oor->has_operation());
}

std::string Ipv6AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-manager")
    {
        if(access_list_manager != nullptr)
        {
            children["access-list-manager"] = access_list_manager;
        }
        else
        {
            access_list_manager = std::make_shared<Ipv6AclAndPrefixList::AccessListManager>();
            access_list_manager->parent = this;
            children["access-list-manager"] = access_list_manager;
        }
        return children.at("access-list-manager");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor;
        }
        else
        {
            oor = std::make_shared<Ipv6AclAndPrefixList::Oor>();
            oor->parent = this;
            children["oor"] = oor;
        }
        return children.at("oor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::get_children()
{
    if(children.find("access-list-manager") == children.end())
    {
        if(access_list_manager != nullptr)
        {
            children["access-list-manager"] = access_list_manager;
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::set_value(const std::string & value_path, std::string value)
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

Ipv6AclAndPrefixList::AccessListManager::AccessListManager()
    :
    accesses(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses>())
	,prefixes(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes>())
	,usages(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages>())
{
    accesses->parent = this;
    children["accesses"] = accesses;

    prefixes->parent = this;
    children["prefixes"] = prefixes;

    usages->parent = this;
    children["usages"] = usages;

    yang_name = "access-list-manager"; yang_parent_name = "ipv6-acl-and-prefix-list";
}

Ipv6AclAndPrefixList::AccessListManager::~AccessListManager()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (usages !=  nullptr && usages->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::has_operation() const
{
    return is_set(operation)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (usages !=  nullptr && usages->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-manager";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accesses")
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses;
        }
        else
        {
            accesses = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses>();
            accesses->parent = this;
            children["accesses"] = accesses;
        }
        return children.at("accesses");
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
        else
        {
            prefixes = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes;
        }
        return children.at("prefixes");
    }

    if(child_yang_name == "usages")
    {
        if(usages != nullptr)
        {
            children["usages"] = usages;
        }
        else
        {
            usages = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages>();
            usages->parent = this;
            children["usages"] = usages;
        }
        return children.at("usages");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::get_children()
{
    if(children.find("accesses") == children.end())
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses;
        }
    }

    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
    }

    if(children.find("usages") == children.end())
    {
        if(usages != nullptr)
        {
            children["usages"] = usages;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "access-list-manager";
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::~Prefixes()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Prefixes::get_children()
{
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::Prefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"}
    	,
    prefix_list_sequences(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>())
{
    prefix_list_sequences->parent = this;
    children["prefix-list-sequences"] = prefix_list_sequences;

    yang_name = "prefix"; yang_parent_name = "prefixes";
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::~Prefix()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_data() const
{
    return prefix_list_name.is_set
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix-list-name='" <<prefix_list_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-list-sequences")
    {
        if(prefix_list_sequences != nullptr)
        {
            children["prefix-list-sequences"] = prefix_list_sequences;
        }
        else
        {
            prefix_list_sequences = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>();
            prefix_list_sequences->parent = this;
            children["prefix-list-sequences"] = prefix_list_sequences;
        }
        return children.at("prefix-list-sequences");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_children()
{
    if(children.find("prefix-list-sequences") == children.end())
    {
        if(prefix_list_sequences != nullptr)
        {
            children["prefix-list-sequences"] = prefix_list_sequences;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequences()
{
    yang_name = "prefix-list-sequences"; yang_parent_name = "prefix";
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::~PrefixListSequences()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_data() const
{
    for (std::size_t index=0; index<prefix_list_sequence.size(); index++)
    {
        if(prefix_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_sequence.size(); index++)
    {
        if(prefix_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequences";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixListSequences' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-list-sequence")
    {
        for(auto const & c : prefix_list_sequence)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence>();
        c->parent = this;
        prefix_list_sequence.push_back(std::move(c));
        children[segment_path] = prefix_list_sequence.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_children()
{
    for (auto const & c : prefix_list_sequence)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::PrefixListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    acl_name{YType::str, "acl-name"},
    hits{YType::uint32, "hits"},
    is_ace_sequence_number{YType::uint32, "is-ace-sequence-number"},
    is_ace_type{YType::enumeration, "is-ace-type"},
    is_address_in_numbers{YType::str, "is-address-in-numbers"},
    is_address_mask_length{YType::uint32, "is-address-mask-length"},
    is_comment_for_entry{YType::str, "is-comment-for-entry"},
    is_length_operator{YType::enumeration, "is-length-operator"},
    is_packet_allow_or_deny{YType::enumeration, "is-packet-allow-or-deny"},
    is_packet_maximum_length{YType::uint32, "is-packet-maximum-length"},
    is_packet_minimum_length{YType::uint32, "is-packet-minimum-length"}
{
    yang_name = "prefix-list-sequence"; yang_parent_name = "prefix-list-sequences";
}

Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::~PrefixListSequence()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_data() const
{
    return sequence_number.is_set
	|| acl_name.is_set
	|| hits.is_set
	|| is_ace_sequence_number.is_set
	|| is_ace_type.is_set
	|| is_address_in_numbers.is_set
	|| is_address_mask_length.is_set
	|| is_comment_for_entry.is_set
	|| is_length_operator.is_set
	|| is_packet_allow_or_deny.is_set
	|| is_packet_maximum_length.is_set
	|| is_packet_minimum_length.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(acl_name.operation)
	|| is_set(hits.operation)
	|| is_set(is_ace_sequence_number.operation)
	|| is_set(is_ace_type.operation)
	|| is_set(is_address_in_numbers.operation)
	|| is_set(is_address_mask_length.operation)
	|| is_set(is_comment_for_entry.operation)
	|| is_set(is_length_operator.operation)
	|| is_set(is_packet_allow_or_deny.operation)
	|| is_set(is_packet_maximum_length.operation)
	|| is_set(is_packet_minimum_length.operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequence" <<"[sequence-number='" <<sequence_number <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixListSequence' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (is_ace_sequence_number.is_set || is_set(is_ace_sequence_number.operation)) leaf_name_data.push_back(is_ace_sequence_number.get_name_leafdata());
    if (is_ace_type.is_set || is_set(is_ace_type.operation)) leaf_name_data.push_back(is_ace_type.get_name_leafdata());
    if (is_address_in_numbers.is_set || is_set(is_address_in_numbers.operation)) leaf_name_data.push_back(is_address_in_numbers.get_name_leafdata());
    if (is_address_mask_length.is_set || is_set(is_address_mask_length.operation)) leaf_name_data.push_back(is_address_mask_length.get_name_leafdata());
    if (is_comment_for_entry.is_set || is_set(is_comment_for_entry.operation)) leaf_name_data.push_back(is_comment_for_entry.get_name_leafdata());
    if (is_length_operator.is_set || is_set(is_length_operator.operation)) leaf_name_data.push_back(is_length_operator.get_name_leafdata());
    if (is_packet_allow_or_deny.is_set || is_set(is_packet_allow_or_deny.operation)) leaf_name_data.push_back(is_packet_allow_or_deny.get_name_leafdata());
    if (is_packet_maximum_length.is_set || is_set(is_packet_maximum_length.operation)) leaf_name_data.push_back(is_packet_maximum_length.get_name_leafdata());
    if (is_packet_minimum_length.is_set || is_set(is_packet_minimum_length.operation)) leaf_name_data.push_back(is_packet_minimum_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number = value;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type = value;
    }
    if(value_path == "is-address-in-numbers")
    {
        is_address_in_numbers = value;
    }
    if(value_path == "is-address-mask-length")
    {
        is_address_mask_length = value;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry = value;
    }
    if(value_path == "is-length-operator")
    {
        is_length_operator = value;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny = value;
    }
    if(value_path == "is-packet-maximum-length")
    {
        is_packet_maximum_length = value;
    }
    if(value_path == "is-packet-minimum-length")
    {
        is_packet_minimum_length = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usages()
{
    yang_name = "usages"; yang_parent_name = "access-list-manager";
}

Ipv6AclAndPrefixList::AccessListManager::Usages::~Usages()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::has_data() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Usages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "usage")
    {
        for(auto const & c : usage)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Usages::Usage>();
        c->parent = this;
        usage.push_back(std::move(c));
        children[segment_path] = usage.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Usages::get_children()
{
    for (auto const & c : usage)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::Usage()
    :
    access_list_name{YType::str, "access-list-name"},
    application_id{YType::enumeration, "application-id"},
    node_name{YType::str, "node-name"},
    usage_details{YType::str, "usage-details"}
{
    yang_name = "usage"; yang_parent_name = "usages";
}

Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::~Usage()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::has_data() const
{
    return access_list_name.is_set
	|| application_id.is_set
	|| node_name.is_set
	|| usage_details.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(application_id.operation)
	|| is_set(node_name.operation)
	|| is_set(usage_details.operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/usages/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (application_id.is_set || is_set(application_id.operation)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.operation)) leaf_name_data.push_back(usage_details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Usages::Usage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "application-id")
    {
        application_id = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "usage-details")
    {
        usage_details = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Accesses()
{
    yang_name = "accesses"; yang_parent_name = "access-list-manager";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::~Accesses()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access")
    {
        for(auto const & c : access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access>();
        c->parent = this;
        access.push_back(std::move(c));
        children[segment_path] = access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::get_children()
{
    for (auto const & c : access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
    	,
    access_list_sequences(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>())
{
    access_list_sequences->parent = this;
    children["access-list-sequences"] = access_list_sequences;

    yang_name = "access"; yang_parent_name = "accesses";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::~Access()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::has_data() const
{
    return access_list_name.is_set
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[access-list-name='" <<access_list_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/access-list-manager/accesses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-sequences")
    {
        if(access_list_sequences != nullptr)
        {
            children["access-list-sequences"] = access_list_sequences;
        }
        else
        {
            access_list_sequences = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>();
            access_list_sequences->parent = this;
            children["access-list-sequences"] = access_list_sequences;
        }
        return children.at("access-list-sequences");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::get_children()
{
    if(children.find("access-list-sequences") == children.end())
    {
        if(access_list_sequences != nullptr)
        {
            children["access-list-sequences"] = access_list_sequences;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequences()
{
    yang_name = "access-list-sequences"; yang_parent_name = "access";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::~AccessListSequences()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_data() const
{
    for (std::size_t index=0; index<access_list_sequence.size(); index++)
    {
        if(access_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_operation() const
{
    for (std::size_t index=0; index<access_list_sequence.size(); index++)
    {
        if(access_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequences";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSequences' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-sequence")
    {
        for(auto const & c : access_list_sequence)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence>();
        c->parent = this;
        access_list_sequence.push_back(std::move(c));
        children[segment_path] = access_list_sequence.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_children()
{
    for (auto const & c : access_list_sequence)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::AccessListSequence()
    :
    sequence_number{YType::uint32, "sequence-number"},
    acl_name{YType::str, "acl-name"},
    capture{YType::boolean, "capture"},
    counter_name{YType::str, "counter-name"},
    destination_mask{YType::str, "destination-mask"},
    destination_port_group{YType::str, "destination-port-group"},
    destination_prefix_group{YType::str, "destination-prefix-group"},
    hits{YType::uint64, "hits"},
    is_ace_sequence_number{YType::uint32, "is-ace-sequence-number"},
    is_ace_type{YType::enumeration, "is-ace-type"},
    is_comment_for_entry{YType::str, "is-comment-for-entry"},
    is_destination_address_in_numbers{YType::str, "is-destination-address-in-numbers"},
    is_destination_address_prefix_length{YType::uint32, "is-destination-address-prefix-length"},
    is_destination_operator{YType::enumeration, "is-destination-operator"},
    is_destination_port1{YType::uint32, "is-destination-port1"},
    is_destination_port2{YType::uint32, "is-destination-port2"},
    is_dscp_present{YType::int32, "is-dscp-present"},
    is_dscp_valu{YType::uint32, "is-dscp-valu"},
    is_flow_id{YType::uint32, "is-flow-id"},
    is_header_matches{YType::uint32, "is-header-matches"},
    is_icmp_message_off{YType::int32, "is-icmp-message-off"},
    is_ipv6_protocol2_type{YType::int32, "is-ipv6-protocol2-type"},
    is_ipv6_protocol_type{YType::int32, "is-ipv6-protocol-type"},
    is_log_option{YType::enumeration, "is-log-option"},
    is_packet_allow_or_deny{YType::enumeration, "is-packet-allow-or-deny"},
    is_packet_length_end{YType::uint32, "is-packet-length-end"},
    is_packet_length_operator{YType::enumeration, "is-packet-length-operator"},
    is_packet_length_start{YType::uint32, "is-packet-length-start"},
    is_precedence_present{YType::int32, "is-precedence-present"},
    is_precedence_value{YType::uint32, "is-precedence-value"},
    is_protocol_operator{YType::enumeration, "is-protocol-operator"},
    is_source_address_in_numbers{YType::str, "is-source-address-in-numbers"},
    is_source_address_prefix_length{YType::uint32, "is-source-address-prefix-length"},
    is_source_operator{YType::enumeration, "is-source-operator"},
    is_source_port1{YType::uint32, "is-source-port1"},
    is_source_port2{YType::uint32, "is-source-port2"},
    is_tcp_bits{YType::uint32, "is-tcp-bits"},
    is_tcp_bits_mask{YType::uint32, "is-tcp-bits-mask"},
    is_tcp_bits_operator{YType::enumeration, "is-tcp-bits-operator"},
    is_time_to_live_end{YType::uint32, "is-time-to-live-end"},
    is_time_to_live_operator{YType::enumeration, "is-time-to-live-operator"},
    is_time_to_live_start{YType::uint32, "is-time-to-live-start"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    no_stats{YType::int32, "no-stats"},
    qos_group{YType::uint16, "qos-group"},
    sequence_str{YType::str, "sequence-str"},
    source_mask{YType::str, "source-mask"},
    source_port_group{YType::str, "source-port-group"},
    source_prefix_group{YType::str, "source-prefix-group"},
    undetermined_transport{YType::boolean, "undetermined-transport"}
    	,
    hw_next_hop_info(std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>())
{
    hw_next_hop_info->parent = this;
    children["hw-next-hop-info"] = hw_next_hop_info;

    yang_name = "access-list-sequence"; yang_parent_name = "access-list-sequences";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::~AccessListSequence()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_data() const
{
    for (std::size_t index=0; index<next_hop_info.size(); index++)
    {
        if(next_hop_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<udf.size(); index++)
    {
        if(udf[index]->has_data())
            return true;
    }
    return sequence_number.is_set
	|| acl_name.is_set
	|| capture.is_set
	|| counter_name.is_set
	|| destination_mask.is_set
	|| destination_port_group.is_set
	|| destination_prefix_group.is_set
	|| hits.is_set
	|| is_ace_sequence_number.is_set
	|| is_ace_type.is_set
	|| is_comment_for_entry.is_set
	|| is_destination_address_in_numbers.is_set
	|| is_destination_address_prefix_length.is_set
	|| is_destination_operator.is_set
	|| is_destination_port1.is_set
	|| is_destination_port2.is_set
	|| is_dscp_present.is_set
	|| is_dscp_valu.is_set
	|| is_flow_id.is_set
	|| is_header_matches.is_set
	|| is_icmp_message_off.is_set
	|| is_ipv6_protocol2_type.is_set
	|| is_ipv6_protocol_type.is_set
	|| is_log_option.is_set
	|| is_packet_allow_or_deny.is_set
	|| is_packet_length_end.is_set
	|| is_packet_length_operator.is_set
	|| is_packet_length_start.is_set
	|| is_precedence_present.is_set
	|| is_precedence_value.is_set
	|| is_protocol_operator.is_set
	|| is_source_address_in_numbers.is_set
	|| is_source_address_prefix_length.is_set
	|| is_source_operator.is_set
	|| is_source_port1.is_set
	|| is_source_port2.is_set
	|| is_tcp_bits.is_set
	|| is_tcp_bits_mask.is_set
	|| is_tcp_bits_operator.is_set
	|| is_time_to_live_end.is_set
	|| is_time_to_live_operator.is_set
	|| is_time_to_live_start.is_set
	|| next_hop_type.is_set
	|| no_stats.is_set
	|| qos_group.is_set
	|| sequence_str.is_set
	|| source_mask.is_set
	|| source_port_group.is_set
	|| source_prefix_group.is_set
	|| undetermined_transport.is_set
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_data());
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_operation() const
{
    for (std::size_t index=0; index<next_hop_info.size(); index++)
    {
        if(next_hop_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<udf.size(); index++)
    {
        if(udf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(acl_name.operation)
	|| is_set(capture.operation)
	|| is_set(counter_name.operation)
	|| is_set(destination_mask.operation)
	|| is_set(destination_port_group.operation)
	|| is_set(destination_prefix_group.operation)
	|| is_set(hits.operation)
	|| is_set(is_ace_sequence_number.operation)
	|| is_set(is_ace_type.operation)
	|| is_set(is_comment_for_entry.operation)
	|| is_set(is_destination_address_in_numbers.operation)
	|| is_set(is_destination_address_prefix_length.operation)
	|| is_set(is_destination_operator.operation)
	|| is_set(is_destination_port1.operation)
	|| is_set(is_destination_port2.operation)
	|| is_set(is_dscp_present.operation)
	|| is_set(is_dscp_valu.operation)
	|| is_set(is_flow_id.operation)
	|| is_set(is_header_matches.operation)
	|| is_set(is_icmp_message_off.operation)
	|| is_set(is_ipv6_protocol2_type.operation)
	|| is_set(is_ipv6_protocol_type.operation)
	|| is_set(is_log_option.operation)
	|| is_set(is_packet_allow_or_deny.operation)
	|| is_set(is_packet_length_end.operation)
	|| is_set(is_packet_length_operator.operation)
	|| is_set(is_packet_length_start.operation)
	|| is_set(is_precedence_present.operation)
	|| is_set(is_precedence_value.operation)
	|| is_set(is_protocol_operator.operation)
	|| is_set(is_source_address_in_numbers.operation)
	|| is_set(is_source_address_prefix_length.operation)
	|| is_set(is_source_operator.operation)
	|| is_set(is_source_port1.operation)
	|| is_set(is_source_port2.operation)
	|| is_set(is_tcp_bits.operation)
	|| is_set(is_tcp_bits_mask.operation)
	|| is_set(is_tcp_bits_operator.operation)
	|| is_set(is_time_to_live_end.operation)
	|| is_set(is_time_to_live_operator.operation)
	|| is_set(is_time_to_live_start.operation)
	|| is_set(next_hop_type.operation)
	|| is_set(no_stats.operation)
	|| is_set(qos_group.operation)
	|| is_set(sequence_str.operation)
	|| is_set(source_mask.operation)
	|| is_set(source_port_group.operation)
	|| is_set(source_prefix_group.operation)
	|| is_set(undetermined_transport.operation)
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_operation());
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequence" <<"[sequence-number='" <<sequence_number <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSequence' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (capture.is_set || is_set(capture.operation)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.operation)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (destination_mask.is_set || is_set(destination_mask.operation)) leaf_name_data.push_back(destination_mask.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.operation)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.operation)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (is_ace_sequence_number.is_set || is_set(is_ace_sequence_number.operation)) leaf_name_data.push_back(is_ace_sequence_number.get_name_leafdata());
    if (is_ace_type.is_set || is_set(is_ace_type.operation)) leaf_name_data.push_back(is_ace_type.get_name_leafdata());
    if (is_comment_for_entry.is_set || is_set(is_comment_for_entry.operation)) leaf_name_data.push_back(is_comment_for_entry.get_name_leafdata());
    if (is_destination_address_in_numbers.is_set || is_set(is_destination_address_in_numbers.operation)) leaf_name_data.push_back(is_destination_address_in_numbers.get_name_leafdata());
    if (is_destination_address_prefix_length.is_set || is_set(is_destination_address_prefix_length.operation)) leaf_name_data.push_back(is_destination_address_prefix_length.get_name_leafdata());
    if (is_destination_operator.is_set || is_set(is_destination_operator.operation)) leaf_name_data.push_back(is_destination_operator.get_name_leafdata());
    if (is_destination_port1.is_set || is_set(is_destination_port1.operation)) leaf_name_data.push_back(is_destination_port1.get_name_leafdata());
    if (is_destination_port2.is_set || is_set(is_destination_port2.operation)) leaf_name_data.push_back(is_destination_port2.get_name_leafdata());
    if (is_dscp_present.is_set || is_set(is_dscp_present.operation)) leaf_name_data.push_back(is_dscp_present.get_name_leafdata());
    if (is_dscp_valu.is_set || is_set(is_dscp_valu.operation)) leaf_name_data.push_back(is_dscp_valu.get_name_leafdata());
    if (is_flow_id.is_set || is_set(is_flow_id.operation)) leaf_name_data.push_back(is_flow_id.get_name_leafdata());
    if (is_header_matches.is_set || is_set(is_header_matches.operation)) leaf_name_data.push_back(is_header_matches.get_name_leafdata());
    if (is_icmp_message_off.is_set || is_set(is_icmp_message_off.operation)) leaf_name_data.push_back(is_icmp_message_off.get_name_leafdata());
    if (is_ipv6_protocol2_type.is_set || is_set(is_ipv6_protocol2_type.operation)) leaf_name_data.push_back(is_ipv6_protocol2_type.get_name_leafdata());
    if (is_ipv6_protocol_type.is_set || is_set(is_ipv6_protocol_type.operation)) leaf_name_data.push_back(is_ipv6_protocol_type.get_name_leafdata());
    if (is_log_option.is_set || is_set(is_log_option.operation)) leaf_name_data.push_back(is_log_option.get_name_leafdata());
    if (is_packet_allow_or_deny.is_set || is_set(is_packet_allow_or_deny.operation)) leaf_name_data.push_back(is_packet_allow_or_deny.get_name_leafdata());
    if (is_packet_length_end.is_set || is_set(is_packet_length_end.operation)) leaf_name_data.push_back(is_packet_length_end.get_name_leafdata());
    if (is_packet_length_operator.is_set || is_set(is_packet_length_operator.operation)) leaf_name_data.push_back(is_packet_length_operator.get_name_leafdata());
    if (is_packet_length_start.is_set || is_set(is_packet_length_start.operation)) leaf_name_data.push_back(is_packet_length_start.get_name_leafdata());
    if (is_precedence_present.is_set || is_set(is_precedence_present.operation)) leaf_name_data.push_back(is_precedence_present.get_name_leafdata());
    if (is_precedence_value.is_set || is_set(is_precedence_value.operation)) leaf_name_data.push_back(is_precedence_value.get_name_leafdata());
    if (is_protocol_operator.is_set || is_set(is_protocol_operator.operation)) leaf_name_data.push_back(is_protocol_operator.get_name_leafdata());
    if (is_source_address_in_numbers.is_set || is_set(is_source_address_in_numbers.operation)) leaf_name_data.push_back(is_source_address_in_numbers.get_name_leafdata());
    if (is_source_address_prefix_length.is_set || is_set(is_source_address_prefix_length.operation)) leaf_name_data.push_back(is_source_address_prefix_length.get_name_leafdata());
    if (is_source_operator.is_set || is_set(is_source_operator.operation)) leaf_name_data.push_back(is_source_operator.get_name_leafdata());
    if (is_source_port1.is_set || is_set(is_source_port1.operation)) leaf_name_data.push_back(is_source_port1.get_name_leafdata());
    if (is_source_port2.is_set || is_set(is_source_port2.operation)) leaf_name_data.push_back(is_source_port2.get_name_leafdata());
    if (is_tcp_bits.is_set || is_set(is_tcp_bits.operation)) leaf_name_data.push_back(is_tcp_bits.get_name_leafdata());
    if (is_tcp_bits_mask.is_set || is_set(is_tcp_bits_mask.operation)) leaf_name_data.push_back(is_tcp_bits_mask.get_name_leafdata());
    if (is_tcp_bits_operator.is_set || is_set(is_tcp_bits_operator.operation)) leaf_name_data.push_back(is_tcp_bits_operator.get_name_leafdata());
    if (is_time_to_live_end.is_set || is_set(is_time_to_live_end.operation)) leaf_name_data.push_back(is_time_to_live_end.get_name_leafdata());
    if (is_time_to_live_operator.is_set || is_set(is_time_to_live_operator.operation)) leaf_name_data.push_back(is_time_to_live_operator.get_name_leafdata());
    if (is_time_to_live_start.is_set || is_set(is_time_to_live_start.operation)) leaf_name_data.push_back(is_time_to_live_start.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.operation)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.operation)) leaf_name_data.push_back(no_stats.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.operation)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (source_mask.is_set || is_set(source_mask.operation)) leaf_name_data.push_back(source_mask.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.operation)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.operation)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());
    if (undetermined_transport.is_set || is_set(undetermined_transport.operation)) leaf_name_data.push_back(undetermined_transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-next-hop-info")
    {
        if(hw_next_hop_info != nullptr)
        {
            children["hw-next-hop-info"] = hw_next_hop_info;
        }
        else
        {
            hw_next_hop_info = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>();
            hw_next_hop_info->parent = this;
            children["hw-next-hop-info"] = hw_next_hop_info;
        }
        return children.at("hw-next-hop-info");
    }

    if(child_yang_name == "next-hop-info")
    {
        for(auto const & c : next_hop_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo>();
        c->parent = this;
        next_hop_info.push_back(std::move(c));
        children[segment_path] = next_hop_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "udf")
    {
        for(auto const & c : udf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf>();
        c->parent = this;
        udf.push_back(std::move(c));
        children[segment_path] = udf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_children()
{
    if(children.find("hw-next-hop-info") == children.end())
    {
        if(hw_next_hop_info != nullptr)
        {
            children["hw-next-hop-info"] = hw_next_hop_info;
        }
    }

    for (auto const & c : next_hop_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : udf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "capture")
    {
        capture = value;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
    }
    if(value_path == "destination-mask")
    {
        destination_mask = value;
    }
    if(value_path == "destination-port-group")
    {
        destination_port_group = value;
    }
    if(value_path == "destination-prefix-group")
    {
        destination_prefix_group = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "is-ace-sequence-number")
    {
        is_ace_sequence_number = value;
    }
    if(value_path == "is-ace-type")
    {
        is_ace_type = value;
    }
    if(value_path == "is-comment-for-entry")
    {
        is_comment_for_entry = value;
    }
    if(value_path == "is-destination-address-in-numbers")
    {
        is_destination_address_in_numbers = value;
    }
    if(value_path == "is-destination-address-prefix-length")
    {
        is_destination_address_prefix_length = value;
    }
    if(value_path == "is-destination-operator")
    {
        is_destination_operator = value;
    }
    if(value_path == "is-destination-port1")
    {
        is_destination_port1 = value;
    }
    if(value_path == "is-destination-port2")
    {
        is_destination_port2 = value;
    }
    if(value_path == "is-dscp-present")
    {
        is_dscp_present = value;
    }
    if(value_path == "is-dscp-valu")
    {
        is_dscp_valu = value;
    }
    if(value_path == "is-flow-id")
    {
        is_flow_id = value;
    }
    if(value_path == "is-header-matches")
    {
        is_header_matches = value;
    }
    if(value_path == "is-icmp-message-off")
    {
        is_icmp_message_off = value;
    }
    if(value_path == "is-ipv6-protocol2-type")
    {
        is_ipv6_protocol2_type = value;
    }
    if(value_path == "is-ipv6-protocol-type")
    {
        is_ipv6_protocol_type = value;
    }
    if(value_path == "is-log-option")
    {
        is_log_option = value;
    }
    if(value_path == "is-packet-allow-or-deny")
    {
        is_packet_allow_or_deny = value;
    }
    if(value_path == "is-packet-length-end")
    {
        is_packet_length_end = value;
    }
    if(value_path == "is-packet-length-operator")
    {
        is_packet_length_operator = value;
    }
    if(value_path == "is-packet-length-start")
    {
        is_packet_length_start = value;
    }
    if(value_path == "is-precedence-present")
    {
        is_precedence_present = value;
    }
    if(value_path == "is-precedence-value")
    {
        is_precedence_value = value;
    }
    if(value_path == "is-protocol-operator")
    {
        is_protocol_operator = value;
    }
    if(value_path == "is-source-address-in-numbers")
    {
        is_source_address_in_numbers = value;
    }
    if(value_path == "is-source-address-prefix-length")
    {
        is_source_address_prefix_length = value;
    }
    if(value_path == "is-source-operator")
    {
        is_source_operator = value;
    }
    if(value_path == "is-source-port1")
    {
        is_source_port1 = value;
    }
    if(value_path == "is-source-port2")
    {
        is_source_port2 = value;
    }
    if(value_path == "is-tcp-bits")
    {
        is_tcp_bits = value;
    }
    if(value_path == "is-tcp-bits-mask")
    {
        is_tcp_bits_mask = value;
    }
    if(value_path == "is-tcp-bits-operator")
    {
        is_tcp_bits_operator = value;
    }
    if(value_path == "is-time-to-live-end")
    {
        is_time_to_live_end = value;
    }
    if(value_path == "is-time-to-live-operator")
    {
        is_time_to_live_operator = value;
    }
    if(value_path == "is-time-to-live-start")
    {
        is_time_to_live_start = value;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
    }
    if(value_path == "no-stats")
    {
        no_stats = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
    }
    if(value_path == "source-mask")
    {
        source_mask = value;
    }
    if(value_path == "source-port-group")
    {
        source_port_group = value;
    }
    if(value_path == "source-prefix-group")
    {
        source_prefix_group = value;
    }
    if(value_path == "undetermined-transport")
    {
        undetermined_transport = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::HwNextHopInfo()
    :
    next_hop{YType::str, "next-hop"},
    table_id{YType::uint32, "table-id"},
    type{YType::enumeration, "type"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "hw-next-hop-info"; yang_parent_name = "access-list-sequence";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::~HwNextHopInfo()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_data() const
{
    return next_hop.is_set
	|| table_id.is_set
	|| type.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(table_id.operation)
	|| is_set(type.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-next-hop-info";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwNextHopInfo' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::NextHopInfo()
    :
    acl_nh_exist{YType::int32, "acl-nh-exist"},
    at_status{YType::enumeration, "at-status"},
    next_hop{YType::str, "next-hop"},
    status{YType::enumeration, "status"},
    track_name{YType::str, "track-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-info"; yang_parent_name = "access-list-sequence";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::~NextHopInfo()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_data() const
{
    return acl_nh_exist.is_set
	|| at_status.is_set
	|| next_hop.is_set
	|| status.is_set
	|| track_name.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_nh_exist.operation)
	|| is_set(at_status.operation)
	|| is_set(next_hop.operation)
	|| is_set(status.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-info";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopInfo' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_nh_exist.is_set || is_set(acl_nh_exist.operation)) leaf_name_data.push_back(acl_nh_exist.get_name_leafdata());
    if (at_status.is_set || is_set(at_status.operation)) leaf_name_data.push_back(at_status.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-nh-exist")
    {
        acl_nh_exist = value;
    }
    if(value_path == "at-status")
    {
        at_status = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "track-name")
    {
        track_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::Udf()
    :
    udf_mask{YType::uint32, "udf-mask"},
    udf_name{YType::str, "udf-name"},
    udf_value{YType::uint32, "udf-value"}
{
    yang_name = "udf"; yang_parent_name = "access-list-sequence";
}

Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::~Udf()
{
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_data() const
{
    return udf_mask.is_set
	|| udf_name.is_set
	|| udf_value.is_set;
}

bool Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::has_operation() const
{
    return is_set(operation)
	|| is_set(udf_mask.operation)
	|| is_set(udf_name.operation)
	|| is_set(udf_value.operation);
}

std::string Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udf' in Cisco_IOS_XR_ipv6_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udf_mask.is_set || is_set(udf_mask.operation)) leaf_name_data.push_back(udf_mask.get_name_leafdata());
    if (udf_name.is_set || is_set(udf_name.operation)) leaf_name_data.push_back(udf_name.get_name_leafdata());
    if (udf_value.is_set || is_set(udf_value.operation)) leaf_name_data.push_back(udf_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udf-mask")
    {
        udf_mask = value;
    }
    if(value_path == "udf-name")
    {
        udf_name = value;
    }
    if(value_path == "udf-value")
    {
        udf_value = value;
    }
}

Ipv6AclAndPrefixList::Oor::Oor()
    :
    access_list_summary(std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary>())
	,details(std::make_shared<Ipv6AclAndPrefixList::Oor::Details>())
	,oor_accesses(std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses>())
	,oor_prefixes(std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes>())
	,prefix_list_summary(std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary>())
{
    access_list_summary->parent = this;
    children["access-list-summary"] = access_list_summary;

    details->parent = this;
    children["details"] = details;

    oor_accesses->parent = this;
    children["oor-accesses"] = oor_accesses;

    oor_prefixes->parent = this;
    children["oor-prefixes"] = oor_prefixes;

    prefix_list_summary->parent = this;
    children["prefix-list-summary"] = prefix_list_summary;

    yang_name = "oor"; yang_parent_name = "ipv6-acl-and-prefix-list";
}

Ipv6AclAndPrefixList::Oor::~Oor()
{
}

bool Ipv6AclAndPrefixList::Oor::has_data() const
{
    return (access_list_summary !=  nullptr && access_list_summary->has_data())
	|| (details !=  nullptr && details->has_data())
	|| (oor_accesses !=  nullptr && oor_accesses->has_data())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_data())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_data());
}

bool Ipv6AclAndPrefixList::Oor::has_operation() const
{
    return is_set(operation)
	|| (access_list_summary !=  nullptr && access_list_summary->has_operation())
	|| (details !=  nullptr && details->has_operation())
	|| (oor_accesses !=  nullptr && oor_accesses->has_operation())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_operation())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-summary")
    {
        if(access_list_summary != nullptr)
        {
            children["access-list-summary"] = access_list_summary;
        }
        else
        {
            access_list_summary = std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary>();
            access_list_summary->parent = this;
            children["access-list-summary"] = access_list_summary;
        }
        return children.at("access-list-summary");
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
        else
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::Details>();
            details->parent = this;
            children["details"] = details;
        }
        return children.at("details");
    }

    if(child_yang_name == "oor-accesses")
    {
        if(oor_accesses != nullptr)
        {
            children["oor-accesses"] = oor_accesses;
        }
        else
        {
            oor_accesses = std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses>();
            oor_accesses->parent = this;
            children["oor-accesses"] = oor_accesses;
        }
        return children.at("oor-accesses");
    }

    if(child_yang_name == "oor-prefixes")
    {
        if(oor_prefixes != nullptr)
        {
            children["oor-prefixes"] = oor_prefixes;
        }
        else
        {
            oor_prefixes = std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes>();
            oor_prefixes->parent = this;
            children["oor-prefixes"] = oor_prefixes;
        }
        return children.at("oor-prefixes");
    }

    if(child_yang_name == "prefix-list-summary")
    {
        if(prefix_list_summary != nullptr)
        {
            children["prefix-list-summary"] = prefix_list_summary;
        }
        else
        {
            prefix_list_summary = std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary>();
            prefix_list_summary->parent = this;
            children["prefix-list-summary"] = prefix_list_summary;
        }
        return children.at("prefix-list-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::get_children()
{
    if(children.find("access-list-summary") == children.end())
    {
        if(access_list_summary != nullptr)
        {
            children["access-list-summary"] = access_list_summary;
        }
    }

    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
    }

    if(children.find("oor-accesses") == children.end())
    {
        if(oor_accesses != nullptr)
        {
            children["oor-accesses"] = oor_accesses;
        }
    }

    if(children.find("oor-prefixes") == children.end())
    {
        if(oor_prefixes != nullptr)
        {
            children["oor-prefixes"] = oor_prefixes;
        }
    }

    if(children.find("prefix-list-summary") == children.end())
    {
        if(prefix_list_summary != nullptr)
        {
            children["prefix-list-summary"] = prefix_list_summary;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Oor::Details::Details()
    :
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "oor";
}

Ipv6AclAndPrefixList::Oor::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::Details::has_data() const
{
    return is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set
	|| is_maximum_configurable_ac_ls.is_set;
}

bool Ipv6AclAndPrefixList::Oor::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(is_current_configured_ac_ls.operation)
	|| is_set(is_current_configured_aces.operation)
	|| is_set(is_current_maximum_configurable_aces.operation)
	|| is_set(is_current_maximum_configurable_acls.operation)
	|| is_set(is_default_maximum_configurable_ac_es.operation)
	|| is_set(is_default_maximum_configurable_ac_ls.operation)
	|| is_set(is_maximum_configurable_ac_es.operation)
	|| is_set(is_maximum_configurable_ac_ls.operation);
}

std::string Ipv6AclAndPrefixList::Oor::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.operation)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.operation)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.operation)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.operation)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::Details::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Oor::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
    }
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::PrefixListSummary()
    :
    details(std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details>())
{
    details->parent = this;
    children["details"] = details;

    yang_name = "prefix-list-summary"; yang_parent_name = "oor";
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::~PrefixListSummary()
{
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-summary";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
        else
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details>();
            details->parent = this;
            children["details"] = details;
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::PrefixListSummary::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::Details()
    :
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "prefix-list-summary";
}

Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::has_data() const
{
    return is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set
	|| is_maximum_configurable_ac_ls.is_set;
}

bool Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(is_current_configured_ac_ls.operation)
	|| is_set(is_current_configured_aces.operation)
	|| is_set(is_current_maximum_configurable_aces.operation)
	|| is_set(is_current_maximum_configurable_acls.operation)
	|| is_set(is_default_maximum_configurable_ac_es.operation)
	|| is_set(is_default_maximum_configurable_ac_ls.operation)
	|| is_set(is_maximum_configurable_ac_es.operation)
	|| is_set(is_maximum_configurable_ac_ls.operation);
}

std::string Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/prefix-list-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.operation)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.operation)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.operation)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.operation)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
    }
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccesses()
{
    yang_name = "oor-accesses"; yang_parent_name = "oor";
}

Ipv6AclAndPrefixList::Oor::OorAccesses::~OorAccesses()
{
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::has_data() const
{
    for (std::size_t index=0; index<oor_access.size(); index++)
    {
        if(oor_access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::has_operation() const
{
    for (std::size_t index=0; index<oor_access.size(); index++)
    {
        if(oor_access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-accesses";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::OorAccesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorAccesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oor-access")
    {
        for(auto const & c : oor_access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess>();
        c->parent = this;
        oor_access.push_back(std::move(c));
        children[segment_path] = oor_access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::OorAccesses::get_children()
{
    for (auto const & c : oor_access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::OorAccess()
    :
    access_list_name{YType::str, "access-list-name"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"}
{
    yang_name = "oor-access"; yang_parent_name = "oor-accesses";
}

Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::~OorAccess()
{
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::has_data() const
{
    return access_list_name.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set
	|| is_maximum_configurable_ac_ls.is_set;
}

bool Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(is_current_configured_ac_ls.operation)
	|| is_set(is_current_configured_aces.operation)
	|| is_set(is_current_maximum_configurable_aces.operation)
	|| is_set(is_current_maximum_configurable_acls.operation)
	|| is_set(is_default_maximum_configurable_ac_es.operation)
	|| is_set(is_default_maximum_configurable_ac_ls.operation)
	|| is_set(is_maximum_configurable_ac_es.operation)
	|| is_set(is_maximum_configurable_ac_ls.operation);
}

std::string Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-access" <<"[access-list-name='" <<access_list_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/oor-accesses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.operation)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.operation)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.operation)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.operation)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
    }
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefixes()
{
    yang_name = "oor-prefixes"; yang_parent_name = "oor";
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::~OorPrefixes()
{
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::has_data() const
{
    for (std::size_t index=0; index<oor_prefix.size(); index++)
    {
        if(oor_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::has_operation() const
{
    for (std::size_t index=0; index<oor_prefix.size(); index++)
    {
        if(oor_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefixes";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::OorPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oor-prefix")
    {
        for(auto const & c : oor_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix>();
        c->parent = this;
        oor_prefix.push_back(std::move(c));
        children[segment_path] = oor_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::OorPrefixes::get_children()
{
    for (auto const & c : oor_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::OorPrefix()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"}
{
    yang_name = "oor-prefix"; yang_parent_name = "oor-prefixes";
}

Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::~OorPrefix()
{
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_data() const
{
    return prefix_list_name.is_set
	|| is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set
	|| is_maximum_configurable_ac_ls.is_set;
}

bool Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(is_current_configured_ac_ls.operation)
	|| is_set(is_current_configured_aces.operation)
	|| is_set(is_current_maximum_configurable_aces.operation)
	|| is_set(is_current_maximum_configurable_acls.operation)
	|| is_set(is_default_maximum_configurable_ac_es.operation)
	|| is_set(is_default_maximum_configurable_ac_ls.operation)
	|| is_set(is_maximum_configurable_ac_es.operation)
	|| is_set(is_maximum_configurable_ac_ls.operation);
}

std::string Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefix" <<"[prefix-list-name='" <<prefix_list_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/oor-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.operation)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.operation)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.operation)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.operation)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
    }
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::AccessListSummary()
    :
    details(std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary::Details>())
{
    details->parent = this;
    children["details"] = details;

    yang_name = "access-list-summary"; yang_parent_name = "oor";
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::~AccessListSummary()
{
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-summary";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::AccessListSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::AccessListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
        else
        {
            details = std::make_shared<Ipv6AclAndPrefixList::Oor::AccessListSummary::Details>();
            details->parent = this;
            children["details"] = details;
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::AccessListSummary::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::Details()
    :
    is_current_configured_ac_ls{YType::uint32, "is-current-configured-ac-ls"},
    is_current_configured_aces{YType::uint32, "is-current-configured-aces"},
    is_current_maximum_configurable_aces{YType::uint32, "is-current-maximum-configurable-aces"},
    is_current_maximum_configurable_acls{YType::uint32, "is-current-maximum-configurable-acls"},
    is_default_maximum_configurable_ac_es{YType::uint32, "is-default-maximum-configurable-ac-es"},
    is_default_maximum_configurable_ac_ls{YType::uint32, "is-default-maximum-configurable-ac-ls"},
    is_maximum_configurable_ac_es{YType::uint32, "is-maximum-configurable-ac-es"},
    is_maximum_configurable_ac_ls{YType::uint32, "is-maximum-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "access-list-summary";
}

Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::~Details()
{
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::has_data() const
{
    return is_current_configured_ac_ls.is_set
	|| is_current_configured_aces.is_set
	|| is_current_maximum_configurable_aces.is_set
	|| is_current_maximum_configurable_acls.is_set
	|| is_default_maximum_configurable_ac_es.is_set
	|| is_default_maximum_configurable_ac_ls.is_set
	|| is_maximum_configurable_ac_es.is_set
	|| is_maximum_configurable_ac_ls.is_set;
}

bool Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(is_current_configured_ac_ls.operation)
	|| is_set(is_current_configured_aces.operation)
	|| is_set(is_current_maximum_configurable_aces.operation)
	|| is_set(is_current_maximum_configurable_acls.operation)
	|| is_set(is_default_maximum_configurable_ac_es.operation)
	|| is_set(is_default_maximum_configurable_ac_ls.operation)
	|| is_set(is_maximum_configurable_ac_es.operation)
	|| is_set(is_maximum_configurable_ac_ls.operation);
}

std::string Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list/oor/access-list-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_current_configured_ac_ls.is_set || is_set(is_current_configured_ac_ls.operation)) leaf_name_data.push_back(is_current_configured_ac_ls.get_name_leafdata());
    if (is_current_configured_aces.is_set || is_set(is_current_configured_aces.operation)) leaf_name_data.push_back(is_current_configured_aces.get_name_leafdata());
    if (is_current_maximum_configurable_aces.is_set || is_set(is_current_maximum_configurable_aces.operation)) leaf_name_data.push_back(is_current_maximum_configurable_aces.get_name_leafdata());
    if (is_current_maximum_configurable_acls.is_set || is_set(is_current_maximum_configurable_acls.operation)) leaf_name_data.push_back(is_current_maximum_configurable_acls.get_name_leafdata());
    if (is_default_maximum_configurable_ac_es.is_set || is_set(is_default_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_es.get_name_leafdata());
    if (is_default_maximum_configurable_ac_ls.is_set || is_set(is_default_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_default_maximum_configurable_ac_ls.get_name_leafdata());
    if (is_maximum_configurable_ac_es.is_set || is_set(is_maximum_configurable_ac_es.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_es.get_name_leafdata());
    if (is_maximum_configurable_ac_ls.is_set || is_set(is_maximum_configurable_ac_ls.operation)) leaf_name_data.push_back(is_maximum_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Oor::AccessListSummary::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-current-configured-ac-ls")
    {
        is_current_configured_ac_ls = value;
    }
    if(value_path == "is-current-configured-aces")
    {
        is_current_configured_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-aces")
    {
        is_current_maximum_configurable_aces = value;
    }
    if(value_path == "is-current-maximum-configurable-acls")
    {
        is_current_maximum_configurable_acls = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-es")
    {
        is_default_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-default-maximum-configurable-ac-ls")
    {
        is_default_maximum_configurable_ac_ls = value;
    }
    if(value_path == "is-maximum-configurable-ac-es")
    {
        is_maximum_configurable_ac_es = value;
    }
    if(value_path == "is-maximum-configurable-ac-ls")
    {
        is_maximum_configurable_ac_ls = value;
    }
}

const Enum::YLeaf AclTcpflagsOperatorEnum::match_none {0, "match-none"};
const Enum::YLeaf AclTcpflagsOperatorEnum::match_all {1, "match-all"};
const Enum::YLeaf AclTcpflagsOperatorEnum::match_any_old {2, "match-any-old"};
const Enum::YLeaf AclTcpflagsOperatorEnum::match_any {3, "match-any"};

const Enum::YLeaf AclPortOperatorEnum::none {0, "none"};
const Enum::YLeaf AclPortOperatorEnum::eq {1, "eq"};
const Enum::YLeaf AclPortOperatorEnum::gt {2, "gt"};
const Enum::YLeaf AclPortOperatorEnum::lt {3, "lt"};
const Enum::YLeaf AclPortOperatorEnum::neq {4, "neq"};
const Enum::YLeaf AclPortOperatorEnum::range {5, "range"};
const Enum::YLeaf AclPortOperatorEnum::onebyte {8, "onebyte"};
const Enum::YLeaf AclPortOperatorEnum::twobytes {9, "twobytes"};

const Enum::YLeaf AclAce1Enum::normal {0, "normal"};
const Enum::YLeaf AclAce1Enum::remark {1, "remark"};
const Enum::YLeaf AclAce1Enum::abf {2, "abf"};

const Enum::YLeaf BagAclNhAtStatusEnum::unknown {0, "unknown"};
const Enum::YLeaf BagAclNhAtStatusEnum::up {1, "up"};
const Enum::YLeaf BagAclNhAtStatusEnum::down {2, "down"};
const Enum::YLeaf BagAclNhAtStatusEnum::not_present {3, "not-present"};
const Enum::YLeaf BagAclNhAtStatusEnum::max {4, "max"};

const Enum::YLeaf BagAclNhEnum::nexthop_none {0, "nexthop-none"};
const Enum::YLeaf BagAclNhEnum::nexthop_default {1, "nexthop-default"};
const Enum::YLeaf BagAclNhEnum::nexthop {2, "nexthop"};

const Enum::YLeaf AclActionEnum::deny {0, "deny"};
const Enum::YLeaf AclActionEnum::permit {1, "permit"};
const Enum::YLeaf AclActionEnum::encrypt {2, "encrypt"};
const Enum::YLeaf AclActionEnum::bypass {3, "bypass"};
const Enum::YLeaf AclActionEnum::fallthrough {4, "fallthrough"};
const Enum::YLeaf AclActionEnum::invalid {5, "invalid"};

const Enum::YLeaf BagAclNhStatusEnum::not_present {0, "not-present"};
const Enum::YLeaf BagAclNhStatusEnum::unknown {1, "unknown"};
const Enum::YLeaf BagAclNhStatusEnum::down {2, "down"};
const Enum::YLeaf BagAclNhStatusEnum::up {3, "up"};
const Enum::YLeaf BagAclNhStatusEnum::max {4, "max"};

const Enum::YLeaf AclLogEnum::log_none {0, "log-none"};
const Enum::YLeaf AclLogEnum::log {1, "log"};
const Enum::YLeaf AclLogEnum::log_input {2, "log-input"};


}
}

