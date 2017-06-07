
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_vservice_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_vservice_cfg {

Vservice::Vservice()
    :
    metadata_dispositions(std::make_shared<Vservice::MetadataDispositions>())
	,metadata_templates(std::make_shared<Vservice::MetadataTemplates>())
	,service_function_forward_locator(std::make_shared<Vservice::ServiceFunctionForwardLocator>())
	,service_function_locator(std::make_shared<Vservice::ServiceFunctionLocator>())
	,service_function_path(std::make_shared<Vservice::ServiceFunctionPath>())
{
    metadata_dispositions->parent = this;

    metadata_templates->parent = this;

    service_function_forward_locator->parent = this;

    service_function_locator->parent = this;

    service_function_path->parent = this;

    yang_name = "vservice"; yang_parent_name = "Cisco-IOS-XR-vservice-cfg";
}

Vservice::~Vservice()
{
}

bool Vservice::has_data() const
{
    return (metadata_dispositions !=  nullptr && metadata_dispositions->has_data())
	|| (metadata_templates !=  nullptr && metadata_templates->has_data())
	|| (service_function_forward_locator !=  nullptr && service_function_forward_locator->has_data())
	|| (service_function_locator !=  nullptr && service_function_locator->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data());
}

bool Vservice::has_operation() const
{
    return is_set(operation)
	|| (metadata_dispositions !=  nullptr && metadata_dispositions->has_operation())
	|| (metadata_templates !=  nullptr && metadata_templates->has_operation())
	|| (service_function_forward_locator !=  nullptr && service_function_forward_locator->has_operation())
	|| (service_function_locator !=  nullptr && service_function_locator->has_operation())
	|| (service_function_path !=  nullptr && service_function_path->has_operation());
}

std::string Vservice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice";

    return path_buffer.str();

}

const EntityPath Vservice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metadata-dispositions")
    {
        if(metadata_dispositions == nullptr)
        {
            metadata_dispositions = std::make_shared<Vservice::MetadataDispositions>();
        }
        return metadata_dispositions;
    }

    if(child_yang_name == "metadata-templates")
    {
        if(metadata_templates == nullptr)
        {
            metadata_templates = std::make_shared<Vservice::MetadataTemplates>();
        }
        return metadata_templates;
    }

    if(child_yang_name == "service-function-forward-locator")
    {
        if(service_function_forward_locator == nullptr)
        {
            service_function_forward_locator = std::make_shared<Vservice::ServiceFunctionForwardLocator>();
        }
        return service_function_forward_locator;
    }

    if(child_yang_name == "service-function-locator")
    {
        if(service_function_locator == nullptr)
        {
            service_function_locator = std::make_shared<Vservice::ServiceFunctionLocator>();
        }
        return service_function_locator;
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path == nullptr)
        {
            service_function_path = std::make_shared<Vservice::ServiceFunctionPath>();
        }
        return service_function_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metadata_dispositions != nullptr)
    {
        children["metadata-dispositions"] = metadata_dispositions;
    }

    if(metadata_templates != nullptr)
    {
        children["metadata-templates"] = metadata_templates;
    }

    if(service_function_forward_locator != nullptr)
    {
        children["service-function-forward-locator"] = service_function_forward_locator;
    }

    if(service_function_locator != nullptr)
    {
        children["service-function-locator"] = service_function_locator;
    }

    if(service_function_path != nullptr)
    {
        children["service-function-path"] = service_function_path;
    }

    return children;
}

void Vservice::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Vservice::clone_ptr() const
{
    return std::make_shared<Vservice>();
}

std::string Vservice::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vservice::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vservice::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Vservice::ServiceFunctionLocator::ServiceFunctionLocator()
    :
    names(std::make_shared<Vservice::ServiceFunctionLocator::Names>())
{
    names->parent = this;

    yang_name = "service-function-locator"; yang_parent_name = "vservice";
}

Vservice::ServiceFunctionLocator::~ServiceFunctionLocator()
{
}

bool Vservice::ServiceFunctionLocator::has_data() const
{
    return (names !=  nullptr && names->has_data());
}

bool Vservice::ServiceFunctionLocator::has_operation() const
{
    return is_set(operation)
	|| (names !=  nullptr && names->has_operation());
}

std::string Vservice::ServiceFunctionLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-locator";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionLocator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        if(names == nullptr)
        {
            names = std::make_shared<Vservice::ServiceFunctionLocator::Names>();
        }
        return names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionLocator::Names::Names()
{
    yang_name = "names"; yang_parent_name = "service-function-locator";
}

