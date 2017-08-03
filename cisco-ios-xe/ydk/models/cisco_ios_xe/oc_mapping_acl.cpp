
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "oc_mapping_acl.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace oc_mapping_acl {

AclMapping::AclMapping()
    :
    acl_sets(std::make_shared<AclMapping::AclSets>())
	,interfaces(std::make_shared<AclMapping::Interfaces>())
{
    acl_sets->parent = this;

    interfaces->parent = this;

    yang_name = "acl-mapping"; yang_parent_name = "oc-mapping-acl";
}

AclMapping::~AclMapping()
{
}

bool AclMapping::has_data() const
{
    return (acl_sets !=  nullptr && acl_sets->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool AclMapping::has_operation() const
{
    return is_set(yfilter)
	|| (acl_sets !=  nullptr && acl_sets->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string AclMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-mapping-acl:acl-mapping";

    return path_buffer.str();

}

const EntityPath AclMapping::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AclMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-sets")
    {
        if(acl_sets == nullptr)
        {
            acl_sets = std::make_shared<AclMapping::AclSets>();
        }
        return acl_sets;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<AclMapping::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_sets != nullptr)
    {
        children["acl-sets"] = acl_sets;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void AclMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AclMapping::clone_ptr() const
{
    return std::make_shared<AclMapping>();
}

std::string AclMapping::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AclMapping::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AclMapping::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AclMapping::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AclMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-sets" || name == "interfaces")
        return true;
    return false;
}

AclMapping::AclSets::AclSets()
{
    yang_name = "acl-sets"; yang_parent_name = "acl-mapping";
}

AclMapping::AclSets::~AclSets()
{
}

bool AclMapping::AclSets::has_data() const
{
    for (std::size_t index=0; index<acl_set.size(); index++)
    {
        if(acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::AclSets::has_operation() const
{
    for (std::size_t index=0; index<acl_set.size(); index++)
    {
        if(acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::AclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-sets";

    return path_buffer.str();

}

const EntityPath AclMapping::AclSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "oc-mapping-acl:acl-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::AclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-set")
    {
        for(auto const & c : acl_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::AclSets::AclSet>();
        c->parent = this;
        acl_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::AclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::AclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::AclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::AclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-set")
        return true;
    return false;
}

AclMapping::AclSets::AclSet::AclSet()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<AclMapping::AclSets::AclSet::Config>())
{
    config->parent = this;

    yang_name = "acl-set"; yang_parent_name = "acl-sets";
}

AclMapping::AclSets::AclSet::~AclSet()
{
}

bool AclMapping::AclSets::AclSet::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data());
}

bool AclMapping::AclSets::AclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string AclMapping::AclSets::AclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-set" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::AclSets::AclSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "oc-mapping-acl:acl-mapping/acl-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::AclSets::AclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AclMapping::AclSets::AclSet::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::AclSets::AclSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void AclMapping::AclSets::AclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::AclSets::AclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool AclMapping::AclSets::AclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "name")
        return true;
    return false;
}

AclMapping::AclSets::AclSet::Config::Config()
    :
    acl_type{YType::enumeration, "acl-type"},
    description{YType::str, "description"},
    name{YType::str, "name"}
    	,
    acl_entries(std::make_shared<AclMapping::AclSets::AclSet::Config::AclEntries>())
{
    acl_entries->parent = this;

    yang_name = "config"; yang_parent_name = "acl-set";
}

AclMapping::AclSets::AclSet::Config::~Config()
{
}

bool AclMapping::AclSets::AclSet::Config::has_data() const
{
    return acl_type.is_set
	|| description.is_set
	|| name.is_set
	|| (acl_entries !=  nullptr && acl_entries->has_data());
}

bool AclMapping::AclSets::AclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_entries !=  nullptr && acl_entries->has_operation());
}

std::string AclMapping::AclSets::AclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath AclMapping::AclSets::AclSet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_type.is_set || is_set(acl_type.yfilter)) leaf_name_data.push_back(acl_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::AclSets::AclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<AclMapping::AclSets::AclSet::Config::AclEntries>();
        }
        return acl_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::AclSets::AclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_entries != nullptr)
    {
        children["acl-entries"] = acl_entries;
    }

    return children;
}

void AclMapping::AclSets::AclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-type")
    {
        acl_type = value;
        acl_type.value_namespace = name_space;
        acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::AclSets::AclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-type")
    {
        acl_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool AclMapping::AclSets::AclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entries" || name == "acl-type" || name == "description" || name == "name")
        return true;
    return false;
}

AclMapping::AclSets::AclSet::Config::AclEntries::AclEntries()
{
    yang_name = "acl-entries"; yang_parent_name = "config";
}

AclMapping::AclSets::AclSet::Config::AclEntries::~AclEntries()
{
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::has_data() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::AclSets::AclSet::Config::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";

    return path_buffer.str();

}

const EntityPath AclMapping::AclSets::AclSet::Config::AclEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntries' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::AclSets::AclSet::Config::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        for(auto const & c : acl_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry>();
        c->parent = this;
        acl_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::AclSets::AclSet::Config::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::AclSets::AclSet::Config::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::AclSets::AclSet::Config::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::uint32, "sequence-id"},
    ip_version{YType::enumeration, "ip-version"}
{
    yang_name = "acl-entry"; yang_parent_name = "acl-entries";
}

AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::~AclEntry()
{
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::has_data() const
{
    return sequence_id.is_set
	|| ip_version.is_set;
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter)
	|| ydk::is_set(ip_version.yfilter);
}

std::string AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry" <<"[sequence-id='" <<sequence_id <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntry' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());
    if (ip_version.is_set || is_set(ip_version.yfilter)) leaf_name_data.push_back(ip_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-version")
    {
        ip_version = value;
        ip_version.value_namespace = name_space;
        ip_version.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
    if(value_path == "ip-version")
    {
        ip_version.yfilter = yfilter;
    }
}

bool AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id" || name == "ip-version")
        return true;
    return false;
}

AclMapping::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "acl-mapping";
}

AclMapping::Interfaces::~Interfaces()
{
}

bool AclMapping::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "oc-mapping-acl:acl-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::Interface()
    :
    id{YType::str, "id"}
    	,
    config(std::make_shared<AclMapping::Interfaces::Interface::Config>())
	,egress_acl_sets(std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets>())
	,ingress_acl_sets(std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets>())
	,interface_ref(std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef>())
{
    config->parent = this;

    egress_acl_sets->parent = this;

    ingress_acl_sets->parent = this;

    interface_ref->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

AclMapping::Interfaces::Interface::~Interface()
{
}

bool AclMapping::Interfaces::Interface::has_data() const
{
    return id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (egress_acl_sets !=  nullptr && egress_acl_sets->has_data())
	|| (ingress_acl_sets !=  nullptr && ingress_acl_sets->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool AclMapping::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (egress_acl_sets !=  nullptr && egress_acl_sets->has_operation())
	|| (ingress_acl_sets !=  nullptr && ingress_acl_sets->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string AclMapping::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "oc-mapping-acl:acl-mapping/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AclMapping::Interfaces::Interface::Config>();
        }
        return config;
    }

    if(child_yang_name == "egress-acl-sets")
    {
        if(egress_acl_sets == nullptr)
        {
            egress_acl_sets = std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets>();
        }
        return egress_acl_sets;
    }

    if(child_yang_name == "ingress-acl-sets")
    {
        if(ingress_acl_sets == nullptr)
        {
            ingress_acl_sets = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets>();
        }
        return ingress_acl_sets;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(egress_acl_sets != nullptr)
    {
        children["egress-acl-sets"] = egress_acl_sets;
    }

    if(ingress_acl_sets != nullptr)
    {
        children["ingress-acl-sets"] = ingress_acl_sets;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void AclMapping::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "egress-acl-sets" || name == "ingress-acl-sets" || name == "interface-ref" || name == "id")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::Config::Config()
    :
    id{YType::str, "id"}
{
    yang_name = "config"; yang_parent_name = "interface";
}

AclMapping::Interfaces::Interface::Config::~Config()
{
}

bool AclMapping::Interfaces::Interface::Config::has_data() const
{
    return id.is_set;
}

bool AclMapping::Interfaces::Interface::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string AclMapping::Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef::Config>())
	,state(std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "interface";
}

AclMapping::Interfaces::Interface::InterfaceRef::~InterfaceRef()
{
}

bool AclMapping::Interfaces::Interface::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool AclMapping::Interfaces::Interface::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string AclMapping::Interfaces::Interface::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<AclMapping::Interfaces::Interface::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void AclMapping::Interfaces::Interface::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::Interface::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::Interface::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

AclMapping::Interfaces::Interface::InterfaceRef::Config::~Config()
{
}

bool AclMapping::Interfaces::Interface::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool AclMapping::Interfaces::Interface::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string AclMapping::Interfaces::Interface::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

AclMapping::Interfaces::Interface::InterfaceRef::State::~State()
{
}

bool AclMapping::Interfaces::Interface::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool AclMapping::Interfaces::Interface::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string AclMapping::Interfaces::Interface::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSets()
{
    yang_name = "ingress-acl-sets"; yang_parent_name = "interface";
}

AclMapping::Interfaces::Interface::IngressAclSets::~IngressAclSets()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::has_data() const
{
    for (std::size_t index=0; index<ingress_acl_set.size(); index++)
    {
        if(ingress_acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::Interfaces::Interface::IngressAclSets::has_operation() const
{
    for (std::size_t index=0; index<ingress_acl_set.size(); index++)
    {
        if(ingress_acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-acl-sets";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IngressAclSets' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-acl-set")
    {
        for(auto const & c : ingress_acl_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet>();
        c->parent = this;
        ingress_acl_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ingress_acl_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::Interface::IngressAclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-acl-set")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::IngressAclSet()
    :
    set_name{YType::str, "set-name"}
    	,
    acl_entries(std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries>())
	,config(std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config>())
	,state(std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State>())
{
    acl_entries->parent = this;

    config->parent = this;

    state->parent = this;

    yang_name = "ingress-acl-set"; yang_parent_name = "ingress-acl-sets";
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::~IngressAclSet()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::has_data() const
{
    return set_name.is_set
	|| (acl_entries !=  nullptr && acl_entries->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (acl_entries !=  nullptr && acl_entries->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-acl-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IngressAclSet' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries>();
        }
        return acl_entries;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_entries != nullptr)
    {
        children["acl-entries"] = acl_entries;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entries" || name == "config" || name == "state" || name == "set-name")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::Config()
    :
    set_name{YType::str, "set-name"}
{
    yang_name = "config"; yang_parent_name = "ingress-acl-set";
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::~Config()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_data() const
{
    return set_name.is_set;
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter);
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::State()
    :
    set_name{YType::str, "set-name"}
{
    yang_name = "state"; yang_parent_name = "ingress-acl-set";
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::~State()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_data() const
{
    return set_name.is_set;
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter);
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntries()
{
    yang_name = "acl-entries"; yang_parent_name = "ingress-acl-set";
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::~AclEntries()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_data() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntries' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        for(auto const & c : acl_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry>();
        c->parent = this;
        acl_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::str, "sequence-id"}
{
    yang_name = "acl-entry"; yang_parent_name = "acl-entries";
}

AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::~AclEntry()
{
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_data() const
{
    return sequence_id.is_set;
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter);
}

std::string AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry" <<"[sequence-id='" <<sequence_id <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntry' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSets()
{
    yang_name = "egress-acl-sets"; yang_parent_name = "interface";
}

AclMapping::Interfaces::Interface::EgressAclSets::~EgressAclSets()
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::has_data() const
{
    for (std::size_t index=0; index<egress_acl_set.size(); index++)
    {
        if(egress_acl_set[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::Interfaces::Interface::EgressAclSets::has_operation() const
{
    for (std::size_t index=0; index<egress_acl_set.size(); index++)
    {
        if(egress_acl_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::Interfaces::Interface::EgressAclSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-acl-sets";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::EgressAclSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressAclSets' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::EgressAclSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-acl-set")
    {
        for(auto const & c : egress_acl_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet>();
        c->parent = this;
        egress_acl_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::EgressAclSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : egress_acl_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::Interfaces::Interface::EgressAclSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::Interface::EgressAclSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-acl-set")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::EgressAclSet()
    :
    set_name{YType::str, "set-name"}
    	,
    acl_entries(std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries>())
	,config(std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config>())
{
    acl_entries->parent = this;

    config->parent = this;

    yang_name = "egress-acl-set"; yang_parent_name = "egress-acl-sets";
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::~EgressAclSet()
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::has_data() const
{
    return set_name.is_set
	|| (acl_entries !=  nullptr && acl_entries->has_data())
	|| (config !=  nullptr && config->has_data());
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter)
	|| (acl_entries !=  nullptr && acl_entries->has_operation())
	|| (config !=  nullptr && config->has_operation());
}

std::string AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-acl-set" <<"[set-name='" <<set_name <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressAclSet' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entries")
    {
        if(acl_entries == nullptr)
        {
            acl_entries = std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries>();
        }
        return acl_entries;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_entries != nullptr)
    {
        children["acl-entries"] = acl_entries;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entries" || name == "config" || name == "set-name")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::Config()
    :
    set_name{YType::str, "set-name"}
{
    yang_name = "config"; yang_parent_name = "egress-acl-set";
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::~Config()
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_data() const
{
    return set_name.is_set;
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_name.yfilter);
}

std::string AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_name.is_set || is_set(set_name.yfilter)) leaf_name_data.push_back(set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-name")
    {
        set_name = value;
        set_name.value_namespace = name_space;
        set_name.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-name")
    {
        set_name.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-name")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntries()
{
    yang_name = "acl-entries"; yang_parent_name = "egress-acl-set";
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::~AclEntries()
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_data() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_data())
            return true;
    }
    return false;
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_operation() const
{
    for (std::size_t index=0; index<acl_entry.size(); index++)
    {
        if(acl_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entries";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntries' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-entry")
    {
        for(auto const & c : acl_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry>();
        c->parent = this;
        acl_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acl_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-entry")
        return true;
    return false;
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::AclEntry()
    :
    sequence_id{YType::str, "sequence-id"}
{
    yang_name = "acl-entry"; yang_parent_name = "acl-entries";
}

AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::~AclEntry()
{
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_data() const
{
    return sequence_id.is_set;
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_id.yfilter);
}

std::string AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-entry" <<"[sequence-id='" <<sequence_id <<"']";

    return path_buffer.str();

}

const EntityPath AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclEntry' in oc_mapping_acl cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_id.is_set || is_set(sequence_id.yfilter)) leaf_name_data.push_back(sequence_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-id")
    {
        sequence_id = value;
        sequence_id.value_namespace = name_space;
        sequence_id.value_namespace_prefix = name_space_prefix;
    }
}

void AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-id")
    {
        sequence_id.yfilter = yfilter;
    }
}

bool AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-id")
        return true;
    return false;
}


}
}

