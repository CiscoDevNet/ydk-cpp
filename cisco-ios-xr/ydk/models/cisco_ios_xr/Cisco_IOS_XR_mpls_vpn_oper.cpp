
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_vpn_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_vpn_oper {

L3vpn::L3vpn()
    :
    invalid_vrfs(std::make_shared<L3vpn::InvalidVrfs>())
    , vrfs(std::make_shared<L3vpn::Vrfs>())
{
    invalid_vrfs->parent = this;
    vrfs->parent = this;

    yang_name = "l3vpn"; yang_parent_name = "Cisco-IOS-XR-mpls-vpn-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L3vpn::~L3vpn()
{
}

bool L3vpn::has_data() const
{
    if (is_presence_container) return true;
    return (invalid_vrfs !=  nullptr && invalid_vrfs->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool L3vpn::has_operation() const
{
    return is_set(yfilter)
	|| (invalid_vrfs !=  nullptr && invalid_vrfs->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string L3vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid-vrfs")
    {
        if(invalid_vrfs == nullptr)
        {
            invalid_vrfs = std::make_shared<L3vpn::InvalidVrfs>();
        }
        return invalid_vrfs;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<L3vpn::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalid_vrfs != nullptr)
    {
        _children["invalid-vrfs"] = invalid_vrfs;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void L3vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L3vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> L3vpn::clone_ptr() const
{
    return std::make_shared<L3vpn>();
}

std::string L3vpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L3vpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L3vpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L3vpn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L3vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid-vrfs" || name == "vrfs")
        return true;
    return false;
}

L3vpn::InvalidVrfs::InvalidVrfs()
    :
    invalid_vrf(this, {"vrf_name"})
{

    yang_name = "invalid-vrfs"; yang_parent_name = "l3vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L3vpn::InvalidVrfs::~InvalidVrfs()
{
}

bool L3vpn::InvalidVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<invalid_vrf.len(); index++)
    {
        if(invalid_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool L3vpn::InvalidVrfs::has_operation() const
{
    for (std::size_t index=0; index<invalid_vrf.len(); index++)
    {
        if(invalid_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L3vpn::InvalidVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L3vpn::InvalidVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::InvalidVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::InvalidVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid-vrf")
    {
        auto ent_ = std::make_shared<L3vpn::InvalidVrfs::InvalidVrf>();
        ent_->parent = this;
        invalid_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::InvalidVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : invalid_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::InvalidVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L3vpn::InvalidVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L3vpn::InvalidVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid-vrf")
        return true;
    return false;
}

L3vpn::InvalidVrfs::InvalidVrf::InvalidVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    vrf_description{YType::str, "vrf-description"},
    route_distinguisher{YType::str, "route-distinguisher"},
    is_big_vrf{YType::boolean, "is-big-vrf"}
        ,
    interface(this, {})
    , af(this, {})
{

    yang_name = "invalid-vrf"; yang_parent_name = "invalid-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

L3vpn::InvalidVrfs::InvalidVrf::~InvalidVrf()
{
}

bool L3vpn::InvalidVrfs::InvalidVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| vrf_name_xr.is_set
	|| vrf_description.is_set
	|| route_distinguisher.is_set
	|| is_big_vrf.is_set;
}

bool L3vpn::InvalidVrfs::InvalidVrf::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(vrf_description.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(is_big_vrf.yfilter);
}

std::string L3vpn::InvalidVrfs::InvalidVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/invalid-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string L3vpn::InvalidVrfs::InvalidVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::InvalidVrfs::InvalidVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (vrf_description.is_set || is_set(vrf_description.yfilter)) leaf_name_data.push_back(vrf_description.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (is_big_vrf.is_set || is_set(is_big_vrf.yfilter)) leaf_name_data.push_back(is_big_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::InvalidVrfs::InvalidVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L3vpn::InvalidVrfs::InvalidVrf::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<L3vpn::InvalidVrfs::InvalidVrf::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::InvalidVrfs::InvalidVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::InvalidVrfs::InvalidVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-description")
    {
        vrf_description = value;
        vrf_description.value_namespace = name_space;
        vrf_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf = value;
        is_big_vrf.value_namespace = name_space;
        is_big_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::InvalidVrfs::InvalidVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-description")
    {
        vrf_description.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf.yfilter = yfilter;
    }
}

bool L3vpn::InvalidVrfs::InvalidVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "af" || name == "vrf-name" || name == "vrf-name-xr" || name == "vrf-description" || name == "route-distinguisher" || name == "is-big-vrf")
        return true;
    return false;
}

L3vpn::InvalidVrfs::InvalidVrf::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "invalid-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::InvalidVrfs::InvalidVrf::Interface::~Interface()
{
}

bool L3vpn::InvalidVrfs::InvalidVrf::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool L3vpn::InvalidVrfs::InvalidVrf::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L3vpn::InvalidVrfs::InvalidVrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::InvalidVrfs::InvalidVrf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::InvalidVrfs::InvalidVrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::InvalidVrfs::InvalidVrf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L3vpn::InvalidVrfs::InvalidVrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::InvalidVrfs::InvalidVrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L3vpn::InvalidVrfs::InvalidVrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L3vpn::InvalidVrfs::InvalidVrf::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    import_route_policy{YType::str, "import-route-policy"},
    export_route_policy{YType::str, "export-route-policy"}
        ,
    route_target(this, {})
{

    yang_name = "af"; yang_parent_name = "invalid-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::InvalidVrfs::InvalidVrf::Af::~Af()
{
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| import_route_policy.is_set
	|| export_route_policy.is_set;
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(import_route_policy.yfilter)
	|| ydk::is_set(export_route_policy.yfilter);
}

std::string L3vpn::InvalidVrfs::InvalidVrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::InvalidVrfs::InvalidVrf::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.yfilter)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::InvalidVrfs::InvalidVrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto ent_ = std::make_shared<L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget>();
        ent_->parent = this;
        route_target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::InvalidVrfs::InvalidVrf::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::InvalidVrfs::InvalidVrf::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
        import_route_policy.value_namespace = name_space;
        import_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::InvalidVrfs::InvalidVrf::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "af-name" || name == "saf-name" || name == "import-route-policy" || name == "export-route-policy")
        return true;
    return false;
}

L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::RouteTarget()
    :
    route_target_type{YType::enumeration, "route-target-type"},
    route_target_value{YType::str, "route-target-value"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "route-target"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::~RouteTarget()
{
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return route_target_type.is_set
	|| route_target_value.is_set
	|| af_name.is_set
	|| saf_name.is_set;
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target_type.yfilter)
	|| ydk::is_set(route_target_value.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target_type.is_set || is_set(route_target_type.yfilter)) leaf_name_data.push_back(route_target_type.get_name_leafdata());
    if (route_target_value.is_set || is_set(route_target_value.yfilter)) leaf_name_data.push_back(route_target_value.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target-type")
    {
        route_target_type = value;
        route_target_type.value_namespace = name_space;
        route_target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-value")
    {
        route_target_value = value;
        route_target_value.value_namespace = name_space;
        route_target_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target-type")
    {
        route_target_type.yfilter = yfilter;
    }
    if(value_path == "route-target-value")
    {
        route_target_value.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool L3vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target-type" || name == "route-target-value" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

L3vpn::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "l3vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L3vpn::Vrfs::~Vrfs()
{
}

bool L3vpn::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool L3vpn::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L3vpn::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L3vpn::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<L3vpn::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L3vpn::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L3vpn::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

L3vpn::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    vrf_description{YType::str, "vrf-description"},
    route_distinguisher{YType::str, "route-distinguisher"},
    is_big_vrf{YType::boolean, "is-big-vrf"}
        ,
    interface(this, {})
    , af(this, {})
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

L3vpn::Vrfs::Vrf::~Vrf()
{
}

bool L3vpn::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| vrf_name_xr.is_set
	|| vrf_description.is_set
	|| route_distinguisher.is_set
	|| is_big_vrf.is_set;
}

bool L3vpn::Vrfs::Vrf::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(vrf_description.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(is_big_vrf.yfilter);
}

std::string L3vpn::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string L3vpn::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (vrf_description.is_set || is_set(vrf_description.yfilter)) leaf_name_data.push_back(vrf_description.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (is_big_vrf.is_set || is_set(is_big_vrf.yfilter)) leaf_name_data.push_back(is_big_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L3vpn::Vrfs::Vrf::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<L3vpn::Vrfs::Vrf::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-description")
    {
        vrf_description = value;
        vrf_description.value_namespace = name_space;
        vrf_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf = value;
        is_big_vrf.value_namespace = name_space;
        is_big_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-description")
    {
        vrf_description.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf.yfilter = yfilter;
    }
}

bool L3vpn::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "af" || name == "vrf-name" || name == "vrf-name-xr" || name == "vrf-description" || name == "route-distinguisher" || name == "is-big-vrf")
        return true;
    return false;
}

L3vpn::Vrfs::Vrf::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::Vrfs::Vrf::Interface::~Interface()
{
}

bool L3vpn::Vrfs::Vrf::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool L3vpn::Vrfs::Vrf::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L3vpn::Vrfs::Vrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::Vrfs::Vrf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::Vrfs::Vrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::Vrfs::Vrf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L3vpn::Vrfs::Vrf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::Vrfs::Vrf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L3vpn::Vrfs::Vrf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L3vpn::Vrfs::Vrf::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    import_route_policy{YType::str, "import-route-policy"},
    export_route_policy{YType::str, "export-route-policy"}
        ,
    route_target(this, {})
{

    yang_name = "af"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::Vrfs::Vrf::Af::~Af()
{
}

bool L3vpn::Vrfs::Vrf::Af::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| import_route_policy.is_set
	|| export_route_policy.is_set;
}

bool L3vpn::Vrfs::Vrf::Af::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(import_route_policy.yfilter)
	|| ydk::is_set(export_route_policy.yfilter);
}

std::string L3vpn::Vrfs::Vrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::Vrfs::Vrf::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.yfilter)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::Vrfs::Vrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto ent_ = std::make_shared<L3vpn::Vrfs::Vrf::Af::RouteTarget>();
        ent_->parent = this;
        route_target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::Vrfs::Vrf::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L3vpn::Vrfs::Vrf::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
        import_route_policy.value_namespace = name_space;
        import_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::Vrfs::Vrf::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
}

bool L3vpn::Vrfs::Vrf::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "af-name" || name == "saf-name" || name == "import-route-policy" || name == "export-route-policy")
        return true;
    return false;
}

L3vpn::Vrfs::Vrf::Af::RouteTarget::RouteTarget()
    :
    route_target_type{YType::enumeration, "route-target-type"},
    route_target_value{YType::str, "route-target-value"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "route-target"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

L3vpn::Vrfs::Vrf::Af::RouteTarget::~RouteTarget()
{
}

bool L3vpn::Vrfs::Vrf::Af::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return route_target_type.is_set
	|| route_target_value.is_set
	|| af_name.is_set
	|| saf_name.is_set;
}

bool L3vpn::Vrfs::Vrf::Af::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target_type.yfilter)
	|| ydk::is_set(route_target_value.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string L3vpn::Vrfs::Vrf::Af::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L3vpn::Vrfs::Vrf::Af::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target_type.is_set || is_set(route_target_type.yfilter)) leaf_name_data.push_back(route_target_type.get_name_leafdata());
    if (route_target_value.is_set || is_set(route_target_value.yfilter)) leaf_name_data.push_back(route_target_value.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L3vpn::Vrfs::Vrf::Af::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L3vpn::Vrfs::Vrf::Af::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L3vpn::Vrfs::Vrf::Af::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target-type")
    {
        route_target_type = value;
        route_target_type.value_namespace = name_space;
        route_target_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-value")
    {
        route_target_value = value;
        route_target_value.value_namespace = name_space;
        route_target_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void L3vpn::Vrfs::Vrf::Af::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target-type")
    {
        route_target_type.yfilter = yfilter;
    }
    if(value_path == "route-target-value")
    {
        route_target_value.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool L3vpn::Vrfs::Vrf::Af::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target-type" || name == "route-target-value" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

const Enum::YLeaf MplsVpnRt::import {1, "import"};
const Enum::YLeaf MplsVpnRt::export_ {2, "export"};
const Enum::YLeaf MplsVpnRt::both {3, "both"};

const Enum::YLeaf MplsVpnAfi::ipv4 {1, "ipv4"};
const Enum::YLeaf MplsVpnAfi::ipv6 {2, "ipv6"};

const Enum::YLeaf MplsVpnSafi::unicast {1, "unicast"};
const Enum::YLeaf MplsVpnSafi::multicast {2, "multicast"};
const Enum::YLeaf MplsVpnSafi::flowspec {133, "flowspec"};


}
}

