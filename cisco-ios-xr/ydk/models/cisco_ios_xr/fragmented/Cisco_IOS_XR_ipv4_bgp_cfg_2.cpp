
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAfs()
{

    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-af")
    {
        for(auto const & c : vrf_neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf>();
        c->parent = this;
        vrf_neighbor_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "site-of-origin" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "activate" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "as-xx" || name == "type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>())
	,vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_cluster_id->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    vrf_neighbor_afs->parent = this;

    yang_name = "vrf-neighbor-prefix-length"; yang_parent_name = "vrf-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::~VrfNeighborPrefixLength()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-prefix-length" <<"[prefix-length='" <<prefix_length <<"']" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs == nullptr)
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs>();
        }
        return vrf_neighbor_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    if(vrf_neighbor_afs != nullptr)
    {
        children["vrf-neighbor-afs"] = vrf_neighbor_afs;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-cluster-id" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "vrf-neighbor-afs" || name == "prefix-length" || name == "neighbor-address" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "neighbor-group-add-member" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAfs()
{

    yang_name = "vrf-neighbor-afs"; yang_parent_name = "vrf-neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::~VrfNeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor_af.size(); index++)
    {
        if(vrf_neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor-af")
    {
        for(auto const & c : vrf_neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf>();
        c->parent = this;
        vrf_neighbor_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::VrfNeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "vrf-neighbor-af"; yang_parent_name = "vrf-neighbor-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::~VrfNeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "site-of-origin" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "activate" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "as-xx" || name == "type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "vrf-neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

BmpServerAll::BmpServerAll()
    :
    maximum_buffer_size{YType::uint32, "maximum-buffer-size"}
    	,
    route_monitoring(std::make_shared<BmpServerAll::RouteMonitoring>())
{
    route_monitoring->parent = this;

    yang_name = "bmp-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

BmpServerAll::~BmpServerAll()
{
}

bool BmpServerAll::has_data() const
{
    return maximum_buffer_size.is_set
	|| (route_monitoring !=  nullptr && route_monitoring->has_data());
}

bool BmpServerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_buffer_size.yfilter)
	|| (route_monitoring !=  nullptr && route_monitoring->has_operation());
}

std::string BmpServerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-server-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_buffer_size.is_set || is_set(maximum_buffer_size.yfilter)) leaf_name_data.push_back(maximum_buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-monitoring")
    {
        if(route_monitoring == nullptr)
        {
            route_monitoring = std::make_shared<BmpServerAll::RouteMonitoring>();
        }
        return route_monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_monitoring != nullptr)
    {
        children["route-monitoring"] = route_monitoring;
    }

    return children;
}

void BmpServerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size = value;
        maximum_buffer_size.value_namespace = name_space;
        maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> BmpServerAll::clone_ptr() const
{
    return std::make_shared<BmpServerAll>();
}

std::string BmpServerAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BmpServerAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BmpServerAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BmpServerAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BmpServerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-monitoring" || name == "maximum-buffer-size")
        return true;
    return false;
}

BmpServerAll::RouteMonitoring::RouteMonitoring()
    :
    direction{YType::enumeration, "direction"},
    policy{YType::enumeration, "policy"}
{

    yang_name = "route-monitoring"; yang_parent_name = "bmp-server-all"; is_top_level_class = false; has_list_ancestor = false;
}

BmpServerAll::RouteMonitoring::~RouteMonitoring()
{
}

bool BmpServerAll::RouteMonitoring::has_data() const
{
    return direction.is_set
	|| policy.is_set;
}

bool BmpServerAll::RouteMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string BmpServerAll::RouteMonitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-server-all/" << get_segment_path();
    return path_buffer.str();
}

std::string BmpServerAll::RouteMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServerAll::RouteMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServerAll::RouteMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServerAll::RouteMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BmpServerAll::RouteMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServerAll::RouteMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool BmpServerAll::RouteMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy")
        return true;
    return false;
}

BmpServers::BmpServers()
{

    yang_name = "bmp-servers"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

BmpServers::~BmpServers()
{
}

bool BmpServers::has_data() const
{
    for (std::size_t index=0; index<bmp_server.size(); index++)
    {
        if(bmp_server[index]->has_data())
            return true;
    }
    return false;
}

bool BmpServers::has_operation() const
{
    for (std::size_t index=0; index<bmp_server.size(); index++)
    {
        if(bmp_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BmpServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-server")
    {
        for(auto const & c : bmp_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BmpServers::BmpServer>();
        c->parent = this;
        bmp_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BmpServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BmpServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BmpServers::clone_ptr() const
{
    return std::make_shared<BmpServers>();
}

std::string BmpServers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BmpServers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BmpServers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BmpServers::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BmpServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-server")
        return true;
    return false;
}

BmpServers::BmpServer::BmpServer()
    :
    server_id{YType::uint32, "server-id"},
    bmptcp_keep_alive{YType::uint32, "bmptcp-keep-alive"},
    bmptcp_maximum_segment_size{YType::uint32, "bmptcp-maximum-segment-size"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    flapping_delay{YType::uint32, "flapping-delay"},
    initial_delay{YType::uint32, "initial-delay"},
    maximum_buffer_size{YType::uint32, "maximum-buffer-size"},
    shutdown{YType::empty, "shutdown"},
    status_report_interval{YType::uint32, "status-report-interval"},
    update_source_interface{YType::str, "update-source-interface"},
    vrf{YType::str, "vrf"}
    	,
    host_port(std::make_shared<BmpServers::BmpServer::HostPort>())
	,initial_refresh_delay(std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>())
	,tos(std::make_shared<BmpServers::BmpServer::Tos>())
{
    host_port->parent = this;
    initial_refresh_delay->parent = this;
    tos->parent = this;

    yang_name = "bmp-server"; yang_parent_name = "bmp-servers"; is_top_level_class = false; has_list_ancestor = false;
}

BmpServers::BmpServer::~BmpServer()
{
}

bool BmpServers::BmpServer::has_data() const
{
    return server_id.is_set
	|| bmptcp_keep_alive.is_set
	|| bmptcp_maximum_segment_size.is_set
	|| create.is_set
	|| description.is_set
	|| flapping_delay.is_set
	|| initial_delay.is_set
	|| maximum_buffer_size.is_set
	|| shutdown.is_set
	|| status_report_interval.is_set
	|| update_source_interface.is_set
	|| vrf.is_set
	|| (host_port !=  nullptr && host_port->has_data())
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool BmpServers::BmpServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter)
	|| ydk::is_set(bmptcp_keep_alive.yfilter)
	|| ydk::is_set(bmptcp_maximum_segment_size.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(flapping_delay.yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(maximum_buffer_size.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(status_report_interval.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (host_port !=  nullptr && host_port->has_operation())
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string BmpServers::BmpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers/" << get_segment_path();
    return path_buffer.str();
}

std::string BmpServers::BmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmptcp_keep_alive.is_set || is_set(bmptcp_keep_alive.yfilter)) leaf_name_data.push_back(bmptcp_keep_alive.get_name_leafdata());
    if (bmptcp_maximum_segment_size.is_set || is_set(bmptcp_maximum_segment_size.yfilter)) leaf_name_data.push_back(bmptcp_maximum_segment_size.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (flapping_delay.is_set || is_set(flapping_delay.yfilter)) leaf_name_data.push_back(flapping_delay.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (maximum_buffer_size.is_set || is_set(maximum_buffer_size.yfilter)) leaf_name_data.push_back(maximum_buffer_size.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (status_report_interval.is_set || is_set(status_report_interval.yfilter)) leaf_name_data.push_back(status_report_interval.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServers::BmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-port")
    {
        if(host_port == nullptr)
        {
            host_port = std::make_shared<BmpServers::BmpServer::HostPort>();
        }
        return host_port;
    }

    if(child_yang_name == "initial-refresh-delay")
    {
        if(initial_refresh_delay == nullptr)
        {
            initial_refresh_delay = std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>();
        }
        return initial_refresh_delay;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<BmpServers::BmpServer::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServers::BmpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_port != nullptr)
    {
        children["host-port"] = host_port;
    }

    if(initial_refresh_delay != nullptr)
    {
        children["initial-refresh-delay"] = initial_refresh_delay;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void BmpServers::BmpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmptcp-keep-alive")
    {
        bmptcp_keep_alive = value;
        bmptcp_keep_alive.value_namespace = name_space;
        bmptcp_keep_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmptcp-maximum-segment-size")
    {
        bmptcp_maximum_segment_size = value;
        bmptcp_maximum_segment_size.value_namespace = name_space;
        bmptcp_maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flapping-delay")
    {
        flapping_delay = value;
        flapping_delay.value_namespace = name_space;
        flapping_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size = value;
        maximum_buffer_size.value_namespace = name_space;
        maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-report-interval")
    {
        status_report_interval = value;
        status_report_interval.value_namespace = name_space;
        status_report_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
    if(value_path == "bmptcp-keep-alive")
    {
        bmptcp_keep_alive.yfilter = yfilter;
    }
    if(value_path == "bmptcp-maximum-segment-size")
    {
        bmptcp_maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "flapping-delay")
    {
        flapping_delay.yfilter = yfilter;
    }
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "status-report-interval")
    {
        status_report_interval.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-port" || name == "initial-refresh-delay" || name == "tos" || name == "server-id" || name == "bmptcp-keep-alive" || name == "bmptcp-maximum-segment-size" || name == "create" || name == "description" || name == "flapping-delay" || name == "initial-delay" || name == "maximum-buffer-size" || name == "shutdown" || name == "status-report-interval" || name == "update-source-interface" || name == "vrf")
        return true;
    return false;
}

BmpServers::BmpServer::HostPort::HostPort()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "host-port"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true;
}

BmpServers::BmpServer::HostPort::~HostPort()
{
}

bool BmpServers::BmpServer::HostPort::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool BmpServers::BmpServer::HostPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string BmpServers::BmpServer::HostPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::HostPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServers::BmpServer::HostPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServers::BmpServer::HostPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BmpServers::BmpServer::HostPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::HostPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::HostPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

BmpServers::BmpServer::InitialRefreshDelay::InitialRefreshDelay()
    :
    delay{YType::uint32, "delay"},
    skip{YType::empty, "skip"},
    spread{YType::uint32, "spread"}
{

    yang_name = "initial-refresh-delay"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true;
}

BmpServers::BmpServer::InitialRefreshDelay::~InitialRefreshDelay()
{
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_data() const
{
    return delay.is_set
	|| skip.is_set
	|| spread.is_set;
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(skip.yfilter)
	|| ydk::is_set(spread.yfilter);
}

std::string BmpServers::BmpServer::InitialRefreshDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial-refresh-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::InitialRefreshDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (skip.is_set || is_set(skip.yfilter)) leaf_name_data.push_back(skip.get_name_leafdata());
    if (spread.is_set || is_set(spread.yfilter)) leaf_name_data.push_back(spread.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServers::BmpServer::InitialRefreshDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServers::BmpServer::InitialRefreshDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BmpServers::BmpServer::InitialRefreshDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skip")
    {
        skip = value;
        skip.value_namespace = name_space;
        skip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spread")
    {
        spread = value;
        spread.value_namespace = name_space;
        spread.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::InitialRefreshDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "skip")
    {
        skip.yfilter = yfilter;
    }
    if(value_path == "spread")
    {
        spread.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "skip" || name == "spread")
        return true;
    return false;
}

BmpServers::BmpServer::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true;
}

BmpServers::BmpServer::Tos::~Tos()
{
}

bool BmpServers::BmpServer::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool BmpServers::BmpServer::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BmpServers::BmpServer::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BmpServers::BmpServer::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BmpServers::BmpServer::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BmpServers::BmpServer::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}


}
}

