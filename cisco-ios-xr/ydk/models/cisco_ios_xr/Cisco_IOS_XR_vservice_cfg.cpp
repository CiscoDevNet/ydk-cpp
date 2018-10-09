
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_vservice_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_vservice_cfg {

Vservice::Vservice()
    :
    service_function_locator(std::make_shared<Vservice::ServiceFunctionLocator>())
    , metadata_dispositions(std::make_shared<Vservice::MetadataDispositions>())
    , service_function_forward_locator(std::make_shared<Vservice::ServiceFunctionForwardLocator>())
    , metadata_templates(std::make_shared<Vservice::MetadataTemplates>())
    , service_function_path(std::make_shared<Vservice::ServiceFunctionPath>())
{
    service_function_locator->parent = this;
    metadata_dispositions->parent = this;
    service_function_forward_locator->parent = this;
    metadata_templates->parent = this;
    service_function_path->parent = this;

    yang_name = "vservice"; yang_parent_name = "Cisco-IOS-XR-vservice-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Vservice::~Vservice()
{
}

bool Vservice::has_data() const
{
    if (is_presence_container) return true;
    return (service_function_locator !=  nullptr && service_function_locator->has_data())
	|| (metadata_dispositions !=  nullptr && metadata_dispositions->has_data())
	|| (service_function_forward_locator !=  nullptr && service_function_forward_locator->has_data())
	|| (metadata_templates !=  nullptr && metadata_templates->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data());
}

bool Vservice::has_operation() const
{
    return is_set(yfilter)
	|| (service_function_locator !=  nullptr && service_function_locator->has_operation())
	|| (metadata_dispositions !=  nullptr && metadata_dispositions->has_operation())
	|| (service_function_forward_locator !=  nullptr && service_function_forward_locator->has_operation())
	|| (metadata_templates !=  nullptr && metadata_templates->has_operation())
	|| (service_function_path !=  nullptr && service_function_path->has_operation());
}

std::string Vservice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function-locator")
    {
        if(service_function_locator == nullptr)
        {
            service_function_locator = std::make_shared<Vservice::ServiceFunctionLocator>();
        }
        return service_function_locator;
    }

    if(child_yang_name == "metadata-dispositions")
    {
        if(metadata_dispositions == nullptr)
        {
            metadata_dispositions = std::make_shared<Vservice::MetadataDispositions>();
        }
        return metadata_dispositions;
    }

    if(child_yang_name == "service-function-forward-locator")
    {
        if(service_function_forward_locator == nullptr)
        {
            service_function_forward_locator = std::make_shared<Vservice::ServiceFunctionForwardLocator>();
        }
        return service_function_forward_locator;
    }

    if(child_yang_name == "metadata-templates")
    {
        if(metadata_templates == nullptr)
        {
            metadata_templates = std::make_shared<Vservice::MetadataTemplates>();
        }
        return metadata_templates;
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
    char count=0;
    if(service_function_locator != nullptr)
    {
        children["service-function-locator"] = service_function_locator;
    }

    if(metadata_dispositions != nullptr)
    {
        children["metadata-dispositions"] = metadata_dispositions;
    }

    if(service_function_forward_locator != nullptr)
    {
        children["service-function-forward-locator"] = service_function_forward_locator;
    }

    if(metadata_templates != nullptr)
    {
        children["metadata-templates"] = metadata_templates;
    }

    if(service_function_path != nullptr)
    {
        children["service-function-path"] = service_function_path;
    }

    return children;
}

void Vservice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Vservice::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vservice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-function-locator" || name == "metadata-dispositions" || name == "service-function-forward-locator" || name == "metadata-templates" || name == "service-function-path")
        return true;
    return false;
}

Vservice::ServiceFunctionLocator::ServiceFunctionLocator()
    :
    names(std::make_shared<Vservice::ServiceFunctionLocator::Names>())
{
    names->parent = this;

    yang_name = "service-function-locator"; yang_parent_name = "vservice"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionLocator::~ServiceFunctionLocator()
{
}

bool Vservice::ServiceFunctionLocator::has_data() const
{
    if (is_presence_container) return true;
    return (names !=  nullptr && names->has_data());
}

bool Vservice::ServiceFunctionLocator::has_operation() const
{
    return is_set(yfilter)
	|| (names !=  nullptr && names->has_operation());
}

std::string Vservice::ServiceFunctionLocator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionLocator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names")
        return true;
    return false;
}

Vservice::ServiceFunctionLocator::Names::Names()
    :
    name(this, {"function_name", "locator_id"})
{

    yang_name = "names"; yang_parent_name = "service-function-locator"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionLocator::Names::~Names()
{
}

bool Vservice::ServiceFunctionLocator::Names::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionLocator::Names::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::ServiceFunctionLocator::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-locator/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionLocator::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionLocator::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionLocator::Names::Name>();
        c->parent = this;
        name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionLocator::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionLocator::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Vservice::ServiceFunctionLocator::Names::Name::Name()
    :
    function_name{YType::str, "function-name"},
    locator_id{YType::uint32, "locator-id"}
        ,
    node(std::make_shared<Vservice::ServiceFunctionLocator::Names::Name::Node>())
{
    node->parent = this;

    yang_name = "name"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionLocator::Names::Name::~Name()
{
}

bool Vservice::ServiceFunctionLocator::Names::Name::has_data() const
{
    if (is_presence_container) return true;
    return function_name.is_set
	|| locator_id.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionLocator::Names::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(function_name.yfilter)
	|| ydk::is_set(locator_id.yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionLocator::Names::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-locator/names/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionLocator::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(function_name, "function-name");
    ADD_KEY_TOKEN(locator_id, "locator-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionLocator::Names::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (function_name.is_set || is_set(function_name.yfilter)) leaf_name_data.push_back(function_name.get_name_leafdata());
    if (locator_id.is_set || is_set(locator_id.yfilter)) leaf_name_data.push_back(locator_id.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionLocator::Names::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "function-name")
    {
        function_name = value;
        function_name.value_namespace = name_space;
        function_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-id")
    {
        locator_id = value;
        locator_id.value_namespace = name_space;
        locator_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionLocator::Names::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "function-name")
    {
        function_name.yfilter = yfilter;
    }
    if(value_path == "locator-id")
    {
        locator_id.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionLocator::Names::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "function-name" || name == "locator-id")
        return true;
    return false;
}

Vservice::ServiceFunctionLocator::Names::Name::Node::Node()
    :
    transport{YType::enumeration, "transport"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv4_destination_address{YType::str, "ipv4-destination-address"},
    vni{YType::uint32, "vni"}
{

    yang_name = "node"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionLocator::Names::Name::Node::~Node()
{
}

bool Vservice::ServiceFunctionLocator::Names::Name::Node::has_data() const
{
    if (is_presence_container) return true;
    return transport.is_set
	|| ipv4_source_address.is_set
	|| ipv4_destination_address.is_set
	|| vni.is_set;
}

bool Vservice::ServiceFunctionLocator::Names::Name::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(ipv4_destination_address.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Vservice::ServiceFunctionLocator::Names::Name::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionLocator::Names::Name::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv4_destination_address.is_set || is_set(ipv4_destination_address.yfilter)) leaf_name_data.push_back(ipv4_destination_address.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionLocator::Names::Name::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionLocator::Names::Name::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::ServiceFunctionLocator::Names::Name::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address = value;
        ipv4_destination_address.value_namespace = name_space;
        ipv4_destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionLocator::Names::Name::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionLocator::Names::Name::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-source-address" || name == "ipv4-destination-address" || name == "vni")
        return true;
    return false;
}

Vservice::MetadataDispositions::MetadataDispositions()
    :
    metadata_disposition(this, {"disposition_name", "format"})
{

    yang_name = "metadata-dispositions"; yang_parent_name = "vservice"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::MetadataDispositions::~MetadataDispositions()
{
}

bool Vservice::MetadataDispositions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metadata_disposition.len(); index++)
    {
        if(metadata_disposition[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::MetadataDispositions::has_operation() const
{
    for (std::size_t index=0; index<metadata_disposition.len(); index++)
    {
        if(metadata_disposition[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::MetadataDispositions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::MetadataDispositions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-dispositions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataDispositions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metadata-disposition")
    {
        auto c = std::make_shared<Vservice::MetadataDispositions::MetadataDisposition>();
        c->parent = this;
        metadata_disposition.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metadata_disposition.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::MetadataDispositions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::MetadataDispositions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::MetadataDispositions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metadata-disposition")
        return true;
    return false;
}

Vservice::MetadataDispositions::MetadataDisposition::MetadataDisposition()
    :
    disposition_name{YType::str, "disposition-name"},
    format{YType::enumeration, "format"}
        ,
    match_entry(this, {"match_entry_name"})
{

    yang_name = "metadata-disposition"; yang_parent_name = "metadata-dispositions"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::MetadataDispositions::MetadataDisposition::~MetadataDisposition()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<match_entry.len(); index++)
    {
        if(match_entry[index]->has_data())
            return true;
    }
    return disposition_name.is_set
	|| format.is_set;
}

bool Vservice::MetadataDispositions::MetadataDisposition::has_operation() const
{
    for (std::size_t index=0; index<match_entry.len(); index++)
    {
        if(match_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disposition_name.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Vservice::MetadataDispositions::MetadataDisposition::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/metadata-dispositions/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::MetadataDispositions::MetadataDisposition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-disposition";
    ADD_KEY_TOKEN(disposition_name, "disposition-name");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataDispositions::MetadataDisposition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disposition_name.is_set || is_set(disposition_name.yfilter)) leaf_name_data.push_back(disposition_name.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::MetadataDisposition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-entry")
    {
        auto c = std::make_shared<Vservice::MetadataDispositions::MetadataDisposition::MatchEntry>();
        c->parent = this;
        match_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::MetadataDisposition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : match_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disposition-name")
    {
        disposition_name = value;
        disposition_name.value_namespace = name_space;
        disposition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::MetadataDispositions::MetadataDisposition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disposition-name")
    {
        disposition_name.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Vservice::MetadataDispositions::MetadataDisposition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-entry" || name == "disposition-name" || name == "format")
        return true;
    return false;
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::MatchEntry()
    :
    match_entry_name{YType::str, "match-entry-name"}
        ,
    node(std::make_shared<Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node>())
{
    node->parent = this;

    yang_name = "match-entry"; yang_parent_name = "metadata-disposition"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::~MatchEntry()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::has_data() const
{
    if (is_presence_container) return true;
    return match_entry_name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_entry_name.yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-entry";
    ADD_KEY_TOKEN(match_entry_name, "match-entry-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_entry_name.is_set || is_set(match_entry_name.yfilter)) leaf_name_data.push_back(match_entry_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-entry-name")
    {
        match_entry_name = value;
        match_entry_name.value_namespace = name_space;
        match_entry_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-entry-name")
    {
        match_entry_name.yfilter = yfilter;
    }
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "match-entry-name")
        return true;
    return false;
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::Node()
    :
    match_type{YType::enumeration, "match-type"},
    action_type{YType::enumeration, "action-type"},
    vrf{YType::str, "vrf"},
    nexthop_ipv4_address{YType::str, "nexthop-ipv4-address"},
    tenant_id{YType::uint32, "tenant-id"}
{

    yang_name = "node"; yang_parent_name = "match-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::~Node()
{
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tenant_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return match_type.is_set
	|| action_type.is_set
	|| vrf.is_set
	|| nexthop_ipv4_address.is_set;
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::has_operation() const
{
    for (auto const & leaf : tenant_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(nexthop_ipv4_address.yfilter)
	|| ydk::is_set(tenant_id.yfilter);
}

std::string Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (nexthop_ipv4_address.is_set || is_set(nexthop_ipv4_address.yfilter)) leaf_name_data.push_back(nexthop_ipv4_address.get_name_leafdata());

    auto tenant_id_name_datas = tenant_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tenant_id_name_datas.begin(), tenant_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address = value;
        nexthop_ipv4_address.value_namespace = name_space;
        nexthop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant-id")
    {
        tenant_id.append(value);
    }
}

void Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "tenant-id")
    {
        tenant_id.yfilter = yfilter;
    }
}

bool Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-type" || name == "action-type" || name == "vrf" || name == "nexthop-ipv4-address" || name == "tenant-id")
        return true;
    return false;
}

Vservice::ServiceFunctionForwardLocator::ServiceFunctionForwardLocator()
    :
    names(std::make_shared<Vservice::ServiceFunctionForwardLocator::Names>())
{
    names->parent = this;

    yang_name = "service-function-forward-locator"; yang_parent_name = "vservice"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionForwardLocator::~ServiceFunctionForwardLocator()
{
}

bool Vservice::ServiceFunctionForwardLocator::has_data() const
{
    if (is_presence_container) return true;
    return (names !=  nullptr && names->has_data());
}

bool Vservice::ServiceFunctionForwardLocator::has_operation() const
{
    return is_set(yfilter)
	|| (names !=  nullptr && names->has_operation());
}

std::string Vservice::ServiceFunctionForwardLocator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionForwardLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forward-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionForwardLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionForwardLocator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionForwardLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names")
        return true;
    return false;
}

Vservice::ServiceFunctionForwardLocator::Names::Names()
    :
    name(this, {"function_name", "locator_id"})
{

    yang_name = "names"; yang_parent_name = "service-function-forward-locator"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionForwardLocator::Names::~Names()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionForwardLocator::Names::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::ServiceFunctionForwardLocator::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-forward-locator/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionForwardLocator::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionForwardLocator::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionForwardLocator::Names::Name>();
        c->parent = this;
        name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionForwardLocator::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Name()
    :
    function_name{YType::str, "function-name"},
    locator_id{YType::uint32, "locator-id"}
        ,
    node(std::make_shared<Vservice::ServiceFunctionForwardLocator::Names::Name::Node>())
{
    node->parent = this;

    yang_name = "name"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionForwardLocator::Names::Name::~Name()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::has_data() const
{
    if (is_presence_container) return true;
    return function_name.is_set
	|| locator_id.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(function_name.yfilter)
	|| ydk::is_set(locator_id.yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionForwardLocator::Names::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-forward-locator/names/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionForwardLocator::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(function_name, "function-name");
    ADD_KEY_TOKEN(locator_id, "locator-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionForwardLocator::Names::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (function_name.is_set || is_set(function_name.yfilter)) leaf_name_data.push_back(function_name.get_name_leafdata());
    if (locator_id.is_set || is_set(locator_id.yfilter)) leaf_name_data.push_back(locator_id.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "function-name")
    {
        function_name = value;
        function_name.value_namespace = name_space;
        function_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-id")
    {
        locator_id = value;
        locator_id.value_namespace = name_space;
        locator_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "function-name")
    {
        function_name.yfilter = yfilter;
    }
    if(value_path == "locator-id")
    {
        locator_id.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "function-name" || name == "locator-id")
        return true;
    return false;
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Node::Node()
    :
    transport{YType::enumeration, "transport"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv4_destination_address{YType::str, "ipv4-destination-address"},
    vni{YType::uint32, "vni"}
{

    yang_name = "node"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionForwardLocator::Names::Name::Node::~Node()
{
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::Node::has_data() const
{
    if (is_presence_container) return true;
    return transport.is_set
	|| ipv4_source_address.is_set
	|| ipv4_destination_address.is_set
	|| vni.is_set;
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(ipv4_destination_address.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv4_destination_address.is_set || is_set(ipv4_destination_address.yfilter)) leaf_name_data.push_back(ipv4_destination_address.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionForwardLocator::Names::Name::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address = value;
        ipv4_destination_address.value_namespace = name_space;
        ipv4_destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionForwardLocator::Names::Name::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-destination-address")
    {
        ipv4_destination_address.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionForwardLocator::Names::Name::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-source-address" || name == "ipv4-destination-address" || name == "vni")
        return true;
    return false;
}

Vservice::MetadataTemplates::MetadataTemplates()
    :
    metadata_template(this, {"metadata_name", "type", "format"})
{

    yang_name = "metadata-templates"; yang_parent_name = "vservice"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::MetadataTemplates::~MetadataTemplates()
{
}

bool Vservice::MetadataTemplates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metadata_template.len(); index++)
    {
        if(metadata_template[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::MetadataTemplates::has_operation() const
{
    for (std::size_t index=0; index<metadata_template.len(); index++)
    {
        if(metadata_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::MetadataTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::MetadataTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::MetadataTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metadata-template")
    {
        auto c = std::make_shared<Vservice::MetadataTemplates::MetadataTemplate>();
        c->parent = this;
        metadata_template.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : metadata_template.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::MetadataTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::MetadataTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::MetadataTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metadata-template")
        return true;
    return false;
}

Vservice::MetadataTemplates::MetadataTemplate::MetadataTemplate()
    :
    metadata_name{YType::str, "metadata-name"},
    type{YType::enumeration, "type"},
    format{YType::enumeration, "format"},
    tenant_id{YType::uint32, "tenant-id"}
{

    yang_name = "metadata-template"; yang_parent_name = "metadata-templates"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::MetadataTemplates::MetadataTemplate::~MetadataTemplate()
{
}

bool Vservice::MetadataTemplates::MetadataTemplate::has_data() const
{
    if (is_presence_container) return true;
    return metadata_name.is_set
	|| type.is_set
	|| format.is_set
	|| tenant_id.is_set;
}

bool Vservice::MetadataTemplates::MetadataTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metadata_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(tenant_id.yfilter);
}

std::string Vservice::MetadataTemplates::MetadataTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/metadata-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::MetadataTemplates::MetadataTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-template";
    ADD_KEY_TOKEN(metadata_name, "metadata-name");
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::MetadataTemplates::MetadataTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metadata_name.is_set || is_set(metadata_name.yfilter)) leaf_name_data.push_back(metadata_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (tenant_id.is_set || is_set(tenant_id.yfilter)) leaf_name_data.push_back(tenant_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::MetadataTemplates::MetadataTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::MetadataTemplates::MetadataTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::MetadataTemplates::MetadataTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metadata-name")
    {
        metadata_name = value;
        metadata_name.value_namespace = name_space;
        metadata_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant-id")
    {
        tenant_id = value;
        tenant_id.value_namespace = name_space;
        tenant_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::MetadataTemplates::MetadataTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metadata-name")
    {
        metadata_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "tenant-id")
    {
        tenant_id.yfilter = yfilter;
    }
}

bool Vservice::MetadataTemplates::MetadataTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metadata-name" || name == "type" || name == "format" || name == "tenant-id")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::ServiceFunctionPath()
    :
    paths(std::make_shared<Vservice::ServiceFunctionPath::Paths>())
{
    paths->parent = this;

    yang_name = "service-function-path"; yang_parent_name = "vservice"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool Vservice::ServiceFunctionPath::has_data() const
{
    if (is_presence_container) return true;
    return (paths !=  nullptr && paths->has_data());
}

bool Vservice::ServiceFunctionPath::has_operation() const
{
    return is_set(yfilter)
	|| (paths !=  nullptr && paths->has_operation());
}

std::string Vservice::ServiceFunctionPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void Vservice::ServiceFunctionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Paths()
    :
    path(this, {"path_id"})
{

    yang_name = "paths"; yang_parent_name = "service-function-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionPath::Paths::~Paths()
{
}

bool Vservice::ServiceFunctionPath::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionPath::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path>();
        c->parent = this;
        path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionPath::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionPath::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::Path()
    :
    path_id{YType::uint32, "path-id"}
        ,
    service_index(this, {"index_"})
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Vservice::ServiceFunctionPath::Paths::Path::~Path()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_index.len(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return path_id.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::has_operation() const
{
    for (std::size_t index=0; index<service_index.len(); index++)
    {
        if(service_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-vservice-cfg:vservice/service-function-path/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Vservice::ServiceFunctionPath::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    ADD_KEY_TOKEN(path_id, "path-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex>();
        c->parent = this;
        service_index.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : service_index.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index" || name == "path-id")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::ServiceIndex()
    :
    index_{YType::uint32, "index"}
        ,
    terminate(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate>())
    , sff_names(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames>())
    , sf_names(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames>())
{
    terminate->parent = this;
    sff_names->parent = this;
    sf_names->parent = this;

    yang_name = "service-index"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::~ServiceIndex()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (terminate !=  nullptr && terminate->has_data())
	|| (sff_names !=  nullptr && sff_names->has_data())
	|| (sf_names !=  nullptr && sf_names->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (terminate !=  nullptr && terminate->has_operation())
	|| (sff_names !=  nullptr && sff_names->has_operation())
	|| (sf_names !=  nullptr && sf_names->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate>();
        }
        return terminate;
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names == nullptr)
        {
            sff_names = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames>();
        }
        return sff_names;
    }

    if(child_yang_name == "sf-names")
    {
        if(sf_names == nullptr)
        {
            sf_names = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames>();
        }
        return sf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    if(sff_names != nullptr)
    {
        children["sff-names"] = sff_names;
    }

    if(sf_names != nullptr)
    {
        children["sf-names"] = sf_names;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminate" || name == "sff-names" || name == "sf-names" || name == "index")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Terminate()
    :
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node>())
{
    node->parent = this;

    yang_name = "terminate"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::~Terminate()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::has_data() const
{
    if (is_presence_container) return true;
    return (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::Node()
    :
    action{YType::enumeration, "action"},
    vrf{YType::str, "vrf"},
    nexthop_ipv4_address{YType::str, "nexthop-ipv4-address"},
    metatdata_disposition{YType::str, "metatdata-disposition"}
{

    yang_name = "node"; yang_parent_name = "terminate"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::has_data() const
{
    if (is_presence_container) return true;
    return action.is_set
	|| vrf.is_set
	|| nexthop_ipv4_address.is_set
	|| metatdata_disposition.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(nexthop_ipv4_address.yfilter)
	|| ydk::is_set(metatdata_disposition.yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (nexthop_ipv4_address.is_set || is_set(nexthop_ipv4_address.yfilter)) leaf_name_data.push_back(nexthop_ipv4_address.get_name_leafdata());
    if (metatdata_disposition.is_set || is_set(metatdata_disposition.yfilter)) leaf_name_data.push_back(metatdata_disposition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address = value;
        nexthop_ipv4_address.value_namespace = name_space;
        nexthop_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metatdata-disposition")
    {
        metatdata_disposition = value;
        metatdata_disposition.value_namespace = name_space;
        metatdata_disposition.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "nexthop-ipv4-address")
    {
        nexthop_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "metatdata-disposition")
    {
        metatdata_disposition.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "vrf" || name == "nexthop-ipv4-address" || name == "metatdata-disposition")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffNames()
    :
    sff_name(this, {"name"})
{

    yang_name = "sff-names"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::~SffNames()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sff-name")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName>();
        c->parent = this;
        sff_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sff_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sff-name")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::SffName()
    :
    name{YType::str, "name"}
        ,
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node>())
{
    node->parent = this;

    yang_name = "sff-name"; yang_parent_name = "sff-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::~SffName()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "name")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::Node()
    :
    enable{YType::empty, "enable"},
    reserved{YType::empty, "reserved"}
{

    yang_name = "node"; yang_parent_name = "sff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| reserved.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(reserved.yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "reserved")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfNames()
    :
    sf_name(this, {"name"})
{

    yang_name = "sf-names"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::~SfNames()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-name")
    {
        auto c = std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName>();
        c->parent = this;
        sf_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sf_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf-name")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::SfName()
    :
    name{YType::str, "name"}
        ,
    node(std::make_shared<Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node>())
{
    node->parent = this;

    yang_name = "sf-name"; yang_parent_name = "sf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::~SfName()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (node !=  nullptr && node->has_data());
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (node !=  nullptr && node->has_operation());
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(node != nullptr)
    {
        children["node"] = node;
    }

    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "name")
        return true;
    return false;
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::Node()
    :
    enable{YType::empty, "enable"},
    reserved{YType::empty, "reserved"}
{

    yang_name = "node"; yang_parent_name = "sf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::~Node()
{
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| reserved.is_set;
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(reserved.yfilter);
}

std::string Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
}

void Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
}

bool Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "reserved")
        return true;
    return false;
}

const Enum::YLeaf SfcSfTransport::vxlan_gpe {1, "vxlan-gpe"};

const Enum::YLeaf SfcMetadataDispositionMatch::type1_dcalloc_tenant_id {1, "type1-dcalloc-tenant-id"};

const Enum::YLeaf SfcMetadataAlloc::type1 {1, "type1"};

const Enum::YLeaf SfcMetadataType1AllocFormat::dc_allocation {1, "dc-allocation"};

const Enum::YLeaf SfcMetadataDispositionAction::redirect_nexthop {1, "redirect-nexthop"};


}
}

