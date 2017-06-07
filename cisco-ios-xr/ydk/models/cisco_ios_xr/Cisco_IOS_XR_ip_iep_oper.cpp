
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iep_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_oper {

ExplicitPaths::ExplicitPaths()
    :
    identifiers(std::make_shared<ExplicitPaths::Identifiers>())
	,names(std::make_shared<ExplicitPaths::Names>())
{
    identifiers->parent = this;

    names->parent = this;

    yang_name = "explicit-paths"; yang_parent_name = "Cisco-IOS-XR-ip-iep-oper";
}

ExplicitPaths::~ExplicitPaths()
{
}

bool ExplicitPaths::has_data() const
{
    return (identifiers !=  nullptr && identifiers->has_data())
	|| (names !=  nullptr && names->has_data());
}

bool ExplicitPaths::has_operation() const
{
    return is_set(operation)
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (names !=  nullptr && names->has_operation());
}

std::string ExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<ExplicitPaths::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "names")
    {
        if(names == nullptr)
        {
            names = std::make_shared<ExplicitPaths::Names>();
        }
        return names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void ExplicitPaths::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ExplicitPaths::clone_ptr() const
{
    return std::make_shared<ExplicitPaths>();
}

std::string ExplicitPaths::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ExplicitPaths::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ExplicitPaths::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ExplicitPaths::Identifiers::Identifiers()
{
    yang_name = "identifiers"; yang_parent_name = "explicit-paths";
}

ExplicitPaths::Identifiers::~Identifiers()
{
}

bool ExplicitPaths::Identifiers::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return false;
}

bool ExplicitPaths::Identifiers::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ExplicitPaths::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Identifiers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExplicitPaths::Identifiers::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExplicitPaths::Identifiers::set_value(const std::string & value_path, std::string value)
{
}

ExplicitPaths::Identifiers::Identifier::Identifier()
    :
    identifier_id{YType::int32, "identifier-id"},
    status{YType::enumeration, "status"}
{
    yang_name = "identifier"; yang_parent_name = "identifiers";
}

ExplicitPaths::Identifiers::Identifier::~Identifier()
{
}

bool ExplicitPaths::Identifiers::Identifier::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return identifier_id.is_set
	|| status.is_set;
}

bool ExplicitPaths::Identifiers::Identifier::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(identifier_id.operation)
	|| is_set(status.operation);
}

std::string ExplicitPaths::Identifiers::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[identifier-id='" <<identifier_id <<"']";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Identifiers::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/identifiers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier_id.is_set || is_set(identifier_id.operation)) leaf_name_data.push_back(identifier_id.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Identifiers::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExplicitPaths::Identifiers::Identifier::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Identifiers::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExplicitPaths::Identifiers::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier-id")
    {
        identifier_id = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

ExplicitPaths::Identifiers::Identifier::Address::Address()
    :
    address{YType::str, "address"},
    address_type{YType::enumeration, "address-type"},
    hop_type{YType::enumeration, "hop-type"},
    if_index{YType::uint32, "if-index"},
    index_{YType::uint32, "index"},
    mpls_label{YType::uint32, "mpls-label"}
{
    yang_name = "address"; yang_parent_name = "identifier";
}

ExplicitPaths::Identifiers::Identifier::Address::~Address()
{
}

bool ExplicitPaths::Identifiers::Identifier::Address::has_data() const
{
    return address.is_set
	|| address_type.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| index_.is_set
	|| mpls_label.is_set;
}

bool ExplicitPaths::Identifiers::Identifier::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_type.operation)
	|| is_set(hop_type.operation)
	|| is_set(if_index.operation)
	|| is_set(index_.operation)
	|| is_set(mpls_label.operation);
}

std::string ExplicitPaths::Identifiers::Identifier::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Identifiers::Identifier::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_iep_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Identifiers::Identifier::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Identifiers::Identifier::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExplicitPaths::Identifiers::Identifier::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
}

ExplicitPaths::Names::Names()
{
    yang_name = "names"; yang_parent_name = "explicit-paths";
}

ExplicitPaths::Names::~Names()
{
}

bool ExplicitPaths::Names::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool ExplicitPaths::Names::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ExplicitPaths::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ExplicitPaths::Names::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExplicitPaths::Names::set_value(const std::string & value_path, std::string value)
{
}

ExplicitPaths::Names::Name::Name()
    :
    path_name{YType::str, "path-name"},
    status{YType::enumeration, "status"}
{
    yang_name = "name"; yang_parent_name = "names";
}

ExplicitPaths::Names::Name::~Name()
{
}

bool ExplicitPaths::Names::Name::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return path_name.is_set
	|| status.is_set;
}

bool ExplicitPaths::Names::Name::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(path_name.operation)
	|| is_set(status.operation);
}

std::string ExplicitPaths::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[path-name='" <<path_name <<"']";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Names::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ExplicitPaths::Names::Name::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Names::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ExplicitPaths::Names::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

ExplicitPaths::Names::Name::Address::Address()
    :
    address{YType::str, "address"},
    address_type{YType::enumeration, "address-type"},
    hop_type{YType::enumeration, "hop-type"},
    if_index{YType::uint32, "if-index"},
    index_{YType::uint32, "index"},
    mpls_label{YType::uint32, "mpls-label"}
{
    yang_name = "address"; yang_parent_name = "name";
}

ExplicitPaths::Names::Name::Address::~Address()
{
}

bool ExplicitPaths::Names::Name::Address::has_data() const
{
    return address.is_set
	|| address_type.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| index_.is_set
	|| mpls_label.is_set;
}

bool ExplicitPaths::Names::Name::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_type.operation)
	|| is_set(hop_type.operation)
	|| is_set(if_index.operation)
	|| is_set(index_.operation)
	|| is_set(mpls_label.operation);
}

std::string ExplicitPaths::Names::Name::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath ExplicitPaths::Names::Name::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_iep_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ExplicitPaths::Names::Name::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExplicitPaths::Names::Name::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ExplicitPaths::Names::Name::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
}

const Enum::YLeaf IepStatusEnum::enabled {0, "enabled"};
const Enum::YLeaf IepStatusEnum::disabled {1, "disabled"};

const Enum::YLeaf IepAddressEnum::next {0, "next"};
const Enum::YLeaf IepAddressEnum::exclude {1, "exclude"};
const Enum::YLeaf IepAddressEnum::exclude_srlg {2, "exclude-srlg"};

const Enum::YLeaf IepHopEnum::strict {0, "strict"};
const Enum::YLeaf IepHopEnum::loose {1, "loose"};


}
}

