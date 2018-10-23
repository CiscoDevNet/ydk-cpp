
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> OspfOperData::OspfState::OspfInstance::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::OspfState::OspfInstance::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

OspfOperData::Ospfv2Instance::Ospfv2Instance()
    :
    instance_id{YType::uint32, "instance-id"},
    vrf_name{YType::str, "vrf-name"},
    router_id{YType::uint32, "router-id"}
        ,
    ospfv2_area(this, {"area_id"})
    , ospfv2_lsdb_external(this, {"lsa_type", "lsa_id", "advertising_router"})
{

    yang_name = "ospfv2-instance"; yang_parent_name = "ospf-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

OspfOperData::Ospfv2Instance::~Ospfv2Instance()
{
}

bool OspfOperData::Ospfv2Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_area.len(); index++)
    {
        if(ospfv2_area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_lsdb_external.len(); index++)
    {
        if(ospfv2_lsdb_external[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| vrf_name.is_set
	|| router_id.is_set;
}

bool OspfOperData::Ospfv2Instance::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_area.len(); index++)
    {
        if(ospfv2_area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_lsdb_external.len(); index++)
    {
        if(ospfv2_lsdb_external[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string OspfOperData::Ospfv2Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf-oper:ospf-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string OspfOperData::Ospfv2Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-area")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area>();
        ent_->parent = this;
        ospfv2_area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv2-lsdb-external")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal>();
        ent_->parent = this;
        ospfv2_lsdb_external.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospfv2_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv2_lsdb_external.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-area" || name == "ospfv2-lsdb-external" || name == "instance-id" || name == "vrf-name" || name == "router-id")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Area()
    :
    area_id{YType::uint32, "area-id"}
        ,
    ospfv2_lsdb_area(this, {"lsa_type", "lsa_id", "advertising_router"})
    , ospfv2_interface(this, {"name"})
{

    yang_name = "ospfv2-area"; yang_parent_name = "ospfv2-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::~Ospfv2Area()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_lsdb_area.len(); index++)
    {
        if(ospfv2_lsdb_area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_interface.len(); index++)
    {
        if(ospfv2_interface[index]->has_data())
            return true;
    }
    return area_id.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_lsdb_area.len(); index++)
    {
        if(ospfv2_lsdb_area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_interface.len(); index++)
    {
        if(ospfv2_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-area";
    ADD_KEY_TOKEN(area_id, "area-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsdb-area")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea>();
        ent_->parent = this;
        ospfv2_lsdb_area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv2-interface")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface>();
        ent_->parent = this;
        ospfv2_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospfv2_lsdb_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv2_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsdb-area" || name == "ospfv2-interface" || name == "area-id")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2LsdbArea()
    :
    lsa_type{YType::uint8, "lsa-type"},
    lsa_id{YType::uint32, "lsa-id"},
    advertising_router{YType::uint32, "advertising-router"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_options{YType::bits, "lsa-options"},
    lsa_seq_number{YType::uint32, "lsa-seq-number"},
    lsa_checksum{YType::uint16, "lsa-checksum"},
    lsa_length{YType::uint16, "lsa-length"}
        ,
    ospfv2_router_lsa_links(this, {"link_type", "link_id", "link_data"})
    , unsupported_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa>())
    , router_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa>())
    , network_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa>())
    , network_summary_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa>())
    , router_summary_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa>())
    , external_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa>())
    , nssa_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa>())
{
    unsupported_lsa->parent = this;
    router_lsa->parent = this;
    network_lsa->parent = this;
    network_summary_lsa->parent = this;
    router_summary_lsa->parent = this;
    external_lsa->parent = this;
    nssa_lsa->parent = this;

    yang_name = "ospfv2-lsdb-area"; yang_parent_name = "ospfv2-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::~Ospfv2LsdbArea()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_router_lsa_links.len(); index++)
    {
        if(ospfv2_router_lsa_links[index]->has_data())
            return true;
    }
    return lsa_type.is_set
	|| lsa_id.is_set
	|| advertising_router.is_set
	|| lsa_age.is_set
	|| lsa_options.is_set
	|| lsa_seq_number.is_set
	|| lsa_checksum.is_set
	|| lsa_length.is_set
	|| (unsupported_lsa !=  nullptr && unsupported_lsa->has_data())
	|| (router_lsa !=  nullptr && router_lsa->has_data())
	|| (network_lsa !=  nullptr && network_lsa->has_data())
	|| (network_summary_lsa !=  nullptr && network_summary_lsa->has_data())
	|| (router_summary_lsa !=  nullptr && router_summary_lsa->has_data())
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (nssa_lsa !=  nullptr && nssa_lsa->has_data());
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_router_lsa_links.len(); index++)
    {
        if(ospfv2_router_lsa_links[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_options.yfilter)
	|| ydk::is_set(lsa_seq_number.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| (unsupported_lsa !=  nullptr && unsupported_lsa->has_operation())
	|| (router_lsa !=  nullptr && router_lsa->has_operation())
	|| (network_lsa !=  nullptr && network_lsa->has_operation())
	|| (network_summary_lsa !=  nullptr && network_summary_lsa->has_operation())
	|| (router_summary_lsa !=  nullptr && router_summary_lsa->has_operation())
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (nssa_lsa !=  nullptr && nssa_lsa->has_operation());
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsdb-area";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    ADD_KEY_TOKEN(lsa_id, "lsa-id");
    ADD_KEY_TOKEN(advertising_router, "advertising-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_options.is_set || is_set(lsa_options.yfilter)) leaf_name_data.push_back(lsa_options.get_name_leafdata());
    if (lsa_seq_number.is_set || is_set(lsa_seq_number.yfilter)) leaf_name_data.push_back(lsa_seq_number.get_name_leafdata());
    if (lsa_checksum.is_set || is_set(lsa_checksum.yfilter)) leaf_name_data.push_back(lsa_checksum.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-router-lsa-links")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks>();
        ent_->parent = this;
        ospfv2_router_lsa_links.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unsupported-lsa")
    {
        if(unsupported_lsa == nullptr)
        {
            unsupported_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa>();
        }
        return unsupported_lsa;
    }

    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa>();
        }
        return router_lsa;
    }

    if(child_yang_name == "network-lsa")
    {
        if(network_lsa == nullptr)
        {
            network_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa>();
        }
        return network_lsa;
    }

    if(child_yang_name == "network-summary-lsa")
    {
        if(network_summary_lsa == nullptr)
        {
            network_summary_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa>();
        }
        return network_summary_lsa;
    }

    if(child_yang_name == "router-summary-lsa")
    {
        if(router_summary_lsa == nullptr)
        {
            router_summary_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa>();
        }
        return router_summary_lsa;
    }

    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "nssa-lsa")
    {
        if(nssa_lsa == nullptr)
        {
            nssa_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa>();
        }
        return nssa_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospfv2_router_lsa_links.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(unsupported_lsa != nullptr)
    {
        _children["unsupported-lsa"] = unsupported_lsa;
    }

    if(router_lsa != nullptr)
    {
        _children["router-lsa"] = router_lsa;
    }

    if(network_lsa != nullptr)
    {
        _children["network-lsa"] = network_lsa;
    }

    if(network_summary_lsa != nullptr)
    {
        _children["network-summary-lsa"] = network_summary_lsa;
    }

    if(router_summary_lsa != nullptr)
    {
        _children["router-summary-lsa"] = router_summary_lsa;
    }

    if(external_lsa != nullptr)
    {
        _children["external-lsa"] = external_lsa;
    }

    if(nssa_lsa != nullptr)
    {
        _children["nssa-lsa"] = nssa_lsa;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-options")
    {
        lsa_options[value] = true;
    }
    if(value_path == "lsa-seq-number")
    {
        lsa_seq_number = value;
        lsa_seq_number.value_namespace = name_space;
        lsa_seq_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum = value;
        lsa_checksum.value_namespace = name_space;
        lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-options")
    {
        lsa_options.yfilter = yfilter;
    }
    if(value_path == "lsa-seq-number")
    {
        lsa_seq_number.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-router-lsa-links" || name == "unsupported-lsa" || name == "router-lsa" || name == "network-lsa" || name == "network-summary-lsa" || name == "router-summary-lsa" || name == "external-lsa" || name == "nssa-lsa" || name == "lsa-type" || name == "lsa-id" || name == "advertising-router" || name == "lsa-age" || name == "lsa-options" || name == "lsa-seq-number" || name == "lsa-checksum" || name == "lsa-length")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::Ospfv2RouterLsaLinks()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"}
        ,
    link_topo(this, {})
{

    yang_name = "ospfv2-router-lsa-links"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::~Ospfv2RouterLsaLinks()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_topo.len(); index++)
    {
        if(link_topo[index]->has_data())
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| link_data.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::has_operation() const
{
    for (std::size_t index=0; index<link_topo.len(); index++)
    {
        if(link_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-router-lsa-links";
    ADD_KEY_TOKEN(link_type, "link-type");
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo>();
        ent_->parent = this;
        link_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-topo" || name == "link-type" || name == "link-id" || name == "link-data")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::LinkTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint16, "topo-metric"}
{

    yang_name = "link-topo"; yang_parent_name = "ospfv2-router-lsa-links"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::~LinkTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::UnsupportedLsa()
    :
    lsa_data{YType::uint8, "lsa-data"}
{

    yang_name = "unsupported-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::~UnsupportedLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lsa_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::has_operation() const
{
    for (auto const & leaf : lsa_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_data.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsupported-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_data_name_datas = lsa_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_data_name_datas.begin(), lsa_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-data")
    {
        lsa_data.append(value);
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-data")
    {
        lsa_data.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-data")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::RouterLsa()
    :
    router_lsa_bits{YType::bits, "router-lsa-bits"},
    router_lsa_number_links{YType::uint16, "router-lsa-number-links"}
{

    yang_name = "router-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::~RouterLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::has_data() const
{
    if (is_presence_container) return true;
    return router_lsa_bits.is_set
	|| router_lsa_number_links.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_lsa_bits.yfilter)
	|| ydk::is_set(router_lsa_number_links.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_lsa_bits.is_set || is_set(router_lsa_bits.yfilter)) leaf_name_data.push_back(router_lsa_bits.get_name_leafdata());
    if (router_lsa_number_links.is_set || is_set(router_lsa_number_links.yfilter)) leaf_name_data.push_back(router_lsa_number_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-lsa-bits")
    {
        router_lsa_bits[value] = true;
    }
    if(value_path == "router-lsa-number-links")
    {
        router_lsa_number_links = value;
        router_lsa_number_links.value_namespace = name_space;
        router_lsa_number_links.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-lsa-bits")
    {
        router_lsa_bits.yfilter = yfilter;
    }
    if(value_path == "router-lsa-number-links")
    {
        router_lsa_number_links.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-bits" || name == "router-lsa-number-links")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::NetworkLsa()
    :
    network_lsa_mask{YType::uint32, "network-lsa-mask"},
    network_attached_routers{YType::uint32, "network-attached-routers"}
{

    yang_name = "network-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::~NetworkLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : network_attached_routers.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::has_operation() const
{
    for (auto const & leaf : network_attached_routers.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_lsa_mask.yfilter)
	|| ydk::is_set(network_attached_routers.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_lsa_mask.is_set || is_set(network_lsa_mask.yfilter)) leaf_name_data.push_back(network_lsa_mask.get_name_leafdata());

    auto network_attached_routers_name_datas = network_attached_routers.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_attached_routers_name_datas.begin(), network_attached_routers_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-lsa-mask")
    {
        network_lsa_mask = value;
        network_lsa_mask.value_namespace = name_space;
        network_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-attached-routers")
    {
        network_attached_routers.append(value);
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-lsa-mask")
    {
        network_lsa_mask.yfilter = yfilter;
    }
    if(value_path == "network-attached-routers")
    {
        network_attached_routers.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lsa-mask" || name == "network-attached-routers")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::NetworkSummaryLsa()
    :
    summary_lsa_mask{YType::uint32, "summary-lsa-mask"}
        ,
    summary_topo(this, {})
{

    yang_name = "network-summary-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::~NetworkSummaryLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_data())
            return true;
    }
    return summary_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::has_operation() const
{
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_lsa_mask.is_set || is_set(summary_lsa_mask.yfilter)) leaf_name_data.push_back(summary_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo>();
        ent_->parent = this;
        summary_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask = value;
        summary_lsa_mask.value_namespace = name_space;
        summary_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-topo" || name == "summary-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::SummaryTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint32, "topo-metric"}
{

    yang_name = "summary-topo"; yang_parent_name = "network-summary-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::~SummaryTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::RouterSummaryLsa()
    :
    summary_lsa_mask{YType::uint32, "summary-lsa-mask"}
        ,
    summary_topo(this, {})
{

    yang_name = "router-summary-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::~RouterSummaryLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_data())
            return true;
    }
    return summary_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::has_operation() const
{
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_lsa_mask.is_set || is_set(summary_lsa_mask.yfilter)) leaf_name_data.push_back(summary_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo>();
        ent_->parent = this;
        summary_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask = value;
        summary_lsa_mask.value_namespace = name_space;
        summary_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-topo" || name == "summary-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::SummaryTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint32, "topo-metric"}
{

    yang_name = "summary-topo"; yang_parent_name = "router-summary-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::~SummaryTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalLsa()
    :
    external_lsa_mask{YType::uint32, "external-lsa-mask"}
        ,
    external_topo(this, {})
{

    yang_name = "external-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::~ExternalLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_data())
            return true;
    }
    return external_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::has_operation() const
{
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa_mask.is_set || is_set(external_lsa_mask.yfilter)) leaf_name_data.push_back(external_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo>();
        ent_->parent = this;
        external_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask = value;
        external_lsa_mask.value_namespace = name_space;
        external_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-topo" || name == "external-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::ExternalTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric_type{YType::enumeration, "topo-metric-type"},
    topo_metric{YType::uint32, "topo-metric"},
    topo_forwarding_address{YType::str, "topo-forwarding-address"},
    topo_route_tag{YType::uint32, "topo-route-tag"}
{

    yang_name = "external-topo"; yang_parent_name = "external-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::~ExternalTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric_type.is_set
	|| topo_metric.is_set
	|| topo_forwarding_address.is_set
	|| topo_route_tag.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric_type.yfilter)
	|| ydk::is_set(topo_metric.yfilter)
	|| ydk::is_set(topo_forwarding_address.yfilter)
	|| ydk::is_set(topo_route_tag.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric_type.is_set || is_set(topo_metric_type.yfilter)) leaf_name_data.push_back(topo_metric_type.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());
    if (topo_forwarding_address.is_set || is_set(topo_forwarding_address.yfilter)) leaf_name_data.push_back(topo_forwarding_address.get_name_leafdata());
    if (topo_route_tag.is_set || is_set(topo_route_tag.yfilter)) leaf_name_data.push_back(topo_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type = value;
        topo_metric_type.value_namespace = name_space;
        topo_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address = value;
        topo_forwarding_address.value_namespace = name_space;
        topo_forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag = value;
        topo_route_tag.value_namespace = name_space;
        topo_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address.yfilter = yfilter;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric-type" || name == "topo-metric" || name == "topo-forwarding-address" || name == "topo-route-tag")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::NssaLsa()
    :
    external_lsa_mask{YType::uint32, "external-lsa-mask"}
        ,
    external_topo(this, {})
{

    yang_name = "nssa-lsa"; yang_parent_name = "ospfv2-lsdb-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::~NssaLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_data())
            return true;
    }
    return external_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::has_operation() const
{
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa_mask.is_set || is_set(external_lsa_mask.yfilter)) leaf_name_data.push_back(external_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo>();
        ent_->parent = this;
        external_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask = value;
        external_lsa_mask.value_namespace = name_space;
        external_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-topo" || name == "external-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::ExternalTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric_type{YType::enumeration, "topo-metric-type"},
    topo_metric{YType::uint32, "topo-metric"},
    topo_forwarding_address{YType::str, "topo-forwarding-address"},
    topo_route_tag{YType::uint32, "topo-route-tag"}
{

    yang_name = "external-topo"; yang_parent_name = "nssa-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::~ExternalTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric_type.is_set
	|| topo_metric.is_set
	|| topo_forwarding_address.is_set
	|| topo_route_tag.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric_type.yfilter)
	|| ydk::is_set(topo_metric.yfilter)
	|| ydk::is_set(topo_forwarding_address.yfilter)
	|| ydk::is_set(topo_route_tag.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric_type.is_set || is_set(topo_metric_type.yfilter)) leaf_name_data.push_back(topo_metric_type.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());
    if (topo_forwarding_address.is_set || is_set(topo_forwarding_address.yfilter)) leaf_name_data.push_back(topo_forwarding_address.get_name_leafdata());
    if (topo_route_tag.is_set || is_set(topo_route_tag.yfilter)) leaf_name_data.push_back(topo_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type = value;
        topo_metric_type.value_namespace = name_space;
        topo_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address = value;
        topo_forwarding_address.value_namespace = name_space;
        topo_forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag = value;
        topo_route_tag.value_namespace = name_space;
        topo_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address.yfilter = yfilter;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric-type" || name == "topo-metric" || name == "topo-forwarding-address" || name == "topo-route-tag")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Interface()
    :
    name{YType::str, "name"},
    network_type{YType::enumeration, "network-type"},
    enable{YType::boolean, "enable"},
    passive{YType::boolean, "passive"},
    demand_circuit{YType::boolean, "demand-circuit"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    prefix_suppresion{YType::boolean, "prefix-suppresion"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    hello_timer{YType::uint32, "hello-timer"},
    wait_timer{YType::uint32, "wait-timer"},
    dr{YType::uint32, "dr"},
    bdr{YType::uint32, "bdr"},
    dr_ip{YType::str, "dr-ip"},
    bdr_ip{YType::str, "bdr-ip"},
    state{YType::enumeration, "state"}
        ,
    ttl_security_val(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal>())
    , auth_val(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal>())
    , ospfv2_neighbor(this, {"nbr_id"})
{
    ttl_security_val->parent = this;
    auth_val->parent = this;

    yang_name = "ospfv2-interface"; yang_parent_name = "ospfv2-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::~Ospfv2Interface()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_neighbor.len(); index++)
    {
        if(ospfv2_neighbor[index]->has_data())
            return true;
    }
    return name.is_set
	|| network_type.is_set
	|| enable.is_set
	|| passive.is_set
	|| demand_circuit.is_set
	|| mtu_ignore.is_set
	|| prefix_suppresion.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| hello_timer.is_set
	|| wait_timer.is_set
	|| dr.is_set
	|| bdr.is_set
	|| dr_ip.is_set
	|| bdr_ip.is_set
	|| state.is_set
	|| (ttl_security_val !=  nullptr && ttl_security_val->has_data())
	|| (auth_val !=  nullptr && auth_val->has_data());
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_neighbor.len(); index++)
    {
        if(ospfv2_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(prefix_suppresion.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(hello_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(dr_ip.yfilter)
	|| ydk::is_set(bdr_ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (ttl_security_val !=  nullptr && ttl_security_val->has_operation())
	|| (auth_val !=  nullptr && auth_val->has_operation());
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (prefix_suppresion.is_set || is_set(prefix_suppresion.yfilter)) leaf_name_data.push_back(prefix_suppresion.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.yfilter)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (dr_ip.is_set || is_set(dr_ip.yfilter)) leaf_name_data.push_back(dr_ip.get_name_leafdata());
    if (bdr_ip.is_set || is_set(bdr_ip.yfilter)) leaf_name_data.push_back(bdr_ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security-val")
    {
        if(ttl_security_val == nullptr)
        {
            ttl_security_val = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal>();
        }
        return ttl_security_val;
    }

    if(child_yang_name == "auth-val")
    {
        if(auth_val == nullptr)
        {
            auth_val = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal>();
        }
        return auth_val;
    }

    if(child_yang_name == "ospfv2-neighbor")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor>();
        ent_->parent = this;
        ospfv2_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ttl_security_val != nullptr)
    {
        _children["ttl-security-val"] = ttl_security_val;
    }

    if(auth_val != nullptr)
    {
        _children["auth-val"] = auth_val;
    }

    count_ = 0;
    for (auto ent_ : ospfv2_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppresion")
    {
        prefix_suppresion = value;
        prefix_suppresion.value_namespace = name_space;
        prefix_suppresion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
        hello_timer.value_namespace = name_space;
        hello_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-ip")
    {
        dr_ip = value;
        dr_ip.value_namespace = name_space;
        dr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr-ip")
    {
        bdr_ip = value;
        bdr_ip.value_namespace = name_space;
        bdr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "prefix-suppresion")
    {
        prefix_suppresion.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "hello-timer")
    {
        hello_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "dr-ip")
    {
        dr_ip.yfilter = yfilter;
    }
    if(value_path == "bdr-ip")
    {
        bdr_ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security-val" || name == "auth-val" || name == "ospfv2-neighbor" || name == "name" || name == "network-type" || name == "enable" || name == "passive" || name == "demand-circuit" || name == "mtu-ignore" || name == "prefix-suppresion" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "hello-timer" || name == "wait-timer" || name == "dr" || name == "bdr" || name == "dr-ip" || name == "bdr-ip" || name == "state")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::TtlSecurityVal()
    :
    enable{YType::boolean, "enable"},
    hops{YType::int32, "hops"}
{

    yang_name = "ttl-security-val"; yang_parent_name = "ospfv2-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::~TtlSecurityVal()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| hops.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "hops")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthVal()
    :
    no_auth{YType::uint32, "no-auth"}
        ,
    auth_key(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey>())
    , key_chain(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain>())
{
    auth_key->parent = this;
    key_chain->parent = this;

    yang_name = "auth-val"; yang_parent_name = "ospfv2-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::~AuthVal()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::has_data() const
{
    if (is_presence_container) return true;
    return no_auth.is_set
	|| (auth_key !=  nullptr && auth_key->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_auth.yfilter)
	|| (auth_key !=  nullptr && auth_key->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_auth.is_set || is_set(no_auth.yfilter)) leaf_name_data.push_back(no_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-key")
    {
        if(auth_key == nullptr)
        {
            auth_key = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey>();
        }
        return auth_key;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_key != nullptr)
    {
        _children["auth-key"] = auth_key;
    }

    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-auth")
    {
        no_auth = value;
        no_auth.value_namespace = name_space;
        no_auth.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-auth")
    {
        no_auth.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "key-chain" || name == "no-auth")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::AuthKey()
    :
    key_id{YType::uint8, "key-id"},
    key_string{YType::uint8, "key-string"},
    crypto_algo{YType::enumeration, "crypto-algo"}
{

    yang_name = "auth-key"; yang_parent_name = "auth-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::~AuthKey()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : key_string.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return key_id.is_set
	|| crypto_algo.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::has_operation() const
{
    for (auto const & leaf : key_string.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_string.yfilter)
	|| ydk::is_set(crypto_algo.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.yfilter)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());

    auto key_string_name_datas = key_string.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), key_string_name_datas.begin(), key_string_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-string")
    {
        key_string.append(value);
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
        crypto_algo.value_namespace = name_space;
        crypto_algo.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-string")
    {
        key_string.yfilter = yfilter;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id" || name == "key-string" || name == "crypto-algo")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::KeyChain()
    :
    key_chain{YType::uint8, "key-chain"}
{

    yang_name = "key-chain"; yang_parent_name = "auth-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::~KeyChain()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : key_chain.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::has_operation() const
{
    for (auto const & leaf : key_chain.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto key_chain_name_datas = key_chain.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), key_chain_name_datas.begin(), key_chain_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain.append(value);
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::Ospfv2Neighbor()
    :
    nbr_id{YType::uint32, "nbr-id"},
    address{YType::str, "address"},
    dr{YType::uint32, "dr"},
    bdr{YType::uint32, "bdr"},
    dr_ip{YType::str, "dr-ip"},
    bdr_ip{YType::str, "bdr-ip"},
    event_count{YType::uint32, "event-count"},
    retrans_count{YType::uint32, "retrans-count"},
    state{YType::enumeration, "state"},
    dead_timer{YType::uint32, "dead-timer"}
{

    yang_name = "ospfv2-neighbor"; yang_parent_name = "ospfv2-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::~Ospfv2Neighbor()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return nbr_id.is_set
	|| address.is_set
	|| dr.is_set
	|| bdr.is_set
	|| dr_ip.is_set
	|| bdr_ip.is_set
	|| event_count.is_set
	|| retrans_count.is_set
	|| state.is_set
	|| dead_timer.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(dr_ip.yfilter)
	|| ydk::is_set(bdr_ip.yfilter)
	|| ydk::is_set(event_count.yfilter)
	|| ydk::is_set(retrans_count.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(dead_timer.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-neighbor";
    ADD_KEY_TOKEN(nbr_id, "nbr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_id.is_set || is_set(nbr_id.yfilter)) leaf_name_data.push_back(nbr_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (dr_ip.is_set || is_set(dr_ip.yfilter)) leaf_name_data.push_back(dr_ip.get_name_leafdata());
    if (bdr_ip.is_set || is_set(bdr_ip.yfilter)) leaf_name_data.push_back(bdr_ip.get_name_leafdata());
    if (event_count.is_set || is_set(event_count.yfilter)) leaf_name_data.push_back(event_count.get_name_leafdata());
    if (retrans_count.is_set || is_set(retrans_count.yfilter)) leaf_name_data.push_back(retrans_count.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (dead_timer.is_set || is_set(dead_timer.yfilter)) leaf_name_data.push_back(dead_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-id")
    {
        nbr_id = value;
        nbr_id.value_namespace = name_space;
        nbr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-ip")
    {
        dr_ip = value;
        dr_ip.value_namespace = name_space;
        dr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr-ip")
    {
        bdr_ip = value;
        bdr_ip.value_namespace = name_space;
        bdr_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-count")
    {
        event_count = value;
        event_count.value_namespace = name_space;
        event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retrans-count")
    {
        retrans_count = value;
        retrans_count.value_namespace = name_space;
        retrans_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-timer")
    {
        dead_timer = value;
        dead_timer.value_namespace = name_space;
        dead_timer.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-id")
    {
        nbr_id.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "dr-ip")
    {
        dr_ip.yfilter = yfilter;
    }
    if(value_path == "bdr-ip")
    {
        bdr_ip.yfilter = yfilter;
    }
    if(value_path == "event-count")
    {
        event_count.yfilter = yfilter;
    }
    if(value_path == "retrans-count")
    {
        retrans_count.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "dead-timer")
    {
        dead_timer.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-id" || name == "address" || name == "dr" || name == "bdr" || name == "dr-ip" || name == "bdr-ip" || name == "event-count" || name == "retrans-count" || name == "state" || name == "dead-timer")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2LsdbExternal()
    :
    lsa_type{YType::uint8, "lsa-type"},
    lsa_id{YType::uint32, "lsa-id"},
    advertising_router{YType::uint32, "advertising-router"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_options{YType::bits, "lsa-options"},
    lsa_seq_number{YType::uint32, "lsa-seq-number"},
    lsa_checksum{YType::uint16, "lsa-checksum"},
    lsa_length{YType::uint16, "lsa-length"}
        ,
    ospfv2_router_lsa_links(this, {"link_type", "link_id", "link_data"})
    , unsupported_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa>())
    , router_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa>())
    , network_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa>())
    , network_summary_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa>())
    , router_summary_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa>())
    , external_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa>())
    , nssa_lsa(std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa>())
{
    unsupported_lsa->parent = this;
    router_lsa->parent = this;
    network_lsa->parent = this;
    network_summary_lsa->parent = this;
    router_summary_lsa->parent = this;
    external_lsa->parent = this;
    nssa_lsa->parent = this;

    yang_name = "ospfv2-lsdb-external"; yang_parent_name = "ospfv2-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::~Ospfv2LsdbExternal()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_router_lsa_links.len(); index++)
    {
        if(ospfv2_router_lsa_links[index]->has_data())
            return true;
    }
    return lsa_type.is_set
	|| lsa_id.is_set
	|| advertising_router.is_set
	|| lsa_age.is_set
	|| lsa_options.is_set
	|| lsa_seq_number.is_set
	|| lsa_checksum.is_set
	|| lsa_length.is_set
	|| (unsupported_lsa !=  nullptr && unsupported_lsa->has_data())
	|| (router_lsa !=  nullptr && router_lsa->has_data())
	|| (network_lsa !=  nullptr && network_lsa->has_data())
	|| (network_summary_lsa !=  nullptr && network_summary_lsa->has_data())
	|| (router_summary_lsa !=  nullptr && router_summary_lsa->has_data())
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (nssa_lsa !=  nullptr && nssa_lsa->has_data());
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_router_lsa_links.len(); index++)
    {
        if(ospfv2_router_lsa_links[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_options.yfilter)
	|| ydk::is_set(lsa_seq_number.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| (unsupported_lsa !=  nullptr && unsupported_lsa->has_operation())
	|| (router_lsa !=  nullptr && router_lsa->has_operation())
	|| (network_lsa !=  nullptr && network_lsa->has_operation())
	|| (network_summary_lsa !=  nullptr && network_summary_lsa->has_operation())
	|| (router_summary_lsa !=  nullptr && router_summary_lsa->has_operation())
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (nssa_lsa !=  nullptr && nssa_lsa->has_operation());
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsdb-external";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    ADD_KEY_TOKEN(lsa_id, "lsa-id");
    ADD_KEY_TOKEN(advertising_router, "advertising-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_options.is_set || is_set(lsa_options.yfilter)) leaf_name_data.push_back(lsa_options.get_name_leafdata());
    if (lsa_seq_number.is_set || is_set(lsa_seq_number.yfilter)) leaf_name_data.push_back(lsa_seq_number.get_name_leafdata());
    if (lsa_checksum.is_set || is_set(lsa_checksum.yfilter)) leaf_name_data.push_back(lsa_checksum.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-router-lsa-links")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks>();
        ent_->parent = this;
        ospfv2_router_lsa_links.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unsupported-lsa")
    {
        if(unsupported_lsa == nullptr)
        {
            unsupported_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa>();
        }
        return unsupported_lsa;
    }

    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa>();
        }
        return router_lsa;
    }

    if(child_yang_name == "network-lsa")
    {
        if(network_lsa == nullptr)
        {
            network_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa>();
        }
        return network_lsa;
    }

    if(child_yang_name == "network-summary-lsa")
    {
        if(network_summary_lsa == nullptr)
        {
            network_summary_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa>();
        }
        return network_summary_lsa;
    }

    if(child_yang_name == "router-summary-lsa")
    {
        if(router_summary_lsa == nullptr)
        {
            router_summary_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa>();
        }
        return router_summary_lsa;
    }

    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "nssa-lsa")
    {
        if(nssa_lsa == nullptr)
        {
            nssa_lsa = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa>();
        }
        return nssa_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospfv2_router_lsa_links.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(unsupported_lsa != nullptr)
    {
        _children["unsupported-lsa"] = unsupported_lsa;
    }

    if(router_lsa != nullptr)
    {
        _children["router-lsa"] = router_lsa;
    }

    if(network_lsa != nullptr)
    {
        _children["network-lsa"] = network_lsa;
    }

    if(network_summary_lsa != nullptr)
    {
        _children["network-summary-lsa"] = network_summary_lsa;
    }

    if(router_summary_lsa != nullptr)
    {
        _children["router-summary-lsa"] = router_summary_lsa;
    }

    if(external_lsa != nullptr)
    {
        _children["external-lsa"] = external_lsa;
    }

    if(nssa_lsa != nullptr)
    {
        _children["nssa-lsa"] = nssa_lsa;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-options")
    {
        lsa_options[value] = true;
    }
    if(value_path == "lsa-seq-number")
    {
        lsa_seq_number = value;
        lsa_seq_number.value_namespace = name_space;
        lsa_seq_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum = value;
        lsa_checksum.value_namespace = name_space;
        lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-options")
    {
        lsa_options.yfilter = yfilter;
    }
    if(value_path == "lsa-seq-number")
    {
        lsa_seq_number.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-router-lsa-links" || name == "unsupported-lsa" || name == "router-lsa" || name == "network-lsa" || name == "network-summary-lsa" || name == "router-summary-lsa" || name == "external-lsa" || name == "nssa-lsa" || name == "lsa-type" || name == "lsa-id" || name == "advertising-router" || name == "lsa-age" || name == "lsa-options" || name == "lsa-seq-number" || name == "lsa-checksum" || name == "lsa-length")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::Ospfv2RouterLsaLinks()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"}
        ,
    link_topo(this, {})
{

    yang_name = "ospfv2-router-lsa-links"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::~Ospfv2RouterLsaLinks()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_topo.len(); index++)
    {
        if(link_topo[index]->has_data())
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| link_data.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::has_operation() const
{
    for (std::size_t index=0; index<link_topo.len(); index++)
    {
        if(link_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-router-lsa-links";
    ADD_KEY_TOKEN(link_type, "link-type");
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo>();
        ent_->parent = this;
        link_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-topo" || name == "link-type" || name == "link-id" || name == "link-data")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::LinkTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint16, "topo-metric"}
{

    yang_name = "link-topo"; yang_parent_name = "ospfv2-router-lsa-links"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::~LinkTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::UnsupportedLsa()
    :
    lsa_data{YType::uint8, "lsa-data"}
{

    yang_name = "unsupported-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::~UnsupportedLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lsa_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::has_operation() const
{
    for (auto const & leaf : lsa_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_data.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsupported-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_data_name_datas = lsa_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_data_name_datas.begin(), lsa_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-data")
    {
        lsa_data.append(value);
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-data")
    {
        lsa_data.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-data")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::RouterLsa()
    :
    router_lsa_bits{YType::bits, "router-lsa-bits"},
    router_lsa_number_links{YType::uint16, "router-lsa-number-links"}
{

    yang_name = "router-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::~RouterLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::has_data() const
{
    if (is_presence_container) return true;
    return router_lsa_bits.is_set
	|| router_lsa_number_links.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_lsa_bits.yfilter)
	|| ydk::is_set(router_lsa_number_links.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_lsa_bits.is_set || is_set(router_lsa_bits.yfilter)) leaf_name_data.push_back(router_lsa_bits.get_name_leafdata());
    if (router_lsa_number_links.is_set || is_set(router_lsa_number_links.yfilter)) leaf_name_data.push_back(router_lsa_number_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-lsa-bits")
    {
        router_lsa_bits[value] = true;
    }
    if(value_path == "router-lsa-number-links")
    {
        router_lsa_number_links = value;
        router_lsa_number_links.value_namespace = name_space;
        router_lsa_number_links.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-lsa-bits")
    {
        router_lsa_bits.yfilter = yfilter;
    }
    if(value_path == "router-lsa-number-links")
    {
        router_lsa_number_links.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-bits" || name == "router-lsa-number-links")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::NetworkLsa()
    :
    network_lsa_mask{YType::uint32, "network-lsa-mask"},
    network_attached_routers{YType::uint32, "network-attached-routers"}
{

    yang_name = "network-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::~NetworkLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : network_attached_routers.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::has_operation() const
{
    for (auto const & leaf : network_attached_routers.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_lsa_mask.yfilter)
	|| ydk::is_set(network_attached_routers.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_lsa_mask.is_set || is_set(network_lsa_mask.yfilter)) leaf_name_data.push_back(network_lsa_mask.get_name_leafdata());

    auto network_attached_routers_name_datas = network_attached_routers.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_attached_routers_name_datas.begin(), network_attached_routers_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-lsa-mask")
    {
        network_lsa_mask = value;
        network_lsa_mask.value_namespace = name_space;
        network_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-attached-routers")
    {
        network_attached_routers.append(value);
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-lsa-mask")
    {
        network_lsa_mask.yfilter = yfilter;
    }
    if(value_path == "network-attached-routers")
    {
        network_attached_routers.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lsa-mask" || name == "network-attached-routers")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::NetworkSummaryLsa()
    :
    summary_lsa_mask{YType::uint32, "summary-lsa-mask"}
        ,
    summary_topo(this, {})
{

    yang_name = "network-summary-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::~NetworkSummaryLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_data())
            return true;
    }
    return summary_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::has_operation() const
{
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_lsa_mask.is_set || is_set(summary_lsa_mask.yfilter)) leaf_name_data.push_back(summary_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo>();
        ent_->parent = this;
        summary_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask = value;
        summary_lsa_mask.value_namespace = name_space;
        summary_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-topo" || name == "summary-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::SummaryTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint32, "topo-metric"}
{

    yang_name = "summary-topo"; yang_parent_name = "network-summary-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::~SummaryTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::RouterSummaryLsa()
    :
    summary_lsa_mask{YType::uint32, "summary-lsa-mask"}
        ,
    summary_topo(this, {})
{

    yang_name = "router-summary-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::~RouterSummaryLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_data())
            return true;
    }
    return summary_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::has_operation() const
{
    for (std::size_t index=0; index<summary_topo.len(); index++)
    {
        if(summary_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_lsa_mask.is_set || is_set(summary_lsa_mask.yfilter)) leaf_name_data.push_back(summary_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo>();
        ent_->parent = this;
        summary_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask = value;
        summary_lsa_mask.value_namespace = name_space;
        summary_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-lsa-mask")
    {
        summary_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-topo" || name == "summary-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::SummaryTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric{YType::uint32, "topo-metric"}
{

    yang_name = "summary-topo"; yang_parent_name = "router-summary-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::~SummaryTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalLsa()
    :
    external_lsa_mask{YType::uint32, "external-lsa-mask"}
        ,
    external_topo(this, {})
{

    yang_name = "external-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::~ExternalLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_data())
            return true;
    }
    return external_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::has_operation() const
{
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa_mask.is_set || is_set(external_lsa_mask.yfilter)) leaf_name_data.push_back(external_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo>();
        ent_->parent = this;
        external_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask = value;
        external_lsa_mask.value_namespace = name_space;
        external_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-topo" || name == "external-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::ExternalTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric_type{YType::enumeration, "topo-metric-type"},
    topo_metric{YType::uint32, "topo-metric"},
    topo_forwarding_address{YType::str, "topo-forwarding-address"},
    topo_route_tag{YType::uint32, "topo-route-tag"}
{

    yang_name = "external-topo"; yang_parent_name = "external-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::~ExternalTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric_type.is_set
	|| topo_metric.is_set
	|| topo_forwarding_address.is_set
	|| topo_route_tag.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric_type.yfilter)
	|| ydk::is_set(topo_metric.yfilter)
	|| ydk::is_set(topo_forwarding_address.yfilter)
	|| ydk::is_set(topo_route_tag.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric_type.is_set || is_set(topo_metric_type.yfilter)) leaf_name_data.push_back(topo_metric_type.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());
    if (topo_forwarding_address.is_set || is_set(topo_forwarding_address.yfilter)) leaf_name_data.push_back(topo_forwarding_address.get_name_leafdata());
    if (topo_route_tag.is_set || is_set(topo_route_tag.yfilter)) leaf_name_data.push_back(topo_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type = value;
        topo_metric_type.value_namespace = name_space;
        topo_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address = value;
        topo_forwarding_address.value_namespace = name_space;
        topo_forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag = value;
        topo_route_tag.value_namespace = name_space;
        topo_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address.yfilter = yfilter;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric-type" || name == "topo-metric" || name == "topo-forwarding-address" || name == "topo-route-tag")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::NssaLsa()
    :
    external_lsa_mask{YType::uint32, "external-lsa-mask"}
        ,
    external_topo(this, {})
{

    yang_name = "nssa-lsa"; yang_parent_name = "ospfv2-lsdb-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::~NssaLsa()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_data())
            return true;
    }
    return external_lsa_mask.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::has_operation() const
{
    for (std::size_t index=0; index<external_topo.len(); index++)
    {
        if(external_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_lsa_mask.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_lsa_mask.is_set || is_set(external_lsa_mask.yfilter)) leaf_name_data.push_back(external_lsa_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-topo")
    {
        auto ent_ = std::make_shared<OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo>();
        ent_->parent = this;
        external_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask = value;
        external_lsa_mask.value_namespace = name_space;
        external_lsa_mask.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-lsa-mask")
    {
        external_lsa_mask.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-topo" || name == "external-lsa-mask")
        return true;
    return false;
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::ExternalTopo()
    :
    mt_id{YType::uint8, "mt-id"},
    topo_metric_type{YType::enumeration, "topo-metric-type"},
    topo_metric{YType::uint32, "topo-metric"},
    topo_forwarding_address{YType::str, "topo-forwarding-address"},
    topo_route_tag{YType::uint32, "topo-route-tag"}
{

    yang_name = "external-topo"; yang_parent_name = "nssa-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::~ExternalTopo()
{
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| topo_metric_type.is_set
	|| topo_metric.is_set
	|| topo_forwarding_address.is_set
	|| topo_route_tag.is_set;
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(topo_metric_type.yfilter)
	|| ydk::is_set(topo_metric.yfilter)
	|| ydk::is_set(topo_forwarding_address.yfilter)
	|| ydk::is_set(topo_route_tag.yfilter);
}

std::string OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (topo_metric_type.is_set || is_set(topo_metric_type.yfilter)) leaf_name_data.push_back(topo_metric_type.get_name_leafdata());
    if (topo_metric.is_set || is_set(topo_metric.yfilter)) leaf_name_data.push_back(topo_metric.get_name_leafdata());
    if (topo_forwarding_address.is_set || is_set(topo_forwarding_address.yfilter)) leaf_name_data.push_back(topo_forwarding_address.get_name_leafdata());
    if (topo_route_tag.is_set || is_set(topo_route_tag.yfilter)) leaf_name_data.push_back(topo_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type = value;
        topo_metric_type.value_namespace = name_space;
        topo_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-metric")
    {
        topo_metric = value;
        topo_metric.value_namespace = name_space;
        topo_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address = value;
        topo_forwarding_address.value_namespace = name_space;
        topo_forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag = value;
        topo_route_tag.value_namespace = name_space;
        topo_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "topo-metric-type")
    {
        topo_metric_type.yfilter = yfilter;
    }
    if(value_path == "topo-metric")
    {
        topo_metric.yfilter = yfilter;
    }
    if(value_path == "topo-forwarding-address")
    {
        topo_forwarding_address.yfilter = yfilter;
    }
    if(value_path == "topo-route-tag")
    {
        topo_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "topo-metric-type" || name == "topo-metric" || name == "topo-forwarding-address" || name == "topo-route-tag")
        return true;
    return false;
}


}
}

