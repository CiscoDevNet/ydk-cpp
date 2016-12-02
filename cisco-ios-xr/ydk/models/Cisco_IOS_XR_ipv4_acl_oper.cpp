
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_acl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_oper {

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::PrefixListSequence()
    :
    	sequence_number{YType::uint32, "sequence-number"},
	 acl_name{YType::str, "acl-name"},
	 grant{YType::enumeration, "grant"},
	 hits{YType::uint32, "hits"},
	 item_type{YType::enumeration, "item-type"},
	 maximum_length{YType::uint32, "maximum-length"},
	 minimum_length{YType::uint32, "minimum-length"},
	 operator_{YType::enumeration, "operator"},
	 prefix{YType::str, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 remark{YType::str, "remark"},
	 sequence{YType::uint32, "sequence"}
{
    yang_name = "prefix-list-sequence"; yang_parent_name = "prefix-list-sequences";
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::~PrefixListSequence()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_data() const
{
    return sequence_number.is_set
	|| acl_name.is_set
	|| grant.is_set
	|| hits.is_set
	|| item_type.is_set
	|| maximum_length.is_set
	|| minimum_length.is_set
	|| operator_.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| remark.is_set
	|| sequence.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(acl_name.operation)
	|| is_set(grant.operation)
	|| is_set(hits.operation)
	|| is_set(item_type.operation)
	|| is_set(maximum_length.operation)
	|| is_set(minimum_length.operation)
	|| is_set(operator_.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(remark.operation)
	|| is_set(sequence.operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequence" <<"[sequence-number='" <<sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (item_type.is_set || is_set(item_type.operation)) leaf_name_data.push_back(item_type.get_name_leafdata());
    if (maximum_length.is_set || is_set(maximum_length.operation)) leaf_name_data.push_back(maximum_length.get_name_leafdata());
    if (minimum_length.is_set || is_set(minimum_length.operation)) leaf_name_data.push_back(minimum_length.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "item-type")
    {
        item_type = value;
    }
    if(value_path == "maximum-length")
    {
        maximum_length = value;
    }
    if(value_path == "minimum-length")
    {
        minimum_length = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "sequence")
    {
        sequence = value;
    }
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequences()
{
    yang_name = "prefix-list-sequences"; yang_parent_name = "prefix";
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::~PrefixListSequences()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_data() const
{
    for (std::size_t index=0; index<prefix_list_sequence.size(); index++)
    {
        if(prefix_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_sequence.size(); index++)
    {
        if(prefix_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-sequences";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence>();
        c->parent = this;
        prefix_list_sequence.push_back(std::move(c));
        children[segment_path] = prefix_list_sequence.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::get_children()
{
    for (auto const & c : prefix_list_sequence)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::Prefix()
    :
    	prefix_list_name{YType::str, "prefix-list-name"}
    	,
    prefix_list_sequences(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>())
{
    prefix_list_sequences->parent = this;
    children["prefix-list-sequences"] = prefix_list_sequences.get();

    yang_name = "prefix"; yang_parent_name = "prefixes";
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::~Prefix()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_data() const
{
    return prefix_list_name.is_set
	|| (prefix_list_sequences !=  nullptr && prefix_list_sequences->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| (prefix_list_sequences !=  nullptr && is_set(prefix_list_sequences->operation));
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix" <<"[prefix-list-name='" <<prefix_list_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/prefixes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["prefix-list-sequences"] = prefix_list_sequences.get();
        }
        else
        {
            prefix_list_sequences = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences>();
            prefix_list_sequences->parent = this;
            children["prefix-list-sequences"] = prefix_list_sequences.get();
        }
        return children.at("prefix-list-sequences");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::get_children()
{
    if(children.find("prefix-list-sequences") == children.end())
    {
        if(prefix_list_sequences != nullptr)
        {
            children["prefix-list-sequences"] = prefix_list_sequences.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "access-list-manager";
}

Ipv4AclAndPrefixList::AccessListManager::Prefixes::~Prefixes()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Prefixes::get_children()
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

void Ipv4AclAndPrefixList::AccessListManager::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::HwNextHopInfo()
    :
    	next_hop{YType::uint32, "next-hop"},
	 type{YType::enumeration, "type"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "hw-next-hop-info"; yang_parent_name = "access-list-sequence";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::~HwNextHopInfo()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_data() const
{
    return next_hop.is_set
	|| type.is_set
	|| vrf_name.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(type.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-next-hop-info";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
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

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::NextHopInfo()
    :
    	at_status{YType::enumeration, "at-status"},
	 is_acl_next_hop_exist{YType::boolean, "is-acl-next-hop-exist"},
	 next_hop{YType::str, "next-hop"},
	 status{YType::enumeration, "status"},
	 track_name{YType::str, "track-name"}
{
    yang_name = "next-hop-info"; yang_parent_name = "access-list-sequence";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::~NextHopInfo()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_data() const
{
    return at_status.is_set
	|| is_acl_next_hop_exist.is_set
	|| next_hop.is_set
	|| status.is_set
	|| track_name.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(at_status.operation)
	|| is_set(is_acl_next_hop_exist.operation)
	|| is_set(next_hop.operation)
	|| is_set(status.operation)
	|| is_set(track_name.operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-info";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_status.is_set || is_set(at_status.operation)) leaf_name_data.push_back(at_status.get_name_leafdata());
    if (is_acl_next_hop_exist.is_set || is_set(is_acl_next_hop_exist.operation)) leaf_name_data.push_back(is_acl_next_hop_exist.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-status")
    {
        at_status = value;
    }
    if(value_path == "is-acl-next-hop-exist")
    {
        is_acl_next_hop_exist = value;
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
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::AccessListSequence()
    :
    	sequence_number{YType::uint32, "sequence-number"},
	 acl_name{YType::str, "acl-name"},
	 capture{YType::boolean, "capture"},
	 counter_name{YType::str, "counter-name"},
	 destination_address{YType::str, "destination-address"},
	 destination_address_mask{YType::str, "destination-address-mask"},
	 destination_operator{YType::enumeration, "destination-operator"},
	 destination_port1{YType::uint16, "destination-port1"},
	 destination_port2{YType::uint16, "destination-port2"},
	 destination_port_group{YType::str, "destination-port-group"},
	 destination_prefix_group{YType::str, "destination-prefix-group"},
	 dscp{YType::uint8, "dscp"},
	 dscp2{YType::uint8, "dscp2"},
	 dscp_operator{YType::uint8, "dscp-operator"},
	 dscp_present{YType::boolean, "dscp-present"},
	 dynamic{YType::boolean, "dynamic"},
	 fragments{YType::uint8, "fragments"},
	 grant{YType::enumeration, "grant"},
	 hits{YType::uint64, "hits"},
	 is_icmp_off{YType::boolean, "is-icmp-off"},
	 item_type{YType::enumeration, "item-type"},
	 log_option{YType::enumeration, "log-option"},
	 next_hop_type{YType::enumeration, "next-hop-type"},
	 no_stats{YType::boolean, "no-stats"},
	 port_length1{YType::uint16, "port-length1"},
	 port_length2{YType::uint16, "port-length2"},
	 port_length_operator{YType::enumeration, "port-length-operator"},
	 precedence{YType::uint8, "precedence"},
	 precedence_present{YType::boolean, "precedence-present"},
	 protocol{YType::uint16, "protocol"},
	 remark{YType::str, "remark"},
	 sequence{YType::uint32, "sequence"},
	 sequence_str{YType::str, "sequence-str"},
	 sorce_operator{YType::enumeration, "sorce-operator"},
	 sorce_port1{YType::uint16, "sorce-port1"},
	 sorce_port2{YType::uint16, "sorce-port2"},
	 source_address{YType::str, "source-address"},
	 source_address_mask{YType::str, "source-address-mask"},
	 source_operator{YType::enumeration, "source-operator"},
	 source_port1{YType::uint16, "source-port1"},
	 source_port2{YType::uint16, "source-port2"},
	 source_port_group{YType::str, "source-port-group"},
	 source_prefix_group{YType::str, "source-prefix-group"},
	 tcp_flags{YType::uint8, "tcp-flags"},
	 tcp_flags_mask{YType::uint8, "tcp-flags-mask"},
	 tcp_flags_operator{YType::enumeration, "tcp-flags-operator"},
	 ttl1{YType::uint16, "ttl1"},
	 ttl2{YType::uint16, "ttl2"},
	 ttl_operator{YType::enumeration, "ttl-operator"}
    	,
    hw_next_hop_info(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>())
{
    hw_next_hop_info->parent = this;
    children["hw-next-hop-info"] = hw_next_hop_info.get();

    yang_name = "access-list-sequence"; yang_parent_name = "access-list-sequences";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::~AccessListSequence()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_data() const
{
    for (std::size_t index=0; index<next_hop_info.size(); index++)
    {
        if(next_hop_info[index]->has_data())
            return true;
    }
    return sequence_number.is_set
	|| acl_name.is_set
	|| capture.is_set
	|| counter_name.is_set
	|| destination_address.is_set
	|| destination_address_mask.is_set
	|| destination_operator.is_set
	|| destination_port1.is_set
	|| destination_port2.is_set
	|| destination_port_group.is_set
	|| destination_prefix_group.is_set
	|| dscp.is_set
	|| dscp2.is_set
	|| dscp_operator.is_set
	|| dscp_present.is_set
	|| dynamic.is_set
	|| fragments.is_set
	|| grant.is_set
	|| hits.is_set
	|| is_icmp_off.is_set
	|| item_type.is_set
	|| log_option.is_set
	|| next_hop_type.is_set
	|| no_stats.is_set
	|| port_length1.is_set
	|| port_length2.is_set
	|| port_length_operator.is_set
	|| precedence.is_set
	|| precedence_present.is_set
	|| protocol.is_set
	|| remark.is_set
	|| sequence.is_set
	|| sequence_str.is_set
	|| sorce_operator.is_set
	|| sorce_port1.is_set
	|| sorce_port2.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| source_operator.is_set
	|| source_port1.is_set
	|| source_port2.is_set
	|| source_port_group.is_set
	|| source_prefix_group.is_set
	|| tcp_flags.is_set
	|| tcp_flags_mask.is_set
	|| tcp_flags_operator.is_set
	|| ttl1.is_set
	|| ttl2.is_set
	|| ttl_operator.is_set
	|| (hw_next_hop_info !=  nullptr && hw_next_hop_info->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::has_operation() const
{
    for (std::size_t index=0; index<next_hop_info.size(); index++)
    {
        if(next_hop_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(acl_name.operation)
	|| is_set(capture.operation)
	|| is_set(counter_name.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_address_mask.operation)
	|| is_set(destination_operator.operation)
	|| is_set(destination_port1.operation)
	|| is_set(destination_port2.operation)
	|| is_set(destination_port_group.operation)
	|| is_set(destination_prefix_group.operation)
	|| is_set(dscp.operation)
	|| is_set(dscp2.operation)
	|| is_set(dscp_operator.operation)
	|| is_set(dscp_present.operation)
	|| is_set(dynamic.operation)
	|| is_set(fragments.operation)
	|| is_set(grant.operation)
	|| is_set(hits.operation)
	|| is_set(is_icmp_off.operation)
	|| is_set(item_type.operation)
	|| is_set(log_option.operation)
	|| is_set(next_hop_type.operation)
	|| is_set(no_stats.operation)
	|| is_set(port_length1.operation)
	|| is_set(port_length2.operation)
	|| is_set(port_length_operator.operation)
	|| is_set(precedence.operation)
	|| is_set(precedence_present.operation)
	|| is_set(protocol.operation)
	|| is_set(remark.operation)
	|| is_set(sequence.operation)
	|| is_set(sequence_str.operation)
	|| is_set(sorce_operator.operation)
	|| is_set(sorce_port1.operation)
	|| is_set(sorce_port2.operation)
	|| is_set(source_address.operation)
	|| is_set(source_address_mask.operation)
	|| is_set(source_operator.operation)
	|| is_set(source_port1.operation)
	|| is_set(source_port2.operation)
	|| is_set(source_port_group.operation)
	|| is_set(source_prefix_group.operation)
	|| is_set(tcp_flags.operation)
	|| is_set(tcp_flags_mask.operation)
	|| is_set(tcp_flags_operator.operation)
	|| is_set(ttl1.operation)
	|| is_set(ttl2.operation)
	|| is_set(ttl_operator.operation)
	|| (hw_next_hop_info !=  nullptr && is_set(hw_next_hop_info->operation));
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequence" <<"[sequence-number='" <<sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (capture.is_set || is_set(capture.operation)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.operation)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_mask.is_set || is_set(destination_address_mask.operation)) leaf_name_data.push_back(destination_address_mask.get_name_leafdata());
    if (destination_operator.is_set || is_set(destination_operator.operation)) leaf_name_data.push_back(destination_operator.get_name_leafdata());
    if (destination_port1.is_set || is_set(destination_port1.operation)) leaf_name_data.push_back(destination_port1.get_name_leafdata());
    if (destination_port2.is_set || is_set(destination_port2.operation)) leaf_name_data.push_back(destination_port2.get_name_leafdata());
    if (destination_port_group.is_set || is_set(destination_port_group.operation)) leaf_name_data.push_back(destination_port_group.get_name_leafdata());
    if (destination_prefix_group.is_set || is_set(destination_prefix_group.operation)) leaf_name_data.push_back(destination_prefix_group.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dscp2.is_set || is_set(dscp2.operation)) leaf_name_data.push_back(dscp2.get_name_leafdata());
    if (dscp_operator.is_set || is_set(dscp_operator.operation)) leaf_name_data.push_back(dscp_operator.get_name_leafdata());
    if (dscp_present.is_set || is_set(dscp_present.operation)) leaf_name_data.push_back(dscp_present.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (is_icmp_off.is_set || is_set(is_icmp_off.operation)) leaf_name_data.push_back(is_icmp_off.get_name_leafdata());
    if (item_type.is_set || is_set(item_type.operation)) leaf_name_data.push_back(item_type.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.operation)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.operation)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.operation)) leaf_name_data.push_back(no_stats.get_name_leafdata());
    if (port_length1.is_set || is_set(port_length1.operation)) leaf_name_data.push_back(port_length1.get_name_leafdata());
    if (port_length2.is_set || is_set(port_length2.operation)) leaf_name_data.push_back(port_length2.get_name_leafdata());
    if (port_length_operator.is_set || is_set(port_length_operator.operation)) leaf_name_data.push_back(port_length_operator.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_present.is_set || is_set(precedence_present.operation)) leaf_name_data.push_back(precedence_present.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.operation)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (sorce_operator.is_set || is_set(sorce_operator.operation)) leaf_name_data.push_back(sorce_operator.get_name_leafdata());
    if (sorce_port1.is_set || is_set(sorce_port1.operation)) leaf_name_data.push_back(sorce_port1.get_name_leafdata());
    if (sorce_port2.is_set || is_set(sorce_port2.operation)) leaf_name_data.push_back(sorce_port2.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.operation)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (source_operator.is_set || is_set(source_operator.operation)) leaf_name_data.push_back(source_operator.get_name_leafdata());
    if (source_port1.is_set || is_set(source_port1.operation)) leaf_name_data.push_back(source_port1.get_name_leafdata());
    if (source_port2.is_set || is_set(source_port2.operation)) leaf_name_data.push_back(source_port2.get_name_leafdata());
    if (source_port_group.is_set || is_set(source_port_group.operation)) leaf_name_data.push_back(source_port_group.get_name_leafdata());
    if (source_prefix_group.is_set || is_set(source_prefix_group.operation)) leaf_name_data.push_back(source_prefix_group.get_name_leafdata());
    if (tcp_flags.is_set || is_set(tcp_flags.operation)) leaf_name_data.push_back(tcp_flags.get_name_leafdata());
    if (tcp_flags_mask.is_set || is_set(tcp_flags_mask.operation)) leaf_name_data.push_back(tcp_flags_mask.get_name_leafdata());
    if (tcp_flags_operator.is_set || is_set(tcp_flags_operator.operation)) leaf_name_data.push_back(tcp_flags_operator.get_name_leafdata());
    if (ttl1.is_set || is_set(ttl1.operation)) leaf_name_data.push_back(ttl1.get_name_leafdata());
    if (ttl2.is_set || is_set(ttl2.operation)) leaf_name_data.push_back(ttl2.get_name_leafdata());
    if (ttl_operator.is_set || is_set(ttl_operator.operation)) leaf_name_data.push_back(ttl_operator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["hw-next-hop-info"] = hw_next_hop_info.get();
        }
        else
        {
            hw_next_hop_info = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo>();
            hw_next_hop_info->parent = this;
            children["hw-next-hop-info"] = hw_next_hop_info.get();
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo>();
        c->parent = this;
        next_hop_info.push_back(std::move(c));
        children[segment_path] = next_hop_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::get_children()
{
    if(children.find("hw-next-hop-info") == children.end())
    {
        if(hw_next_hop_info != nullptr)
        {
            children["hw-next-hop-info"] = hw_next_hop_info.get();
        }
    }

    for (auto const & c : next_hop_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-address-mask")
    {
        destination_address_mask = value;
    }
    if(value_path == "destination-operator")
    {
        destination_operator = value;
    }
    if(value_path == "destination-port1")
    {
        destination_port1 = value;
    }
    if(value_path == "destination-port2")
    {
        destination_port2 = value;
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
    if(value_path == "dscp2")
    {
        dscp2 = value;
    }
    if(value_path == "dscp-operator")
    {
        dscp_operator = value;
    }
    if(value_path == "dscp-present")
    {
        dscp_present = value;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "is-icmp-off")
    {
        is_icmp_off = value;
    }
    if(value_path == "item-type")
    {
        item_type = value;
    }
    if(value_path == "log-option")
    {
        log_option = value;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
    }
    if(value_path == "no-stats")
    {
        no_stats = value;
    }
    if(value_path == "port-length1")
    {
        port_length1 = value;
    }
    if(value_path == "port-length2")
    {
        port_length2 = value;
    }
    if(value_path == "port-length-operator")
    {
        port_length_operator = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "precedence-present")
    {
        precedence_present = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
    }
    if(value_path == "sorce-operator")
    {
        sorce_operator = value;
    }
    if(value_path == "sorce-port1")
    {
        sorce_port1 = value;
    }
    if(value_path == "sorce-port2")
    {
        sorce_port2 = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
    }
    if(value_path == "source-operator")
    {
        source_operator = value;
    }
    if(value_path == "source-port1")
    {
        source_port1 = value;
    }
    if(value_path == "source-port2")
    {
        source_port2 = value;
    }
    if(value_path == "source-port-group")
    {
        source_port_group = value;
    }
    if(value_path == "source-prefix-group")
    {
        source_prefix_group = value;
    }
    if(value_path == "tcp-flags")
    {
        tcp_flags = value;
    }
    if(value_path == "tcp-flags-mask")
    {
        tcp_flags_mask = value;
    }
    if(value_path == "tcp-flags-operator")
    {
        tcp_flags_operator = value;
    }
    if(value_path == "ttl1")
    {
        ttl1 = value;
    }
    if(value_path == "ttl2")
    {
        ttl2 = value;
    }
    if(value_path == "ttl-operator")
    {
        ttl_operator = value;
    }
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequences()
{
    yang_name = "access-list-sequences"; yang_parent_name = "access";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::~AccessListSequences()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_data() const
{
    for (std::size_t index=0; index<access_list_sequence.size(); index++)
    {
        if(access_list_sequence[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::has_operation() const
{
    for (std::size_t index=0; index<access_list_sequence.size(); index++)
    {
        if(access_list_sequence[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-sequences";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence>();
        c->parent = this;
        access_list_sequence.push_back(std::move(c));
        children[segment_path] = access_list_sequence.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::get_children()
{
    for (auto const & c : access_list_sequence)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::Access()
    :
    	access_list_name{YType::str, "access-list-name"}
    	,
    access_list_sequences(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>())
{
    access_list_sequences->parent = this;
    children["access-list-sequences"] = access_list_sequences.get();

    yang_name = "access"; yang_parent_name = "accesses";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::~Access()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::has_data() const
{
    return access_list_name.is_set
	|| (access_list_sequences !=  nullptr && access_list_sequences->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| (access_list_sequences !=  nullptr && is_set(access_list_sequences->operation));
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[access-list-name='" <<access_list_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/accesses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["access-list-sequences"] = access_list_sequences.get();
        }
        else
        {
            access_list_sequences = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences>();
            access_list_sequences->parent = this;
            children["access-list-sequences"] = access_list_sequences.get();
        }
        return children.at("access-list-sequences");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::get_children()
{
    if(children.find("access-list-sequences") == children.end())
    {
        if(access_list_sequences != nullptr)
        {
            children["access-list-sequences"] = access_list_sequences.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::Accesses()
{
    yang_name = "accesses"; yang_parent_name = "access-list-manager";
}

Ipv4AclAndPrefixList::AccessListManager::Accesses::~Accesses()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Accesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses::Access>();
        c->parent = this;
        access.push_back(std::move(c));
        children[segment_path] = access.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Accesses::get_children()
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

void Ipv4AclAndPrefixList::AccessListManager::Accesses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::Usage()
    :
    	access_list_name{YType::str, "access-list-name"},
	 application_id{YType::enumeration, "application-id"},
	 node_name{YType::str, "node-name"},
	 usage_details{YType::str, "usage-details"}
{
    yang_name = "usage"; yang_parent_name = "usages";
}

Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::~Usage()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::has_data() const
{
    return access_list_name.is_set
	|| application_id.is_set
	|| node_name.is_set
	|| usage_details.is_set;
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(application_id.operation)
	|| is_set(node_name.operation)
	|| is_set(usage_details.operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/usages/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (application_id.is_set || is_set(application_id.operation)) leaf_name_data.push_back(application_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (usage_details.is_set || is_set(usage_details.operation)) leaf_name_data.push_back(usage_details.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Usages::Usage::set_value(const std::string & value_path, std::string value)
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

Ipv4AclAndPrefixList::AccessListManager::Usages::Usages()
{
    yang_name = "usages"; yang_parent_name = "access-list-manager";
}

Ipv4AclAndPrefixList::AccessListManager::Usages::~Usages()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::has_data() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::AccessListManager::Usages::has_operation() const
{
    for (std::size_t index=0; index<usage.size(); index++)
    {
        if(usage[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::AccessListManager::Usages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usages";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::Usages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/access-list-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::Usages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Usages::Usage>();
        c->parent = this;
        usage.push_back(std::move(c));
        children[segment_path] = usage.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::Usages::get_children()
{
    for (auto const & c : usage)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::Usages::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::AccessListManager::AccessListManager()
    :
    accesses(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses>())
	,prefixes(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes>())
	,usages(std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Usages>())
{
    accesses->parent = this;
    children["accesses"] = accesses.get();

    prefixes->parent = this;
    children["prefixes"] = prefixes.get();

    usages->parent = this;
    children["usages"] = usages.get();

    yang_name = "access-list-manager"; yang_parent_name = "ipv4-acl-and-prefix-list";
}

Ipv4AclAndPrefixList::AccessListManager::~AccessListManager()
{
}

bool Ipv4AclAndPrefixList::AccessListManager::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (usages !=  nullptr && usages->has_data());
}

bool Ipv4AclAndPrefixList::AccessListManager::has_operation() const
{
    return is_set(operation)
	|| (accesses !=  nullptr && is_set(accesses->operation))
	|| (prefixes !=  nullptr && is_set(prefixes->operation))
	|| (usages !=  nullptr && is_set(usages->operation));
}

std::string Ipv4AclAndPrefixList::AccessListManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-manager";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::AccessListManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::AccessListManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            accesses = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Accesses>();
            accesses->parent = this;
            children["accesses"] = accesses.get();
        }
        return children.at("accesses");
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes.get();
        }
        else
        {
            prefixes = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes.get();
        }
        return children.at("prefixes");
    }

    if(child_yang_name == "usages")
    {
        if(usages != nullptr)
        {
            children["usages"] = usages.get();
        }
        else
        {
            usages = std::make_unique<Ipv4AclAndPrefixList::AccessListManager::Usages>();
            usages->parent = this;
            children["usages"] = usages.get();
        }
        return children.at("usages");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::AccessListManager::get_children()
{
    if(children.find("accesses") == children.end())
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses.get();
        }
    }

    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes.get();
        }
    }

    if(children.find("usages") == children.end())
    {
        if(usages != nullptr)
        {
            children["usages"] = usages.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::AccessListManager::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Oor::Details::Details()
    :
    	current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
	 current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
	 default_max_ac_es{YType::uint32, "default-max-ac-es"},
	 default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
	 max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"},
	 max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "oor";
}

Ipv4AclAndPrefixList::Oor::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::Details::has_data() const
{
    return current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| default_max_ac_ls.is_set
	|| max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set;
}

bool Ipv4AclAndPrefixList::Oor::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(current_max_configurable_ac_es.operation)
	|| is_set(current_max_configurable_ac_ls.operation)
	|| is_set(default_max_ac_es.operation)
	|| is_set(default_max_ac_ls.operation)
	|| is_set(max_configurable_ac_es.operation)
	|| is_set(max_configurable_ac_ls.operation);
}

std::string Ipv4AclAndPrefixList::Oor::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.operation)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.operation)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.operation)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.operation)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.operation)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.operation)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::Details::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::Oor::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
    }
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::OorPrefix()
    :
    	prefix_list_name{YType::str, "prefix-list-name"},
	 current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
	 current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
	 default_max_ac_es{YType::uint32, "default-max-ac-es"},
	 default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
	 max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"},
	 max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"}
{
    yang_name = "oor-prefix"; yang_parent_name = "oor-prefixes";
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::~OorPrefix()
{
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_data() const
{
    return prefix_list_name.is_set
	|| current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| default_max_ac_ls.is_set
	|| max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set;
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(current_max_configurable_ac_es.operation)
	|| is_set(current_max_configurable_ac_ls.operation)
	|| is_set(default_max_ac_es.operation)
	|| is_set(default_max_ac_ls.operation)
	|| is_set(max_configurable_ac_es.operation)
	|| is_set(max_configurable_ac_ls.operation);
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefix" <<"[prefix-list-name='" <<prefix_list_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/oor-prefixes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.operation)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.operation)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.operation)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.operation)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.operation)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.operation)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
    }
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefixes()
{
    yang_name = "oor-prefixes"; yang_parent_name = "oor";
}

Ipv4AclAndPrefixList::Oor::OorPrefixes::~OorPrefixes()
{
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::has_data() const
{
    for (std::size_t index=0; index<oor_prefix.size(); index++)
    {
        if(oor_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::Oor::OorPrefixes::has_operation() const
{
    for (std::size_t index=0; index<oor_prefix.size(); index++)
    {
        if(oor_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::Oor::OorPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-prefixes";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::OorPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::OorPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix>();
        c->parent = this;
        oor_prefix.push_back(std::move(c));
        children[segment_path] = oor_prefix.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::OorPrefixes::get_children()
{
    for (auto const & c : oor_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::Oor::OorPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::OorAccess()
    :
    	access_list_name{YType::str, "access-list-name"},
	 current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
	 current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
	 default_max_ac_es{YType::uint32, "default-max-ac-es"},
	 default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
	 max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"},
	 max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"}
{
    yang_name = "oor-access"; yang_parent_name = "oor-accesses";
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::~OorAccess()
{
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::has_data() const
{
    return access_list_name.is_set
	|| current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| default_max_ac_ls.is_set
	|| max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set;
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(current_max_configurable_ac_es.operation)
	|| is_set(current_max_configurable_ac_ls.operation)
	|| is_set(default_max_ac_es.operation)
	|| is_set(default_max_ac_ls.operation)
	|| is_set(max_configurable_ac_es.operation)
	|| is_set(max_configurable_ac_ls.operation);
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-access" <<"[access-list-name='" <<access_list_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/oor-accesses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.operation)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.operation)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.operation)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.operation)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.operation)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.operation)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
    }
}

Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccesses()
{
    yang_name = "oor-accesses"; yang_parent_name = "oor";
}

Ipv4AclAndPrefixList::Oor::OorAccesses::~OorAccesses()
{
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::has_data() const
{
    for (std::size_t index=0; index<oor_access.size(); index++)
    {
        if(oor_access[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4AclAndPrefixList::Oor::OorAccesses::has_operation() const
{
    for (std::size_t index=0; index<oor_access.size(); index++)
    {
        if(oor_access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4AclAndPrefixList::Oor::OorAccesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-accesses";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::OorAccesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::OorAccesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess>();
        c->parent = this;
        oor_access.push_back(std::move(c));
        children[segment_path] = oor_access.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::OorAccesses::get_children()
{
    for (auto const & c : oor_access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::Oor::OorAccesses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::Details()
    :
    	current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
	 current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
	 default_max_ac_es{YType::uint32, "default-max-ac-es"},
	 default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
	 max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"},
	 max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "access-list-summary";
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::has_data() const
{
    return current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| default_max_ac_ls.is_set
	|| max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set;
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(current_max_configurable_ac_es.operation)
	|| is_set(current_max_configurable_ac_ls.operation)
	|| is_set(default_max_ac_es.operation)
	|| is_set(default_max_ac_ls.operation)
	|| is_set(max_configurable_ac_es.operation)
	|| is_set(max_configurable_ac_ls.operation);
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/access-list-summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.operation)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.operation)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.operation)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.operation)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.operation)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.operation)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
    }
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::AccessListSummary()
    :
    details(std::make_unique<Ipv4AclAndPrefixList::Oor::AccessListSummary::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "access-list-summary"; yang_parent_name = "oor";
}

Ipv4AclAndPrefixList::Oor::AccessListSummary::~AccessListSummary()
{
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool Ipv4AclAndPrefixList::Oor::AccessListSummary::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string Ipv4AclAndPrefixList::Oor::AccessListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-summary";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::AccessListSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::AccessListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<Ipv4AclAndPrefixList::Oor::AccessListSummary::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::AccessListSummary::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::Oor::AccessListSummary::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::Details()
    :
    	current_configured_ac_es{YType::uint32, "current-configured-ac-es"},
	 current_configured_ac_ls{YType::uint32, "current-configured-ac-ls"},
	 current_max_configurable_ac_es{YType::uint32, "current-max-configurable-ac-es"},
	 current_max_configurable_ac_ls{YType::uint32, "current-max-configurable-ac-ls"},
	 default_max_ac_es{YType::uint32, "default-max-ac-es"},
	 default_max_ac_ls{YType::uint32, "default-max-ac-ls"},
	 max_configurable_ac_es{YType::uint32, "max-configurable-ac-es"},
	 max_configurable_ac_ls{YType::uint32, "max-configurable-ac-ls"}
{
    yang_name = "details"; yang_parent_name = "prefix-list-summary";
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::~Details()
{
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::has_data() const
{
    return current_configured_ac_es.is_set
	|| current_configured_ac_ls.is_set
	|| current_max_configurable_ac_es.is_set
	|| current_max_configurable_ac_ls.is_set
	|| default_max_ac_es.is_set
	|| default_max_ac_ls.is_set
	|| max_configurable_ac_es.is_set
	|| max_configurable_ac_ls.is_set;
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::has_operation() const
{
    return is_set(operation)
	|| is_set(current_configured_ac_es.operation)
	|| is_set(current_configured_ac_ls.operation)
	|| is_set(current_max_configurable_ac_es.operation)
	|| is_set(current_max_configurable_ac_ls.operation)
	|| is_set(default_max_ac_es.operation)
	|| is_set(default_max_ac_ls.operation)
	|| is_set(max_configurable_ac_es.operation)
	|| is_set(max_configurable_ac_ls.operation);
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/prefix-list-summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_configured_ac_es.is_set || is_set(current_configured_ac_es.operation)) leaf_name_data.push_back(current_configured_ac_es.get_name_leafdata());
    if (current_configured_ac_ls.is_set || is_set(current_configured_ac_ls.operation)) leaf_name_data.push_back(current_configured_ac_ls.get_name_leafdata());
    if (current_max_configurable_ac_es.is_set || is_set(current_max_configurable_ac_es.operation)) leaf_name_data.push_back(current_max_configurable_ac_es.get_name_leafdata());
    if (current_max_configurable_ac_ls.is_set || is_set(current_max_configurable_ac_ls.operation)) leaf_name_data.push_back(current_max_configurable_ac_ls.get_name_leafdata());
    if (default_max_ac_es.is_set || is_set(default_max_ac_es.operation)) leaf_name_data.push_back(default_max_ac_es.get_name_leafdata());
    if (default_max_ac_ls.is_set || is_set(default_max_ac_ls.operation)) leaf_name_data.push_back(default_max_ac_ls.get_name_leafdata());
    if (max_configurable_ac_es.is_set || is_set(max_configurable_ac_es.operation)) leaf_name_data.push_back(max_configurable_ac_es.get_name_leafdata());
    if (max_configurable_ac_ls.is_set || is_set(max_configurable_ac_ls.operation)) leaf_name_data.push_back(max_configurable_ac_ls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::get_children()
{
    return children;
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-configured-ac-es")
    {
        current_configured_ac_es = value;
    }
    if(value_path == "current-configured-ac-ls")
    {
        current_configured_ac_ls = value;
    }
    if(value_path == "current-max-configurable-ac-es")
    {
        current_max_configurable_ac_es = value;
    }
    if(value_path == "current-max-configurable-ac-ls")
    {
        current_max_configurable_ac_ls = value;
    }
    if(value_path == "default-max-ac-es")
    {
        default_max_ac_es = value;
    }
    if(value_path == "default-max-ac-ls")
    {
        default_max_ac_ls = value;
    }
    if(value_path == "max-configurable-ac-es")
    {
        max_configurable_ac_es = value;
    }
    if(value_path == "max-configurable-ac-ls")
    {
        max_configurable_ac_ls = value;
    }
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::PrefixListSummary()
    :
    details(std::make_unique<Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "prefix-list-summary"; yang_parent_name = "oor";
}

Ipv4AclAndPrefixList::Oor::PrefixListSummary::~PrefixListSummary()
{
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool Ipv4AclAndPrefixList::Oor::PrefixListSummary::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-summary";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/oor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::PrefixListSummary::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::Oor::PrefixListSummary::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Oor::Oor()
    :
    access_list_summary(std::make_unique<Ipv4AclAndPrefixList::Oor::AccessListSummary>())
	,details(std::make_unique<Ipv4AclAndPrefixList::Oor::Details>())
	,oor_accesses(std::make_unique<Ipv4AclAndPrefixList::Oor::OorAccesses>())
	,oor_prefixes(std::make_unique<Ipv4AclAndPrefixList::Oor::OorPrefixes>())
	,prefix_list_summary(std::make_unique<Ipv4AclAndPrefixList::Oor::PrefixListSummary>())
{
    access_list_summary->parent = this;
    children["access-list-summary"] = access_list_summary.get();

    details->parent = this;
    children["details"] = details.get();

    oor_accesses->parent = this;
    children["oor-accesses"] = oor_accesses.get();

    oor_prefixes->parent = this;
    children["oor-prefixes"] = oor_prefixes.get();

    prefix_list_summary->parent = this;
    children["prefix-list-summary"] = prefix_list_summary.get();

    yang_name = "oor"; yang_parent_name = "ipv4-acl-and-prefix-list";
}

Ipv4AclAndPrefixList::Oor::~Oor()
{
}

bool Ipv4AclAndPrefixList::Oor::has_data() const
{
    return (access_list_summary !=  nullptr && access_list_summary->has_data())
	|| (details !=  nullptr && details->has_data())
	|| (oor_accesses !=  nullptr && oor_accesses->has_data())
	|| (oor_prefixes !=  nullptr && oor_prefixes->has_data())
	|| (prefix_list_summary !=  nullptr && prefix_list_summary->has_data());
}

bool Ipv4AclAndPrefixList::Oor::has_operation() const
{
    return is_set(operation)
	|| (access_list_summary !=  nullptr && is_set(access_list_summary->operation))
	|| (details !=  nullptr && is_set(details->operation))
	|| (oor_accesses !=  nullptr && is_set(oor_accesses->operation))
	|| (oor_prefixes !=  nullptr && is_set(oor_prefixes->operation))
	|| (prefix_list_summary !=  nullptr && is_set(prefix_list_summary->operation));
}

std::string Ipv4AclAndPrefixList::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::Oor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["access-list-summary"] = access_list_summary.get();
        }
        else
        {
            access_list_summary = std::make_unique<Ipv4AclAndPrefixList::Oor::AccessListSummary>();
            access_list_summary->parent = this;
            children["access-list-summary"] = access_list_summary.get();
        }
        return children.at("access-list-summary");
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<Ipv4AclAndPrefixList::Oor::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    if(child_yang_name == "oor-accesses")
    {
        if(oor_accesses != nullptr)
        {
            children["oor-accesses"] = oor_accesses.get();
        }
        else
        {
            oor_accesses = std::make_unique<Ipv4AclAndPrefixList::Oor::OorAccesses>();
            oor_accesses->parent = this;
            children["oor-accesses"] = oor_accesses.get();
        }
        return children.at("oor-accesses");
    }

    if(child_yang_name == "oor-prefixes")
    {
        if(oor_prefixes != nullptr)
        {
            children["oor-prefixes"] = oor_prefixes.get();
        }
        else
        {
            oor_prefixes = std::make_unique<Ipv4AclAndPrefixList::Oor::OorPrefixes>();
            oor_prefixes->parent = this;
            children["oor-prefixes"] = oor_prefixes.get();
        }
        return children.at("oor-prefixes");
    }

    if(child_yang_name == "prefix-list-summary")
    {
        if(prefix_list_summary != nullptr)
        {
            children["prefix-list-summary"] = prefix_list_summary.get();
        }
        else
        {
            prefix_list_summary = std::make_unique<Ipv4AclAndPrefixList::Oor::PrefixListSummary>();
            prefix_list_summary->parent = this;
            children["prefix-list-summary"] = prefix_list_summary.get();
        }
        return children.at("prefix-list-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::Oor::get_children()
{
    if(children.find("access-list-summary") == children.end())
    {
        if(access_list_summary != nullptr)
        {
            children["access-list-summary"] = access_list_summary.get();
        }
    }

    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    if(children.find("oor-accesses") == children.end())
    {
        if(oor_accesses != nullptr)
        {
            children["oor-accesses"] = oor_accesses.get();
        }
    }

    if(children.find("oor-prefixes") == children.end())
    {
        if(oor_prefixes != nullptr)
        {
            children["oor-prefixes"] = oor_prefixes.get();
        }
    }

    if(children.find("prefix-list-summary") == children.end())
    {
        if(prefix_list_summary != nullptr)
        {
            children["prefix-list-summary"] = prefix_list_summary.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::Oor::set_value(const std::string & value_path, std::string value)
{
}

Ipv4AclAndPrefixList::Ipv4AclAndPrefixList()
    :
    access_list_manager(std::make_unique<Ipv4AclAndPrefixList::AccessListManager>())
	,oor(std::make_unique<Ipv4AclAndPrefixList::Oor>())
{
    access_list_manager->parent = this;
    children["access-list-manager"] = access_list_manager.get();

    oor->parent = this;
    children["oor"] = oor.get();

    yang_name = "ipv4-acl-and-prefix-list"; yang_parent_name = "Cisco-IOS-XR-ipv4-acl-oper";
}

Ipv4AclAndPrefixList::~Ipv4AclAndPrefixList()
{
}

bool Ipv4AclAndPrefixList::has_data() const
{
    return (access_list_manager !=  nullptr && access_list_manager->has_data())
	|| (oor !=  nullptr && oor->has_data());
}

bool Ipv4AclAndPrefixList::has_operation() const
{
    return is_set(operation)
	|| (access_list_manager !=  nullptr && is_set(access_list_manager->operation))
	|| (oor !=  nullptr && is_set(oor->operation));
}

std::string Ipv4AclAndPrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list";

    return path_buffer.str();

}

EntityPath Ipv4AclAndPrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4AclAndPrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["access-list-manager"] = access_list_manager.get();
        }
        else
        {
            access_list_manager = std::make_unique<Ipv4AclAndPrefixList::AccessListManager>();
            access_list_manager->parent = this;
            children["access-list-manager"] = access_list_manager.get();
        }
        return children.at("access-list-manager");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<Ipv4AclAndPrefixList::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4AclAndPrefixList::get_children()
{
    if(children.find("access-list-manager") == children.end())
    {
        if(access_list_manager != nullptr)
        {
            children["access-list-manager"] = access_list_manager.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    return children;
}

void Ipv4AclAndPrefixList::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv4AclAndPrefixList::clone_ptr()
{
    return std::make_unique<Ipv4AclAndPrefixList>();
}

const Enum::Value AclTcpflagsOperatorEnum::match_none {0, "match-none"};
const Enum::Value AclTcpflagsOperatorEnum::match_all {1, "match-all"};
const Enum::Value AclTcpflagsOperatorEnum::match_any_old {2, "match-any-old"};
const Enum::Value AclTcpflagsOperatorEnum::match_any {3, "match-any"};

const Enum::Value AclPortOperatorEnum::none {0, "none"};
const Enum::Value AclPortOperatorEnum::eq {1, "eq"};
const Enum::Value AclPortOperatorEnum::gt {2, "gt"};
const Enum::Value AclPortOperatorEnum::lt {3, "lt"};
const Enum::Value AclPortOperatorEnum::neq {4, "neq"};
const Enum::Value AclPortOperatorEnum::range {5, "range"};
const Enum::Value AclPortOperatorEnum::onebyte {8, "onebyte"};
const Enum::Value AclPortOperatorEnum::twobytes {9, "twobytes"};

const Enum::Value AclAce1Enum::normal {0, "normal"};
const Enum::Value AclAce1Enum::remark {1, "remark"};
const Enum::Value AclAce1Enum::abf {2, "abf"};

const Enum::Value BagAclNhAtStatusEnum::unknown {0, "unknown"};
const Enum::Value BagAclNhAtStatusEnum::up {1, "up"};
const Enum::Value BagAclNhAtStatusEnum::down {2, "down"};
const Enum::Value BagAclNhAtStatusEnum::not_present {3, "not-present"};
const Enum::Value BagAclNhAtStatusEnum::max {4, "max"};

const Enum::Value BagAclNhEnum::nexthop_none {0, "nexthop-none"};
const Enum::Value BagAclNhEnum::nexthop_default {1, "nexthop-default"};
const Enum::Value BagAclNhEnum::nexthop {2, "nexthop"};

const Enum::Value AclActionEnum::deny {0, "deny"};
const Enum::Value AclActionEnum::permit {1, "permit"};
const Enum::Value AclActionEnum::encrypt {2, "encrypt"};
const Enum::Value AclActionEnum::bypass {3, "bypass"};
const Enum::Value AclActionEnum::fallthrough {4, "fallthrough"};
const Enum::Value AclActionEnum::invalid {5, "invalid"};

const Enum::Value BagAclNhStatusEnum::not_present {0, "not-present"};
const Enum::Value BagAclNhStatusEnum::unknown {1, "unknown"};
const Enum::Value BagAclNhStatusEnum::down {2, "down"};
const Enum::Value BagAclNhStatusEnum::up {3, "up"};
const Enum::Value BagAclNhStatusEnum::max {4, "max"};

const Enum::Value AclLogEnum::log_none {0, "log-none"};
const Enum::Value AclLogEnum::log {1, "log"};
const Enum::Value AclLogEnum::log_input {2, "log-input"};


}
}

