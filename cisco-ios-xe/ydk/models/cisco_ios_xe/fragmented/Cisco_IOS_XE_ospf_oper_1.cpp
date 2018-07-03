
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ospf_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf_oper {

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::LinkData()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    lsa_id_options{YType::bits, "lsa-id-options"}
{

    yang_name = "link-data"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::~LinkData()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return rtr_priority.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| lsa_id_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter)
	|| ydk::is_set(lsa_id_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (lsa_id_options.is_set || is_set(lsa_id_options.yfilter)) leaf_name_data.push_back(lsa_id_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-priority" || name == "link-local-interface-address" || name == "num-of-prefixes" || name == "lsa-id-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::IaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "ia-prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::~IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::Ospfv3Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::uint32, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv3-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::~Ospfv3Link()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-link";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    ADD_KEY_TOKEN(neighbor_interface_id, "neighbor-interface-id");
    ADD_KEY_TOKEN(neighbor_router_id, "neighbor-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::Ospfv3Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::~Ospfv3Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::Ospfv3IaPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-ia-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::~Ospfv3IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-ia-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::MultiTopology::MultiTopology()
    :
    name{YType::str, "name"}
{

    yang_name = "multi-topology"; yang_parent_name = "ospf-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::MultiTopology::~MultiTopology()
{
}

bool OspfOperData::OspfState::OspfInstance::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool OspfOperData::OspfState::OspfInstance::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}


}
}

