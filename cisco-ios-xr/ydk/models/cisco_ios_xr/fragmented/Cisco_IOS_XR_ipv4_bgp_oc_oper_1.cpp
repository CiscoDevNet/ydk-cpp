
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop"; yang_parent_name = "route-attr-list";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as4.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregratorAttributes' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.operation)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as4")
    {
        as4 = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{
    yang_name = "community"; yang_parent_name = "route-attr-list";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_data() const
{
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(objects.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.operation)) leaf_name_data.push_back(objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "objects")
    {
        objects = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    aigp{YType::uint64, "aigp"},
    cluster{YType::str, "cluster"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes-list"; yang_parent_name = "route";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_data() const
{
    for (std::size_t index=0; index<ext_community.size(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.size(); index++)
    {
        if(unknown_attributes[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.size(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.size(); index++)
    {
        if(unknown_attributes[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(aigp.operation)
	|| is_set(cluster.operation)
	|| is_set(originator_id.operation)
	|| is_set(path_id.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributesList' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.operation)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ext-community")
    {
        for(auto const & c : ext_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity>();
        c->parent = this;
        ext_community.push_back(std::move(c));
        children[segment_path] = ext_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unknown-attributes")
    {
        for(auto const & c : unknown_attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes>();
        c->parent = this;
        unknown_attributes.push_back(std::move(c));
        children[segment_path] = unknown_attributes.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_children()
{
    for (auto const & c : ext_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : unknown_attributes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "cluster")
    {
        cluster.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{
    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(objects.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtCommunity' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.operation)) leaf_name_data.push_back(objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "objects")
    {
        objects = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_length{YType::uint16, "attribute-length"},
    attribute_type{YType::uint16, "attribute-type"},
    attribute_value{YType::str, "attribute-value"}
{
    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    return attribute_length.is_set
	|| attribute_type.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_length.operation)
	|| is_set(attribute_type.operation)
	|| is_set(attribute_value.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttributes' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_length.is_set || is_set(attribute_length.operation)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.operation)) leaf_name_data.push_back(attribute_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-length")
    {
        attribute_length = value;
    }
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "attribute-value")
    {
        attribute_value = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{
    yang_name = "last-modified-date"; yang_parent_name = "route";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_data() const
{
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(operation)
	|| is_set(time_value.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastModifiedDate' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.operation)) leaf_name_data.push_back(time_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-value")
    {
        time_value = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{
    yang_name = "last-update-recieved"; yang_parent_name = "route";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_data() const
{
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(operation)
	|| is_set(time_value.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateRecieved' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.operation)) leaf_name_data.push_back(time_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-value")
    {
        time_value = value;
    }
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{
    yang_name = "num-routes"; yang_parent_name = "adj-rib-in-pre";
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_data() const
{
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(num_routes.operation);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";

    return path_buffer.str();

}

EntityPath OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRoutes' in Cisco_IOS_XR_ipv4_bgp_oc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.operation)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_children()
{
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
    }
}


}
}

