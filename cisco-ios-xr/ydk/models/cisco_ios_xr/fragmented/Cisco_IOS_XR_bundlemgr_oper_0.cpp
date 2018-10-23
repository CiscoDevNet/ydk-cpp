
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

LacpBundles::LacpBundles()
    :
    bundles(std::make_shared<LacpBundles::Bundles>())
{
    bundles->parent = this;

    yang_name = "lacp-bundles"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

LacpBundles::~LacpBundles()
{
}

bool LacpBundles::has_data() const
{
    if (is_presence_container) return true;
    return (bundles !=  nullptr && bundles->has_data());
}

bool LacpBundles::has_operation() const
{
    return is_set(yfilter)
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<LacpBundles::Bundles>();
        }
        return bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundles != nullptr)
    {
        _children["bundles"] = bundles;
    }

    return _children;
}

void LacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LacpBundles::clone_ptr() const
{
    return std::make_shared<LacpBundles>();
}

std::string LacpBundles::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpBundles::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpBundles::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LacpBundles::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundles")
        return true;
    return false;
}

LacpBundles::Bundles::Bundles()
    :
    bundle(this, {"bundle_interface"})
{

    yang_name = "bundles"; yang_parent_name = "lacp-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

LacpBundles::Bundles::~Bundles()
{
}

bool LacpBundles::Bundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle.len(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.len(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundles::Bundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundles::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        auto ent_ = std::make_shared<LacpBundles::Bundles::Bundle>();
        ent_->parent = this;
        bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LacpBundles::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundles::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    data(std::make_shared<LacpBundles::Bundles::Bundle::Data>())
    , members(std::make_shared<LacpBundles::Bundles::Bundle::Members>())
{
    data->parent = this;
    members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

LacpBundles::Bundles::Bundle::~Bundle()
{
}

bool LacpBundles::Bundles::Bundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (data !=  nullptr && data->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool LacpBundles::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string LacpBundles::Bundles::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundles/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpBundles::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<LacpBundles::Bundles::Bundle::Data>();
        }
        return data;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<LacpBundles::Bundles::Bundle::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "members" || name == "bundle-interface")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::Data()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"}
        ,
    actor_bundle_data(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>())
    , bundle_system_id(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "data"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::~Data()
{
}

bool LacpBundles::Bundles::Bundle::Data::has_data() const
{
    if (is_presence_container) return true;
    return actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actor_bundle_data != nullptr)
    {
        _children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        _children["bundle-system-id"] = bundle_system_id;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::ActorBundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::~ActorBundleData()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::~BundleSystemId()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Members()
    :
    member(this, {"member_interface"})
{

    yang_name = "members"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::~Members()
{
}

bool LacpBundles::Bundles::Bundle::Members::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundles::Bundles::Bundle::Members::has_operation() const
{
    for (std::size_t index=0; index<member.len(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto ent_ = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member>();
        ent_->parent = this;
        member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpBundles::Bundles::Bundle::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpBundles::Bundles::Bundle::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"},
    interface_name{YType::str, "interface-name"},
    port_priority{YType::uint16, "port-priority"},
    port_number{YType::uint16, "port-number"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    iccp_node{YType::uint32, "iccp-node"},
    bandwidth{YType::uint32, "bandwidth"},
    lacp_enabled{YType::str, "lacp-enabled"},
    member_type{YType::enumeration, "member-type"},
    member_name{YType::str, "member-name"}
        ,
    counters(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>())
    , link_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>())
    , member_mux_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>())
    , mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>())
{
    counters->parent = this;
    link_data->parent = this;
    member_mux_data->parent = this;
    mac_address->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::~Member()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| interface_name.is_set
	|| port_priority.is_set
	|| port_number.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| iccp_node.is_set
	|| bandwidth.is_set
	|| lacp_enabled.is_set
	|| member_type.is_set
	|| member_name.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>();
        }
        return member_mux_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        _children["link-data"] = link_data;
    }

    if(member_mux_data != nullptr)
    {
        _children["member-mux-data"] = member_mux_data;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "member-mux-data" || name == "mac-address" || name == "member-interface" || name == "interface-name" || name == "port-priority" || name == "port-number" || name == "underlying-link-id" || name == "link-order-number" || name == "iccp-node" || name == "bandwidth" || name == "lacp-enabled" || name == "member-type" || name == "member-name")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::Counters()
    :
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    defaulted{YType::uint32, "defaulted"},
    expired{YType::uint32, "expired"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"}
{

    yang_name = "counters"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::~Counters()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| illegal_packets_received.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| defaulted.is_set
	|| expired.is_set
	|| last_cleared_sec.is_set
	|| last_cleared_nsec.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "illegal-packets-received" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "defaulted" || name == "expired" || name == "last-cleared-sec" || name == "last-cleared-nsec")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::LinkData()
    :
    interface_handle{YType::str, "interface-handle"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    partner_port_state{YType::uint8, "partner-port-state"}
{

    yang_name = "link-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::~LinkData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| actor_system_priority.is_set
	|| actor_system_mac_address.is_set
	|| actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| actor_port_state.is_set
	|| partner_port_state.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(partner_port_state.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "actor-system-priority" || name == "actor-system-mac-address" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "actor-port-id" || name == "actor-port-priority" || name == "partner-port-id" || name == "partner-port-priority" || name == "actor-port-state" || name == "partner-port-state")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxData()
    :
    mux_state{YType::enumeration, "mux-state"},
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
        ,
    member_mux_state_reason_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::~MemberMuxData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_data() const
{
    if (is_presence_container) return true;
    return mux_state.is_set
	|| error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_mux_state_reason_data != nullptr)
    {
        _children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "mux-state" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state-reason")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    if (is_presence_container) return true;
    return reason_type.is_set
	|| severity.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::BundleInformation()
    :
    bfd_counters(std::make_shared<BundleInformation::BfdCounters>())
    , scheduled_actions(std::make_shared<BundleInformation::ScheduledActions>())
    , bundle(std::make_shared<BundleInformation::Bundle>())
    , events_rg(std::make_shared<BundleInformation::EventsRg>())
    , lacp(std::make_shared<BundleInformation::Lacp>())
    , mlacp_bundle_counters(std::make_shared<BundleInformation::MlacpBundleCounters>())
    , protect(std::make_shared<BundleInformation::Protect>())
    , mlacp_brief(std::make_shared<BundleInformation::MlacpBrief>())
    , mlacp(std::make_shared<BundleInformation::Mlacp>())
    , mac_allocation(std::make_shared<BundleInformation::MacAllocation>())
    , events(std::make_shared<BundleInformation::Events>())
    , events_bdl(std::make_shared<BundleInformation::EventsBdl>())
    , bundle_briefs(std::make_shared<BundleInformation::BundleBriefs>())
    , events_mbr(std::make_shared<BundleInformation::EventsMbr>())
    , mlacp_iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters>())
    , system_id(std::make_shared<BundleInformation::SystemId>())
    , mlacp_member_counters(std::make_shared<BundleInformation::MlacpMemberCounters>())
{
    bfd_counters->parent = this;
    scheduled_actions->parent = this;
    bundle->parent = this;
    events_rg->parent = this;
    lacp->parent = this;
    mlacp_bundle_counters->parent = this;
    protect->parent = this;
    mlacp_brief->parent = this;
    mlacp->parent = this;
    mac_allocation->parent = this;
    events->parent = this;
    events_bdl->parent = this;
    bundle_briefs->parent = this;
    events_mbr->parent = this;
    mlacp_iccp_group_counters->parent = this;
    system_id->parent = this;
    mlacp_member_counters->parent = this;

    yang_name = "bundle-information"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

BundleInformation::~BundleInformation()
{
}

bool BundleInformation::has_data() const
{
    if (is_presence_container) return true;
    return (bfd_counters !=  nullptr && bfd_counters->has_data())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (events_rg !=  nullptr && events_rg->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mac_allocation !=  nullptr && mac_allocation->has_data())
	|| (events !=  nullptr && events->has_data())
	|| (events_bdl !=  nullptr && events_bdl->has_data())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_data())
	|| (events_mbr !=  nullptr && events_mbr->has_data())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_data())
	|| (system_id !=  nullptr && system_id->has_data())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_data());
}

bool BundleInformation::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_counters !=  nullptr && bfd_counters->has_operation())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (events_rg !=  nullptr && events_rg->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mac_allocation !=  nullptr && mac_allocation->has_operation())
	|| (events !=  nullptr && events->has_operation())
	|| (events_bdl !=  nullptr && events_bdl->has_operation())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_operation())
	|| (events_mbr !=  nullptr && events_mbr->has_operation())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_operation())
	|| (system_id !=  nullptr && system_id->has_operation())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_operation());
}

std::string BundleInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters")
    {
        if(bfd_counters == nullptr)
        {
            bfd_counters = std::make_shared<BundleInformation::BfdCounters>();
        }
        return bfd_counters;
    }

    if(child_yang_name == "scheduled-actions")
    {
        if(scheduled_actions == nullptr)
        {
            scheduled_actions = std::make_shared<BundleInformation::ScheduledActions>();
        }
        return scheduled_actions;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<BundleInformation::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "events-rg")
    {
        if(events_rg == nullptr)
        {
            events_rg = std::make_shared<BundleInformation::EventsRg>();
        }
        return events_rg;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<BundleInformation::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "mlacp-bundle-counters")
    {
        if(mlacp_bundle_counters == nullptr)
        {
            mlacp_bundle_counters = std::make_shared<BundleInformation::MlacpBundleCounters>();
        }
        return mlacp_bundle_counters;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<BundleInformation::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "mlacp-brief")
    {
        if(mlacp_brief == nullptr)
        {
            mlacp_brief = std::make_shared<BundleInformation::MlacpBrief>();
        }
        return mlacp_brief;
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<BundleInformation::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "mac-allocation")
    {
        if(mac_allocation == nullptr)
        {
            mac_allocation = std::make_shared<BundleInformation::MacAllocation>();
        }
        return mac_allocation;
    }

    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<BundleInformation::Events>();
        }
        return events;
    }

    if(child_yang_name == "events-bdl")
    {
        if(events_bdl == nullptr)
        {
            events_bdl = std::make_shared<BundleInformation::EventsBdl>();
        }
        return events_bdl;
    }

    if(child_yang_name == "bundle-briefs")
    {
        if(bundle_briefs == nullptr)
        {
            bundle_briefs = std::make_shared<BundleInformation::BundleBriefs>();
        }
        return bundle_briefs;
    }

    if(child_yang_name == "events-mbr")
    {
        if(events_mbr == nullptr)
        {
            events_mbr = std::make_shared<BundleInformation::EventsMbr>();
        }
        return events_mbr;
    }

    if(child_yang_name == "mlacp-iccp-group-counters")
    {
        if(mlacp_iccp_group_counters == nullptr)
        {
            mlacp_iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters>();
        }
        return mlacp_iccp_group_counters;
    }

    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::SystemId>();
        }
        return system_id;
    }

    if(child_yang_name == "mlacp-member-counters")
    {
        if(mlacp_member_counters == nullptr)
        {
            mlacp_member_counters = std::make_shared<BundleInformation::MlacpMemberCounters>();
        }
        return mlacp_member_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd_counters != nullptr)
    {
        _children["bfd-counters"] = bfd_counters;
    }

    if(scheduled_actions != nullptr)
    {
        _children["scheduled-actions"] = scheduled_actions;
    }

    if(bundle != nullptr)
    {
        _children["bundle"] = bundle;
    }

    if(events_rg != nullptr)
    {
        _children["events-rg"] = events_rg;
    }

    if(lacp != nullptr)
    {
        _children["lacp"] = lacp;
    }

    if(mlacp_bundle_counters != nullptr)
    {
        _children["mlacp-bundle-counters"] = mlacp_bundle_counters;
    }

    if(protect != nullptr)
    {
        _children["protect"] = protect;
    }

    if(mlacp_brief != nullptr)
    {
        _children["mlacp-brief"] = mlacp_brief;
    }

    if(mlacp != nullptr)
    {
        _children["mlacp"] = mlacp;
    }

    if(mac_allocation != nullptr)
    {
        _children["mac-allocation"] = mac_allocation;
    }

    if(events != nullptr)
    {
        _children["events"] = events;
    }

    if(events_bdl != nullptr)
    {
        _children["events-bdl"] = events_bdl;
    }

    if(bundle_briefs != nullptr)
    {
        _children["bundle-briefs"] = bundle_briefs;
    }

    if(events_mbr != nullptr)
    {
        _children["events-mbr"] = events_mbr;
    }

    if(mlacp_iccp_group_counters != nullptr)
    {
        _children["mlacp-iccp-group-counters"] = mlacp_iccp_group_counters;
    }

    if(system_id != nullptr)
    {
        _children["system-id"] = system_id;
    }

    if(mlacp_member_counters != nullptr)
    {
        _children["mlacp-member-counters"] = mlacp_member_counters;
    }

    return _children;
}

void BundleInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BundleInformation::clone_ptr() const
{
    return std::make_shared<BundleInformation>();
}

std::string BundleInformation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BundleInformation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BundleInformation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BundleInformation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BundleInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters" || name == "scheduled-actions" || name == "bundle" || name == "events-rg" || name == "lacp" || name == "mlacp-bundle-counters" || name == "protect" || name == "mlacp-brief" || name == "mlacp" || name == "mac-allocation" || name == "events" || name == "events-bdl" || name == "bundle-briefs" || name == "events-mbr" || name == "mlacp-iccp-group-counters" || name == "system-id" || name == "mlacp-member-counters")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCounters()
    :
    bfd_counters_bundles(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>())
    , bfd_counters_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>())
{
    bfd_counters_bundles->parent = this;
    bfd_counters_members->parent = this;

    yang_name = "bfd-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BfdCounters::~BfdCounters()
{
}

bool BundleInformation::BfdCounters::has_data() const
{
    if (is_presence_container) return true;
    return (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_data())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_data());
}

bool BundleInformation::BfdCounters::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_operation())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_operation());
}

std::string BundleInformation::BfdCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundles")
    {
        if(bfd_counters_bundles == nullptr)
        {
            bfd_counters_bundles = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>();
        }
        return bfd_counters_bundles;
    }

    if(child_yang_name == "bfd-counters-members")
    {
        if(bfd_counters_members == nullptr)
        {
            bfd_counters_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>();
        }
        return bfd_counters_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd_counters_bundles != nullptr)
    {
        _children["bfd-counters-bundles"] = bfd_counters_bundles;
    }

    if(bfd_counters_members != nullptr)
    {
        _children["bfd-counters-members"] = bfd_counters_members;
    }

    return _children;
}

