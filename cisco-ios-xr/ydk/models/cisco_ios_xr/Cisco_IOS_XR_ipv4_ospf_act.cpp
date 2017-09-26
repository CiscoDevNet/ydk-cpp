
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_act {

ClearOspfInstanceVrf::ClearOspfInstanceVrf()
    :
    input(std::make_shared<ClearOspfInstanceVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfInstanceVrf::~ClearOspfInstanceVrf()
{
}

bool ClearOspfInstanceVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfInstanceVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfInstanceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfInstanceVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfInstanceVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfInstanceVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfInstanceVrf::clone_ptr() const
{
    return std::make_shared<ClearOspfInstanceVrf>();
}

std::string ClearOspfInstanceVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfInstanceVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfInstanceVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfInstanceVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfInstanceVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Input()
    :
    instance(std::make_shared<ClearOspfInstanceVrf::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-instance-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::~Input()
{
}

bool ClearOspfInstanceVrf::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ClearOspfInstanceVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfInstanceVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfInstanceVrf::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfInstanceVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearOspfInstanceVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ClearOspfInstanceVrf::Input::Instance::All>())
	,all_inclusive(std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive>())
	,vrf(std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf>())
{
    all->parent = this;
    all_inclusive->parent = this;
    vrf->parent = this;

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::~Instance()
{
}

bool ClearOspfInstanceVrf::Input::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ClearOspfInstanceVrf::Input::Instance::All>();
        }
        return all;
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive == nullptr)
        {
            all_inclusive = std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive>();
        }
        return all_inclusive;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(all_inclusive != nullptr)
    {
        children["all-inclusive"] = all_inclusive;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "all-inclusive" || name == "vrf" || name == "instance-identifier")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats>())
{
    stats->parent = this;

    yang_name = "all"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::All::~All()
{
}

bool ClearOspfInstanceVrf::Input::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface>())
	,neighbor(std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor>())
{
    interface->parent = this;
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::~Stats()
{
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::All::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::All::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats>())
{
    stats->parent = this;

    yang_name = "all-inclusive"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::~AllInclusive()
{
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::AllInclusive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::AllInclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface>())
	,neighbor(std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>())
{
    interface->parent = this;
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all-inclusive"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::~Stats()
{
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all-inclusive/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/all-inclusive/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats>())
{
    stats->parent = this;

    yang_name = "vrf"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::~Vrf()
{
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route" || name == "vrf-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface>())
	,neighbor(std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor>())
{
    interface->parent = this;
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::~Stats()
{
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-instance-vrf/input/instance/vrf/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfProcess::ClearOspfProcess()
    :
    input(std::make_shared<ClearOspfProcess::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfProcess::~ClearOspfProcess()
{
}

bool ClearOspfProcess::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfProcess::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfProcess::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfProcess::clone_ptr() const
{
    return std::make_shared<ClearOspfProcess>();
}

std::string ClearOspfProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfProcess::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ClearOspfProcess::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-process"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfProcess::Input::~Input()
{
}

bool ClearOspfProcess::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfProcess::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfProcess::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-process/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfProcess::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfProcess::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfProcess::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfProcess::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfProcess::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfProcess::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfProcess::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool ClearOspfProcess::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "process")
        return true;
    return false;
}

ClearOspfProcess::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfProcess::Input::Instance::~Instance()
{
}

bool ClearOspfProcess::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfProcess::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfProcess::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-process/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfProcess::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfProcess::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfProcess::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfProcess::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfProcess::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfProcess::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfProcess::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfRedistribution::ClearOspfRedistribution()
    :
    input(std::make_shared<ClearOspfRedistribution::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfRedistribution::~ClearOspfRedistribution()
{
}

bool ClearOspfRedistribution::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfRedistribution::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfRedistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRedistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRedistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfRedistribution::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRedistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfRedistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfRedistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfRedistribution::clone_ptr() const
{
    return std::make_shared<ClearOspfRedistribution>();
}

std::string ClearOspfRedistribution::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfRedistribution::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfRedistribution::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfRedistribution::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfRedistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfRedistribution::Input::Input()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ClearOspfRedistribution::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-redistribution"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfRedistribution::Input::~Input()
{
}

bool ClearOspfRedistribution::Input::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfRedistribution::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfRedistribution::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfRedistribution::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRedistribution::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRedistribution::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfRedistribution::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRedistribution::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfRedistribution::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfRedistribution::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
}

bool ClearOspfRedistribution::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "redistribution")
        return true;
    return false;
}

ClearOspfRedistribution::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfRedistribution::Input::Instance::~Instance()
{
}

bool ClearOspfRedistribution::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfRedistribution::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfRedistribution::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-redistribution/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfRedistribution::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRedistribution::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRedistribution::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRedistribution::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfRedistribution::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfRedistribution::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfRedistribution::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfRoutes::ClearOspfRoutes()
    :
    input(std::make_shared<ClearOspfRoutes::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-routes"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfRoutes::~ClearOspfRoutes()
{
}

bool ClearOspfRoutes::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfRoutes::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfRoutes::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfRoutes::clone_ptr() const
{
    return std::make_shared<ClearOspfRoutes>();
}

std::string ClearOspfRoutes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfRoutes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfRoutes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfRoutes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfRoutes::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ClearOspfRoutes::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-routes"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfRoutes::Input::~Input()
{
}

bool ClearOspfRoutes::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfRoutes::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfRoutes::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-routes/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfRoutes::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRoutes::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRoutes::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfRoutes::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRoutes::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfRoutes::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfRoutes::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfRoutes::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route")
        return true;
    return false;
}

ClearOspfRoutes::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfRoutes::Input::Instance::~Instance()
{
}

bool ClearOspfRoutes::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfRoutes::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfRoutes::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-routes/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfRoutes::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfRoutes::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfRoutes::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfRoutes::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfRoutes::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfRoutes::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfRoutes::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfStatistics::ClearOspfStatistics()
    :
    input(std::make_shared<ClearOspfStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfStatistics::~ClearOspfStatistics()
{
}

bool ClearOspfStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfStatistics::clone_ptr() const
{
    return std::make_shared<ClearOspfStatistics>();
}

std::string ClearOspfStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfStatistics::Input::Input()
    :
    all{YType::empty, "all"},
    interface_name{YType::empty, "interface-name"},
    message_queue{YType::empty, "message-queue"},
    neighbor{YType::empty, "neighbor"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ClearOspfStatistics::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatistics::Input::~Input()
{
}

bool ClearOspfStatistics::Input::has_data() const
{
    return all.is_set
	|| interface_name.is_set
	|| message_queue.is_set
	|| neighbor.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfStatistics::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ClearOspfStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "all" || name == "interface-name" || name == "message-queue" || name == "neighbor" || name == "spf")
        return true;
    return false;
}

ClearOspfStatistics::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatistics::Input::Instance::~Instance()
{
}

bool ClearOspfStatistics::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfStatistics::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfStatistics::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatistics::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatistics::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatistics::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatistics::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfStatistics::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatistics::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfStatistics::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfStatisticsInterface::ClearOspfStatisticsInterface()
    :
    input(std::make_shared<ClearOspfStatisticsInterface::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-statistics-interface"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfStatisticsInterface::~ClearOspfStatisticsInterface()
{
}

bool ClearOspfStatisticsInterface::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfStatisticsInterface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfStatisticsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfStatisticsInterface::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfStatisticsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfStatisticsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfStatisticsInterface::clone_ptr() const
{
    return std::make_shared<ClearOspfStatisticsInterface>();
}

std::string ClearOspfStatisticsInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfStatisticsInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfStatisticsInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfStatisticsInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfStatisticsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfStatisticsInterface::Input::Input()
    :
    instance(std::make_shared<ClearOspfStatisticsInterface::Input::Instance>())
	,interface(std::make_shared<ClearOspfStatisticsInterface::Input::Interface>())
{
    instance->parent = this;
    interface->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-statistics-interface"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsInterface::Input::~Input()
{
}

bool ClearOspfStatisticsInterface::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfStatisticsInterface::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfStatisticsInterface::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsInterface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfStatisticsInterface::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfStatisticsInterface::Input::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfStatisticsInterface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfStatisticsInterface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearOspfStatisticsInterface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "interface")
        return true;
    return false;
}

ClearOspfStatisticsInterface::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsInterface::Input::Instance::~Instance()
{
}

bool ClearOspfStatisticsInterface::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfStatisticsInterface::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfStatisticsInterface::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-interface/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsInterface::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsInterface::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsInterface::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsInterface::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfStatisticsInterface::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatisticsInterface::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfStatisticsInterface::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfStatisticsInterface::Input::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsInterface::Input::Interface::~Interface()
{
}

bool ClearOspfStatisticsInterface::Input::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ClearOspfStatisticsInterface::Input::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfStatisticsInterface::Input::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-interface/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsInterface::Input::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsInterface::Input::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsInterface::Input::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsInterface::Input::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfStatisticsInterface::Input::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatisticsInterface::Input::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfStatisticsInterface::Input::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfStatisticsNeighbor::ClearOspfStatisticsNeighbor()
    :
    input(std::make_shared<ClearOspfStatisticsNeighbor::Input>())
{
    input->parent = this;

    yang_name = "clear-ospf-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearOspfStatisticsNeighbor::~ClearOspfStatisticsNeighbor()
{
}

bool ClearOspfStatisticsNeighbor::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfStatisticsNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfStatisticsNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfStatisticsNeighbor::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfStatisticsNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfStatisticsNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfStatisticsNeighbor::clone_ptr() const
{
    return std::make_shared<ClearOspfStatisticsNeighbor>();
}

std::string ClearOspfStatisticsNeighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfStatisticsNeighbor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfStatisticsNeighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfStatisticsNeighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfStatisticsNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfStatisticsNeighbor::Input::Input()
    :
    instance(std::make_shared<ClearOspfStatisticsNeighbor::Input::Instance>())
	,neighbor(std::make_shared<ClearOspfStatisticsNeighbor::Input::Neighbor>())
{
    instance->parent = this;
    neighbor->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospf-statistics-neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsNeighbor::Input::~Input()
{
}

bool ClearOspfStatisticsNeighbor::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfStatisticsNeighbor::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfStatisticsNeighbor::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsNeighbor::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsNeighbor::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsNeighbor::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfStatisticsNeighbor::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfStatisticsNeighbor::Input::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsNeighbor::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfStatisticsNeighbor::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfStatisticsNeighbor::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearOspfStatisticsNeighbor::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "neighbor")
        return true;
    return false;
}

ClearOspfStatisticsNeighbor::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsNeighbor::Input::Instance::~Instance()
{
}

bool ClearOspfStatisticsNeighbor::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearOspfStatisticsNeighbor::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfStatisticsNeighbor::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-neighbor/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsNeighbor::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsNeighbor::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsNeighbor::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsNeighbor::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfStatisticsNeighbor::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatisticsNeighbor::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfStatisticsNeighbor::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfStatisticsNeighbor::Input::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "neighbor"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearOspfStatisticsNeighbor::Input::Neighbor::~Neighbor()
{
}

bool ClearOspfStatisticsNeighbor::Input::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ClearOspfStatisticsNeighbor::Input::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string ClearOspfStatisticsNeighbor::Input::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:clear-ospf-statistics-neighbor/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfStatisticsNeighbor::Input::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfStatisticsNeighbor::Input::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfStatisticsNeighbor::Input::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfStatisticsNeighbor::Input::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearOspfStatisticsNeighbor::Input::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfStatisticsNeighbor::Input::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfStatisticsNeighbor::Input::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbor-id")
        return true;
    return false;
}


}
}