Vservice::ServiceFunctionLocator::Names::~Names()
{
}

bool Vservice::ServiceFunctionLocator::Names::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionLocator::Names::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::ServiceFunctionLocator::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionLocator::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-locator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionLocator::Names::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::Names::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionLocator::Names::Name::Name()
    :
    function_name{YType::str, "function-name"},
    locator_id{YType::uint32, "locator-id"}
    	,
    node(std::make_shared<Vservice::ServiceFunctionLocator::Names::Name::Node>())
{
    node->parent = this;

    yang_name = "name"; yang_parent_name = "names";
}

Vservice::ServiceFunctionLocator::Names::Name::~Name()
{
}

bool Vservice::ServiceFunctionLocator::Names::Name::has_data() const
{
    return function_name.is_set
	|| locator_id.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionLocator::Names::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(function_name.operation)
	|| is_set(locator_id.operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionLocator::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[function-name='" <<function_name <<"']" <<"[locator-id='" <<locator_id <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionLocator::Names::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-locator/names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (function_name.is_set || is_set(function_name.operation)) leaf_name_data.push_back(function_name.get_name_leafdata());
    if (locator_id.is_set || is_set(locator_id.operation)) leaf_name_data.push_back(locator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::ServiceFunctionLocator::Names::Name::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::Names::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::Names::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "function-name")
    {
        function_name = value;
    }
    if(value_path == "locator-id")
    {
        locator_id = value;
    }
}

Vservice::ServiceFunctionLocator::Names::Name::Node::Node()
    :
    ipv4_destination_address{YType::str, "ipv4-destination-address"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    transport{YType::enumeration, "transport"},
    vni{YType::int32, "vni"}
{
    yang_name = "node"; yang_parent_name = "name";
}

Vservice::ServiceFunctionLocator::Names::Name::Node::~Node()
{
}

bool Vservice::ServiceFunctionLocator::Names::Name::Node::has_data() const
{
    return ipv4_destination_address.is_set
	|| ipv4_source_address.is_set
	|| transport.is_set
	|| vni.is_set;
}

bool Vservice::ServiceFunctionLocator::Names::Name::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_destination_address.operation)
	|| is_set(ipv4_source_address.operation)
	|| is_set(transport.operation)
	|| is_set(vni.operation);
}

std::string Vservice::ServiceFunctionLocator::Names::Name::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionLocator::Names::Name::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_destination_address.is_set || is_set(ipv4_destination_address.operation)) leaf_name_data.push_back(ipv4_destination_address.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.operation)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::Names::Name::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::Names::Name::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::ServiceFunctionLocator::Names::Name::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address = value;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
}

Vservice::MetadataDispositions::MetadataDispositions()
{
    yang_name = "metadata-dispositions"; yang_parent_name = "vservice";
}

Vservice::MetadataDispositions::~MetadataDispositions()
{
}

