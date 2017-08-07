
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_rib_bgp.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace openconfig_rib_bgp {

BgpRib::BgpRib()
    :
    afi_safis(std::make_shared<BgpRib::AfiSafis>())
{
    afi_safis->parent = this;

    yang_name = "bgp-rib"; yang_parent_name = "openconfig-rib-bgp";
}

BgpRib::~BgpRib()
{
}

bool BgpRib::has_data() const
{
    return (afi_safis !=  nullptr && afi_safis->has_data());
}

bool BgpRib::has_operation() const
{
    return is_set(yfilter)
	|| (afi_safis !=  nullptr && afi_safis->has_operation());
}

std::string BgpRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-rib-bgp:bgp-rib";

    return path_buffer.str();

}

const EntityPath BgpRib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BgpRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<BgpRib::AfiSafis>();
        }
        return afi_safis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afi_safis != nullptr)
    {
        children["afi-safis"] = afi_safis;
    }

    return children;
}

void BgpRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BgpRib::clone_ptr() const
{
    return std::make_shared<BgpRib>();
}

std::string BgpRib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BgpRib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BgpRib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BgpRib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BgpRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safis")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafis()
{
    yang_name = "afi-safis"; yang_parent_name = "bgp-rib";
}

BgpRib::AfiSafis::~AfiSafis()
{
}

