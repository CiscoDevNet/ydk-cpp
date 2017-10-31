
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iep_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iep_cfg {

IpExplicitPaths::IpExplicitPaths()
    :
    paths(std::make_shared<IpExplicitPaths::Paths>())
{
    paths->parent = this;

    yang_name = "ip-explicit-paths"; yang_parent_name = "Cisco-IOS-XR-ip-iep-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

IpExplicitPaths::~IpExplicitPaths()
{
}

bool IpExplicitPaths::has_data() const
{
    return (paths !=  nullptr && paths->has_data());
}

bool IpExplicitPaths::has_operation() const
{
    return is_set(yfilter)
	|| (paths !=  nullptr && paths->has_operation());
}

std::string IpExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<IpExplicitPaths::Paths>();
        }
        return paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    return children;
}

void IpExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IpExplicitPaths::clone_ptr() const
{
    return std::make_shared<IpExplicitPaths>();
}

std::string IpExplicitPaths::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpExplicitPaths::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpExplicitPaths::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpExplicitPaths::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths")
        return true;
    return false;
}

IpExplicitPaths::Paths::Paths()
{

    yang_name = "paths"; yang_parent_name = "ip-explicit-paths"; is_top_level_class = false; has_list_ancestor = false;
}

IpExplicitPaths::Paths::~Paths()
{
}

bool IpExplicitPaths::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpExplicitPaths::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string IpExplicitPaths::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IpExplicitPaths::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpExplicitPaths::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpExplicitPaths::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpExplicitPaths::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Path()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

IpExplicitPaths::Paths::Path::~Path()
{
}

bool IpExplicitPaths::Paths::Path::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool IpExplicitPaths::Paths::Path::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string IpExplicitPaths::Paths::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string IpExplicitPaths::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IpExplicitPaths::Paths::Path::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<IpExplicitPaths::Paths::Path::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpExplicitPaths::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void IpExplicitPaths::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool IpExplicitPaths::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "identifier" || name == "type")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Name::Name()
    :
    name{YType::str, "name"},
    disable{YType::empty, "disable"}
    	,
    hops(std::make_shared<IpExplicitPaths::Paths::Path::Name::Hops>())
{
    hops->parent = this;

    yang_name = "name"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Name::~Name()
{
}

bool IpExplicitPaths::Paths::Path::Name::has_data() const
{
    return name.is_set
	|| disable.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool IpExplicitPaths::Paths::Path::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string IpExplicitPaths::Paths::Path::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<IpExplicitPaths::Paths::Path::Name::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hops != nullptr)
    {
        children["hops"] = hops;
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void IpExplicitPaths::Paths::Path::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool IpExplicitPaths::Paths::Path::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "name" || name == "disable")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Name::Hops::Hops()
{

    yang_name = "hops"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Name::Hops::~Hops()
{
}

bool IpExplicitPaths::Paths::Path::Name::Hops::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::Path::Name::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpExplicitPaths::Paths::Path::Name::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Name::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Name::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpExplicitPaths::Paths::Path::Name::Hops::Hop>();
        c->parent = this;
        hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Name::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Name::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpExplicitPaths::Paths::Path::Name::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpExplicitPaths::Paths::Path::Name::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Name::Hops::Hop::Hop()
    :
    index_number{YType::uint32, "index-number"},
    ip_address{YType::str, "ip-address"},
    hop_type{YType::enumeration, "hop-type"},
    if_index{YType::int32, "if-index"},
    num_type{YType::enumeration, "num-type"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Name::Hops::Hop::~Hop()
{
}

bool IpExplicitPaths::Paths::Path::Name::Hops::Hop::has_data() const
{
    return index_number.is_set
	|| ip_address.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| num_type.is_set
	|| mpls_label.is_set;
}

bool IpExplicitPaths::Paths::Path::Name::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_number.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(num_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop" <<"[index-number='" <<index_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_number.is_set || is_set(index_number.yfilter)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (num_type.is_set || is_set(num_type.yfilter)) leaf_name_data.push_back(num_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Name::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpExplicitPaths::Paths::Path::Name::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index-number")
    {
        index_number = value;
        index_number.value_namespace = name_space;
        index_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-type")
    {
        num_type = value;
        num_type.value_namespace = name_space;
        num_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void IpExplicitPaths::Paths::Path::Name::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index-number")
    {
        index_number.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "num-type")
    {
        num_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool IpExplicitPaths::Paths::Path::Name::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index-number" || name == "ip-address" || name == "hop-type" || name == "if-index" || name == "num-type" || name == "mpls-label")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Identifier::Identifier()
    :
    id{YType::uint32, "id"},
    disable{YType::empty, "disable"}
    	,
    hops(std::make_shared<IpExplicitPaths::Paths::Path::Identifier::Hops>())
{
    hops->parent = this;

    yang_name = "identifier"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Identifier::~Identifier()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::has_data() const
{
    return id.is_set
	|| disable.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool IpExplicitPaths::Paths::Path::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string IpExplicitPaths::Paths::Path::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<IpExplicitPaths::Paths::Path::Identifier::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hops != nullptr)
    {
        children["hops"] = hops;
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void IpExplicitPaths::Paths::Path::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool IpExplicitPaths::Paths::Path::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "id" || name == "disable")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hops()
{

    yang_name = "hops"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Identifier::Hops::~Hops()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::has_data() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.size(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpExplicitPaths::Paths::Path::Identifier::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Identifier::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Identifier::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        for(auto const & c : hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpExplicitPaths::Paths::Path::Identifier::Hops::Hop>();
        c->parent = this;
        hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Identifier::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::Hop()
    :
    index_number{YType::uint32, "index-number"},
    ip_address{YType::str, "ip-address"},
    hop_type{YType::enumeration, "hop-type"},
    if_index{YType::int32, "if-index"},
    num_type{YType::enumeration, "num-type"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = true;
}

IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::~Hop()
{
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::has_data() const
{
    return index_number.is_set
	|| ip_address.is_set
	|| hop_type.is_set
	|| if_index.is_set
	|| num_type.is_set
	|| mpls_label.is_set;
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_number.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(num_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop" <<"[index-number='" <<index_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_number.is_set || is_set(index_number.yfilter)) leaf_name_data.push_back(index_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (num_type.is_set || is_set(num_type.yfilter)) leaf_name_data.push_back(num_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index-number")
    {
        index_number = value;
        index_number.value_namespace = name_space;
        index_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-type")
    {
        num_type = value;
        num_type.value_namespace = name_space;
        num_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index-number")
    {
        index_number.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "num-type")
    {
        num_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool IpExplicitPaths::Paths::Path::Identifier::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index-number" || name == "ip-address" || name == "hop-type" || name == "if-index" || name == "num-type" || name == "mpls-label")
        return true;
    return false;
}

const Enum::YLeaf IpIepNum::unnumbered {1, "unnumbered"};
const Enum::YLeaf IpIepNum::numbered {2, "numbered"};

const Enum::YLeaf IpIepHop::next_strict {2, "next-strict"};
const Enum::YLeaf IpIepHop::next_loose {3, "next-loose"};
const Enum::YLeaf IpIepHop::exclude {4, "exclude"};
const Enum::YLeaf IpIepHop::exclude_srlg {5, "exclude-srlg"};
const Enum::YLeaf IpIepHop::next_label {6, "next-label"};

const Enum::YLeaf IpIepPath::identifier {1, "identifier"};
const Enum::YLeaf IpIepPath::name {2, "name"};


}
}

