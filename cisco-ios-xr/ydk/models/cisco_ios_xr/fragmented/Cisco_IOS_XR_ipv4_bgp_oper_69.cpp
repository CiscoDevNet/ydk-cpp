
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_69.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::RpkiSummary()
    :
    servers{YType::uint32, "servers"},
    ipv4roa_nets{YType::uint32, "ipv4roa-nets"},
    ipv4roa_paths{YType::uint32, "ipv4roa-paths"},
    ipv6roa_nets{YType::uint32, "ipv6roa-nets"},
    ipv6roa_paths{YType::uint32, "ipv6roa-paths"},
    rpki_disabled{YType::boolean, "rpki-disabled"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"}
{

    yang_name = "rpki-summary"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiSummary::~RpkiSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_data() const
{
    return servers.is_set
	|| ipv4roa_nets.is_set
	|| ipv4roa_paths.is_set
	|| ipv6roa_nets.is_set
	|| ipv6roa_paths.is_set
	|| rpki_disabled.is_set
	|| rpki_use_validity.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_signal_ibgp.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(servers.yfilter)
	|| ydk::is_set(ipv4roa_nets.yfilter)
	|| ydk::is_set(ipv4roa_paths.yfilter)
	|| ydk::is_set(ipv6roa_nets.yfilter)
	|| ydk::is_set(ipv6roa_paths.yfilter)
	|| ydk::is_set(rpki_disabled.yfilter)
	|| ydk::is_set(rpki_use_validity.yfilter)
	|| ydk::is_set(rpki_allow_invalid.yfilter)
	|| ydk::is_set(rpki_signal_ibgp.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());
    if (ipv4roa_nets.is_set || is_set(ipv4roa_nets.yfilter)) leaf_name_data.push_back(ipv4roa_nets.get_name_leafdata());
    if (ipv4roa_paths.is_set || is_set(ipv4roa_paths.yfilter)) leaf_name_data.push_back(ipv4roa_paths.get_name_leafdata());
    if (ipv6roa_nets.is_set || is_set(ipv6roa_nets.yfilter)) leaf_name_data.push_back(ipv6roa_nets.get_name_leafdata());
    if (ipv6roa_paths.is_set || is_set(ipv6roa_paths.yfilter)) leaf_name_data.push_back(ipv6roa_paths.get_name_leafdata());
    if (rpki_disabled.is_set || is_set(rpki_disabled.yfilter)) leaf_name_data.push_back(rpki_disabled.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.yfilter)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets = value;
        ipv4roa_nets.value_namespace = name_space;
        ipv4roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths = value;
        ipv4roa_paths.value_namespace = name_space;
        ipv4roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets = value;
        ipv6roa_nets.value_namespace = name_space;
        ipv6roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths = value;
        ipv6roa_paths.value_namespace = name_space;
        ipv6roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-disabled")
    {
        rpki_disabled = value;
        rpki_disabled.value_namespace = name_space;
        rpki_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
        rpki_use_validity.value_namespace = name_space;
        rpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
        rpki_allow_invalid.value_namespace = name_space;
        rpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
        rpki_signal_ibgp.value_namespace = name_space;
        rpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths.yfilter = yfilter;
    }
    if(value_path == "rpki-disabled")
    {
        rpki_disabled.yfilter = yfilter;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servers" || name == "ipv4roa-nets" || name == "ipv4roa-paths" || name == "ipv6roa-nets" || name == "ipv6roa-paths" || name == "rpki-disabled" || name == "rpki-use-validity" || name == "rpki-allow-invalid" || name == "rpki-signal-ibgp")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstancesTable()
    :
    bpm_instances(std::make_shared<Bgp::BpmInstancesTable::BpmInstances>())
{
    bpm_instances->parent = this;

    yang_name = "bpm-instances-table"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::BpmInstancesTable::~BpmInstancesTable()
{
}

bool Bgp::BpmInstancesTable::has_data() const
{
    return (bpm_instances !=  nullptr && bpm_instances->has_data());
}

bool Bgp::BpmInstancesTable::has_operation() const
{
    return is_set(yfilter)
	|| (bpm_instances !=  nullptr && bpm_instances->has_operation());
}

std::string Bgp::BpmInstancesTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpm-instances")
    {
        if(bpm_instances == nullptr)
        {
            bpm_instances = std::make_shared<Bgp::BpmInstancesTable::BpmInstances>();
        }
        return bpm_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bpm_instances != nullptr)
    {
        children["bpm-instances"] = bpm_instances;
    }

    return children;
}

void Bgp::BpmInstancesTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpm-instances")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::BpmInstances()
{

    yang_name = "bpm-instances"; yang_parent_name = "bpm-instances-table"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::BpmInstancesTable::BpmInstances::~BpmInstances()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::BpmInstancesTable::BpmInstances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpm-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::BpmInstancesTable::BpmInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::BpmInstancesTable::BpmInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::Instance()
    :
    instance_identifier{YType::uint16, "instance-identifier"},
    placed_group_id{YType::uint16, "placed-group-id"},
    instance_name_str{YType::str, "instance-name-str"},
    as_number{YType::uint32, "as-number"},
    number_of_vrfs{YType::uint32, "number-of-vrfs"},
    read_only_enabled{YType::boolean, "read-only-enabled"},
    install_diversion_enabled{YType::boolean, "install-diversion-enabled"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"}
{

    yang_name = "instance"; yang_parent_name = "bpm-instances"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::~Instance()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_data() const
{
    for (std::size_t index=0; index<af_array.size(); index++)
    {
        if(af_array[index]->has_data())
            return true;
    }
    return instance_identifier.is_set
	|| placed_group_id.is_set
	|| instance_name_str.is_set
	|| as_number.is_set
	|| number_of_vrfs.is_set
	|| read_only_enabled.is_set
	|| install_diversion_enabled.is_set
	|| srgb_start_configured.is_set
	|| srgb_end_configured.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_operation() const
{
    for (std::size_t index=0; index<af_array.size(); index++)
    {
        if(af_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| ydk::is_set(placed_group_id.yfilter)
	|| ydk::is_set(instance_name_str.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(number_of_vrfs.yfilter)
	|| ydk::is_set(read_only_enabled.yfilter)
	|| ydk::is_set(install_diversion_enabled.yfilter)
	|| ydk::is_set(srgb_start_configured.yfilter)
	|| ydk::is_set(srgb_end_configured.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());
    if (placed_group_id.is_set || is_set(placed_group_id.yfilter)) leaf_name_data.push_back(placed_group_id.get_name_leafdata());
    if (instance_name_str.is_set || is_set(instance_name_str.yfilter)) leaf_name_data.push_back(instance_name_str.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (number_of_vrfs.is_set || is_set(number_of_vrfs.yfilter)) leaf_name_data.push_back(number_of_vrfs.get_name_leafdata());
    if (read_only_enabled.is_set || is_set(read_only_enabled.yfilter)) leaf_name_data.push_back(read_only_enabled.get_name_leafdata());
    if (install_diversion_enabled.is_set || is_set(install_diversion_enabled.yfilter)) leaf_name_data.push_back(install_diversion_enabled.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.yfilter)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.yfilter)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-array")
    {
        auto c = std::make_shared<Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray>();
        c->parent = this;
        af_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id = value;
        placed_group_id.value_namespace = name_space;
        placed_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str = value;
        instance_name_str.value_namespace = name_space;
        instance_name_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs = value;
        number_of_vrfs.value_namespace = name_space;
        number_of_vrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled = value;
        read_only_enabled.value_namespace = name_space;
        read_only_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled = value;
        install_diversion_enabled.value_namespace = name_space;
        install_diversion_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
        srgb_start_configured.value_namespace = name_space;
        srgb_start_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
        srgb_end_configured.value_namespace = name_space;
        srgb_end_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
    if(value_path == "placed-group-id")
    {
        placed_group_id.yfilter = yfilter;
    }
    if(value_path == "instance-name-str")
    {
        instance_name_str.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "number-of-vrfs")
    {
        number_of_vrfs.yfilter = yfilter;
    }
    if(value_path == "read-only-enabled")
    {
        read_only_enabled.yfilter = yfilter;
    }
    if(value_path == "install-diversion-enabled")
    {
        install_diversion_enabled.yfilter = yfilter;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-array" || name == "instance-identifier" || name == "placed-group-id" || name == "instance-name-str" || name == "as-number" || name == "number-of-vrfs" || name == "read-only-enabled" || name == "install-diversion-enabled" || name == "srgb-start-configured" || name == "srgb-end-configured")
        return true;
    return false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::AfArray()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "af-array"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::~AfArray()
{
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/bpm-instances-table/bpm-instances/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::BpmInstancesTable::BpmInstances::Instance::AfArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