bool BgpRib::AfiSafis::has_data() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-rib-bgp:bgp-rib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        for(auto const & c : afi_safi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : afi_safi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    ipv4_unicast(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_unicast(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast>())
{
    ipv4_unicast->parent = this;

    ipv6_unicast->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis";
}

BgpRib::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool BgpRib::AfiSafis::AfiSafi::has_data() const
{
    return afi_safi_name.is_set
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-rib-bgp:bgp-rib/afi-safis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-unicast" || name == "afi-safi-name")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    loc_rib(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib>())
	,neighbors(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors>())
{
    loc_rib->parent = this;

    neighbors->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    return (loc_rib !=  nullptr && loc_rib->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (loc_rib !=  nullptr && loc_rib->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Unicast' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loc-rib")
    {
        if(loc_rib == nullptr)
        {
            loc_rib = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib>();
        }
        return loc_rib;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loc_rib != nullptr)
    {
        children["loc-rib"] = loc_rib;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc-rib" || name == "neighbors")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::LocRib()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes>())
{
    routes->parent = this;

    yang_name = "loc-rib"; yang_parent_name = "ipv4-unicast";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::~LocRib()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-rib";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocRib' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "loc-rib";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv4-unicast";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::~Neighbors()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
    	,
    adj_rib_in_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost>())
	,adj_rib_in_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre>())
	,adj_rib_out_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost>())
	,adj_rib_out_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre>())
{
    adj_rib_in_post->parent = this;

    adj_rib_in_pre->parent = this;

    adj_rib_out_post->parent = this;

    adj_rib_out_pre->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adj_rib_in_post != nullptr)
    {
        children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_in_pre != nullptr)
    {
        children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    if(adj_rib_out_post != nullptr)
    {
        children["adj-rib-out-post"] = adj_rib_out_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-rib-in-post" || name == "adj-rib-in-pre" || name == "adj-rib-out-post" || name == "adj-rib-out-pre" || name == "neighbor-address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::AdjRibInPre()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-in-pre"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-pre";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibInPre' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::AdjRibInPost()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-in-post"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-post";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibInPost' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-in-post";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::AdjRibOutPre()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-out-pre"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-pre";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibOutPre' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::AdjRibOutPost()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-out-post"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-post";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibOutPost' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-out-post";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    loc_rib(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib>())
	,neighbors(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors>())
{
    loc_rib->parent = this;

    neighbors->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    return (loc_rib !=  nullptr && loc_rib->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (loc_rib !=  nullptr && loc_rib->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Unicast' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loc-rib")
    {
        if(loc_rib == nullptr)
        {
            loc_rib = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib>();
        }
        return loc_rib;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loc_rib != nullptr)
    {
        children["loc-rib"] = loc_rib;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc-rib" || name == "neighbors")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::LocRib()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes>())
{
    routes->parent = this;

    yang_name = "loc-rib"; yang_parent_name = "ipv6-unicast";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::~LocRib()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-rib";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocRib' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "loc-rib";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv6-unicast";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::~Neighbors()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
    	,
    adj_rib_in_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost>())
	,adj_rib_in_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre>())
	,adj_rib_out_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost>())
	,adj_rib_out_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre>())
{
    adj_rib_in_post->parent = this;

    adj_rib_in_pre->parent = this;

    adj_rib_out_post->parent = this;

    adj_rib_out_pre->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adj_rib_in_post != nullptr)
    {
        children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_in_pre != nullptr)
    {
        children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    if(adj_rib_out_post != nullptr)
    {
        children["adj-rib-out-post"] = adj_rib_out_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-rib-in-post" || name == "adj-rib-in-pre" || name == "adj-rib-out-post" || name == "adj-rib-out-pre" || name == "neighbor-address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::AdjRibInPre()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-in-pre"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-pre";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibInPre' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::AdjRibInPost()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-in-post"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-post";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibInPost' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-in-post";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::AdjRibOutPre()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-out-pre"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-pre";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibOutPre' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::AdjRibOutPost()
    :
    num_routes{YType::uint64, "num-routes"}
    	,
    routes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes>())
{
    routes->parent = this;

    yang_name = "adj-rib-out-post"; yang_parent_name = "neighbor";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::has_data() const
{
    return num_routes.is_set
	|| (routes !=  nullptr && routes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter)
	|| (routes !=  nullptr && routes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-post";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjRibOutPost' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "adj-rib-out-post";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Route()
    :
    best_path{YType::boolean, "best-path"},
    invalid_reason{YType::identityref, "invalid-reason"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    prefix{YType::str, "prefix"},
    valid_route{YType::boolean, "valid-route"}
    	,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>())
	,ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;

    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    return best_path.is_set
	|| invalid_reason.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| prefix.is_set
	|| valid_route.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "ext-attributes")
    {
        if(ext_attributes == nullptr)
        {
            ext_attributes = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>();
        }
        return ext_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        children["ext-attributes"] = ext_attributes;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date = value;
        last_modified_date.value_namespace = name_space;
        last_modified_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-received")
    {
        last_update_received = value;
        last_update_received.value_namespace = name_space;
        last_update_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "best-path" || name == "invalid-reason" || name == "last-modified-date" || name == "last-update-received" || name == "prefix" || name == "valid-route")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Attributes()
    :
    as4_path{YType::str, "as4-path"},
    as_path{YType::str, "as-path"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"},
    local_pref{YType::uint32, "local-pref"},
    med{YType::uint32, "med"},
    next_hop{YType::str, "next-hop"},
    origin{YType::enumeration, "origin"}
    	,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_data() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return as4_path.is_set
	|| as_path.is_set
	|| atomic_aggr.is_set
	|| local_pref.is_set
	|| med.is_set
	|| next_hop.is_set
	|| origin.is_set
	|| (aggregator !=  nullptr && aggregator->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_operation() const
{
    for (auto const & leaf : community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregator")
    {
        if(aggregator == nullptr)
        {
            aggregator = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>();
        }
        return aggregator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregator != nullptr)
    {
        children["aggregator"] = aggregator;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community.append(value);
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "as4-path" || name == "as-path" || name == "atomic-aggr" || name == "community" || name == "local-pref" || name == "med" || name == "next-hop" || name == "origin")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"}
{
    yang_name = "aggregator"; yang_parent_name = "attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    return address.is_set
	|| as.is_set
	|| as4.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregator' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as4")
    {
        as4.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "as" || name == "as4")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    aigp{YType::uint64, "aigp"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    originator_id{YType::str, "originator-id"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "ext-attributes"; yang_parent_name = "route";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_data() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return aigp.is_set
	|| originator_id.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cluster_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ext_community.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtAttributes' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "aigp" || name == "cluster-list" || name == "ext-community" || name == "originator-id" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes";
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    return attr_type.is_set
	|| attr_len.is_set
	|| attr_value.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(attr_len.yfilter)
	|| ydk::is_set(attr_value.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in openconfig_rib_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-len")
    {
        attr_len = value;
        attr_len.value_namespace = name_space;
        attr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-value")
    {
        attr_value = value;
        attr_value.value_namespace = name_space;
        attr_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "attr-len")
    {
        attr_len.yfilter = yfilter;
    }
    if(value_path == "attr-value")
    {
        attr_value.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-type" || name == "attr-len" || name == "attr-value")
        return true;
    return false;
}


}
}

