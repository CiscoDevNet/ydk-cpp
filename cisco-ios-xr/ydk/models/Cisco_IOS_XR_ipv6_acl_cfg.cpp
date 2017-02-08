
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_acl_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_cfg {

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::PrefixListEntry()
    :
    	sequence_number{YType::uint32, "sequence-number"},
	 exact_prefix_length{YType::uint8, "exact-prefix-length"},
	 grant{YType::enumeration, "grant"},
	 ipv6_address_as_string{YType::str, "ipv6-address-as-string"},
	 match_exact_length{YType::enumeration, "match-exact-length"},
	 match_max_length{YType::enumeration, "match-max-length"},
	 match_min_length{YType::enumeration, "match-min-length"},
	 max_prefix_length{YType::uint8, "max-prefix-length"},
	 min_prefix_length{YType::uint8, "min-prefix-length"},
	 prefix{YType::str, "prefix"},
	 prefix_mask{YType::uint8, "prefix-mask"},
	 remark{YType::str, "remark"},
	 zone{YType::str, "zone"}
{
    yang_name = "prefix-list-entry"; yang_parent_name = "prefix-list-entries";
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::~PrefixListEntry()
{
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::has_data() const
{
    return sequence_number.is_set
	|| exact_prefix_length.is_set
	|| grant.is_set
	|| ipv6_address_as_string.is_set
	|| match_exact_length.is_set
	|| match_max_length.is_set
	|| match_min_length.is_set
	|| max_prefix_length.is_set
	|| min_prefix_length.is_set
	|| prefix.is_set
	|| prefix_mask.is_set
	|| remark.is_set
	|| zone.is_set;
}

bool Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(exact_prefix_length.operation)
	|| is_set(grant.operation)
	|| is_set(ipv6_address_as_string.operation)
	|| is_set(match_exact_length.operation)
	|| is_set(match_max_length.operation)
	|| is_set(match_min_length.operation)
	|| is_set(max_prefix_length.operation)
	|| is_set(min_prefix_length.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_mask.operation)
	|| is_set(remark.operation)
	|| is_set(zone.operation);
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-entry" <<"[sequence-number='" <<sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (exact_prefix_length.is_set || is_set(exact_prefix_length.operation)) leaf_name_data.push_back(exact_prefix_length.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (ipv6_address_as_string.is_set || is_set(ipv6_address_as_string.operation)) leaf_name_data.push_back(ipv6_address_as_string.get_name_leafdata());
    if (match_exact_length.is_set || is_set(match_exact_length.operation)) leaf_name_data.push_back(match_exact_length.get_name_leafdata());
    if (match_max_length.is_set || is_set(match_max_length.operation)) leaf_name_data.push_back(match_max_length.get_name_leafdata());
    if (match_min_length.is_set || is_set(match_min_length.operation)) leaf_name_data.push_back(match_min_length.get_name_leafdata());
    if (max_prefix_length.is_set || is_set(max_prefix_length.operation)) leaf_name_data.push_back(max_prefix_length.get_name_leafdata());
    if (min_prefix_length.is_set || is_set(min_prefix_length.operation)) leaf_name_data.push_back(min_prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.operation)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "exact-prefix-length")
    {
        exact_prefix_length = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "ipv6-address-as-string")
    {
        ipv6_address_as_string = value;
    }
    if(value_path == "match-exact-length")
    {
        match_exact_length = value;
    }
    if(value_path == "match-max-length")
    {
        match_max_length = value;
    }
    if(value_path == "match-min-length")
    {
        match_min_length = value;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length = value;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntries()
{
    yang_name = "prefix-list-entries"; yang_parent_name = "prefix";
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
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-entries";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-list-entry")
    {
        for(auto const & c : prefix_list_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry>();
        c->parent = this;
        prefix_list_entry.push_back(std::move(c));
        children[segment_path] = prefix_list_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::get_children()
{
    for (auto const & c : prefix_list_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Prefixes::Prefix::Prefix()
    :
    	name{YType::str, "name"}
    	,
    prefix_list_entries(nullptr) // presence node
{
    yang_name = "prefix"; yang_parent_name = "prefixes";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (prefix_list_entries !=  nullptr && prefix_list_entries->has_operation());
}

std::string Ipv6AclAndPrefixList::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Prefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/prefixes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-list-entries")
    {
        if(prefix_list_entries != nullptr)
        {
            children["prefix-list-entries"] = prefix_list_entries.get();
        }
        else
        {
            prefix_list_entries = std::make_unique<Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries>();
            prefix_list_entries->parent = this;
            children["prefix-list-entries"] = prefix_list_entries.get();
        }
        return children.at("prefix-list-entries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Prefixes::Prefix::get_children()
{
    if(children.find("prefix-list-entries") == children.end())
    {
        if(prefix_list_entries != nullptr)
        {
            children["prefix-list-entries"] = prefix_list_entries.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Ipv6AclAndPrefixList::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "ipv6-acl-and-prefix-list";
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
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6AclAndPrefixList::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Prefixes::get_children()
{
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::LogUpdate::LogUpdate()
    :
    	rate{YType::uint32, "rate"},
	 threshold{YType::uint32, "threshold"}
{
    yang_name = "log-update"; yang_parent_name = "ipv6-acl-and-prefix-list";
}

Ipv6AclAndPrefixList::LogUpdate::~LogUpdate()
{
}

bool Ipv6AclAndPrefixList::LogUpdate::has_data() const
{
    return rate.is_set
	|| threshold.is_set;
}

bool Ipv6AclAndPrefixList::LogUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation)
	|| is_set(threshold.operation);
}

std::string Ipv6AclAndPrefixList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-update";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::LogUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::LogUpdate::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::LogUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::SourceNetwork()
    :
    	source_address{YType::str, "source-address"},
	 source_mask{YType::str, "source-mask"},
	 source_wild_card_bits{YType::uint8, "source-wild-card-bits"}
{
    yang_name = "source-network"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::~SourceNetwork()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_data() const
{
    return source_address.is_set
	|| source_mask.is_set
	|| source_wild_card_bits.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_mask.operation)
	|| is_set(source_wild_card_bits.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-network";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_mask.is_set || is_set(source_mask.operation)) leaf_name_data.push_back(source_mask.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.operation)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-mask")
    {
        source_mask = value;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::DestinationNetwork()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_mask{YType::str, "destination-mask"},
	 destination_wild_card_bits{YType::uint8, "destination-wild-card-bits"}
{
    yang_name = "destination-network"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::~DestinationNetwork()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_data() const
{
    return destination_address.is_set
	|| destination_mask.is_set
	|| destination_wild_card_bits.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_mask.operation)
	|| is_set(destination_wild_card_bits.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-network";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_mask.is_set || is_set(destination_mask.operation)) leaf_name_data.push_back(destination_mask.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.operation)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-mask")
    {
        destination_mask = value;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::SourcePort()
    :
    	first_source_port{YType::str, "first-source-port"},
	 second_source_port{YType::str, "second-source-port"},
	 source_operator{YType::enumeration, "source-operator"}
{
    yang_name = "source-port"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::~SourcePort()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::has_data() const
{
    return first_source_port.is_set
	|| second_source_port.is_set
	|| source_operator.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::has_operation() const
{
    return is_set(operation)
	|| is_set(first_source_port.operation)
	|| is_set(second_source_port.operation)
	|| is_set(source_operator.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-port";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_source_port.is_set || is_set(first_source_port.operation)) leaf_name_data.push_back(first_source_port.get_name_leafdata());
    if (second_source_port.is_set || is_set(second_source_port.operation)) leaf_name_data.push_back(second_source_port.get_name_leafdata());
    if (source_operator.is_set || is_set(source_operator.operation)) leaf_name_data.push_back(source_operator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-source-port")
    {
        first_source_port = value;
    }
    if(value_path == "second-source-port")
    {
        second_source_port = value;
    }
    if(value_path == "source-operator")
    {
        source_operator = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::DestinationPort()
    :
    	destination_operator{YType::enumeration, "destination-operator"},
	 first_destination_port{YType::str, "first-destination-port"},
	 second_destination_port{YType::str, "second-destination-port"}
{
    yang_name = "destination-port"; yang_parent_name = "access-list-entry";
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
    return is_set(operation)
	|| is_set(destination_operator.operation)
	|| is_set(first_destination_port.operation)
	|| is_set(second_destination_port.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-port";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_operator.is_set || is_set(destination_operator.operation)) leaf_name_data.push_back(destination_operator.get_name_leafdata());
    if (first_destination_port.is_set || is_set(first_destination_port.operation)) leaf_name_data.push_back(first_destination_port.get_name_leafdata());
    if (second_destination_port.is_set || is_set(second_destination_port.operation)) leaf_name_data.push_back(second_destination_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-operator")
    {
        destination_operator = value;
    }
    if(value_path == "first-destination-port")
    {
        first_destination_port = value;
    }
    if(value_path == "second-destination-port")
    {
        second_destination_port = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::Icmp()
    :
    	icmp_type_code{YType::enumeration, "icmp-type-code"}
{
    yang_name = "icmp"; yang_parent_name = "access-list-entry";
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
    return is_set(operation)
	|| is_set(icmp_type_code.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmp_type_code.is_set || is_set(icmp_type_code.operation)) leaf_name_data.push_back(icmp_type_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icmp-type-code")
    {
        icmp_type_code = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::Tcp()
    :
    	tcp_bits{YType::str, "tcp-bits"},
	 tcp_bits_mask{YType::str, "tcp-bits-mask"},
	 tcp_bits_match_operator{YType::enumeration, "tcp-bits-match-operator"}
{
    yang_name = "tcp"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::~Tcp()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::has_data() const
{
    return tcp_bits.is_set
	|| tcp_bits_mask.is_set
	|| tcp_bits_match_operator.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_bits.operation)
	|| is_set(tcp_bits_mask.operation)
	|| is_set(tcp_bits_match_operator.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_bits.is_set || is_set(tcp_bits.operation)) leaf_name_data.push_back(tcp_bits.get_name_leafdata());
    if (tcp_bits_mask.is_set || is_set(tcp_bits_mask.operation)) leaf_name_data.push_back(tcp_bits_mask.get_name_leafdata());
    if (tcp_bits_match_operator.is_set || is_set(tcp_bits_match_operator.operation)) leaf_name_data.push_back(tcp_bits_match_operator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-bits")
    {
        tcp_bits = value;
    }
    if(value_path == "tcp-bits-mask")
    {
        tcp_bits_mask = value;
    }
    if(value_path == "tcp-bits-match-operator")
    {
        tcp_bits_match_operator = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::PacketLength()
    :
    	packet_length_max{YType::uint32, "packet-length-max"},
	 packet_length_min{YType::uint32, "packet-length-min"},
	 packet_length_operator{YType::enumeration, "packet-length-operator"}
{
    yang_name = "packet-length"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::~PacketLength()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::has_data() const
{
    return packet_length_max.is_set
	|| packet_length_min.is_set
	|| packet_length_operator.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::has_operation() const
{
    return is_set(operation)
	|| is_set(packet_length_max.operation)
	|| is_set(packet_length_min.operation)
	|| is_set(packet_length_operator.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-length";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_length_max.is_set || is_set(packet_length_max.operation)) leaf_name_data.push_back(packet_length_max.get_name_leafdata());
    if (packet_length_min.is_set || is_set(packet_length_min.operation)) leaf_name_data.push_back(packet_length_min.get_name_leafdata());
    if (packet_length_operator.is_set || is_set(packet_length_operator.operation)) leaf_name_data.push_back(packet_length_operator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet-length-max")
    {
        packet_length_max = value;
    }
    if(value_path == "packet-length-min")
    {
        packet_length_min = value;
    }
    if(value_path == "packet-length-operator")
    {
        packet_length_operator = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::TimeToLive()
    :
    	time_to_live_max{YType::uint32, "time-to-live-max"},
	 time_to_live_min{YType::uint32, "time-to-live-min"},
	 time_to_live_operator{YType::enumeration, "time-to-live-operator"}
{
    yang_name = "time-to-live"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::~TimeToLive()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::has_data() const
{
    return time_to_live_max.is_set
	|| time_to_live_min.is_set
	|| time_to_live_operator.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::has_operation() const
{
    return is_set(operation)
	|| is_set(time_to_live_max.operation)
	|| is_set(time_to_live_min.operation)
	|| is_set(time_to_live_operator.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-to-live";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_to_live_max.is_set || is_set(time_to_live_max.operation)) leaf_name_data.push_back(time_to_live_max.get_name_leafdata());
    if (time_to_live_min.is_set || is_set(time_to_live_min.operation)) leaf_name_data.push_back(time_to_live_min.get_name_leafdata());
    if (time_to_live_operator.is_set || is_set(time_to_live_operator.operation)) leaf_name_data.push_back(time_to_live_operator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-to-live-max")
    {
        time_to_live_max = value;
    }
    if(value_path == "time-to-live-min")
    {
        time_to_live_min = value;
    }
    if(value_path == "time-to-live-operator")
    {
        time_to_live_operator = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::NextHop1()
    :
    	next_hop{YType::str, "next-hop"},
	 track_name{YType::str, "track-name"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-1"; yang_parent_name = "next-hop";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::~NextHop1()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::has_data() const
{
    return next_hop.is_set
	|| track_name.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-1";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
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

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::NextHop2()
    :
    	next_hop{YType::str, "next-hop"},
	 track_name{YType::str, "track-name"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-2"; yang_parent_name = "next-hop";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::~NextHop2()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::has_data() const
{
    return next_hop.is_set
	|| track_name.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-2";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
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

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::NextHop3()
    :
    	next_hop{YType::str, "next-hop"},
	 track_name{YType::str, "track-name"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-3"; yang_parent_name = "next-hop";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::~NextHop3()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::has_data() const
{
    return next_hop.is_set
	|| track_name.is_set
	|| vrf_name.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-3";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
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

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop()
    :
    	next_hop_type{YType::enumeration, "next-hop-type"}
    	,
    next_hop_1(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1>())
	,next_hop_2(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2>())
	,next_hop_3(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3>())
{
    next_hop_1->parent = this;
    children["next-hop-1"] = next_hop_1.get();

    next_hop_2->parent = this;
    children["next-hop-2"] = next_hop_2.get();

    next_hop_3->parent = this;
    children["next-hop-3"] = next_hop_3.get();

    yang_name = "next-hop"; yang_parent_name = "access-list-entry";
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
    return is_set(operation)
	|| is_set(next_hop_type.operation)
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

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_type.is_set || is_set(next_hop_type.operation)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-1")
    {
        if(next_hop_1 != nullptr)
        {
            children["next-hop-1"] = next_hop_1.get();
        }
        else
        {
            next_hop_1 = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1>();
            next_hop_1->parent = this;
            children["next-hop-1"] = next_hop_1.get();
        }
        return children.at("next-hop-1");
    }

    if(child_yang_name == "next-hop-2")
    {
        if(next_hop_2 != nullptr)
        {
            children["next-hop-2"] = next_hop_2.get();
        }
        else
        {
            next_hop_2 = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2>();
            next_hop_2->parent = this;
            children["next-hop-2"] = next_hop_2.get();
        }
        return children.at("next-hop-2");
    }

    if(child_yang_name == "next-hop-3")
    {
        if(next_hop_3 != nullptr)
        {
            children["next-hop-3"] = next_hop_3.get();
        }
        else
        {
            next_hop_3 = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3>();
            next_hop_3->parent = this;
            children["next-hop-3"] = next_hop_3.get();
        }
        return children.at("next-hop-3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::get_children()
{
    if(children.find("next-hop-1") == children.end())
    {
        if(next_hop_1 != nullptr)
        {
            children["next-hop-1"] = next_hop_1.get();
        }
    }

    if(children.find("next-hop-2") == children.end())
    {
        if(next_hop_2 != nullptr)
        {
            children["next-hop-2"] = next_hop_2.get();
        }
    }

    if(children.find("next-hop-3") == children.end())
    {
        if(next_hop_3 != nullptr)
        {
            children["next-hop-3"] = next_hop_3.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::HeaderFlags()
    :
    	authen{YType::empty, "authen"},
	 destopts{YType::empty, "destopts"},
	 fragments{YType::empty, "fragments"},
	 hop_by_hop{YType::empty, "hop-by-hop"},
	 routing{YType::empty, "routing"}
{
    yang_name = "header-flags"; yang_parent_name = "access-list-entry";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::~HeaderFlags()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::has_data() const
{
    return authen.is_set
	|| destopts.is_set
	|| fragments.is_set
	|| hop_by_hop.is_set
	|| routing.is_set;
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(authen.operation)
	|| is_set(destopts.operation)
	|| is_set(fragments.operation)
	|| is_set(hop_by_hop.operation)
	|| is_set(routing.operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header-flags";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen.is_set || is_set(authen.operation)) leaf_name_data.push_back(authen.get_name_leafdata());
    if (destopts.is_set || is_set(destopts.operation)) leaf_name_data.push_back(destopts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hop_by_hop.is_set || is_set(hop_by_hop.operation)) leaf_name_data.push_back(hop_by_hop.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::get_children()
{
    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen")
    {
        authen = value;
    }
    if(value_path == "destopts")
    {
        destopts = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "hop-by-hop")
    {
        hop_by_hop = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    	sequence_number{YType::uint32, "sequence-number"},
	 capture{YType::boolean, "capture"},
	 counter_name{YType::str, "counter-name"},
	 destination_port_group{YType::str, "destination-port-group"},
	 destination_prefix_group{YType::str, "destination-prefix-group"},
	 dscp{YType::str, "dscp"},
	 grant{YType::enumeration, "grant"},
	 icmp_off{YType::empty, "icmp-off"},
	 log_option{YType::enumeration, "log-option"},
	 precedence{YType::str, "precedence"},
	 protocol{YType::str, "protocol"},
	 remark{YType::str, "remark"},
	 sequence_str{YType::str, "sequence-str"},
	 source_port_group{YType::str, "source-port-group"},
	 source_prefix_group{YType::str, "source-prefix-group"}
    	,
    destination_network(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>())
	,destination_port(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort>())
	,header_flags(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags>())
	,icmp(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp>())
	,next_hop(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop>())
	,packet_length(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength>())
	,source_network(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>())
	,source_port(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort>())
	,tcp(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp>())
	,time_to_live(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive>())
{
    destination_network->parent = this;
    children["destination-network"] = destination_network.get();

    destination_port->parent = this;
    children["destination-port"] = destination_port.get();

    header_flags->parent = this;
    children["header-flags"] = header_flags.get();

    icmp->parent = this;
    children["icmp"] = icmp.get();

    next_hop->parent = this;
    children["next-hop"] = next_hop.get();

    packet_length->parent = this;
    children["packet-length"] = packet_length.get();

    source_network->parent = this;
    children["source-network"] = source_network.get();

    source_port->parent = this;
    children["source-port"] = source_port.get();

    tcp->parent = this;
    children["tcp"] = tcp.get();

    time_to_live->parent = this;
    children["time-to-live"] = time_to_live.get();

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries";
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::has_data() const
{
    return sequence_number.is_set
	|| capture.is_set
	|| counter_name.is_set
	|| destination_port_group.is_set
	|| destination_prefix_group.is_set
	|| dscp.is_set
	|| grant.is_set
	|| icmp_off.is_set
	|| log_option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| remark.is_set
	|| sequence_str.is_set
	|| source_port_group.is_set
	|| source_prefix_group.is_set
	|| (destination_network !=  nullptr && destination_network->has_data())
	|| (destination_port !=  nullptr && destination_port->has_data())
	|| (header_flags !=  nullptr && header_flags->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (packet_length !=  nullptr && packet_length->has_data())
	|| (source_network !=  nullptr && source_network->has_data())
	|| (source_port !=  nullptr && source_port->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (time_to_live !=  nullptr && time_to_live->has_data());
}

bool Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(capture.operation)
	|| is_set(counter_name.operation)
	|| is_set(destination_port_group.operation)
	|| is_set(destination_prefix_group.operation)
	|| is_set(dscp.operation)
	|| is_set(grant.operation)
	|| is_set(icmp_off.operation)
	|| is_set(log_option.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(remark.operation)
	|| is_set(sequence_str.operation)
	|| is_set(source_port_group.operation)
	|| is_set(source_prefix_group.operation)
	|| (destination_network !=  nullptr && destination_network->has_operation())
	|| (destination_port !=  nullptr && destination_port->has_operation())
	|| (header_flags !=  nullptr && header_flags->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (packet_length !=  nullptr && packet_length->has_operation())
	|| (source_network !=  nullptr && source_network->has_operation())
	|| (source_port !=  nullptr && source_port->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (time_to_live !=  nullptr && time_to_live->has_operation());
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[sequence-number='" <<sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (capture.is_set || is_set(capture.operation)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.operation)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.operation)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.operation)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (icmp_off.is_set || is_set(icmp_off.operation)) leaf_name_data.push_back(icmp_off.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.operation)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.operation)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.operation)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.operation)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-network")
    {
        if(destination_network != nullptr)
        {
            children["destination-network"] = destination_network.get();
        }
        else
        {
            destination_network = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>();
            destination_network->parent = this;
            children["destination-network"] = destination_network.get();
        }
        return children.at("destination-network");
    }

    if(child_yang_name == "destination-port")
    {
        if(destination_port != nullptr)
        {
            children["destination-port"] = destination_port.get();
        }
        else
        {
            destination_port = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort>();
            destination_port->parent = this;
            children["destination-port"] = destination_port.get();
        }
        return children.at("destination-port");
    }

    if(child_yang_name == "header-flags")
    {
        if(header_flags != nullptr)
        {
            children["header-flags"] = header_flags.get();
        }
        else
        {
            header_flags = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags>();
            header_flags->parent = this;
            children["header-flags"] = header_flags.get();
        }
        return children.at("header-flags");
    }

    if(child_yang_name == "icmp")
    {
        if(icmp != nullptr)
        {
            children["icmp"] = icmp.get();
        }
        else
        {
            icmp = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp>();
            icmp->parent = this;
            children["icmp"] = icmp.get();
        }
        return children.at("icmp");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop.get();
        }
        else
        {
            next_hop = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop.get();
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "packet-length")
    {
        if(packet_length != nullptr)
        {
            children["packet-length"] = packet_length.get();
        }
        else
        {
            packet_length = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength>();
            packet_length->parent = this;
            children["packet-length"] = packet_length.get();
        }
        return children.at("packet-length");
    }

    if(child_yang_name == "source-network")
    {
        if(source_network != nullptr)
        {
            children["source-network"] = source_network.get();
        }
        else
        {
            source_network = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>();
            source_network->parent = this;
            children["source-network"] = source_network.get();
        }
        return children.at("source-network");
    }

    if(child_yang_name == "source-port")
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port.get();
        }
        else
        {
            source_port = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort>();
            source_port->parent = this;
            children["source-port"] = source_port.get();
        }
        return children.at("source-port");
    }

    if(child_yang_name == "tcp")
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp.get();
        }
        else
        {
            tcp = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp>();
            tcp->parent = this;
            children["tcp"] = tcp.get();
        }
        return children.at("tcp");
    }

    if(child_yang_name == "time-to-live")
    {
        if(time_to_live != nullptr)
        {
            children["time-to-live"] = time_to_live.get();
        }
        else
        {
            time_to_live = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive>();
            time_to_live->parent = this;
            children["time-to-live"] = time_to_live.get();
        }
        return children.at("time-to-live");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::get_children()
{
    if(children.find("destination-network") == children.end())
    {
        if(destination_network != nullptr)
        {
            children["destination-network"] = destination_network.get();
        }
    }

    if(children.find("destination-port") == children.end())
    {
        if(destination_port != nullptr)
        {
            children["destination-port"] = destination_port.get();
        }
    }

    if(children.find("header-flags") == children.end())
    {
        if(header_flags != nullptr)
        {
            children["header-flags"] = header_flags.get();
        }
    }

    if(children.find("icmp") == children.end())
    {
        if(icmp != nullptr)
        {
            children["icmp"] = icmp.get();
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop.get();
        }
    }

    if(children.find("packet-length") == children.end())
    {
        if(packet_length != nullptr)
        {
            children["packet-length"] = packet_length.get();
        }
    }

    if(children.find("source-network") == children.end())
    {
        if(source_network != nullptr)
        {
            children["source-network"] = source_network.get();
        }
    }

    if(children.find("source-port") == children.end())
    {
        if(source_port != nullptr)
        {
            children["source-port"] = source_port.get();
        }
    }

    if(children.find("tcp") == children.end())
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp.get();
        }
    }

    if(children.find("time-to-live") == children.end())
    {
        if(time_to_live != nullptr)
        {
            children["time-to-live"] = time_to_live.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "capture")
    {
        capture = value;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
    }
    if(value_path == "destination-port-group")
    {
        destination_port_group = value;
    }
    if(value_path == "destination-prefix-group")
    {
        destination_prefix_group = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "icmp-off")
    {
        icmp_off = value;
    }
    if(value_path == "log-option")
    {
        log_option = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
    }
    if(value_path == "source-port-group")
    {
        source_port_group = value;
    }
    if(value_path == "source-prefix-group")
    {
        source_prefix_group = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntries()
{
    yang_name = "access-list-entries"; yang_parent_name = "access";
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
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-entry")
    {
        for(auto const & c : access_list_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry.push_back(std::move(c));
        children[segment_path] = access_list_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::get_children()
{
    for (auto const & c : access_list_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Accesses::Access::Access()
    :
    	name{YType::str, "name"}
    	,
    access_list_entries(std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries>())
{
    access_list_entries->parent = this;
    children["access-list-entries"] = access_list_entries.get();

    yang_name = "access"; yang_parent_name = "accesses";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (access_list_entries !=  nullptr && access_list_entries->has_operation());
}

std::string Ipv6AclAndPrefixList::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/accesses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-list-entries")
    {
        if(access_list_entries != nullptr)
        {
            children["access-list-entries"] = access_list_entries.get();
        }
        else
        {
            access_list_entries = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries>();
            access_list_entries->parent = this;
            children["access-list-entries"] = access_list_entries.get();
        }
        return children.at("access-list-entries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::Access::get_children()
{
    if(children.find("access-list-entries") == children.end())
    {
        if(access_list_entries != nullptr)
        {
            children["access-list-entries"] = access_list_entries.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Ipv6AclAndPrefixList::Accesses::Accesses()
{
    yang_name = "accesses"; yang_parent_name = "ipv6-acl-and-prefix-list";
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
    return is_set(operation);
}

std::string Ipv6AclAndPrefixList::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::Accesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6AclAndPrefixList::Accesses::Access>();
        c->parent = this;
        access.push_back(std::move(c));
        children[segment_path] = access.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::Accesses::get_children()
{
    for (auto const & c : access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::Accesses::set_value(const std::string & value_path, std::string value)
{
}

Ipv6AclAndPrefixList::Ipv6AclAndPrefixList()
    :
    accesses(std::make_unique<Ipv6AclAndPrefixList::Accesses>())
	,log_update(std::make_unique<Ipv6AclAndPrefixList::LogUpdate>())
	,prefixes(std::make_unique<Ipv6AclAndPrefixList::Prefixes>())
{
    accesses->parent = this;
    children["accesses"] = accesses.get();

    log_update->parent = this;
    children["log-update"] = log_update.get();

    prefixes->parent = this;
    children["prefixes"] = prefixes.get();

    yang_name = "ipv6-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv6-acl-cfg";
}

Ipv6AclAndPrefixList::~Ipv6AclAndPrefixList()
{
}

bool Ipv6AclAndPrefixList::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data());
}

bool Ipv6AclAndPrefixList::has_operation() const
{
    return is_set(operation)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string Ipv6AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list";

    return path_buffer.str();

}

EntityPath Ipv6AclAndPrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["accesses"] = accesses.get();
        }
        else
        {
            accesses = std::make_unique<Ipv6AclAndPrefixList::Accesses>();
            accesses->parent = this;
            children["accesses"] = accesses.get();
        }
        return children.at("accesses");
    }

    if(child_yang_name == "log-update")
    {
        if(log_update != nullptr)
        {
            children["log-update"] = log_update.get();
        }
        else
        {
            log_update = std::make_unique<Ipv6AclAndPrefixList::LogUpdate>();
            log_update->parent = this;
            children["log-update"] = log_update.get();
        }
        return children.at("log-update");
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes.get();
        }
        else
        {
            prefixes = std::make_unique<Ipv6AclAndPrefixList::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes.get();
        }
        return children.at("prefixes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6AclAndPrefixList::get_children()
{
    if(children.find("accesses") == children.end())
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses.get();
        }
    }

    if(children.find("log-update") == children.end())
    {
        if(log_update != nullptr)
        {
            children["log-update"] = log_update.get();
        }
    }

    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes.get();
        }
    }

    return children;
}

void Ipv6AclAndPrefixList::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv6AclAndPrefixList::clone_ptr()
{
    return std::make_unique<Ipv6AclAndPrefixList>();
}

const Enum::YLeaf NextHopTypeEnum::none_next_hop {0, "none-next-hop"};
const Enum::YLeaf NextHopTypeEnum::regular_next_hop {1, "regular-next-hop"};
const Enum::YLeaf NextHopTypeEnum::default_next_hop {2, "default-next-hop"};


}
}

