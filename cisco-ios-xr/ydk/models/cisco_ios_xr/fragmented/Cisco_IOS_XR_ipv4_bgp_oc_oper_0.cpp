
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {

OcBgp::OcBgp()
    :
    bgp_rib(std::make_shared<OcBgp::BgpRib>())
{
    bgp_rib->parent = this;

    yang_name = "oc-bgp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-oc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

OcBgp::~OcBgp()
{
}

bool OcBgp::has_data() const
{
    if (is_presence_container) return true;
    return (bgp_rib !=  nullptr && bgp_rib->has_data());
}

bool OcBgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_rib !=  nullptr && bgp_rib->has_operation());
}

std::string OcBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rib")
    {
        if(bgp_rib == nullptr)
        {
            bgp_rib = std::make_shared<OcBgp::BgpRib>();
        }
        return bgp_rib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rib != nullptr)
    {
        _children["bgp-rib"] = bgp_rib;
    }

    return _children;
}

void OcBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> OcBgp::clone_ptr() const
{
    return std::make_shared<OcBgp>();
}

std::string OcBgp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string OcBgp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function OcBgp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OcBgp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool OcBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rib")
        return true;
    return false;
}

OcBgp::BgpRib::BgpRib()
    :
    afi_safi_table(std::make_shared<OcBgp::BgpRib::AfiSafiTable>())
{
    afi_safi_table->parent = this;

    yang_name = "bgp-rib"; yang_parent_name = "oc-bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::~BgpRib()
{
}

bool OcBgp::BgpRib::has_data() const
{
    if (is_presence_container) return true;
    return (afi_safi_table !=  nullptr && afi_safi_table->has_data());
}

bool OcBgp::BgpRib::has_operation() const
{
    return is_set(yfilter)
	|| (afi_safi_table !=  nullptr && afi_safi_table->has_operation());
}

std::string OcBgp::BgpRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi-table")
    {
        if(afi_safi_table == nullptr)
        {
            afi_safi_table = std::make_shared<OcBgp::BgpRib::AfiSafiTable>();
        }
        return afi_safi_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afi_safi_table != nullptr)
    {
        _children["afi-safi-table"] = afi_safi_table;
    }

    return _children;
}

