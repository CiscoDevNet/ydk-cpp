
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_es_acl_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_es_acl_cfg {

EsAcl::EsAcl()
    :
    accesses(std::make_shared<EsAcl::Accesses>())
{
    accesses->parent = this;
    children["accesses"] = accesses;

    yang_name = "es-acl"; yang_parent_name = "Cisco-IOS-XR-es-acl-cfg";
}

EsAcl::~EsAcl()
{
}

bool EsAcl::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data());
}

bool EsAcl::has_operation() const
{
    return is_set(operation)
	|| (accesses !=  nullptr && accesses->has_operation());
}

std::string EsAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl";

    return path_buffer.str();

}

EntityPath EsAcl::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EsAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            accesses = std::make_shared<EsAcl::Accesses>();
            accesses->parent = this;
            children["accesses"] = accesses;
        }
        return children.at("accesses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::get_children()
{
    if(children.find("accesses") == children.end())
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses;
        }
    }

    return children;
}

void EsAcl::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EsAcl::clone_ptr() const
{
    return std::make_shared<EsAcl>();
}

std::string EsAcl::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EsAcl::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EsAcl::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EsAcl::Accesses::Accesses()
{
    yang_name = "accesses"; yang_parent_name = "es-acl";
}

EsAcl::Accesses::~Accesses()
{
}

bool EsAcl::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<EsAcl::Accesses::Access>();
        c->parent = this;
        access.push_back(std::move(c));
        children[segment_path] = access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::get_children()
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

void EsAcl::Accesses::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Accesses::Access::Access()
    :
    name{YType::str, "name"}
    	,
    access_list_entries(std::make_shared<EsAcl::Accesses::Access::AccessListEntries>())
{
    access_list_entries->parent = this;
    children["access-list-entries"] = access_list_entries;

    yang_name = "access"; yang_parent_name = "accesses";
}

EsAcl::Accesses::Access::~Access()
{
}

bool EsAcl::Accesses::Access::has_data() const
{
    return name.is_set
	|| (access_list_entries !=  nullptr && access_list_entries->has_data());
}

bool EsAcl::Accesses::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (access_list_entries !=  nullptr && access_list_entries->has_operation());
}

std::string EsAcl::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-es-acl-cfg:es-acl/accesses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["access-list-entries"] = access_list_entries;
        }
        else
        {
            access_list_entries = std::make_shared<EsAcl::Accesses::Access::AccessListEntries>();
            access_list_entries->parent = this;
            children["access-list-entries"] = access_list_entries;
        }
        return children.at("access-list-entries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::Access::get_children()
{
    if(children.find("access-list-entries") == children.end())
    {
        if(access_list_entries != nullptr)
        {
            children["access-list-entries"] = access_list_entries;
        }
    }

    return children;
}

void EsAcl::Accesses::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntries()
{
    yang_name = "access-list-entries"; yang_parent_name = "access";
}

EsAcl::Accesses::Access::AccessListEntries::~AccessListEntries()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::has_data() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_data())
            return true;
    }
    return false;
}