void BundleInformation::BfdCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundles" || name == "bfd-counters-members")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundles()
    :
    bfd_counters_bundle(this, {"bundle_interface"})
{

    yang_name = "bfd-counters-bundles"; yang_parent_name = "bfd-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BfdCounters::BfdCountersBundles::~BfdCountersBundles()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_counters_bundle.len(); index++)
    {
        if(bfd_counters_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle.len(); index++)
    {
        if(bfd_counters_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle>();
        ent_->parent = this;
        bfd_counters_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfd_counters_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    bfd_counters_bundle_descendant(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>())
    , bfd_counters_bundle_children_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>())
    , bfd_counters_bundle_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>())
{
    bfd_counters_bundle_descendant->parent = this;
    bfd_counters_bundle_children_members->parent = this;
    bfd_counters_bundle_item->parent = this;

    yang_name = "bfd-counters-bundle"; yang_parent_name = "bfd-counters-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::~BfdCountersBundle()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_data())
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_data())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_operation())
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_operation())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-descendant")
    {
        if(bfd_counters_bundle_descendant == nullptr)
        {
            bfd_counters_bundle_descendant = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>();
        }
        return bfd_counters_bundle_descendant;
    }

    if(child_yang_name == "bfd-counters-bundle-children-members")
    {
        if(bfd_counters_bundle_children_members == nullptr)
        {
            bfd_counters_bundle_children_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>();
        }
        return bfd_counters_bundle_children_members;
    }

    if(child_yang_name == "bfd-counters-bundle-item")
    {
        if(bfd_counters_bundle_item == nullptr)
        {
            bfd_counters_bundle_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>();
        }
        return bfd_counters_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd_counters_bundle_descendant != nullptr)
    {
        _children["bfd-counters-bundle-descendant"] = bfd_counters_bundle_descendant;
    }

    if(bfd_counters_bundle_children_members != nullptr)
    {
        _children["bfd-counters-bundle-children-members"] = bfd_counters_bundle_children_members;
    }

    if(bfd_counters_bundle_item != nullptr)
    {
        _children["bfd-counters-bundle-item"] = bfd_counters_bundle_item;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle-descendant" || name == "bfd-counters-bundle-children-members" || name == "bfd-counters-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCountersBundleDescendant()
    :
    bundle_name(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>())
    , bfd_counter(this, {})
{
    bundle_name->parent = this;

    yang_name = "bfd-counters-bundle-descendant"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::~BfdCountersBundleDescendant()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_counter.len(); index++)
    {
        if(bfd_counter[index]->has_data())
            return true;
    }
    return (bundle_name !=  nullptr && bundle_name->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<bfd_counter.len(); index++)
    {
        if(bfd_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_name !=  nullptr && bundle_name->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-name")
    {
        if(bundle_name == nullptr)
        {
            bundle_name = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>();
        }
        return bundle_name;
    }

    if(child_yang_name == "bfd-counter")
    {
        auto ent_ = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter>();
        ent_->parent = this;
        bfd_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_name != nullptr)
    {
        _children["bundle-name"] = bundle_name;
    }

    count_ = 0;
    for (auto ent_ : bfd_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "bfd-counter")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::BundleName()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "bundle-name"; yang_parent_name = "bfd-counters-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::~BundleName()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_data() const
{
    if (is_presence_container) return true;
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-name")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::BfdCounter()
    :
    member_name{YType::str, "member-name"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    starting{YType::uint32, "starting"},
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    start_timeouts{YType::uint32, "start-timeouts"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
{

    yang_name = "bfd-counter"; yang_parent_name = "bfd-counters-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::~BfdCounter()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_data() const
{
    if (is_presence_container) return true;
    return member_name.is_set
	|| last_time_cleared.is_set
	|| starting.is_set
	|| up.is_set
	|| down.is_set
	|| neighbor_unconfigured.is_set
	|| start_timeouts.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| time_since_cleared.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "last-time-cleared" || name == "starting" || name == "up" || name == "down" || name == "neighbor-unconfigured" || name == "start-timeouts" || name == "neighbor-unconfigured-timeouts" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMembers()
    :
    bfd_counters_bundle_children_member(this, {"member_interface"})
{

    yang_name = "bfd-counters-bundle-children-members"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::~BfdCountersBundleChildrenMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.len(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.len(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-children-member")
    {
        auto ent_ = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember>();
        ent_->parent = this;
        bfd_counters_bundle_children_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfd_counters_bundle_children_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle-children-member")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::BfdCountersBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    member_name{YType::str, "member-name"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    starting{YType::uint32, "starting"},
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    start_timeouts{YType::uint32, "start-timeouts"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
{

    yang_name = "bfd-counters-bundle-children-member"; yang_parent_name = "bfd-counters-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::~BfdCountersBundleChildrenMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| member_name.is_set
	|| last_time_cleared.is_set
	|| starting.is_set
	|| up.is_set
	|| down.is_set
	|| neighbor_unconfigured.is_set
	|| start_timeouts.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| time_since_cleared.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface" || name == "member-name" || name == "last-time-cleared" || name == "starting" || name == "up" || name == "down" || name == "neighbor-unconfigured" || name == "start-timeouts" || name == "neighbor-unconfigured-timeouts" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::BfdCountersBundleItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "bfd-counters-bundle-item"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::~BfdCountersBundleItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_data() const
{
    if (is_presence_container) return true;
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-name")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMembers()
    :
    bfd_counters_member(this, {"member_interface"})
{

    yang_name = "bfd-counters-members"; yang_parent_name = "bfd-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BfdCounters::BfdCountersMembers::~BfdCountersMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_counters_member.len(); index++)
    {
        if(bfd_counters_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_member.len(); index++)
    {
        if(bfd_counters_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member")
    {
        auto ent_ = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember>();
        ent_->parent = this;
        bfd_counters_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfd_counters_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-member")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    bfd_counters_member_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>())
{
    bfd_counters_member_item->parent = this;

    yang_name = "bfd-counters-member"; yang_parent_name = "bfd-counters-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::~BfdCountersMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member-item")
    {
        if(bfd_counters_member_item == nullptr)
        {
            bfd_counters_member_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>();
        }
        return bfd_counters_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd_counters_member_item != nullptr)
    {
        _children["bfd-counters-member-item"] = bfd_counters_member_item;
    }

    return _children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::BfdCountersMemberItem()
    :
    member_name{YType::str, "member-name"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    starting{YType::uint32, "starting"},
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    start_timeouts{YType::uint32, "start-timeouts"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
{

    yang_name = "bfd-counters-member-item"; yang_parent_name = "bfd-counters-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::~BfdCountersMemberItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_data() const
{
    if (is_presence_container) return true;
    return member_name.is_set
	|| last_time_cleared.is_set
	|| starting.is_set
	|| up.is_set
	|| down.is_set
	|| neighbor_unconfigured.is_set
	|| start_timeouts.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| time_since_cleared.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "last-time-cleared" || name == "starting" || name == "up" || name == "down" || name == "neighbor-unconfigured" || name == "start-timeouts" || name == "neighbor-unconfigured-timeouts" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActions()
    :
    scheduled_actions_bundles(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>())
{
    scheduled_actions_bundles->parent = this;

    yang_name = "scheduled-actions"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::ScheduledActions::~ScheduledActions()
{
}

bool BundleInformation::ScheduledActions::has_data() const
{
    if (is_presence_container) return true;
    return (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_data());
}

bool BundleInformation::ScheduledActions::has_operation() const
{
    return is_set(yfilter)
	|| (scheduled_actions_bundles !=  nullptr && scheduled_actions_bundles->has_operation());
}

std::string BundleInformation::ScheduledActions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::ScheduledActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundles")
    {
        if(scheduled_actions_bundles == nullptr)
        {
            scheduled_actions_bundles = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles>();
        }
        return scheduled_actions_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::ScheduledActions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scheduled_actions_bundles != nullptr)
    {
        _children["scheduled-actions-bundles"] = scheduled_actions_bundles;
    }

    return _children;
}

void BundleInformation::ScheduledActions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::ScheduledActions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::ScheduledActions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundles")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundles()
    :
    scheduled_actions_bundle(this, {"bundle_interface"})
{

    yang_name = "scheduled-actions-bundles"; yang_parent_name = "scheduled-actions"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::~ScheduledActionsBundles()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scheduled_actions_bundle.len(); index++)
    {
        if(scheduled_actions_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_operation() const
{
    for (std::size_t index=0; index<scheduled_actions_bundle.len(); index++)
    {
        if(scheduled_actions_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle>();
        ent_->parent = this;
        scheduled_actions_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : scheduled_actions_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundle")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    scheduled_actions_bundle_item(std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>())
{
    scheduled_actions_bundle_item->parent = this;

    yang_name = "scheduled-actions-bundle"; yang_parent_name = "scheduled-actions-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::~ScheduledActionsBundle()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_data());
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (scheduled_actions_bundle_item !=  nullptr && scheduled_actions_bundle_item->has_operation());
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/scheduled-actions/scheduled-actions-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-actions-bundle-item")
    {
        if(scheduled_actions_bundle_item == nullptr)
        {
            scheduled_actions_bundle_item = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem>();
        }
        return scheduled_actions_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scheduled_actions_bundle_item != nullptr)
    {
        _children["scheduled-actions-bundle-item"] = scheduled_actions_bundle_item;
    }

    return _children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-actions-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledActionsBundleItem()
    :
    bundle_name{YType::str, "bundle-name"}
        ,
    scheduled_action(this, {})
{

    yang_name = "scheduled-actions-bundle-item"; yang_parent_name = "scheduled-actions-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::~ScheduledActionsBundleItem()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scheduled_action.len(); index++)
    {
        if(scheduled_action[index]->has_data())
            return true;
    }
    return bundle_name.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<scheduled_action.len(); index++)
    {
        if(scheduled_action[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-actions-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scheduled-action")
    {
        auto ent_ = std::make_shared<BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction>();
        ent_->parent = this;
        scheduled_action.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : scheduled_action.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scheduled-action" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::ScheduledAction()
    :
    mlacp_action{YType::enumeration, "mlacp-action"},
    time_remaining{YType::uint64, "time-remaining"},
    action_state{YType::enumeration, "action-state"}
{

    yang_name = "scheduled-action"; yang_parent_name = "scheduled-actions-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::~ScheduledAction()
{
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_data() const
{
    if (is_presence_container) return true;
    return mlacp_action.is_set
	|| time_remaining.is_set
	|| action_state.is_set;
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlacp_action.yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| ydk::is_set(action_state.yfilter);
}

std::string BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduled-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlacp_action.is_set || is_set(mlacp_action.yfilter)) leaf_name_data.push_back(mlacp_action.get_name_leafdata());
    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (action_state.is_set || is_set(action_state.yfilter)) leaf_name_data.push_back(action_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlacp-action")
    {
        mlacp_action = value;
        mlacp_action.value_namespace = name_space;
        mlacp_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-state")
    {
        action_state = value;
        action_state.value_namespace = name_space;
        action_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlacp-action")
    {
        mlacp_action.yfilter = yfilter;
    }
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
    if(value_path == "action-state")
    {
        action_state.yfilter = yfilter;
    }
}

bool BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-action" || name == "time-remaining" || name == "action-state")
        return true;
    return false;
}

BundleInformation::Bundle::Bundle()
    :
    bundle_bundles(std::make_shared<BundleInformation::Bundle::BundleBundles>())
    , bundle_members(std::make_shared<BundleInformation::Bundle::BundleMembers>())
{
    bundle_bundles->parent = this;
    bundle_members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Bundle::~Bundle()
{
}

bool BundleInformation::Bundle::has_data() const
{
    if (is_presence_container) return true;
    return (bundle_bundles !=  nullptr && bundle_bundles->has_data())
	|| (bundle_members !=  nullptr && bundle_members->has_data());
}

bool BundleInformation::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| (bundle_bundles !=  nullptr && bundle_bundles->has_operation())
	|| (bundle_members !=  nullptr && bundle_members->has_operation());
}

std::string BundleInformation::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundles")
    {
        if(bundle_bundles == nullptr)
        {
            bundle_bundles = std::make_shared<BundleInformation::Bundle::BundleBundles>();
        }
        return bundle_bundles;
    }

    if(child_yang_name == "bundle-members")
    {
        if(bundle_members == nullptr)
        {
            bundle_members = std::make_shared<BundleInformation::Bundle::BundleMembers>();
        }
        return bundle_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_bundles != nullptr)
    {
        _children["bundle-bundles"] = bundle_bundles;
    }

    if(bundle_members != nullptr)
    {
        _children["bundle-members"] = bundle_members;
    }

    return _children;
}

void BundleInformation::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundles" || name == "bundle-members")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundles()
    :
    bundle_bundle(this, {"bundle_interface"})
{

    yang_name = "bundle-bundles"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Bundle::BundleBundles::~BundleBundles()
{
}

bool BundleInformation::Bundle::BundleBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_bundle.len(); index++)
    {
        if(bundle_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle.len(); index++)
    {
        if(bundle_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle>();
        ent_->parent = this;
        bundle_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    bundle_bundle_descendant(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>())
    , bundle_bundle_children_members(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>())
    , bundle_bundle_item(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>())
{
    bundle_bundle_descendant->parent = this;
    bundle_bundle_children_members->parent = this;
    bundle_bundle_item->parent = this;

    yang_name = "bundle-bundle"; yang_parent_name = "bundle-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::~BundleBundle()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_data())
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_data())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_operation())
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_operation())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-descendant")
    {
        if(bundle_bundle_descendant == nullptr)
        {
            bundle_bundle_descendant = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>();
        }
        return bundle_bundle_descendant;
    }

    if(child_yang_name == "bundle-bundle-children-members")
    {
        if(bundle_bundle_children_members == nullptr)
        {
            bundle_bundle_children_members = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>();
        }
        return bundle_bundle_children_members;
    }

    if(child_yang_name == "bundle-bundle-item")
    {
        if(bundle_bundle_item == nullptr)
        {
            bundle_bundle_item = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>();
        }
        return bundle_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_bundle_descendant != nullptr)
    {
        _children["bundle-bundle-descendant"] = bundle_bundle_descendant;
    }

    if(bundle_bundle_children_members != nullptr)
    {
        _children["bundle-bundle-children-members"] = bundle_bundle_children_members;
    }

    if(bundle_bundle_item != nullptr)
    {
        _children["bundle-bundle-item"] = bundle_bundle_item;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle-descendant" || name == "bundle-bundle-children-members" || name == "bundle-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>())
    , member_data(this, {})
{
    bundle_data->parent = this;

    yang_name = "bundle-bundle-descendant"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::~BundleBundleDescendant()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData>();
        ent_->parent = this;
        member_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_data != nullptr)
    {
        _children["bundle-data"] = bundle_data;
    }

    count_ = 0;
    for (auto ent_ : member_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberData()
    :
    interface_name{YType::str, "interface-name"},
    port_priority{YType::uint16, "port-priority"},
    port_number{YType::uint16, "port-number"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    iccp_node{YType::uint32, "iccp-node"},
    bandwidth{YType::uint32, "bandwidth"},
    lacp_enabled{YType::str, "lacp-enabled"},
    member_type{YType::enumeration, "member-type"},
    member_name{YType::str, "member-name"}
        ,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>())
    , link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>())
    , member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>())
    , mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>())
{
    counters->parent = this;
    link_data->parent = this;
    member_mux_data->parent = this;
    mac_address->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| port_priority.is_set
	|| port_number.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| iccp_node.is_set
	|| bandwidth.is_set
	|| lacp_enabled.is_set
	|| member_type.is_set
	|| member_name.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        _children["link-data"] = link_data;
    }

    if(member_mux_data != nullptr)
    {
        _children["member-mux-data"] = member_mux_data;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "member-mux-data" || name == "mac-address" || name == "interface-name" || name == "port-priority" || name == "port-number" || name == "underlying-link-id" || name == "link-order-number" || name == "iccp-node" || name == "bandwidth" || name == "lacp-enabled" || name == "member-type" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::Counters()
    :
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    defaulted{YType::uint32, "defaulted"},
    expired{YType::uint32, "expired"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"}
{

    yang_name = "counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| illegal_packets_received.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| defaulted.is_set
	|| expired.is_set
	|| last_cleared_sec.is_set
	|| last_cleared_nsec.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "illegal-packets-received" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "defaulted" || name == "expired" || name == "last-cleared-sec" || name == "last-cleared-nsec")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::LinkData()
    :
    interface_handle{YType::str, "interface-handle"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    partner_port_state{YType::uint8, "partner-port-state"}
{

    yang_name = "link-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| actor_system_priority.is_set
	|| actor_system_mac_address.is_set
	|| actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| actor_port_state.is_set
	|| partner_port_state.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(partner_port_state.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "actor-system-priority" || name == "actor-system-mac-address" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "actor-port-id" || name == "actor-port-priority" || name == "partner-port-id" || name == "partner-port-priority" || name == "actor-port-state" || name == "partner-port-state")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxData()
    :
    mux_state{YType::enumeration, "mux-state"},
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
        ,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_data() const
{
    if (is_presence_container) return true;
    return mux_state.is_set
	|| error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_mux_state_reason_data != nullptr)
    {
        _children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "mux-state" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    if (is_presence_container) return true;
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMembers()
    :
    bundle_bundle_children_member(this, {"member_interface"})
{

    yang_name = "bundle-bundle-children-members"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::~BundleBundleChildrenMembers()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_bundle_children_member.len(); index++)
    {
        if(bundle_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle_children_member.len(); index++)
    {
        if(bundle_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-children-member")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember>();
        ent_->parent = this;
        bundle_bundle_children_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_bundle_children_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::BundleBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    interface_name{YType::str, "interface-name"},
    port_priority{YType::uint16, "port-priority"},
    port_number{YType::uint16, "port-number"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    iccp_node{YType::uint32, "iccp-node"},
    bandwidth{YType::uint32, "bandwidth"},
    lacp_enabled{YType::str, "lacp-enabled"},
    member_type{YType::enumeration, "member-type"},
    member_name{YType::str, "member-name"}
        ,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>())
    , link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>())
    , member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>())
    , mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>())
{
    counters->parent = this;
    link_data->parent = this;
    member_mux_data->parent = this;
    mac_address->parent = this;

    yang_name = "bundle-bundle-children-member"; yang_parent_name = "bundle-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::~BundleBundleChildrenMember()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| interface_name.is_set
	|| port_priority.is_set
	|| port_number.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| iccp_node.is_set
	|| bandwidth.is_set
	|| lacp_enabled.is_set
	|| member_type.is_set
	|| member_name.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>();
        }
        return member_mux_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        _children["link-data"] = link_data;
    }

    if(member_mux_data != nullptr)
    {
        _children["member-mux-data"] = member_mux_data;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "member-mux-data" || name == "mac-address" || name == "member-interface" || name == "interface-name" || name == "port-priority" || name == "port-number" || name == "underlying-link-id" || name == "link-order-number" || name == "iccp-node" || name == "bandwidth" || name == "lacp-enabled" || name == "member-type" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::Counters()
    :
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    defaulted{YType::uint32, "defaulted"},
    expired{YType::uint32, "expired"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"}
{

    yang_name = "counters"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| illegal_packets_received.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| defaulted.is_set
	|| expired.is_set
	|| last_cleared_sec.is_set
	|| last_cleared_nsec.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "illegal-packets-received" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "defaulted" || name == "expired" || name == "last-cleared-sec" || name == "last-cleared-nsec")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::LinkData()
    :
    interface_handle{YType::str, "interface-handle"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    partner_port_state{YType::uint8, "partner-port-state"}
{

    yang_name = "link-data"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| actor_system_priority.is_set
	|| actor_system_mac_address.is_set
	|| actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| actor_port_state.is_set
	|| partner_port_state.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(partner_port_state.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "actor-system-priority" || name == "actor-system-mac-address" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "actor-port-id" || name == "actor-port-priority" || name == "partner-port-id" || name == "partner-port-priority" || name == "actor-port-state" || name == "partner-port-state")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxData()
    :
    mux_state{YType::enumeration, "mux-state"},
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
        ,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_data() const
{
    if (is_presence_container) return true;
    return mux_state.is_set
	|| error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_mux_state_reason_data != nullptr)
    {
        _children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "mux-state" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    if (is_presence_container) return true;
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BundleBundleItem()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "bundle-bundle-item"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::~BundleBundleItem()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMembers()
    :
    bundle_member(this, {"member_interface"})
{

    yang_name = "bundle-members"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Bundle::BundleMembers::~BundleMembers()
{
}

bool BundleInformation::Bundle::BundleMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_member.len(); index++)
    {
        if(bundle_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_member.len(); index++)
    {
        if(bundle_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember>();
        ent_->parent = this;
        bundle_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-member")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    bundle_member_ancestor(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>())
    , bundle_member_item(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>())
{
    bundle_member_ancestor->parent = this;
    bundle_member_item->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "bundle-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::~BundleMember()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_data())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_operation())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member-ancestor")
    {
        if(bundle_member_ancestor == nullptr)
        {
            bundle_member_ancestor = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>();
        }
        return bundle_member_ancestor;
    }

    if(child_yang_name == "bundle-member-item")
    {
        if(bundle_member_item == nullptr)
        {
            bundle_member_item = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>();
        }
        return bundle_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_member_ancestor != nullptr)
    {
        _children["bundle-member-ancestor"] = bundle_member_ancestor;
    }

    if(bundle_member_item != nullptr)
    {
        _children["bundle-member-item"] = bundle_member_item;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-member-ancestor" || name == "bundle-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>())
    , member_data(this, {})
{
    bundle_data->parent = this;

    yang_name = "bundle-member-ancestor"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::~BundleMemberAncestor()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData>();
        ent_->parent = this;
        member_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_data != nullptr)
    {
        _children["bundle-data"] = bundle_data;
    }

    count_ = 0;
    for (auto ent_ : member_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberData()
    :
    interface_name{YType::str, "interface-name"},
    port_priority{YType::uint16, "port-priority"},
    port_number{YType::uint16, "port-number"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    iccp_node{YType::uint32, "iccp-node"},
    bandwidth{YType::uint32, "bandwidth"},
    lacp_enabled{YType::str, "lacp-enabled"},
    member_type{YType::enumeration, "member-type"},
    member_name{YType::str, "member-name"}
        ,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>())
    , link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>())
    , member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>())
    , mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>())
{
    counters->parent = this;
    link_data->parent = this;
    member_mux_data->parent = this;
    mac_address->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| port_priority.is_set
	|| port_number.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| iccp_node.is_set
	|| bandwidth.is_set
	|| lacp_enabled.is_set
	|| member_type.is_set
	|| member_name.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        _children["link-data"] = link_data;
    }

    if(member_mux_data != nullptr)
    {
        _children["member-mux-data"] = member_mux_data;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "member-mux-data" || name == "mac-address" || name == "interface-name" || name == "port-priority" || name == "port-number" || name == "underlying-link-id" || name == "link-order-number" || name == "iccp-node" || name == "bandwidth" || name == "lacp-enabled" || name == "member-type" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::Counters()
    :
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    defaulted{YType::uint32, "defaulted"},
    expired{YType::uint32, "expired"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"}
{

    yang_name = "counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| illegal_packets_received.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| defaulted.is_set
	|| expired.is_set
	|| last_cleared_sec.is_set
	|| last_cleared_nsec.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "illegal-packets-received" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "defaulted" || name == "expired" || name == "last-cleared-sec" || name == "last-cleared-nsec")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::LinkData()
    :
    interface_handle{YType::str, "interface-handle"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    partner_port_state{YType::uint8, "partner-port-state"}
{

    yang_name = "link-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| actor_system_priority.is_set
	|| actor_system_mac_address.is_set
	|| actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| actor_port_state.is_set
	|| partner_port_state.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(partner_port_state.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "actor-system-priority" || name == "actor-system-mac-address" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "actor-port-id" || name == "actor-port-priority" || name == "partner-port-id" || name == "partner-port-priority" || name == "actor-port-state" || name == "partner-port-state")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxData()
    :
    mux_state{YType::enumeration, "mux-state"},
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
        ,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_data() const
{
    if (is_presence_container) return true;
    return mux_state.is_set
	|| error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_mux_state_reason_data != nullptr)
    {
        _children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "mux-state" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    if (is_presence_container) return true;
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::BundleMemberItem()
    :
    interface_name{YType::str, "interface-name"},
    port_priority{YType::uint16, "port-priority"},
    port_number{YType::uint16, "port-number"},
    underlying_link_id{YType::uint16, "underlying-link-id"},
    link_order_number{YType::uint16, "link-order-number"},
    iccp_node{YType::uint32, "iccp-node"},
    bandwidth{YType::uint32, "bandwidth"},
    lacp_enabled{YType::str, "lacp-enabled"},
    member_type{YType::enumeration, "member-type"},
    member_name{YType::str, "member-name"}
        ,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>())
    , link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>())
    , member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>())
    , mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>())
{
    counters->parent = this;
    link_data->parent = this;
    member_mux_data->parent = this;
    mac_address->parent = this;

    yang_name = "bundle-member-item"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::~BundleMemberItem()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| port_priority.is_set
	|| port_number.is_set
	|| underlying_link_id.is_set
	|| link_order_number.is_set
	|| iccp_node.is_set
	|| bandwidth.is_set
	|| lacp_enabled.is_set
	|| member_type.is_set
	|| member_name.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>();
        }
        return member_mux_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        _children["link-data"] = link_data;
    }

    if(member_mux_data != nullptr)
    {
        _children["member-mux-data"] = member_mux_data;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "member-mux-data" || name == "mac-address" || name == "interface-name" || name == "port-priority" || name == "port-number" || name == "underlying-link-id" || name == "link-order-number" || name == "iccp-node" || name == "bandwidth" || name == "lacp-enabled" || name == "member-type" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::Counters()
    :
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    defaulted{YType::uint32, "defaulted"},
    expired{YType::uint32, "expired"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"}
{

    yang_name = "counters"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_data() const
{
    if (is_presence_container) return true;
    return lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| illegal_packets_received.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| defaulted.is_set
	|| expired.is_set
	|| last_cleared_sec.is_set
	|| last_cleared_nsec.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "marker-packets-received" || name == "marker-responses-transmitted" || name == "illegal-packets-received" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "defaulted" || name == "expired" || name == "last-cleared-sec" || name == "last-cleared-nsec")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::LinkData()
    :
    interface_handle{YType::str, "interface-handle"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    partner_port_state{YType::uint8, "partner-port-state"}
{

    yang_name = "link-data"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| actor_system_priority.is_set
	|| actor_system_mac_address.is_set
	|| actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| actor_port_state.is_set
	|| partner_port_state.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(partner_port_state.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "actor-system-priority" || name == "actor-system-mac-address" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "actor-port-id" || name == "actor-port-priority" || name == "partner-port-id" || name == "partner-port-priority" || name == "actor-port-state" || name == "partner-port-state")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxData()
    :
    mux_state{YType::enumeration, "mux-state"},
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
        ,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_data() const
{
    if (is_presence_container) return true;
    return mux_state.is_set
	|| error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_mux_state_reason_data != nullptr)
    {
        _children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "mux-state" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    if (is_presence_container) return true;
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRg()
    :
    events_rg_members(std::make_shared<BundleInformation::EventsRg::EventsRgMembers>())
    , events_rg_iccp_groups(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>())
    , events_rg_bundles(std::make_shared<BundleInformation::EventsRg::EventsRgBundles>())
{
    events_rg_members->parent = this;
    events_rg_iccp_groups->parent = this;
    events_rg_bundles->parent = this;

    yang_name = "events-rg"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::~EventsRg()
{
}

bool BundleInformation::EventsRg::has_data() const
{
    if (is_presence_container) return true;
    return (events_rg_members !=  nullptr && events_rg_members->has_data())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_data())
	|| (events_rg_bundles !=  nullptr && events_rg_bundles->has_data());
}

bool BundleInformation::EventsRg::has_operation() const
{
    return is_set(yfilter)
	|| (events_rg_members !=  nullptr && events_rg_members->has_operation())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_operation())
	|| (events_rg_bundles !=  nullptr && events_rg_bundles->has_operation());
}

std::string BundleInformation::EventsRg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-members")
    {
        if(events_rg_members == nullptr)
        {
            events_rg_members = std::make_shared<BundleInformation::EventsRg::EventsRgMembers>();
        }
        return events_rg_members;
    }

    if(child_yang_name == "events-rg-iccp-groups")
    {
        if(events_rg_iccp_groups == nullptr)
        {
            events_rg_iccp_groups = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>();
        }
        return events_rg_iccp_groups;
    }

    if(child_yang_name == "events-rg-bundles")
    {
        if(events_rg_bundles == nullptr)
        {
            events_rg_bundles = std::make_shared<BundleInformation::EventsRg::EventsRgBundles>();
        }
        return events_rg_bundles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_rg_members != nullptr)
    {
        _children["events-rg-members"] = events_rg_members;
    }

    if(events_rg_iccp_groups != nullptr)
    {
        _children["events-rg-iccp-groups"] = events_rg_iccp_groups;
    }

    if(events_rg_bundles != nullptr)
    {
        _children["events-rg-bundles"] = events_rg_bundles;
    }

    return _children;
}

void BundleInformation::EventsRg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-members" || name == "events-rg-iccp-groups" || name == "events-rg-bundles")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMembers()
    :
    events_rg_member(this, {"member_interface"})
{

    yang_name = "events-rg-members"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgMembers::~EventsRgMembers()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_rg_member.len(); index++)
    {
        if(events_rg_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgMembers::has_operation() const
{
    for (std::size_t index=0; index<events_rg_member.len(); index++)
    {
        if(events_rg_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember>();
        ent_->parent = this;
        events_rg_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_rg_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-member")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMember()
    :
    member_interface{YType::str, "member-interface"}
        ,
    events_rg_member_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>())
{
    events_rg_member_ancestor->parent = this;

    yang_name = "events-rg-member"; yang_parent_name = "events-rg-members"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::~EventsRgMember()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member-ancestor")
    {
        if(events_rg_member_ancestor == nullptr)
        {
            events_rg_member_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>();
        }
        return events_rg_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_rg_member_ancestor != nullptr)
    {
        _children["events-rg-member-ancestor"] = events_rg_member_ancestor;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-member-ancestor" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::EventsRgMemberAncestor()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-rg-member-ancestor"; yang_parent_name = "events-rg-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::~EventsRgMemberAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-member-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroups()
    :
    events_rg_iccp_group(this, {"iccp_group"})
{

    yang_name = "events-rg-iccp-groups"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::~EventsRgIccpGroups()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_rg_iccp_group.len(); index++)
    {
        if(events_rg_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_rg_iccp_group.len(); index++)
    {
        if(events_rg_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-iccp-group")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup>();
        ent_->parent = this;
        events_rg_iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_rg_iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
        ,
    events_rg_bundle_item_iccp_group(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>())
{
    events_rg_bundle_item_iccp_group->parent = this;

    yang_name = "events-rg-iccp-group"; yang_parent_name = "events-rg-iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::~EventsRgIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-group";
    ADD_KEY_TOKEN(iccp_group, "iccp-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-item-iccp-group")
    {
        if(events_rg_bundle_item_iccp_group == nullptr)
        {
            events_rg_bundle_item_iccp_group = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>();
        }
        return events_rg_bundle_item_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_rg_bundle_item_iccp_group != nullptr)
    {
        _children["events-rg-bundle-item-iccp-group"] = events_rg_bundle_item_iccp_group;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle-item-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::EventsRgBundleItemIccpGroup()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-rg-bundle-item-iccp-group"; yang_parent_name = "events-rg-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::~EventsRgBundleItemIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-item-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-item-iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundles()
    :
    events_rg_bundle(this, {"bundle_interface"})
{

    yang_name = "events-rg-bundles"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgBundles::~EventsRgBundles()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<events_rg_bundle.len(); index++)
    {
        if(events_rg_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgBundles::has_operation() const
{
    for (std::size_t index=0; index<events_rg_bundle.len(); index++)
    {
        if(events_rg_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle>();
        ent_->parent = this;
        events_rg_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : events_rg_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    events_rg_bundle_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>())
{
    events_rg_bundle_ancestor->parent = this;

    yang_name = "events-rg-bundle"; yang_parent_name = "events-rg-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::~EventsRgBundle()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-ancestor")
    {
        if(events_rg_bundle_ancestor == nullptr)
        {
            events_rg_bundle_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>();
        }
        return events_rg_bundle_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(events_rg_bundle_ancestor != nullptr)
    {
        _children["events-rg-bundle-ancestor"] = events_rg_bundle_ancestor;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle-ancestor" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::EventsRgBundleAncestor()
    :
    item_name{YType::str, "item-name"}
        ,
    items(this, {})
{

    yang_name = "events-rg-bundle-ancestor"; yang_parent_name = "events-rg-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::~EventsRgBundleAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.len(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        auto ent_ = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items>();
        ent_->parent = this;
        items.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : items.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
        ,
    member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>())
    , bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>())
    , rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>())
{
    member_evt_info->parent = this;
    bundle_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-ancestor"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_data() const
{
    if (is_presence_container) return true;
    return event_type.is_set
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_evt_info != nullptr)
    {
        _children["member-evt-info"] = member_evt_info;
    }

    if(bundle_evt_info != nullptr)
    {
        _children["bundle-evt-info"] = bundle_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        _children["rg-evt-info"] = rg_evt_info;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-evt-info" || name == "bundle-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
        ,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_data() const
{
    if (is_presence_container) return true;
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data != nullptr)
    {
        _children["data"] = data;
    }

    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    no_data{YType::uint8, "no-data"},
    error{YType::uint32, "error"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| no_data.is_set
	|| error.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "no-data" || name == "error" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Lacp::Lacp()
    :
    lacp_bundles(std::make_shared<BundleInformation::Lacp::LacpBundles>())
    , lacp_members(std::make_shared<BundleInformation::Lacp::LacpMembers>())
{
    lacp_bundles->parent = this;
    lacp_members->parent = this;

    yang_name = "lacp"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Lacp::~Lacp()
{
}

bool BundleInformation::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return (lacp_bundles !=  nullptr && lacp_bundles->has_data())
	|| (lacp_members !=  nullptr && lacp_members->has_data());
}

bool BundleInformation::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| (lacp_bundles !=  nullptr && lacp_bundles->has_operation())
	|| (lacp_members !=  nullptr && lacp_members->has_operation());
}

std::string BundleInformation::Lacp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundles")
    {
        if(lacp_bundles == nullptr)
        {
            lacp_bundles = std::make_shared<BundleInformation::Lacp::LacpBundles>();
        }
        return lacp_bundles;
    }

    if(child_yang_name == "lacp-members")
    {
        if(lacp_members == nullptr)
        {
            lacp_members = std::make_shared<BundleInformation::Lacp::LacpMembers>();
        }
        return lacp_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lacp_bundles != nullptr)
    {
        _children["lacp-bundles"] = lacp_bundles;
    }

    if(lacp_members != nullptr)
    {
        _children["lacp-members"] = lacp_members;
    }

    return _children;
}

void BundleInformation::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundles" || name == "lacp-members")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundles()
    :
    lacp_bundle(this, {"bundle_interface"})
{

    yang_name = "lacp-bundles"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Lacp::LacpBundles::~LacpBundles()
{
}

bool BundleInformation::Lacp::LacpBundles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lacp_bundle.len(); index++)
    {
        if(lacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle.len(); index++)
    {
        if(lacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle")
    {
        auto ent_ = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle>();
        ent_->parent = this;
        lacp_bundle.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lacp_bundle.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
        ,
    lacp_bundle_item(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>())
    , lacp_bundle_descendant(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>())
    , lacp_bundle_children_members(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>())
{
    lacp_bundle_item->parent = this;
    lacp_bundle_descendant->parent = this;
    lacp_bundle_children_members->parent = this;

    yang_name = "lacp-bundle"; yang_parent_name = "lacp-bundles"; is_top_level_class = false; has_list_ancestor = false; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::~LacpBundle()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_data() const
{
    if (is_presence_container) return true;
    return bundle_interface.is_set
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_data())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_data())
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_operation())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_operation())
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle";
    ADD_KEY_TOKEN(bundle_interface, "bundle-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-item")
    {
        if(lacp_bundle_item == nullptr)
        {
            lacp_bundle_item = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>();
        }
        return lacp_bundle_item;
    }

    if(child_yang_name == "lacp-bundle-descendant")
    {
        if(lacp_bundle_descendant == nullptr)
        {
            lacp_bundle_descendant = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>();
        }
        return lacp_bundle_descendant;
    }

    if(child_yang_name == "lacp-bundle-children-members")
    {
        if(lacp_bundle_children_members == nullptr)
        {
            lacp_bundle_children_members = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>();
        }
        return lacp_bundle_children_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lacp_bundle_item != nullptr)
    {
        _children["lacp-bundle-item"] = lacp_bundle_item;
    }

    if(lacp_bundle_descendant != nullptr)
    {
        _children["lacp-bundle-descendant"] = lacp_bundle_descendant;
    }

    if(lacp_bundle_children_members != nullptr)
    {
        _children["lacp-bundle-children-members"] = lacp_bundle_children_members;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle-item" || name == "lacp-bundle-descendant" || name == "lacp-bundle-children-members" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::LacpBundleItem()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"}
        ,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>())
    , bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "lacp-bundle-item"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::~LacpBundleItem()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_data() const
{
    if (is_presence_container) return true;
    return actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actor_bundle_data != nullptr)
    {
        _children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        _children["bundle-system-id"] = bundle_system_id;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::ActorBundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "lacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "lacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::LacpBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>())
    , member_data(this, {})
{
    bundle_data->parent = this;

    yang_name = "lacp-bundle-descendant"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::~LacpBundleDescendant()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.len(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        auto ent_ = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData>();
        ent_->parent = this;
        member_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_data != nullptr)
    {
        _children["bundle-data"] = bundle_data;
    }

    count_ = 0;
    for (auto ent_ : member_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_operational_key{YType::uint16, "partner-operational-key"}
        ,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>())
    , bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "lacp-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_data() const
{
    if (is_presence_container) return true;
    return actor_operational_key.is_set
	|| partner_system_priority.is_set
	|| partner_system_mac_address.is_set
	|| partner_operational_key.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actor_bundle_data != nullptr)
    {
        _children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        _children["bundle-system-id"] = bundle_system_id;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-system-priority" || name == "partner-system-mac-address" || name == "partner-operational-key")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::ActorBundleData()
    :
    bundle_interface_name{YType::str, "bundle-interface-name"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    primary_member{YType::str, "primary-member"},
    bundle_status{YType::enumeration, "bundle-status"},
    active_member_count{YType::uint16, "active-member-count"},
    standby_member_count{YType::uint16, "standby-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    inter_chassis{YType::boolean, "inter-chassis"},
    is_active{YType::boolean, "is-active"},
    lacp_status{YType::enumeration, "lacp-status"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    suppression_timer{YType::uint16, "suppression-timer"},
    wait_while_timer{YType::uint16, "wait-while-timer"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    switchover_type{YType::enumeration, "switchover-type"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"}
        ,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>())
    , bfd_config(this, {})
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return bundle_interface_name.is_set
	|| available_bandwidth.is_set
	|| effective_bandwidth.is_set
	|| configured_bandwidth.is_set
	|| minimum_active_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_bandwidth.is_set
	|| primary_member.is_set
	|| bundle_status.is_set
	|| active_member_count.is_set
	|| standby_member_count.is_set
	|| configured_member_count.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| inter_chassis.is_set
	|| is_active.is_set
	|| lacp_status.is_set
	|| mlacp_status.is_set
	|| ipv4bfd_status.is_set
	|| link_order_status.is_set
	|| ipv6bfd_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| suppression_timer.is_set
	|| wait_while_timer.is_set
	|| collector_max_delay.is_set
	|| cisco_extensions.is_set
	|| lacp_nonrevertive.is_set
	|| iccp_group_id.is_set
	|| active_foreign_member_count.is_set
	|| configured_foreign_member_count.is_set
	|| switchover_type.is_set
	|| maximize_threshold_value_links.is_set
	|| maximize_threshold_value_band_width.is_set
	|| mlacp_mode.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.len(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "bfd-config")
    {
        auto ent_ = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig>();
        ent_->parent = this;
        bfd_config.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    count_ = 0;
    for (auto ent_ : bfd_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "bfd-config" || name == "bundle-interface-name" || name == "available-bandwidth" || name == "effective-bandwidth" || name == "configured-bandwidth" || name == "minimum-active-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-bandwidth" || name == "primary-member" || name == "bundle-status" || name == "active-member-count" || name == "standby-member-count" || name == "configured-member-count" || name == "mac-source" || name == "mac-source-member" || name == "inter-chassis" || name == "is-active" || name == "lacp-status" || name == "mlacp-status" || name == "ipv4bfd-status" || name == "link-order-status" || name == "ipv6bfd-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "suppression-timer" || name == "wait-while-timer" || name == "collector-max-delay" || name == "cisco-extensions" || name == "lacp-nonrevertive" || name == "iccp-group-id" || name == "active-foreign-member-count" || name == "configured-foreign-member-count" || name == "switchover-type" || name == "maximize-threshold-value-links" || name == "maximize-threshold-value-band-width" || name == "mlacp-mode" || name == "recovery-delay" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    start_timer{YType::uint32, "start-timer"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"}
        ,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    if (is_presence_container) return true;
    return bundle_status.is_set
	|| start_timer.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_multiplier.is_set
	|| pref_min_interval.is_set
	|| pref_echo_min_interval.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "start-timer" || name == "nbr-unconfig-timer" || name == "pref-multiplier" || name == "pref-min-interval" || name == "pref-echo-min-interval" || name == "fast-detect" || name == "mode-info")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::MemberData()
    :
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    mux_state{YType::enumeration, "mux-state"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>())
    , partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>())
    , additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>())
{
    actor_info->parent = this;
    partner_info->parent = this;
    additional_info->parent = this;

    yang_name = "member-data"; yang_parent_name = "lacp-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_data() const
{
    if (is_presence_container) return true;
    return selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| selection_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| mux_state.is_set
	|| actor_churn_state.is_set
	|| partner_churn_state.is_set
	|| iccp_group_id.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>();
        }
        return partner_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>();
        }
        return additional_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actor_info != nullptr)
    {
        _children["actor-info"] = actor_info;
    }

    if(partner_info != nullptr)
    {
        _children["partner-info"] = partner_info;
    }

    if(additional_info != nullptr)
    {
        _children["additional-info"] = additional_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "partner-info" || name == "additional-info" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "selection-state" || name == "period-state" || name == "receive-machine-state" || name == "mux-state" || name == "actor-churn-state" || name == "partner-churn-state" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_info != nullptr)
    {
        _children["port-info"] = port_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_info != nullptr)
    {
        _children["port-info"] = port_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
        ,
    local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>())
    , foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>())
{
    local->parent = this;
    foreign->parent = this;

    yang_name = "additional-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_data() const
{
    if (is_presence_container) return true;
    return mbr_type.is_set
	|| (local !=  nullptr && local->has_data())
	|| (foreign !=  nullptr && foreign->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (foreign !=  nullptr && foreign->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>();
        }
        return local;
    }

    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(foreign != nullptr)
    {
        _children["foreign"] = foreign;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "foreign" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    peer_address{YType::str, "peer-address"},
    member_name{YType::str, "member-name"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| member_name.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(member_name.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "member-name")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMembers()
    :
    lacp_bundle_children_member(this, {"member_interface"})
{

    yang_name = "lacp-bundle-children-members"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::~LacpBundleChildrenMembers()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lacp_bundle_children_member.len(); index++)
    {
        if(lacp_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle_children_member.len(); index++)
    {
        if(lacp_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-children-member")
    {
        auto ent_ = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember>();
        ent_->parent = this;
        lacp_bundle_children_member.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lacp_bundle_children_member.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::LacpBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    mux_state{YType::enumeration, "mux-state"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
        ,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>())
    , partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>())
    , additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>())
{
    actor_info->parent = this;
    partner_info->parent = this;
    additional_info->parent = this;

    yang_name = "lacp-bundle-children-member"; yang_parent_name = "lacp-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::~LacpBundleChildrenMember()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| selected_aggregator_id.is_set
	|| attached_aggregator_id.is_set
	|| selection_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| mux_state.is_set
	|| actor_churn_state.is_set
	|| partner_churn_state.is_set
	|| iccp_group_id.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-member";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>();
        }
        return partner_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>();
        }
        return additional_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(actor_info != nullptr)
    {
        _children["actor-info"] = actor_info;
    }

    if(partner_info != nullptr)
    {
        _children["partner-info"] = partner_info;
    }

    if(additional_info != nullptr)
    {
        _children["additional-info"] = additional_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "partner-info" || name == "additional-info" || name == "member-interface" || name == "selected-aggregator-id" || name == "attached-aggregator-id" || name == "selection-state" || name == "period-state" || name == "receive-machine-state" || name == "mux-state" || name == "actor-churn-state" || name == "partner-churn-state" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_info != nullptr)
    {
        _children["port-info"] = port_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
        ,
    system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>())
    , port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>())
{
    system->parent = this;
    port->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| state.is_set
	|| (system !=  nullptr && system->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "port" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
        ,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_data() const
{
    if (is_presence_container) return true;
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_mac_addr != nullptr)
    {
        _children["system-mac-addr"] = system_mac_addr;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    if (is_presence_container) return true;
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::Port()
    :
    link_priority{YType::uint16, "link-priority"},
    link_number{YType::uint16, "link-number"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_data() const
{
    if (is_presence_container) return true;
    return link_priority.is_set
	|| link_number.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_priority.yfilter)
	|| ydk::is_set(link_number.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());
    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-priority" || name == "link-number")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
        ,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true; 
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_data() const
{
    if (is_presence_container) return true;
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_info != nullptr)
    {
        _children["port-info"] = port_info;
    }

    return _children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_nonrevertive {0, "bmd-mlacp-switchover-nonrevertive"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_brute_force {1, "bmd-mlacp-switchover-brute-force"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_revertive {2, "bmd-mlacp-switchover-revertive"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_count {3, "bmd-mlacp-switchover-count"};

const Enum::YLeaf LoadBalance::default_ {0, "default"};
const Enum::YLeaf LoadBalance::auto_ {1, "auto"};
const Enum::YLeaf LoadBalance::value_ {2, "value"};
const Enum::YLeaf LoadBalance::source_ip {3, "source-ip"};
const Enum::YLeaf LoadBalance::destination_ip {4, "destination-ip"};
const Enum::YLeaf LoadBalance::unknown {5, "unknown"};

const Enum::YLeaf BmBdlState::bm_bdl_state_admin_down {0, "bm-bdl-state-admin-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_down {1, "bm-bdl-state-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_client_down {2, "bm-bdl-state-client-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_ptnr_down {3, "bm-bdl-state-ptnr-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_bundle_shutdown {4, "bm-bdl-state-bundle-shutdown"};
const Enum::YLeaf BmBdlState::bm_bdl_state_pe_isolated {5, "bm-bdl-state-pe-isolated"};
const Enum::YLeaf BmBdlState::bm_bdl_state_nak {6, "bm-bdl-state-nak"};
const Enum::YLeaf BmBdlState::bm_bdl_state_up_active {7, "bm-bdl-state-up-active"};
const Enum::YLeaf BmBdlState::bm_bdl_state_mlacp_hot_standby {8, "bm-bdl-state-mlacp-hot-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_mlacp_cold_standby {9, "bm-bdl-state-mlacp-cold-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_unknown {10, "bm-bdl-state-unknown"};
const Enum::YLeaf BmBdlState::bm_bdl_state_cold_standby {11, "bm-bdl-state-cold-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_error_disabled {12, "bm-bdl-state-error-disabled"};
const Enum::YLeaf BmBdlState::bm_bdl_state_efd_disabled {13, "bm-bdl-state-efd-disabled"};

const Enum::YLeaf LacpPeriodState::period_s_low {0, "period-s-low"};
const Enum::YLeaf LacpPeriodState::period_fast {1, "period-fast"};
const Enum::YLeaf LacpPeriodState::period_none {2, "period-none"};

const Enum::YLeaf BundleMedia::bundle_media_ethernet {0, "bundle-media-ethernet"};
const Enum::YLeaf BundleMedia::bundle_media_pos {1, "bundle-media-pos"};
const Enum::YLeaf BundleMedia::bundle_media_count {2, "bundle-media-count"};

const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_nak {0, "bdl-state-nak"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_unknown {1, "bdl-state-unknown"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_no_sync {2, "bdl-state-no-sync"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_rec_delay {3, "bdl-state-rec-delay"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_up {4, "bdl-state-up"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_down {5, "bdl-state-down"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_admin_down {6, "bdl-state-admin-down"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_test {7, "bdl-state-test"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_error {8, "bdl-state-error"};

const Enum::YLeaf BundleMedia1::ethernet {0, "ethernet"};
const Enum::YLeaf BundleMedia1::pos {1, "pos"};

const Enum::YLeaf Rxstates::current_rx {1, "current-rx"};
const Enum::YLeaf Rxstates::expired {2, "expired"};
const Enum::YLeaf Rxstates::defaulted {3, "defaulted"};
const Enum::YLeaf Rxstates::initialize {4, "initialize"};
const Enum::YLeaf Rxstates::lacp_disabled {5, "lacp-disabled"};
const Enum::YLeaf Rxstates::port_disabled {6, "port-disabled"};

const Enum::YLeaf LacpChurnstates::no_churn {1, "no-churn"};
const Enum::YLeaf LacpChurnstates::churn {2, "churn"};
const Enum::YLeaf LacpChurnstates::churn_monitor {3, "churn-monitor"};

const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_idb_create {0, "bmd-event-mbr-idb-create"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_bdl_add {1, "bmd-event-mbr-bdl-add"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_im_state {2, "bmd-event-mbr-im-state"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_sel_logic {3, "bmd-event-mbr-sel-logic"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_mux {4, "bmd-event-mbr-mux"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_bfd {5, "bmd-event-mbr-bfd"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_expired {6, "bmd-event-mbr-expired"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_defaulted {7, "bmd-event-mbr-defaulted"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_first_retry {8, "bmd-event-mbr-first-retry"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_msg {9, "bmd-event-mbr-msg"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_error {10, "bmd-event-mbr-error"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_mlacp_tlv {11, "bmd-event-mbr-mlacp-tlv"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_redundancy_role {12, "bmd-event-mbr-redundancy-role"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_count {13, "bmd-event-mbr-count"};

const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_none {0, "bmd-bag-evt-data-none"};
const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_error {1, "bmd-bag-evt-data-error"};
const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_string {2, "bmd-bag-evt-data-string"};

const Enum::YLeaf BmdSwitchReason::bm_switch_reason_none {0, "bm-switch-reason-none"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_noop {1, "bm-switch-reason-noop"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_not_mlacp {2, "bm-switch-reason-not-mlacp"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_revertive {3, "bm-switch-reason-revertive"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_bdl_down {4, "bm-switch-reason-bdl-down"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_recovery {5, "bm-switch-reason-recovery"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_preceding_error {6, "bm-switch-reason-preceding-error"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_wrong_order {7, "bm-switch-reason-wrong-order"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_singleton {8, "bm-switch-reason-singleton"};

const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_local {0, "bmd-mbr-local"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_foreign {1, "bmd-mbr-foreign"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_unknown {2, "bmd-mbr-unknown"};

const Enum::YLeaf BmAfId::bm_af_id_ipv4 {1136568623, "bm-af-id-ipv4"};
const Enum::YLeaf BmAfId::bm_af_id_ipv6 {1136568624, "bm-af-id-ipv6"};

const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unknown {0, "bm-mbr-state-reason-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unselectable_unknown {1, "bm-mbr-state-reason-unselectable-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_down {2, "bm-mbr-state-reason-link-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_deleting {3, "bm-mbr-state-reason-link-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_creating {4, "bm-mbr-state-reason-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_creating {5, "bm-mbr-state-reason-bundle-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_deleting {6, "bm-mbr-state-reason-bundle-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_admin_down {7, "bm-mbr-state-reason-bundle-admin-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_replicating {8, "bm-mbr-state-reason-replicating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bandwidth {9, "bm-mbr-state-reason-bandwidth"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_loop_back {10, "bm-mbr-state-reason-loop-back"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_type {11, "bm-mbr-state-reason-activity-type"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_shutdown {12, "bm-mbr-state-reason-bundle-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_min_selected {13, "bm-mbr-state-reason-min-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_max_selected {14, "bm-mbr-state-reason-max-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_limit {15, "bm-mbr-state-reason-link-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active_limit {16, "bm-mbr-state-reason-active-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_unknown {17, "bm-mbr-state-reason-standby-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_expired {18, "bm-mbr-state-reason-expired"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_defaulted {19, "bm-mbr-state-reason-defaulted"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_act_or_not_agg {20, "bm-mbr-state-reason-act-or-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_agg {21, "bm-mbr-state-reason-partner-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_lagid {22, "bm-mbr-state-reason-lagid"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_cfgd {23, "bm-mbr-state-reason-bundle-not-cfgd"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_ready {24, "bm-mbr-state-reason-bundle-not-ready"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_ood {25, "bm-mbr-state-reason-partner-ood"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_in_sync {26, "bm-mbr-state-reason-partner-not-in-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_foreign_partner_oos {27, "bm-mbr-state-reason-foreign-partner-oos"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_attach_unknown {28, "bm-mbr-state-reason-attach-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_collecting {29, "bm-mbr-state-reason-partner-not-collecting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_collect_unknown {30, "bm-mbr-state-reason-collect-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_foreign {31, "bm-mbr-state-reason-standby-foreign"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_starting {32, "bm-mbr-state-reason-bfd-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_down {33, "bm-mbr-state-reason-bfd-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_nbr_unconfig {34, "bm-mbr-state-reason-bfd-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp {35, "bm-mbr-state-reason-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_pe_isolated {36, "bm-mbr-state-reason-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_forced_switchover {37, "bm-mbr-state-reason-forced-switchover"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_errdis_unknown {38, "bm-mbr-state-reason-errdis-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_mbr_state_info {39, "bm-mbr-state-reason-mlacp-no-mbr-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active {40, "bm-mbr-state-reason-active"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_state_info {41, "bm-mbr-state-reason-mlacp-no-bdl-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_config_info {42, "bm-mbr-state-reason-mlacp-no-bdl-config-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_sync {43, "bm-mbr-state-reason-mlacp-no-bdl-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_bdl_has_no_peer {44, "bm-mbr-state-reason-mlacp-bdl-has-no-peer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_nak {45, "bm-mbr-state-reason-mlacp-nak"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_transport_unavailable {46, "bm-mbr-state-reason-mlacp-transport-unavailable"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_not_configured {47, "bm-mbr-state-reason-mlacp-not-configured"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_recovery_timer {48, "bm-mbr-state-reason-recovery-timer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_standby {49, "bm-mbr-state-reason-mlacp-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_maximized_out {50, "bm-mbr-state-reason-maximized-out"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_peer_selected {51, "bm-mbr-state-reason-mlacp-peer-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_connect_timer_running {52, "bm-mbr-state-reason-mlacp-connect-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_mlacp {53, "bm-mbr-state-reason-bundle-not-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_lon {54, "bm-mbr-state-reason-no-lon"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_cumul_rel_bw_limit {55, "bm-mbr-state-reason-cumul-rel-bw-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_mac {56, "bm-mbr-state-reason-no-mac"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_system_id {57, "bm-mbr-state-reason-no-system-id"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_shutdown {58, "bm-mbr-state-reason-link-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_mlacp {59, "bm-mbr-state-reason-activity-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_iccp {60, "bm-mbr-state-reason-activity-iccp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_icpe_mlacp {61, "bm-mbr-state-reason-bundle-icpe-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_link_num {62, "bm-mbr-state-reason-no-link-num"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_peer_higher_prio {63, "bm-mbr-state-reason-standby-peer-higher-prio"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_red_state_standby {64, "bm-mbr-state-reason-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_other_red_state_standby {65, "bm-mbr-state-reason-other-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_hold_ing {66, "bm-mbr-state-reason-hold-ing"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_error_disabled {67, "bm-mbr-state-reason-bundle-error-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_efd_disabled {68, "bm-mbr-state-reason-bundle-efd-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_singleton_pe_isolated {69, "bm-mbr-state-reason-singleton-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_starting {70, "bm-mbr-state-reason-bfd-ipv6-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_down {71, "bm-mbr-state-reason-bfd-ipv6-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_nbr_unconfig {72, "bm-mbr-state-reason-bfd-ipv6-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_timer_running {73, "bm-mbr-state-reason-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_client_bundle_ctrl {74, "bm-mbr-state-reason-client-bundle-ctrl"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_count {75, "bm-mbr-state-reason-count"};

const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_idb_create {0, "bmd-event-bdl-idb-create"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_configured {1, "bmd-event-bdl-configured"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_im_state {2, "bmd-event-bdl-im-state"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mbr_added {3, "bmd-event-bdl-mbr-added"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mbr_deleted {4, "bmd-event-bdl-mbr-deleted"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mac_addr {5, "bmd-event-bdl-mac-addr"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_first_retry {6, "bmd-event-bdl-first-retry"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_user_config {7, "bmd-event-bdl-user-config"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_error {8, "bmd-event-bdl-error"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mlacp_tlv {9, "bmd-event-bdl-mlacp-tlv"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_redundancy_role {10, "bmd-event-bdl-redundancy-role"};
const Enum::YLeaf BmdBagEventBdlItem::bdl_bfd_state_change {11, "bdl-bfd-state-change"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_icl {12, "bmd-event-bdl-icl"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_count {13, "bmd-event-bdl-count"};

const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_incomplete {0, "node-state-incomplete"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_conn_rejected {1, "node-state-conn-rejected"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_connect_sent {2, "node-state-connect-sent"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unconfigured {3, "node-state-unconfigured"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unreachable {4, "node-state-unreachable"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_iccp_down {5, "node-state-iccp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_nak {6, "node-state-nak"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unknown {7, "node-state-unknown"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_mlacp_down {8, "node-state-mlacp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_admin_down {9, "node-state-admin-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_pe_isolated {10, "node-state-pe-isolated"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_error {11, "node-state-error"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_test {12, "node-state-test"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_up {13, "node-state-up"};

const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_idb_create {0, "bmd-event-rg-idb-create"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_configured {1, "bmd-event-rg-configured"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_user_config {2, "bmd-event-rg-user-config"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_connect_ion {3, "bmd-event-rg-connect-ion"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_data {4, "bmd-event-rg-data"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_sync {5, "bmd-event-rg-sync"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_first_retry {6, "bmd-event-rg-first-retry"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_error {7, "bmd-event-rg-error"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_mlacp_tlv {8, "bmd-event-rg-mlacp-tlv"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_iccp_event {9, "bmd-event-rg-iccp-event"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_count {10, "bmd-event-rg-count"};

const Enum::YLeaf BmWhichSystem::bm_which_system_actr {0, "bm-which-system-actr"};
const Enum::YLeaf BmWhichSystem::bm_which_system_ptnr {1, "bm-which-system-ptnr"};

const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_down {0, "bmd-bfd-bdl-down"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_unknown {1, "bmd-bfd-bdl-unknown"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_up {2, "bmd-bfd-bdl-up"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_count {3, "bmd-bfd-bdl-count"};

const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_nak {0, "mbr-state-nak"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_unknown {1, "mbr-state-unknown"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_up {2, "mbr-state-up"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_down {3, "mbr-state-down"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_admin_down {4, "mbr-state-admin-down"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_test {5, "mbr-state-test"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_error {6, "mbr-state-error"};

const Enum::YLeaf BmdBagTarget::bm_bag_target_mbr {0, "bm-bag-target-mbr"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_bdl {1, "bm-bag-target-bdl"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_node {2, "bm-bag-target-node"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_rg {3, "bm-bag-target-rg"};

const Enum::YLeaf BmMuxstate::detached {1, "detached"};
const Enum::YLeaf BmMuxstate::waiting {2, "waiting"};
const Enum::YLeaf BmMuxstate::attached {3, "attached"};
const Enum::YLeaf BmMuxstate::collecting {4, "collecting"};
const Enum::YLeaf BmMuxstate::distributing {5, "distributing"};
const Enum::YLeaf BmMuxstate::collecting_distributing {6, "collecting-distributing"};

const Enum::YLeaf LacpSelState::unselected {0, "unselected"};
const Enum::YLeaf LacpSelState::standby {1, "standby"};
const Enum::YLeaf LacpSelState::selected {2, "selected"};

const Enum::YLeaf BmdMemberState::bmd_mbr_state_configured {1, "bmd-mbr-state-configured"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_standby {2, "bmd-mbr-state-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_hot_standby {3, "bmd-mbr-state-hot-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_negotiating {4, "bmd-mbr-state-negotiating"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_bfd_running {5, "bmd-mbr-state-bfd-running"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_active {6, "bmd-mbr-state-active"};

const Enum::YLeaf BmMuxreason::bm_mux_reason_no_reason {0, "bm-mux-reason-no-reason"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_down {1, "bm-mux-reason-link-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_deleted {2, "bm-mux-reason-link-deleted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_duplex {3, "bm-mux-reason-duplex"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bandwidth {4, "bm-mux-reason-bandwidth"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_loop_back {5, "bm-mux-reason-loop-back"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_activity_type {6, "bm-mux-reason-activity-type"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_limit {7, "bm-mux-reason-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_shared {8, "bm-mux-reason-shared"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_lagid {9, "bm-mux-reason-lagid"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_bundle {10, "bm-mux-reason-no-bundle"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_primary {11, "bm-mux-reason-no-primary"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bundle_down {12, "bm-mux-reason-bundle-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_individual {13, "bm-mux-reason-individual"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_defaulted {14, "bm-mux-reason-defaulted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_in_sync {15, "bm-mux-reason-in-sync"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_collecting {16, "bm-mux-reason-collecting"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_active_link_limit {17, "bm-mux-reason-active-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_distributing {18, "bm-mux-reason-distributing"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_count {19, "bm-mux-reason-count"};

const Enum::YLeaf BmFeatureStatus::bm_feature_not_configured {0, "bm-feature-not-configured"};
const Enum::YLeaf BmFeatureStatus::bm_feature_not_operational {1, "bm-feature-not-operational"};
const Enum::YLeaf BmFeatureStatus::bm_feature_operational {2, "bm-feature-operational"};

const Enum::YLeaf BmSeverity::ok {0, "ok"};
const Enum::YLeaf BmSeverity::information {1, "information"};
const Enum::YLeaf BmSeverity::misconfiguration {2, "misconfiguration"};
const Enum::YLeaf BmSeverity::warning {3, "warning"};
const Enum::YLeaf BmSeverity::error {5, "error"};

const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_standby {0, "bundle-mlacp-mode-standby"};
const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_active {1, "bundle-mlacp-mode-active"};
const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_count {2, "bundle-mlacp-mode-count"};

const Enum::YLeaf BmdBagMlacpSchActionItem::switchover {0, "switchover"};
const Enum::YLeaf BmdBagMlacpSchActionItem::switchback {1, "switchback"};

const Enum::YLeaf BmStateReasonTarget::member_reason {0, "member-reason"};
const Enum::YLeaf BmStateReasonTarget::bundle_reason {1, "bundle-reason"};

const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_req {0, "node-sync-req"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_done {1, "node-sync-done"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_start {2, "node-sync-start"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_init {3, "node-sync-init"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_singleton {4, "node-sync-singleton"};

const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_unknown {0, "bm-bdl-mac-source-unknown"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_chassis {1, "bm-bdl-mac-source-chassis"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_configured {2, "bm-bdl-mac-source-configured"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_member {3, "bm-bdl-mac-source-member"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_peer {4, "bm-bdl-mac-source-peer"};


}
}

