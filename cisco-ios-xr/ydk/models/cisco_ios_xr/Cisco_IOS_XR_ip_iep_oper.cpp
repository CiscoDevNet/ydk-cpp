
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iep_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iep_oper {

ExplicitPaths::ExplicitPaths()
    :
    identifiers(std::make_shared<ExplicitPaths::Identifiers>())
	,names(std::make_shared<ExplicitPaths::Names>())
{
    identifiers->parent = this;
    names->parent = this;

    yang_name = "explicit-paths"; yang_parent_name = "Cisco-IOS-XR-ip-iep-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (names !=  nullptr && names->has_operation());
}

std::string ExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void ExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> ExplicitPaths::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifiers" || name == "names")
        return true;
    return false;
}

ExplicitPaths::Identifiers::Identifiers()
{

    yang_name = "identifiers"; yang_parent_name = "explicit-paths"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string ExplicitPaths::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string ExplicitPaths::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void ExplicitPaths::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExplicitPaths::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExplicitPaths::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

ExplicitPaths::Identifiers::Identifier::Identifier()
    :
    identifier_id{YType::int32, "identifier-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "identifier"; yang_parent_name = "identifiers"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(identifier_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ExplicitPaths::Identifiers::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/identifiers/" << get_segment_path();
    return path_buffer.str();
}

std::string ExplicitPaths::Identifiers::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[identifier-id='" <<identifier_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Identifiers::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier_id.is_set || is_set(identifier_id.yfilter)) leaf_name_data.push_back(identifier_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

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

void ExplicitPaths::Identifiers::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier-id")
    {
        identifier_id = value;
        identifier_id.value_namespace = name_space;
        identifier_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ExplicitPaths::Identifiers::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier-id")
    {
        identifier_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ExplicitPaths::Identifiers::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identifier-id" || name == "status")
        return true;
    return false;
}

ExplicitPaths::Identifiers::Identifier::Address::Address()
    :
    index_{YType::uint32, "index"},
    if_index{YType::uint32, "if-index"},
    address_type{YType::enumeration, "address-type"},
    hop_type{YType::enumeration, "hop-type"},
    address{YType::str, "address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "address"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

ExplicitPaths::Identifiers::Identifier::Address::~Address()
{
}

bool ExplicitPaths::Identifiers::Identifier::Address::has_data() const
{
    return index_.is_set
	|| if_index.is_set
	|| address_type.is_set
	|| hop_type.is_set
	|| address.is_set
	|| mpls_label.is_set;
}

bool ExplicitPaths::Identifiers::Identifier::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string ExplicitPaths::Identifiers::Identifier::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Identifiers::Identifier::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

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

void ExplicitPaths::Identifiers::Identifier::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void ExplicitPaths::Identifiers::Identifier::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool ExplicitPaths::Identifiers::Identifier::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "if-index" || name == "address-type" || name == "hop-type" || name == "address" || name == "mpls-label")
        return true;
    return false;
}

ExplicitPaths::Names::Names()
{

    yang_name = "names"; yang_parent_name = "explicit-paths"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string ExplicitPaths::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string ExplicitPaths::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void ExplicitPaths::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExplicitPaths::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ExplicitPaths::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

ExplicitPaths::Names::Name::Name()
    :
    path_name{YType::str, "path-name"},
    status{YType::enumeration, "status"}
{

    yang_name = "name"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string ExplicitPaths::Names::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-oper:explicit-paths/names/" << get_segment_path();
    return path_buffer.str();
}

std::string ExplicitPaths::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[path-name='" <<path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Names::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

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

void ExplicitPaths::Names::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void ExplicitPaths::Names::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool ExplicitPaths::Names::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "path-name" || name == "status")
        return true;
    return false;
}

ExplicitPaths::Names::Name::Address::Address()
    :
    index_{YType::uint32, "index"},
    if_index{YType::uint32, "if-index"},
    address_type{YType::enumeration, "address-type"},
    hop_type{YType::enumeration, "hop-type"},
    address{YType::str, "address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "address"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

ExplicitPaths::Names::Name::Address::~Address()
{
}

bool ExplicitPaths::Names::Name::Address::has_data() const
{
    return index_.is_set
	|| if_index.is_set
	|| address_type.is_set
	|| hop_type.is_set
	|| address.is_set
	|| mpls_label.is_set;
}

bool ExplicitPaths::Names::Name::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string ExplicitPaths::Names::Name::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExplicitPaths::Names::Name::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

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

void ExplicitPaths::Names::Name::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void ExplicitPaths::Names::Name::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool ExplicitPaths::Names::Name::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "if-index" || name == "address-type" || name == "hop-type" || name == "address" || name == "mpls-label")
        return true;
    return false;
}

const Enum::YLeaf IepHop::strict {0, "strict"};
const Enum::YLeaf IepHop::loose {1, "loose"};

const Enum::YLeaf IepAddress::next {0, "next"};
const Enum::YLeaf IepAddress::exclude {1, "exclude"};
const Enum::YLeaf IepAddress::exclude_srlg {2, "exclude-srlg"};

const Enum::YLeaf IepStatus::enabled {0, "enabled"};
const Enum::YLeaf IepStatus::disabled {1, "disabled"};


}
}

