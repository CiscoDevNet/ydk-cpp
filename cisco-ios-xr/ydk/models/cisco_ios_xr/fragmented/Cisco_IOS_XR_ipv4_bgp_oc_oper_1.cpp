
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4")
    {
        as4 = value;
        as4.value_namespace = name_space;
        as4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
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
    return originator_id.is_set
	|| aigp.is_set
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(cluster.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto c = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity>();
        c->parent = this;
        ext_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto c = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes>();
        c->parent = this;
        unknown_attributes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ext_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : unknown_attributes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster.append(value);
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-length")
    {
        attribute_length = value;
        attribute_length.value_namespace = name_space;
        attribute_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-value")
    {
        attribute_value = value;
        attribute_value.value_namespace = name_space;
        attribute_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "attribute-length")
    {
        attribute_length.yfilter = yfilter;
    }
    if(value_path == "attribute-value")
    {
        attribute_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}


}
}