bool EsAcl::Accesses::Access::AccessListEntries::has_operation() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EsAcl::Accesses::Access::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::Access::AccessListEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListEntries' in Cisco_IOS_XR_es_acl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry.push_back(std::move(c));
        children[segment_path] = access_list_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::Access::AccessListEntries::get_children()
{
    for (auto const & c : access_list_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::set_value(const std::string & value_path, std::string value)
{
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    sequence_number{YType::uint32, "sequence-number"},
    capture{YType::boolean, "capture"},
    cos{YType::uint8, "cos"},
    dei{YType::uint8, "dei"},
    ether_type_number{YType::uint16, "ether-type-number"},
    grant{YType::enumeration, "grant"},
    inner_cos{YType::uint8, "inner-cos"},
    inner_dei{YType::uint8, "inner-dei"},
    inner_vlan1{YType::uint16, "inner-vlan1"},
    inner_vlan2{YType::uint16, "inner-vlan2"},
    log_option{YType::uint8, "log-option"},
    remark{YType::str, "remark"},
    sequence_str{YType::str, "sequence-str"},
    vlan1{YType::uint16, "vlan1"},
    vlan2{YType::uint16, "vlan2"}
    	,
    destination_network(std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>())
	,source_network(std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>())
{
    destination_network->parent = this;
    children["destination-network"] = destination_network;

    source_network->parent = this;
    children["source-network"] = source_network;

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries";
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::has_data() const
{
    return sequence_number.is_set
	|| capture.is_set
	|| cos.is_set
	|| dei.is_set
	|| ether_type_number.is_set
	|| grant.is_set
	|| inner_cos.is_set
	|| inner_dei.is_set
	|| inner_vlan1.is_set
	|| inner_vlan2.is_set
	|| log_option.is_set
	|| remark.is_set
	|| sequence_str.is_set
	|| vlan1.is_set
	|| vlan2.is_set
	|| (destination_network !=  nullptr && destination_network->has_data())
	|| (source_network !=  nullptr && source_network->has_data());
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence_number.operation)
	|| is_set(capture.operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(ether_type_number.operation)
	|| is_set(grant.operation)
	|| is_set(inner_cos.operation)
	|| is_set(inner_dei.operation)
	|| is_set(inner_vlan1.operation)
	|| is_set(inner_vlan2.operation)
	|| is_set(log_option.operation)
	|| is_set(remark.operation)
	|| is_set(sequence_str.operation)
	|| is_set(vlan1.operation)
	|| is_set(vlan2.operation)
	|| (destination_network !=  nullptr && destination_network->has_operation())
	|| (source_network !=  nullptr && source_network->has_operation());
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[sequence-number='" <<sequence_number <<"']";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListEntry' in Cisco_IOS_XR_es_acl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (capture.is_set || is_set(capture.operation)) leaf_name_data.push_back(capture.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (ether_type_number.is_set || is_set(ether_type_number.operation)) leaf_name_data.push_back(ether_type_number.get_name_leafdata());
    if (grant.is_set || is_set(grant.operation)) leaf_name_data.push_back(grant.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (inner_dei.is_set || is_set(inner_dei.operation)) leaf_name_data.push_back(inner_dei.get_name_leafdata());
    if (inner_vlan1.is_set || is_set(inner_vlan1.operation)) leaf_name_data.push_back(inner_vlan1.get_name_leafdata());
    if (inner_vlan2.is_set || is_set(inner_vlan2.operation)) leaf_name_data.push_back(inner_vlan2.get_name_leafdata());
    if (log_option.is_set || is_set(log_option.operation)) leaf_name_data.push_back(log_option.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());
    if (sequence_str.is_set || is_set(sequence_str.operation)) leaf_name_data.push_back(sequence_str.get_name_leafdata());
    if (vlan1.is_set || is_set(vlan1.operation)) leaf_name_data.push_back(vlan1.get_name_leafdata());
    if (vlan2.is_set || is_set(vlan2.operation)) leaf_name_data.push_back(vlan2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["destination-network"] = destination_network;
        }
        else
        {
            destination_network = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork>();
            destination_network->parent = this;
            children["destination-network"] = destination_network;
        }
        return children.at("destination-network");
    }

    if(child_yang_name == "source-network")
    {
        if(source_network != nullptr)
        {
            children["source-network"] = source_network;
        }
        else
        {
            source_network = std::make_shared<EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork>();
            source_network->parent = this;
            children["source-network"] = source_network;
        }
        return children.at("source-network");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::get_children()
{
    if(children.find("destination-network") == children.end())
    {
        if(destination_network != nullptr)
        {
            children["destination-network"] = destination_network;
        }
    }

    if(children.find("source-network") == children.end())
    {
        if(source_network != nullptr)
        {
            children["source-network"] = source_network;
        }
    }

    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "capture")
    {
        capture = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "ether-type-number")
    {
        ether_type_number = value;
    }
    if(value_path == "grant")
    {
        grant = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "inner-dei")
    {
        inner_dei = value;
    }
    if(value_path == "inner-vlan1")
    {
        inner_vlan1 = value;
    }
    if(value_path == "inner-vlan2")
    {
        inner_vlan2 = value;
    }
    if(value_path == "log-option")
    {
        log_option = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
    if(value_path == "sequence-str")
    {
        sequence_str = value;
    }
    if(value_path == "vlan1")
    {
        vlan1 = value;
    }
    if(value_path == "vlan2")
    {
        vlan2 = value;
    }
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::SourceNetwork()
    :
    source_address{YType::str, "source-address"},
    source_wild_card_bits{YType::str, "source-wild-card-bits"}
{
    yang_name = "source-network"; yang_parent_name = "access-list-entry";
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::~SourceNetwork()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_data() const
{
    return source_address.is_set
	|| source_wild_card_bits.is_set;
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_wild_card_bits.operation);
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-network";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceNetwork' in Cisco_IOS_XR_es_acl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_wild_card_bits.is_set || is_set(source_wild_card_bits.operation)) leaf_name_data.push_back(source_wild_card_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::get_children()
{
    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-wild-card-bits")
    {
        source_wild_card_bits = value;
    }
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::DestinationNetwork()
    :
    destination_address{YType::str, "destination-address"},
    destination_wild_card_bits{YType::str, "destination-wild-card-bits"}
{
    yang_name = "destination-network"; yang_parent_name = "access-list-entry";
}

EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::~DestinationNetwork()
{
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_data() const
{
    return destination_address.is_set
	|| destination_wild_card_bits.is_set;
}

bool EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_wild_card_bits.operation);
}

std::string EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-network";

    return path_buffer.str();

}

EntityPath EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationNetwork' in Cisco_IOS_XR_es_acl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_wild_card_bits.is_set || is_set(destination_wild_card_bits.operation)) leaf_name_data.push_back(destination_wild_card_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::get_children()
{
    return children;
}

void EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-wild-card-bits")
    {
        destination_wild_card_bits = value;
    }
}

const Enum::YLeaf EsAclGrantEnumEnum::deny {0, "deny"};
const Enum::YLeaf EsAclGrantEnumEnum::permit {1, "permit"};


}
}

