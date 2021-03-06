
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_rib_bgp.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_rib_bgp {

BgpRib::BgpRib()
    :
    afi_safis(std::make_shared<BgpRib::AfiSafis>())
{
    afi_safis->parent = this;

    yang_name = "bgp-rib"; yang_parent_name = "openconfig-rib-bgp"; is_top_level_class = true; has_list_ancestor = false; 
}

BgpRib::~BgpRib()
{
}

bool BgpRib::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afi_safis != nullptr)
    {
        _children["afi-safis"] = afi_safis;
    }

    return _children;
}

void BgpRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BgpRib::clone_ptr() const
{
    return std::make_shared<BgpRib>();
}

std::string BgpRib::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string BgpRib::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function BgpRib::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BgpRib::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool BgpRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safis")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafis()
    :
    afi_safi(this, {"afi_safi_name"})
{

    yang_name = "afi-safis"; yang_parent_name = "bgp-rib"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpRib::AfiSafis::~AfiSafis()
{
}

bool BgpRib::AfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpRib::AfiSafis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-rib-bgp:bgp-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpRib::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi>();
        ent_->parent = this;
        afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , ipv6_unicast(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast>())
{
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpRib::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool BgpRib::AfiSafis::AfiSafi::has_data() const
{
    if (is_presence_container) return true;
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

std::string BgpRib::AfiSafis::AfiSafi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-rib-bgp:bgp-rib/afi-safis/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpRib::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi";
    ADD_KEY_TOKEN(afi_safi_name, "afi-safi-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::get_children() const
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
    , neighbors(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors>())
{
    loc_rib->parent = this;
    neighbors->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(loc_rib != nullptr)
    {
        _children["loc-rib"] = loc_rib;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
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

    yang_name = "loc-rib"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::~LocRib()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    neighbor(this, {"neighbor_address"})
{

    yang_name = "neighbors"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::~Neighbors()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    adj_rib_in_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre>())
    , adj_rib_in_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost>())
    , adj_rib_out_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre>())
    , adj_rib_out_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost>())
{
    adj_rib_in_pre->parent = this;
    adj_rib_in_post->parent = this;
    adj_rib_out_pre->parent = this;
    adj_rib_out_post->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data())
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation())
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_rib_in_pre != nullptr)
    {
        _children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    if(adj_rib_in_post != nullptr)
    {
        _children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        _children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    if(adj_rib_out_post != nullptr)
    {
        _children["adj-rib-out-post"] = adj_rib_out_post;
    }

    return _children;
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
    if(name == "adj-rib-in-pre" || name == "adj-rib-in-post" || name == "adj-rib-out-pre" || name == "adj-rib-out-post" || name == "neighbor-address")
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

    yang_name = "adj-rib-in-pre"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-in-post"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-out-pre"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-out-post"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , neighbors(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors>())
{
    loc_rib->parent = this;
    neighbors->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(loc_rib != nullptr)
    {
        _children["loc-rib"] = loc_rib;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
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

    yang_name = "loc-rib"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::~LocRib()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "loc-rib"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    neighbor(this, {"neighbor_address"})
{

    yang_name = "neighbors"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::~Neighbors()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    adj_rib_in_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre>())
    , adj_rib_in_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost>())
    , adj_rib_out_pre(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre>())
    , adj_rib_out_post(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost>())
{
    adj_rib_in_pre->parent = this;
    adj_rib_in_post->parent = this;
    adj_rib_out_pre->parent = this;
    adj_rib_out_post->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_data())
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_data())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_data())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (adj_rib_in_pre !=  nullptr && adj_rib_in_pre->has_operation())
	|| (adj_rib_in_post !=  nullptr && adj_rib_in_post->has_operation())
	|| (adj_rib_out_pre !=  nullptr && adj_rib_out_pre->has_operation())
	|| (adj_rib_out_post !=  nullptr && adj_rib_out_post->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-rib-in-pre")
    {
        if(adj_rib_in_pre == nullptr)
        {
            adj_rib_in_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre>();
        }
        return adj_rib_in_pre;
    }

    if(child_yang_name == "adj-rib-in-post")
    {
        if(adj_rib_in_post == nullptr)
        {
            adj_rib_in_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost>();
        }
        return adj_rib_in_post;
    }

    if(child_yang_name == "adj-rib-out-pre")
    {
        if(adj_rib_out_pre == nullptr)
        {
            adj_rib_out_pre = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre>();
        }
        return adj_rib_out_pre;
    }

    if(child_yang_name == "adj-rib-out-post")
    {
        if(adj_rib_out_post == nullptr)
        {
            adj_rib_out_post = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost>();
        }
        return adj_rib_out_post;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_rib_in_pre != nullptr)
    {
        _children["adj-rib-in-pre"] = adj_rib_in_pre;
    }

    if(adj_rib_in_post != nullptr)
    {
        _children["adj-rib-in-post"] = adj_rib_in_post;
    }

    if(adj_rib_out_pre != nullptr)
    {
        _children["adj-rib-out-pre"] = adj_rib_out_pre;
    }

    if(adj_rib_out_post != nullptr)
    {
        _children["adj-rib-out-post"] = adj_rib_out_post;
    }

    return _children;
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
    if(name == "adj-rib-in-pre" || name == "adj-rib-in-post" || name == "adj-rib-out-pre" || name == "adj-rib-out-post" || name == "neighbor-address")
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

    yang_name = "adj-rib-in-pre"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::~AdjRibInPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-in-post"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::~AdjRibInPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-in-post"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-out-pre"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::~AdjRibOutPre()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-pre"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "adj-rib-out-post"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::~AdjRibOutPost()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_routes.is_set || is_set(num_routes.yfilter)) leaf_name_data.push_back(num_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    return _children;
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
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "adj-rib-out-post"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::~Routes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::get_children() const
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
    prefix{YType::str, "prefix"},
    last_modified_date{YType::str, "last-modified-date"},
    last_update_received{YType::str, "last-update-received"},
    valid_route{YType::boolean, "valid-route"},
    invalid_reason{YType::identityref, "invalid-reason"},
    best_path{YType::boolean, "best-path"}
        ,
    attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes>())
    , ext_attributes(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes>())
{
    attributes->parent = this;
    ext_attributes->parent = this;

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::~Route()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| last_modified_date.is_set
	|| last_update_received.is_set
	|| valid_route.is_set
	|| invalid_reason.is_set
	|| best_path.is_set
	|| (attributes !=  nullptr && attributes->has_data())
	|| (ext_attributes !=  nullptr && ext_attributes->has_data());
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_modified_date.yfilter)
	|| ydk::is_set(last_update_received.yfilter)
	|| ydk::is_set(valid_route.yfilter)
	|| ydk::is_set(invalid_reason.yfilter)
	|| ydk::is_set(best_path.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (ext_attributes !=  nullptr && ext_attributes->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_modified_date.is_set || is_set(last_modified_date.yfilter)) leaf_name_data.push_back(last_modified_date.get_name_leafdata());
    if (last_update_received.is_set || is_set(last_update_received.yfilter)) leaf_name_data.push_back(last_update_received.get_name_leafdata());
    if (valid_route.is_set || is_set(valid_route.yfilter)) leaf_name_data.push_back(valid_route.get_name_leafdata());
    if (invalid_reason.is_set || is_set(invalid_reason.yfilter)) leaf_name_data.push_back(invalid_reason.get_name_leafdata());
    if (best_path.is_set || is_set(best_path.yfilter)) leaf_name_data.push_back(best_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(ext_attributes != nullptr)
    {
        _children["ext-attributes"] = ext_attributes;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-modified-date")
    {
        last_modified_date.yfilter = yfilter;
    }
    if(value_path == "last-update-received")
    {
        last_update_received.yfilter = yfilter;
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "ext-attributes" || name == "prefix" || name == "last-modified-date" || name == "last-update-received" || name == "valid-route" || name == "invalid-reason" || name == "best-path")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Attributes()
    :
    origin{YType::enumeration, "origin"},
    as_path{YType::str, "as-path"},
    as4_path{YType::str, "as4-path"},
    next_hop{YType::str, "next-hop"},
    med{YType::uint32, "med"},
    local_pref{YType::uint32, "local-pref"},
    atomic_aggr{YType::boolean, "atomic-aggr"},
    community{YType::str, "community"}
        ,
    aggregator(std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator>())
{
    aggregator->parent = this;

    yang_name = "attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::~Attributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return origin.is_set
	|| as_path.is_set
	|| as4_path.is_set
	|| next_hop.is_set
	|| med.is_set
	|| local_pref.is_set
	|| atomic_aggr.is_set
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
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(med.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(atomic_aggr.yfilter)
	|| ydk::is_set(community.yfilter)
	|| (aggregator !=  nullptr && aggregator->has_operation());
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (atomic_aggr.is_set || is_set(atomic_aggr.yfilter)) leaf_name_data.push_back(atomic_aggr.get_name_leafdata());

    auto community_name_datas = community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_name_datas.begin(), community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregator != nullptr)
    {
        _children["aggregator"] = aggregator;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "community")
    {
        community.append(value);
    }
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
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
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregator" || name == "origin" || name == "as-path" || name == "as4-path" || name == "next-hop" || name == "med" || name == "local-pref" || name == "atomic-aggr" || name == "community")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::Aggregator()
    :
    as{YType::uint32, "as"},
    as4{YType::uint32, "as4"},
    address{YType::str, "address"}
{

    yang_name = "aggregator"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::~Aggregator()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as4.is_set
	|| address.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as4.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as4.is_set || is_set(as4.yfilter)) leaf_name_data.push_back(as4.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as4" || name == "address")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::ExtAttributes()
    :
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    ext_community{YType::str, "ext-community"},
    aigp{YType::uint64, "aigp"},
    path_id{YType::uint32, "path-id"}
        ,
    unknown_attribute(this, {"attr_type"})
{

    yang_name = "ext-attributes"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::~ExtAttributes()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
    return originator_id.is_set
	|| aigp.is_set
	|| path_id.is_set;
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_operation() const
{
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
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
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(ext_community.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(path_id.yfilter);
}

std::string BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto cluster_list_name_datas = cluster_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cluster_list_name_datas.begin(), cluster_list_name_datas.end());
    auto ext_community_name_datas = ext_community.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_community_name_datas.begin(), ext_community_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.append(value);
    }
    if(value_path == "ext-community")
    {
        ext_community.append(value);
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
}

void BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "ext-community")
    {
        ext_community.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-attribute" || name == "originator-id" || name == "cluster-list" || name == "ext-community" || name == "aigp" || name == "path-id")
        return true;
    return false;
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::UnknownAttribute()
    :
    attr_type{YType::uint16, "attr-type"},
    attr_len{YType::uint16, "attr-len"},
    attr_value{YType::str, "attr-value"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "ext-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "unknown-attribute";
    ADD_KEY_TOKEN(attr_type, "attr-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_len.is_set || is_set(attr_len.yfilter)) leaf_name_data.push_back(attr_len.get_name_leafdata());
    if (attr_value.is_set || is_set(attr_value.yfilter)) leaf_name_data.push_back(attr_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