void OcBgp::BgpRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-table")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::AfiSafiTable()
    :
    ipv4_unicast(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast>())
    , ipv6_unicast(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast>())
{
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;

    yang_name = "afi-safi-table"; yang_parent_name = "bgp-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::~AfiSafiTable()
{
}

bool OcBgp::BgpRib::AfiSafiTable::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unicast != nullptr)
    {
        _children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        _children["ipv6-unicast"] = ipv6_unicast;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-unicast")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::Ipv4Unicast()
    :
    loc_rib(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib>())
    , open_config_neighbors(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors>())
{
    loc_rib->parent = this;
    open_config_neighbors->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi-table"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::~Ipv4Unicast()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (loc_rib !=  nullptr && loc_rib->has_data())
	|| (open_config_neighbors !=  nullptr && open_config_neighbors->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (loc_rib !=  nullptr && loc_rib->has_operation())
	|| (open_config_neighbors !=  nullptr && open_config_neighbors->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loc-rib")
    {
        if(loc_rib == nullptr)
        {
            loc_rib = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib>();
        }
        return loc_rib;
    }

    if(child_yang_name == "open-config-neighbors")
    {
        if(open_config_neighbors == nullptr)
        {
            open_config_neighbors = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors>();
        }
        return open_config_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(loc_rib != nullptr)
    {
        _children["loc-rib"] = loc_rib;
    }

    if(open_config_neighbors != nullptr)
    {
        _children["open-config-neighbors"] = open_config_neighbors;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc-rib" || name == "open-config-neighbors")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::LocRib()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "loc-rib"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::~LocRib()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/prefix-name/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/ext-attributes-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/ext-attributes-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/loc-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbors()
    :
    open_config_neighbor(this, {"neighbor_address"})
{

    yang_name = "open-config-neighbors"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::~OpenConfigNeighbors()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<open_config_neighbor.len(); index++)
    {
        if(open_config_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::has_operation() const
{
    for (std::size_t index=0; index<open_config_neighbor.len(); index++)
    {
        if(open_config_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "open-config-neighbor")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor>();
        ent_->parent = this;
        open_config_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : open_config_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "open-config-neighbor")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::OpenConfigNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
        ,
    adj_rib_in_post(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost>())
    , adj_rib_out_post(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost>())
    , adj_rib_out_pre(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre>())
    , adj_rib_in_pre(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre>())
{
    adj_rib_in_post->parent = this;
    adj_rib_out_post->parent = this;
    adj_rib_out_pre->parent = this;
    adj_rib_in_pre->parent = this;

    yang_name = "open-config-neighbor"; yang_parent_name = "open-config-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::~OpenConfigNeighbor()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv4-unicast/open-config-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_rib_in_post != nullptr)
    {
        _children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_out_post != nullptr)
    {
        _children["adj-rib-out-post"] = adj_rib_out_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        _children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    if(adj_rib_in_pre != nullptr)
    {
        _children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-rib-in-post" || name == "adj-rib-out-post" || name == "adj-rib-out-pre" || name == "adj-rib-in-pre" || name == "neighbor-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::AdjRibInPost()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-in-post"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-post";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::AdjRibOutPost()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-out-post"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-post";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::AdjRibOutPre()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-out-pre"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-pre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::AdjRibInPre()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-in-pre"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-pre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::Ipv6Unicast()
    :
    loc_rib(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib>())
    , open_config_neighbors(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors>())
{
    loc_rib->parent = this;
    open_config_neighbors->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi-table"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::~Ipv6Unicast()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (loc_rib !=  nullptr && loc_rib->has_data())
	|| (open_config_neighbors !=  nullptr && open_config_neighbors->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (loc_rib !=  nullptr && loc_rib->has_operation())
	|| (open_config_neighbors !=  nullptr && open_config_neighbors->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loc-rib")
    {
        if(loc_rib == nullptr)
        {
            loc_rib = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib>();
        }
        return loc_rib;
    }

    if(child_yang_name == "open-config-neighbors")
    {
        if(open_config_neighbors == nullptr)
        {
            open_config_neighbors = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors>();
        }
        return open_config_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(loc_rib != nullptr)
    {
        _children["loc-rib"] = loc_rib;
    }

    if(open_config_neighbors != nullptr)
    {
        _children["open-config-neighbors"] = open_config_neighbors;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loc-rib" || name == "open-config-neighbors")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::LocRib()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "loc-rib"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::~LocRib()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/prefix-name/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/route-attr-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/ext-attributes-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/ext-attributes-list/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/loc-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbors()
    :
    open_config_neighbor(this, {"neighbor_address"})
{

    yang_name = "open-config-neighbors"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::~OpenConfigNeighbors()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<open_config_neighbor.len(); index++)
    {
        if(open_config_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::has_operation() const
{
    for (std::size_t index=0; index<open_config_neighbor.len(); index++)
    {
        if(open_config_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "open-config-neighbor")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor>();
        ent_->parent = this;
        open_config_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : open_config_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "open-config-neighbor")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::OpenConfigNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
        ,
    adj_rib_in_post(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost>())
    , adj_rib_out_post(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost>())
    , adj_rib_out_pre(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre>())
    , adj_rib_in_pre(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre>())
{
    adj_rib_in_post->parent = this;
    adj_rib_out_post->parent = this;
    adj_rib_out_pre->parent = this;
    adj_rib_in_pre->parent = this;

    yang_name = "open-config-neighbor"; yang_parent_name = "open-config-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::~OpenConfigNeighbor()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation())
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oc-oper:oc-bgp/bgp-rib/afi-safi-table/ipv6-unicast/open-config-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_rib_in_post != nullptr)
    {
        _children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_out_post != nullptr)
    {
        _children["adj-rib-out-post"] = adj_rib_out_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        _children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    if(adj_rib_in_pre != nullptr)
    {
        _children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-rib-in-post" || name == "adj-rib-out-post" || name == "adj-rib-out-pre" || name == "adj-rib-in-pre" || name == "neighbor-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::AdjRibInPost()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-in-post"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-post";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::AdjRibOutPost()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-out-post"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-post";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::AdjRibOutPre()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-out-pre"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-out-pre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::~NextHop()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::AggregratorAttributes()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregrator-attributes"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::~AggregratorAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregrator-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::Community()
    :
    objects{YType::str, "objects"}
{

    yang_name = "community"; yang_parent_name = "route-attr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::~Community()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtAttributesList()
    :
    originator_id{YType::str, "originator-id"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"},
    cluster{YType::str, "cluster"}
        ,
    ext_community(this, {})
    , unknown_attributes(this, {})
{

    yang_name = "ext-attributes-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::~ExtAttributesList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_operation() const
{
    for (std::size_t index=0; index<ext_community.len(); index++)
    {
        if(ext_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attributes.len(); index++)
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

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_name_datas = cluster.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_name_datas.begin(), cluster_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity>();
        ent_->parent = this;
        ext_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attributes")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes>();
        ent_->parent = this;
        unknown_attributes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-community" || name == "unknown-attributes" || name == "originator-id" || name == "aigp" || name == "path-id" || name == "cluster")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::ExtCommunity()
    :
    objects{YType::str, "objects"}
{

    yang_name = "ext-community"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::~ExtCommunity()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_data() const
{
    if (is_presence_container) return true;
    return objects.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(objects.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (objects.is_set || is_set(objects.yfilter)) leaf_name_data.push_back(objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "objects")
    {
        objects = value;
        objects.value_namespace = name_space;
        objects.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "objects")
    {
        objects.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::UnknownAttributes()
    :
    attribute_type{YType::uint16, "attribute-type"},
    attribute_length{YType::uint16, "attribute-length"},
    attribute_value{YType::str, "attribute-value"}
{

    yang_name = "unknown-attributes"; yang_parent_name = "ext-attributes-list"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::~UnknownAttributes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| attribute_length.is_set
	|| attribute_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(attribute_length.yfilter)
	|| ydk::is_set(attribute_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (attribute_length.is_set || is_set(attribute_length.yfilter)) leaf_name_data.push_back(attribute_length.get_name_leafdata());
    if (attribute_value.is_set || is_set(attribute_value.yfilter)) leaf_name_data.push_back(attribute_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "attribute-length" || name == "attribute-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::LastModifiedDate()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-modified-date"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::~LastModifiedDate()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-modified-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::LastUpdateRecieved()
    :
    time_value{YType::str, "time-value"}
{

    yang_name = "last-update-recieved"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::~LastUpdateRecieved()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_data() const
{
    if (is_presence_container) return true;
    return time_value.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_value.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_value.is_set || is_set(time_value.yfilter)) leaf_name_data.push_back(time_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-value")
    {
        time_value = value;
        time_value.value_namespace = name_space;
        time_value.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-value")
    {
        time_value.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-value")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::NumRoutes()
    :
    num_routes{YType::uint64, "num-routes"}
{

    yang_name = "num-routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::~NumRoutes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_data() const
{
    if (is_presence_container) return true;
    return num_routes.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_routes.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-routes")
    {
        num_routes = value;
        num_routes.value_namespace = name_space;
        num_routes.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-routes")
    {
        num_routes.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::AdjRibInPre()
    :
    routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes>())
    , num_routes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes>())
{
    routes->parent = this;
    num_routes->parent = this;

    yang_name = "adj-rib-in-pre"; yang_parent_name = "open-config-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (num_routes !=  nullptr && num_routes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (num_routes !=  nullptr && num_routes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-rib-in-pre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "num-routes")
    {
        if(num_routes == nullptr)
        {
            num_routes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes>();
        }
        return num_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(num_routes != nullptr)
    {
        _children["num-routes"] = num_routes;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "num-routes")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::~Routes()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::Route()
    :
    route{YType::str, "route"},
    neighbor_address{YType::str, "neighbor-address"},
    path_id{YType::uint32, "path-id"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::enumeration, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    prefix_name(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName>())
    , route_attr_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList>())
    , ext_attributes_list(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList>())
    , last_modified_date(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate>())
    , last_update_recieved(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved>())
{
    prefix_name->parent = this;
    route_attr_list->parent = this;
    ext_attributes_list->parent = this;
    last_modified_date->parent = this;
    last_update_recieved->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| neighbor_address.is_set
	|| path_id.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (prefix_name !=  nullptr && prefix_name->has_data())
	|| (route_attr_list !=  nullptr && route_attr_list->has_data())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_data())
	|| (last_modified_date !=  nullptr && last_modified_date->has_data())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (prefix_name !=  nullptr && prefix_name->has_operation())
	|| (route_attr_list !=  nullptr && route_attr_list->has_operation())
	|| (ext_attributes_list !=  nullptr && ext_attributes_list->has_operation())
	|| (last_modified_date !=  nullptr && last_modified_date->has_operation())
	|| (last_update_recieved !=  nullptr && last_update_recieved->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-name")
    {
        if(prefix_name == nullptr)
        {
            prefix_name = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName>();
        }
        return prefix_name;
    }

    if(child_yang_name == "route-attr-list")
    {
        if(route_attr_list == nullptr)
        {
            route_attr_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList>();
        }
        return route_attr_list;
    }

    if(child_yang_name == "ext-attributes-list")
    {
        if(ext_attributes_list == nullptr)
        {
            ext_attributes_list = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList>();
        }
        return ext_attributes_list;
    }

    if(child_yang_name == "last-modified-date")
    {
        if(last_modified_date == nullptr)
        {
            last_modified_date = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate>();
        }
        return last_modified_date;
    }

    if(child_yang_name == "last-update-recieved")
    {
        if(last_update_recieved == nullptr)
        {
            last_update_recieved = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved>();
        }
        return last_update_recieved;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_name != nullptr)
    {
        _children["prefix-name"] = prefix_name;
    }

    if(route_attr_list != nullptr)
    {
        _children["route-attr-list"] = route_attr_list;
    }

    if(ext_attributes_list != nullptr)
    {
        _children["ext-attributes-list"] = ext_attributes_list;
    }

    if(last_modified_date != nullptr)
    {
        _children["last-modified-date"] = last_modified_date;
    }

    if(last_update_recieved != nullptr)
    {
        _children["last-update-recieved"] = last_update_recieved;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-route")
    {
        valid_route = value;
        valid_route.value_namespace = name_space;
        valid_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason = value;
        invalid_reason.value_namespace = name_space;
        invalid_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path")
    {
        best_path = value;
        best_path.value_namespace = name_space;
        best_path.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "valid-route")
    {
        valid_route.yfilter = yfilter;
    }
    if(value_path == "invalid-reason")
    {
        invalid_reason.yfilter = yfilter;
    }
    if(value_path == "best-path")
    {
        best_path.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-name" || name == "route-attr-list" || name == "ext-attributes-list" || name == "last-modified-date" || name == "last-update-recieved" || name == "route" || name == "neighbor-address" || name == "path-id" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::PrefixName()
    :
    prefix_length{YType::uint8, "prefix-length"}
        ,
    prefix(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix>())
{
    prefix->parent = this;

    yang_name = "prefix-name"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::~PrefixName()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "prefix-name"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::~Prefix()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::RouteAttrList()
    :
    origin_type{YType::enumeration, "origin-type"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"}
        ,
    next_hop(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop>())
    , aggregrator_attributes(std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes>())
    , community(this, {})
{
    next_hop->parent = this;
    aggregrator_attributes->parent = this;

    yang_name = "route-attr-list"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::~RouteAttrList()
{
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    return origin_type.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_data());
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(origin_type.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (aggregrator_attributes !=  nullptr && aggregrator_attributes->has_operation());
}

std::string OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-attr-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_type.is_set || is_set(origin_type.yfilter)) leaf_name_data.push_back(origin_type.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "aggregrator-attributes")
    {
        if(aggregrator_attributes == nullptr)
        {
            aggregrator_attributes = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes>();
        }
        return aggregrator_attributes;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(aggregrator_attributes != nullptr)
    {
        _children["aggregrator-attributes"] = aggregrator_attributes;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-type")
    {
        origin_type = value;
        origin_type.value_namespace = name_space;
        origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr = value;
        atomic_aggr.value_namespace = name_space;
        atomic_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-type")
    {
        origin_type.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "atomic-aggr")
    {
        atomic_aggr.yfilter = yfilter;
    }
}

bool OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "aggregrator-attributes" || name == "community" || name == "origin-type" || name == "as-path" || name == "as4-path" || name == "med" || name == "local-pref" || name == "atomic-aggr")
        return true;
    return false;
}

const Enum::YLeaf BgpOcOriginAttr::igp {0, "igp"};
const Enum::YLeaf BgpOcOriginAttr::egp {1, "egp"};
const Enum::YLeaf BgpOcOriginAttr::incomplete {2, "incomplete"};

const Enum::YLeaf BgpOcInvalidRouteReason::valid_route {1, "valid-route"};
const Enum::YLeaf BgpOcInvalidRouteReason::invalid_clsuter_loop {2, "invalid-clsuter-loop"};
const Enum::YLeaf BgpOcInvalidRouteReason::invalid_as_path_loop {3, "invalid-as-path-loop"};
const Enum::YLeaf BgpOcInvalidRouteReason::invalid_origin_at_or_id {4, "invalid-origin-at-or-id"};
const Enum::YLeaf BgpOcInvalidRouteReason::invalid_as_confed_loop {5, "invalid-as-confed-loop"};

const Enum::YLeaf BgpOcAfi::ipv4 {0, "ipv4"};
const Enum::YLeaf BgpOcAfi::ipv6 {5, "ipv6"};


}
}