bool Vservice::MetadataDispositions::has_data() const
{
    for (std::size_t index=0; index<metadata_disposition.size(); index++)
    {
        if(metadata_disposition[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::MetadataDispositions::has_operation() const
{
    for (std::size_t index=0; index<metadata_disposition.size(); index++)
    {
        if(metadata_disposition[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::MetadataDispositions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-dispositions";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataDispositions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metadata-disposition")
    {
        for(auto const & c : metadata_disposition)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::MetadataDispositions::MetadataDisposition>();
        c->parent = this;
        metadata_disposition.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metadata_disposition)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::MetadataDispositions::set_value(const std::string & value_path, std::string value)
{
}

Vservice::MetadataDispositions::MetadataDisposition::MetadataDisposition()
    :
    disposition_name{YType::str, "disposition-name"},
    format{YType::enumeration, "format"}
{
    yang_name = "metadata-disposition"; yang_parent_name = "metadata-dispositions";
}

Vservice::MetadataDispositions::MetadataDisposition::~MetadataDisposition()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::has_data() const
{
    for (std::size_t index=0; index<match_entry.size(); index++)
    {
        if(match_entry[index]->has_data())
            return true;
    }
    return disposition_name.is_set
	|| format.is_set;
}

bool Vservice::MetadataDispositions::MetadataDisposition::has_operation() const
{
    for (std::size_t index=0; index<match_entry.size(); index++)
    {
        if(match_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disposition_name.operation)
	|| is_set(format.operation);
}

std::string Vservice::MetadataDispositions::MetadataDisposition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-disposition" <<"[disposition-name='" <<disposition_name <<"']" <<"[format='" <<format <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataDispositions::MetadataDisposition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/metadata-dispositions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disposition_name.is_set || is_set(disposition_name.operation)) leaf_name_data.push_back(disposition_name.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::MetadataDisposition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-entry")
    {
        for(auto const & c : match_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::MetadataDispositions::MetadataDisposition::MatchEntry>();
        c->parent = this;
        match_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::MetadataDisposition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : match_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disposition-name")
    {
        disposition_name = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::MatchEntry()
    :
    match_entry_name{YType::str, "match-entry-name"}
    	,
    node(std::make_shared<Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node>())
{
    node->parent = this;

    yang_name = "match-entry"; yang_parent_name = "metadata-disposition";
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::~MatchEntry()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::has_data() const
{
    return match_entry_name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(match_entry_name.operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-entry" <<"[match-entry-name='" <<match_entry_name <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchEntry' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_entry_name.is_set || is_set(match_entry_name.operation)) leaf_name_data.push_back(match_entry_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-entry-name")
    {
        match_entry_name = value;
    }
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::Node()
    :
    action_type{YType::enumeration, "action-type"},
    match_type{YType::enumeration, "match-type"},
    nexthop_ipv4_address{YType::str, "nexthop-ipv4-address"},
    tenant_id{YType::int32, "tenant-id"},
    vrf{YType::str, "vrf"}
{
    yang_name = "node"; yang_parent_name = "match-entry";
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::~Node()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::has_data() const
{
    for (auto const & leaf : tenant_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_type.is_set
	|| match_type.is_set
	|| nexthop_ipv4_address.is_set
	|| vrf.is_set;
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::has_operation() const
{
    for (auto const & leaf : tenant_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation)
	|| is_set(match_type.operation)
	|| is_set(nexthop_ipv4_address.operation)
	|| is_set(tenant_id.operation)
	|| is_set(vrf.operation);
}

std::string Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.operation)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (nexthop_ipv4_address.is_set || is_set(nexthop_ipv4_address.operation)) leaf_name_data.push_back(nexthop_ipv4_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto tenant_id_name_datas = tenant_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tenant_id_name_datas.begin(), tenant_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
    if(value_path == "match-type")
    {
        match_type = value;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address = value;
    }
    if(value_path == "tenant-id")
    {
        tenant_id.append(value);
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Vservice::ServiceFunctionForwardLocator::ServiceFunctionForwardLocator()
    :
    names(std::make_shared<Vservice::ServiceFunctionForwardLocator::Names>())
{
    names->parent = this;

    yang_name = "service-function-forward-locator"; yang_parent_name = "vservice";
}

Vservice::ServiceFunctionForwardLocator::~ServiceFunctionForwardLocator()
{
}

bool Vservice::ServiceFunctionForwardLocator::has_data() const
{
    return (names !=  nullptr && names->has_data());
}

bool Vservice::ServiceFunctionForwardLocator::has_operation() const
{
    return is_set(operation)
	|| (names !=  nullptr && names->has_operation());
}

std::string Vservice::ServiceFunctionForwardLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forward-locator";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionForwardLocator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        if(names == nullptr)
        {
            names = std::make_shared<Vservice::ServiceFunctionForwardLocator::Names>();
        }
        return names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionForwardLocator::Names::Names()
{
    yang_name = "names"; yang_parent_name = "service-function-forward-locator";
}

Vservice::ServiceFunctionForwardLocator::Names::~Names()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionForwardLocator::Names::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::ServiceFunctionForwardLocator::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionForwardLocator::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-forward-locator/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionForwardLocator::Names::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Name()
    :
    function_name{YType::str, "function-name"},
    locator_id{YType::uint32, "locator-id"}
    	,
    node(std::make_shared<Vservice::ServiceFunctionForwardLocator::Names::Name::Node>())
{
    node->parent = this;

    yang_name = "name"; yang_parent_name = "names";
}

Vservice::ServiceFunctionForwardLocator::Names::Name::~Name()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::has_data() const
{
    return function_name.is_set
	|| locator_id.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(function_name.operation)
	|| is_set(locator_id.operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionForwardLocator::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[function-name='" <<function_name <<"']" <<"[locator-id='" <<locator_id <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionForwardLocator::Names::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-forward-locator/names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (function_name.is_set || is_set(function_name.operation)) leaf_name_data.push_back(function_name.get_name_leafdata());
    if (locator_id.is_set || is_set(locator_id.operation)) leaf_name_data.push_back(locator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::ServiceFunctionForwardLocator::Names::Name::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::Names::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "function-name")
    {
        function_name = value;
    }
    if(value_path == "locator-id")
    {
        locator_id = value;
    }
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Node::Node()
    :
    ipv4_destination_address{YType::str, "ipv4-destination-address"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    transport{YType::enumeration, "transport"},
    vni{YType::int32, "vni"}
{
    yang_name = "node"; yang_parent_name = "name";
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Node::~Node()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::Node::has_data() const
{
    return ipv4_destination_address.is_set
	|| ipv4_source_address.is_set
	|| transport.is_set
	|| vni.is_set;
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_destination_address.operation)
	|| is_set(ipv4_source_address.operation)
	|| is_set(transport.operation)
	|| is_set(vni.operation);
}

std::string Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_destination_address.is_set || is_set(ipv4_destination_address.operation)) leaf_name_data.push_back(ipv4_destination_address.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.operation)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address = value;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
}

Vservice::MetadataTemplates::MetadataTemplates()
{
    yang_name = "metadata-templates"; yang_parent_name = "vservice";
}

Vservice::MetadataTemplates::~MetadataTemplates()
{
}

bool Vservice::MetadataTemplates::has_data() const
{
    for (std::size_t index=0; index<metadata_template.size(); index++)
    {
        if(metadata_template[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::MetadataTemplates::has_operation() const
{
    for (std::size_t index=0; index<metadata_template.size(); index++)
    {
        if(metadata_template[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::MetadataTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-templates";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metadata-template")
    {
        for(auto const & c : metadata_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::MetadataTemplates::MetadataTemplate>();
        c->parent = this;
        metadata_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metadata_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::MetadataTemplates::set_value(const std::string & value_path, std::string value)
{
}

Vservice::MetadataTemplates::MetadataTemplate::MetadataTemplate()
    :
    metadata_name{YType::str, "metadata-name"},
    type{YType::enumeration, "type"},
    format{YType::enumeration, "format"},
    tenant_id{YType::uint32, "tenant-id"}
{
    yang_name = "metadata-template"; yang_parent_name = "metadata-templates";
}

Vservice::MetadataTemplates::MetadataTemplate::~MetadataTemplate()
{
}

bool Vservice::MetadataTemplates::MetadataTemplate::has_data() const
{
    return metadata_name.is_set
	|| type.is_set
	|| format.is_set
	|| tenant_id.is_set;
}

bool Vservice::MetadataTemplates::MetadataTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(metadata_name.operation)
	|| is_set(type.operation)
	|| is_set(format.operation)
	|| is_set(tenant_id.operation);
}

std::string Vservice::MetadataTemplates::MetadataTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-template" <<"[metadata-name='" <<metadata_name <<"']" <<"[type='" <<type <<"']" <<"[format='" <<format <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::MetadataTemplates::MetadataTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/metadata-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metadata_name.is_set || is_set(metadata_name.operation)) leaf_name_data.push_back(metadata_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (tenant_id.is_set || is_set(tenant_id.operation)) leaf_name_data.push_back(tenant_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::MetadataTemplates::MetadataTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataTemplates::MetadataTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::MetadataTemplates::MetadataTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metadata-name")
    {
        metadata_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "tenant-id")
    {
        tenant_id = value;
    }
}

Vservice::ServiceFunctionPath::ServiceFunctionPath()
    :
    paths(std::make_shared<Vservice::ServiceFunctionPath::Paths>())
{
    paths->parent = this;

    yang_name = "service-function-path"; yang_parent_name = "vservice";
}

Vservice::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool Vservice::ServiceFunctionPath::has_data() const
{
    return (paths !=  nullptr && paths->has_data());
}

bool Vservice::ServiceFunctionPath::has_operation() const
{
    return is_set(operation)
	|| (paths !=  nullptr && paths->has_operation());
}

std::string Vservice::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<Vservice::ServiceFunctionPath::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void Vservice::ServiceFunctionPath::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionPath::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "service-function-path";
}

Vservice::ServiceFunctionPath::Paths::~Paths()
{
}

bool Vservice::ServiceFunctionPath::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::ServiceFunctionPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionPath::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

Vservice::ServiceFunctionPath::Paths::Path::~Path()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::has_data() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return path_id.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::has_operation() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(path_id.operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[path-id='" <<path_id <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-path/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        for(auto const & c : service_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex>();
        c->parent = this;
        service_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::ServiceIndex()
    :
    index_{YType::uint32, "index"}
    	,
    sf_names(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames>())
	,sff_names(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames>())
	,terminate(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate>())
{
    sf_names->parent = this;

    sff_names->parent = this;

    terminate->parent = this;

    yang_name = "service-index"; yang_parent_name = "path";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::~ServiceIndex()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::has_data() const
{
    return index_.is_set
	|| (sf_names !=  nullptr && sf_names->has_data())
	|| (sff_names !=  nullptr && sff_names->has_data())
	|| (terminate !=  nullptr && terminate->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (sf_names !=  nullptr && sf_names->has_operation())
	|| (sff_names !=  nullptr && sff_names->has_operation())
	|| (terminate !=  nullptr && terminate->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceIndex' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-names")
    {
        if(sf_names == nullptr)
        {
            sf_names = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames>();
        }
        return sf_names;
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names == nullptr)
        {
            sff_names = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames>();
        }
        return sff_names;
    }

    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate>();
        }
        return terminate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sf_names != nullptr)
    {
        children["sf-names"] = sf_names;
    }

    if(sff_names != nullptr)
    {
        children["sff-names"] = sff_names;
    }

    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Terminate()
    :
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node>())
{
    node->parent = this;

    yang_name = "terminate"; yang_parent_name = "service-index";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::~Terminate()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::has_data() const
{
    return (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::has_operation() const
{
    return is_set(operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Terminate' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::Node()
    :
    action{YType::enumeration, "action"},
    metatdata_disposition{YType::str, "metatdata-disposition"},
    nexthop_ipv4_address{YType::str, "nexthop-ipv4-address"},
    vrf{YType::str, "vrf"}
{
    yang_name = "node"; yang_parent_name = "terminate";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::has_data() const
{
    return action.is_set
	|| metatdata_disposition.is_set
	|| nexthop_ipv4_address.is_set
	|| vrf.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(metatdata_disposition.operation)
	|| is_set(nexthop_ipv4_address.operation)
	|| is_set(vrf.operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (metatdata_disposition.is_set || is_set(metatdata_disposition.operation)) leaf_name_data.push_back(metatdata_disposition.get_name_leafdata());
    if (nexthop_ipv4_address.is_set || is_set(nexthop_ipv4_address.operation)) leaf_name_data.push_back(nexthop_ipv4_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "metatdata-disposition")
    {
        metatdata_disposition = value;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffNames()
{
    yang_name = "sff-names"; yang_parent_name = "service-index";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::~SffNames()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::has_data() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffNames' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sff-name")
    {
        for(auto const & c : sff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName>();
        c->parent = this;
        sff_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sff_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::SffName()
    :
    name{YType::str, "name"}
    	,
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node>())
{
    node->parent = this;

    yang_name = "sff-name"; yang_parent_name = "sff-names";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::~SffName()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::has_data() const
{
    return name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SffName' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::Node()
    :
    enable{YType::empty, "enable"},
    reserved{YType::empty, "reserved"}
{
    yang_name = "node"; yang_parent_name = "sff-name";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::has_data() const
{
    return enable.is_set
	|| reserved.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(reserved.operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.operation)) leaf_name_data.push_back(reserved.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "reserved")
    {
        reserved = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfNames()
{
    yang_name = "sf-names"; yang_parent_name = "service-index";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::~SfNames()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::has_data() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfNames' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-name")
    {
        for(auto const & c : sf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName>();
        c->parent = this;
        sf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::set_value(const std::string & value_path, std::string value)
{
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::SfName()
    :
    name{YType::str, "name"}
    	,
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node>())
{
    node->parent = this;

    yang_name = "sf-name"; yang_parent_name = "sf-names";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::~SfName()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::has_data() const
{
    return name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfName' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        if(node == nullptr)
        {
            node = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node>();
        }
        return node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::Node()
    :
    enable{YType::empty, "enable"},
    reserved{YType::empty, "reserved"}
{
    yang_name = "node"; yang_parent_name = "sf-name";
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::has_data() const
{
    return enable.is_set
	|| reserved.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(reserved.operation);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Node' in Cisco_IOS_XR_vservice_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.operation)) leaf_name_data.push_back(reserved.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "reserved")
    {
        reserved = value;
    }
}

const Enum::YLeaf SfcSfTransportEnum::vxlan_gpe {1, "vxlan-gpe"};

const Enum::YLeaf SfcMetadataDispositionMatchEnum::type1_dcalloc_tenant_id {1, "type1-dcalloc-tenant-id"};

const Enum::YLeaf SfcMetadataAllocEnum::type1 {1, "type1"};

const Enum::YLeaf SfcMetadataType1AllocFormatEnum::dc_allocation {1, "dc-allocation"};

const Enum::YLeaf SfcMetadataDispositionActionEnum::redirect_nexthop {1, "redirect-nexthop"};


}
}

