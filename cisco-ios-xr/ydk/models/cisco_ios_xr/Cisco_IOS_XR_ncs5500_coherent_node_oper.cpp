
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_node_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_coherent_node_oper {

Coherent::Coherent()
    :
    nodes(std::make_shared<Coherent::Nodes>())
{
    nodes->parent = this;

    yang_name = "coherent"; yang_parent_name = "Cisco-IOS-XR-ncs5500-coherent-node-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Coherent::~Coherent()
{
}

bool Coherent::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Coherent::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Coherent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Coherent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Coherent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Coherent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Coherent::clone_ptr() const
{
    return std::make_shared<Coherent>();
}

std::string Coherent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Coherent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Coherent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Coherent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Coherent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Coherent::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "coherent"; is_top_level_class = false; has_list_ancestor = false;
}

Coherent::Nodes::~Nodes()
{
}

bool Coherent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Coherent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Coherent::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent/" << get_segment_path();
    return path_buffer.str();
}

std::string Coherent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Coherent::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Coherent::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Coherent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    coherent_time_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats>())
	,devicemapping(std::make_shared<Coherent::Nodes::Node::Devicemapping>())
	,coherenthealth(std::make_shared<Coherent::Nodes::Node::Coherenthealth>())
	,port_mode_all_info(std::make_shared<Coherent::Nodes::Node::PortModeAllInfo>())
{
    coherent_time_stats->parent = this;
    devicemapping->parent = this;
    coherenthealth->parent = this;
    port_mode_all_info->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Coherent::Nodes::Node::~Node()
{
}

bool Coherent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (coherent_time_stats !=  nullptr && coherent_time_stats->has_data())
	|| (devicemapping !=  nullptr && devicemapping->has_data())
	|| (coherenthealth !=  nullptr && coherenthealth->has_data())
	|| (port_mode_all_info !=  nullptr && port_mode_all_info->has_data());
}

bool Coherent::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (coherent_time_stats !=  nullptr && coherent_time_stats->has_operation())
	|| (devicemapping !=  nullptr && devicemapping->has_operation())
	|| (coherenthealth !=  nullptr && coherenthealth->has_operation())
	|| (port_mode_all_info !=  nullptr && port_mode_all_info->has_operation());
}

std::string Coherent::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Coherent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coherent-time-stats")
    {
        if(coherent_time_stats == nullptr)
        {
            coherent_time_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats>();
        }
        return coherent_time_stats;
    }

    if(child_yang_name == "devicemapping")
    {
        if(devicemapping == nullptr)
        {
            devicemapping = std::make_shared<Coherent::Nodes::Node::Devicemapping>();
        }
        return devicemapping;
    }

    if(child_yang_name == "coherenthealth")
    {
        if(coherenthealth == nullptr)
        {
            coherenthealth = std::make_shared<Coherent::Nodes::Node::Coherenthealth>();
        }
        return coherenthealth;
    }

    if(child_yang_name == "port-mode-all-info")
    {
        if(port_mode_all_info == nullptr)
        {
            port_mode_all_info = std::make_shared<Coherent::Nodes::Node::PortModeAllInfo>();
        }
        return port_mode_all_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(coherent_time_stats != nullptr)
    {
        children["coherent-time-stats"] = coherent_time_stats;
    }

    if(devicemapping != nullptr)
    {
        children["devicemapping"] = devicemapping;
    }

    if(coherenthealth != nullptr)
    {
        children["coherenthealth"] = coherenthealth;
    }

    if(port_mode_all_info != nullptr)
    {
        children["port-mode-all-info"] = port_mode_all_info;
    }

    return children;
}

void Coherent::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coherent-time-stats" || name == "devicemapping" || name == "coherenthealth" || name == "port-mode-all-info" || name == "node-name")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::CoherentTimeStats()
    :
    driver_init{YType::str, "driver-init"},
    driver_operational{YType::str, "driver-operational"},
    device_created{YType::str, "device-created"},
    optics_controllers_created{YType::str, "optics-controllers-created"},
    dsp_controllers_created{YType::str, "dsp-controllers-created"},
    eth_intf_created{YType::str, "eth-intf-created"}
    	,
    opts_ea_bulk_create(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate>())
	,opts_ea_bulk_update(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate>())
	,dsp_ea_bulk_create(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate>())
	,dsp_ea_bulk_update(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate>())
{
    opts_ea_bulk_create->parent = this;
    opts_ea_bulk_update->parent = this;
    dsp_ea_bulk_create->parent = this;
    dsp_ea_bulk_update->parent = this;

    yang_name = "coherent-time-stats"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::~CoherentTimeStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::has_data() const
{
    for (std::size_t index=0; index<port_stat.size(); index++)
    {
        if(port_stat[index]->has_data())
            return true;
    }
    return driver_init.is_set
	|| driver_operational.is_set
	|| device_created.is_set
	|| optics_controllers_created.is_set
	|| dsp_controllers_created.is_set
	|| eth_intf_created.is_set
	|| (opts_ea_bulk_create !=  nullptr && opts_ea_bulk_create->has_data())
	|| (opts_ea_bulk_update !=  nullptr && opts_ea_bulk_update->has_data())
	|| (dsp_ea_bulk_create !=  nullptr && dsp_ea_bulk_create->has_data())
	|| (dsp_ea_bulk_update !=  nullptr && dsp_ea_bulk_update->has_data());
}

bool Coherent::Nodes::Node::CoherentTimeStats::has_operation() const
{
    for (std::size_t index=0; index<port_stat.size(); index++)
    {
        if(port_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(driver_init.yfilter)
	|| ydk::is_set(driver_operational.yfilter)
	|| ydk::is_set(device_created.yfilter)
	|| ydk::is_set(optics_controllers_created.yfilter)
	|| ydk::is_set(dsp_controllers_created.yfilter)
	|| ydk::is_set(eth_intf_created.yfilter)
	|| (opts_ea_bulk_create !=  nullptr && opts_ea_bulk_create->has_operation())
	|| (opts_ea_bulk_update !=  nullptr && opts_ea_bulk_update->has_operation())
	|| (dsp_ea_bulk_create !=  nullptr && dsp_ea_bulk_create->has_operation())
	|| (dsp_ea_bulk_update !=  nullptr && dsp_ea_bulk_update->has_operation());
}

std::string Coherent::Nodes::Node::CoherentTimeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coherent-time-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (driver_init.is_set || is_set(driver_init.yfilter)) leaf_name_data.push_back(driver_init.get_name_leafdata());
    if (driver_operational.is_set || is_set(driver_operational.yfilter)) leaf_name_data.push_back(driver_operational.get_name_leafdata());
    if (device_created.is_set || is_set(device_created.yfilter)) leaf_name_data.push_back(device_created.get_name_leafdata());
    if (optics_controllers_created.is_set || is_set(optics_controllers_created.yfilter)) leaf_name_data.push_back(optics_controllers_created.get_name_leafdata());
    if (dsp_controllers_created.is_set || is_set(dsp_controllers_created.yfilter)) leaf_name_data.push_back(dsp_controllers_created.get_name_leafdata());
    if (eth_intf_created.is_set || is_set(eth_intf_created.yfilter)) leaf_name_data.push_back(eth_intf_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opts-ea-bulk-create")
    {
        if(opts_ea_bulk_create == nullptr)
        {
            opts_ea_bulk_create = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate>();
        }
        return opts_ea_bulk_create;
    }

    if(child_yang_name == "opts-ea-bulk-update")
    {
        if(opts_ea_bulk_update == nullptr)
        {
            opts_ea_bulk_update = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate>();
        }
        return opts_ea_bulk_update;
    }

    if(child_yang_name == "dsp-ea-bulk-create")
    {
        if(dsp_ea_bulk_create == nullptr)
        {
            dsp_ea_bulk_create = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate>();
        }
        return dsp_ea_bulk_create;
    }

    if(child_yang_name == "dsp-ea-bulk-update")
    {
        if(dsp_ea_bulk_update == nullptr)
        {
            dsp_ea_bulk_update = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate>();
        }
        return dsp_ea_bulk_update;
    }

    if(child_yang_name == "port-stat")
    {
        for(auto const & c : port_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat>();
        c->parent = this;
        port_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(opts_ea_bulk_create != nullptr)
    {
        children["opts-ea-bulk-create"] = opts_ea_bulk_create;
    }

    if(opts_ea_bulk_update != nullptr)
    {
        children["opts-ea-bulk-update"] = opts_ea_bulk_update;
    }

    if(dsp_ea_bulk_create != nullptr)
    {
        children["dsp-ea-bulk-create"] = dsp_ea_bulk_create;
    }

    if(dsp_ea_bulk_update != nullptr)
    {
        children["dsp-ea-bulk-update"] = dsp_ea_bulk_update;
    }

    for (auto const & c : port_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "driver-init")
    {
        driver_init = value;
        driver_init.value_namespace = name_space;
        driver_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "driver-operational")
    {
        driver_operational = value;
        driver_operational.value_namespace = name_space;
        driver_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-created")
    {
        device_created = value;
        device_created.value_namespace = name_space;
        device_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-controllers-created")
    {
        optics_controllers_created = value;
        optics_controllers_created.value_namespace = name_space;
        optics_controllers_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp-controllers-created")
    {
        dsp_controllers_created = value;
        dsp_controllers_created.value_namespace = name_space;
        dsp_controllers_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eth-intf-created")
    {
        eth_intf_created = value;
        eth_intf_created.value_namespace = name_space;
        eth_intf_created.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "driver-init")
    {
        driver_init.yfilter = yfilter;
    }
    if(value_path == "driver-operational")
    {
        driver_operational.yfilter = yfilter;
    }
    if(value_path == "device-created")
    {
        device_created.yfilter = yfilter;
    }
    if(value_path == "optics-controllers-created")
    {
        optics_controllers_created.yfilter = yfilter;
    }
    if(value_path == "dsp-controllers-created")
    {
        dsp_controllers_created.yfilter = yfilter;
    }
    if(value_path == "eth-intf-created")
    {
        eth_intf_created.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opts-ea-bulk-create" || name == "opts-ea-bulk-update" || name == "dsp-ea-bulk-create" || name == "dsp-ea-bulk-update" || name == "port-stat" || name == "driver-init" || name == "driver-operational" || name == "device-created" || name == "optics-controllers-created" || name == "dsp-controllers-created" || name == "eth-intf-created")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::OptsEaBulkCreate()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "opts-ea-bulk-create"; yang_parent_name = "coherent-time-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::~OptsEaBulkCreate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opts-ea-bulk-create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::OptsEaBulkUpdate()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "opts-ea-bulk-update"; yang_parent_name = "coherent-time-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::~OptsEaBulkUpdate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opts-ea-bulk-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::DspEaBulkCreate()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "dsp-ea-bulk-create"; yang_parent_name = "coherent-time-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::~DspEaBulkCreate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp-ea-bulk-create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::DspEaBulkUpdate()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "dsp-ea-bulk-update"; yang_parent_name = "coherent-time-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::~DspEaBulkUpdate()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp-ea-bulk-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::PortStat()
    :
    laser_state{YType::boolean, "laser-state"},
    provisioned_frequency{YType::uint32, "provisioned-frequency"},
    tx_power{YType::uint32, "tx-power"},
    cd_min{YType::uint32, "cd-min"},
    cd_max{YType::uint32, "cd-max"},
    traffic_type{YType::str, "traffic-type"}
    	,
    laser_on_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats>())
	,laser_off_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats>())
	,wl_op_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats>())
	,txpwr_op_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats>())
	,cdmin_op_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats>())
	,cdmax_op_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats>())
	,traffictype_op_stats(std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats>())
{
    laser_on_stats->parent = this;
    laser_off_stats->parent = this;
    wl_op_stats->parent = this;
    txpwr_op_stats->parent = this;
    cdmin_op_stats->parent = this;
    cdmax_op_stats->parent = this;
    traffictype_op_stats->parent = this;

    yang_name = "port-stat"; yang_parent_name = "coherent-time-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::~PortStat()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::has_data() const
{
    return laser_state.is_set
	|| provisioned_frequency.is_set
	|| tx_power.is_set
	|| cd_min.is_set
	|| cd_max.is_set
	|| traffic_type.is_set
	|| (laser_on_stats !=  nullptr && laser_on_stats->has_data())
	|| (laser_off_stats !=  nullptr && laser_off_stats->has_data())
	|| (wl_op_stats !=  nullptr && wl_op_stats->has_data())
	|| (txpwr_op_stats !=  nullptr && txpwr_op_stats->has_data())
	|| (cdmin_op_stats !=  nullptr && cdmin_op_stats->has_data())
	|| (cdmax_op_stats !=  nullptr && cdmax_op_stats->has_data())
	|| (traffictype_op_stats !=  nullptr && traffictype_op_stats->has_data());
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(laser_state.yfilter)
	|| ydk::is_set(provisioned_frequency.yfilter)
	|| ydk::is_set(tx_power.yfilter)
	|| ydk::is_set(cd_min.yfilter)
	|| ydk::is_set(cd_max.yfilter)
	|| ydk::is_set(traffic_type.yfilter)
	|| (laser_on_stats !=  nullptr && laser_on_stats->has_operation())
	|| (laser_off_stats !=  nullptr && laser_off_stats->has_operation())
	|| (wl_op_stats !=  nullptr && wl_op_stats->has_operation())
	|| (txpwr_op_stats !=  nullptr && txpwr_op_stats->has_operation())
	|| (cdmin_op_stats !=  nullptr && cdmin_op_stats->has_operation())
	|| (cdmax_op_stats !=  nullptr && cdmax_op_stats->has_operation())
	|| (traffictype_op_stats !=  nullptr && traffictype_op_stats->has_operation());
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_state.is_set || is_set(laser_state.yfilter)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (provisioned_frequency.is_set || is_set(provisioned_frequency.yfilter)) leaf_name_data.push_back(provisioned_frequency.get_name_leafdata());
    if (tx_power.is_set || is_set(tx_power.yfilter)) leaf_name_data.push_back(tx_power.get_name_leafdata());
    if (cd_min.is_set || is_set(cd_min.yfilter)) leaf_name_data.push_back(cd_min.get_name_leafdata());
    if (cd_max.is_set || is_set(cd_max.yfilter)) leaf_name_data.push_back(cd_max.get_name_leafdata());
    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "laser-on-stats")
    {
        if(laser_on_stats == nullptr)
        {
            laser_on_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats>();
        }
        return laser_on_stats;
    }

    if(child_yang_name == "laser-off-stats")
    {
        if(laser_off_stats == nullptr)
        {
            laser_off_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats>();
        }
        return laser_off_stats;
    }

    if(child_yang_name == "wl-op-stats")
    {
        if(wl_op_stats == nullptr)
        {
            wl_op_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats>();
        }
        return wl_op_stats;
    }

    if(child_yang_name == "txpwr-op-stats")
    {
        if(txpwr_op_stats == nullptr)
        {
            txpwr_op_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats>();
        }
        return txpwr_op_stats;
    }

    if(child_yang_name == "cdmin-op-stats")
    {
        if(cdmin_op_stats == nullptr)
        {
            cdmin_op_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats>();
        }
        return cdmin_op_stats;
    }

    if(child_yang_name == "cdmax-op-stats")
    {
        if(cdmax_op_stats == nullptr)
        {
            cdmax_op_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats>();
        }
        return cdmax_op_stats;
    }

    if(child_yang_name == "traffictype-op-stats")
    {
        if(traffictype_op_stats == nullptr)
        {
            traffictype_op_stats = std::make_shared<Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats>();
        }
        return traffictype_op_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(laser_on_stats != nullptr)
    {
        children["laser-on-stats"] = laser_on_stats;
    }

    if(laser_off_stats != nullptr)
    {
        children["laser-off-stats"] = laser_off_stats;
    }

    if(wl_op_stats != nullptr)
    {
        children["wl-op-stats"] = wl_op_stats;
    }

    if(txpwr_op_stats != nullptr)
    {
        children["txpwr-op-stats"] = txpwr_op_stats;
    }

    if(cdmin_op_stats != nullptr)
    {
        children["cdmin-op-stats"] = cdmin_op_stats;
    }

    if(cdmax_op_stats != nullptr)
    {
        children["cdmax-op-stats"] = cdmax_op_stats;
    }

    if(traffictype_op_stats != nullptr)
    {
        children["traffictype-op-stats"] = traffictype_op_stats;
    }

    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "laser-state")
    {
        laser_state = value;
        laser_state.value_namespace = name_space;
        laser_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-frequency")
    {
        provisioned_frequency = value;
        provisioned_frequency.value_namespace = name_space;
        provisioned_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power")
    {
        tx_power = value;
        tx_power.value_namespace = name_space;
        tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-min")
    {
        cd_min = value;
        cd_min.value_namespace = name_space;
        cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-max")
    {
        cd_max = value;
        cd_max.value_namespace = name_space;
        cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "laser-state")
    {
        laser_state.yfilter = yfilter;
    }
    if(value_path == "provisioned-frequency")
    {
        provisioned_frequency.yfilter = yfilter;
    }
    if(value_path == "tx-power")
    {
        tx_power.yfilter = yfilter;
    }
    if(value_path == "cd-min")
    {
        cd_min.yfilter = yfilter;
    }
    if(value_path == "cd-max")
    {
        cd_max.yfilter = yfilter;
    }
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "laser-on-stats" || name == "laser-off-stats" || name == "wl-op-stats" || name == "txpwr-op-stats" || name == "cdmin-op-stats" || name == "cdmax-op-stats" || name == "traffictype-op-stats" || name == "laser-state" || name == "provisioned-frequency" || name == "tx-power" || name == "cd-min" || name == "cd-max" || name == "traffic-type")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::LaserOnStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "laser-on-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::~LaserOnStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-on-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::LaserOffStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "laser-off-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::~LaserOffStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "laser-off-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::WlOpStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "wl-op-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::~WlOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wl-op-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::TxpwrOpStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "txpwr-op-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::~TxpwrOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "txpwr-op-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::CdminOpStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "cdmin-op-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::~CdminOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdmin-op-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::CdmaxOpStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "cdmax-op-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::~CdmaxOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdmax-op-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::TraffictypeOpStats()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    time_taken{YType::str, "time-taken"},
    worst_time{YType::str, "worst-time"}
{

    yang_name = "traffictype-op-stats"; yang_parent_name = "port-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::~TraffictypeOpStats()
{
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::has_data() const
{
    return start.is_set
	|| end.is_set
	|| time_taken.is_set
	|| worst_time.is_set;
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(time_taken.yfilter)
	|| ydk::is_set(worst_time.yfilter);
}

std::string Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffictype-op-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (time_taken.is_set || is_set(time_taken.yfilter)) leaf_name_data.push_back(time_taken.get_name_leafdata());
    if (worst_time.is_set || is_set(worst_time.yfilter)) leaf_name_data.push_back(worst_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-taken")
    {
        time_taken = value;
        time_taken.value_namespace = name_space;
        time_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "worst-time")
    {
        worst_time = value;
        worst_time.value_namespace = name_space;
        worst_time.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "time-taken")
    {
        time_taken.yfilter = yfilter;
    }
    if(value_path == "worst-time")
    {
        worst_time.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "time-taken" || name == "worst-time")
        return true;
    return false;
}

Coherent::Nodes::Node::Devicemapping::Devicemapping()
    :
    idx{YType::uint32, "idx"}
{

    yang_name = "devicemapping"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Devicemapping::~Devicemapping()
{
}

bool Coherent::Nodes::Node::Devicemapping::has_data() const
{
    for (std::size_t index=0; index<dev_map.size(); index++)
    {
        if(dev_map[index]->has_data())
            return true;
    }
    return idx.is_set;
}

bool Coherent::Nodes::Node::Devicemapping::has_operation() const
{
    for (std::size_t index=0; index<dev_map.size(); index++)
    {
        if(dev_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter);
}

std::string Coherent::Nodes::Node::Devicemapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devicemapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Devicemapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Devicemapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dev-map")
    {
        for(auto const & c : dev_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node::Devicemapping::DevMap>();
        c->parent = this;
        dev_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Devicemapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dev_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::Node::Devicemapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Devicemapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Devicemapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dev-map" || name == "idx")
        return true;
    return false;
}

Coherent::Nodes::Node::Devicemapping::DevMap::DevMap()
    :
    device_address{YType::str, "device-address"},
    ifhandle{YType::str, "ifhandle"},
    intf_name{YType::str, "intf-name"}
{

    yang_name = "dev-map"; yang_parent_name = "devicemapping"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Devicemapping::DevMap::~DevMap()
{
}

bool Coherent::Nodes::Node::Devicemapping::DevMap::has_data() const
{
    return device_address.is_set
	|| ifhandle.is_set
	|| intf_name.is_set;
}

bool Coherent::Nodes::Node::Devicemapping::DevMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_address.yfilter)
	|| ydk::is_set(ifhandle.yfilter)
	|| ydk::is_set(intf_name.yfilter);
}

std::string Coherent::Nodes::Node::Devicemapping::DevMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dev-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Devicemapping::DevMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_address.is_set || is_set(device_address.yfilter)) leaf_name_data.push_back(device_address.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.yfilter)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Devicemapping::DevMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Devicemapping::DevMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::Devicemapping::DevMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-address")
    {
        device_address = value;
        device_address.value_namespace = name_space;
        device_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
        ifhandle.value_namespace = name_space;
        ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Devicemapping::DevMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-address")
    {
        device_address.yfilter = yfilter;
    }
    if(value_path == "ifhandle")
    {
        ifhandle.yfilter = yfilter;
    }
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Devicemapping::DevMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-address" || name == "ifhandle" || name == "intf-name")
        return true;
    return false;
}

Coherent::Nodes::Node::Coherenthealth::Coherenthealth()
    :
    im_state{YType::boolean, "im-state"},
    aipc_srvr_state{YType::boolean, "aipc-srvr-state"},
    sysdb_state{YType::boolean, "sysdb-state"},
    pm_state{YType::boolean, "pm-state"},
    optics_ea_conn{YType::boolean, "optics-ea-conn"},
    dsp_ea_conn{YType::boolean, "dsp-ea-conn"},
    vether_state{YType::boolean, "vether-state"},
    morgoth_alive{YType::boolean, "morgoth-alive"},
    prov_infra_state{YType::boolean, "prov-infra-state"},
    sdk_fpga_compatible{YType::boolean, "sdk-fpga-compatible"},
    pending_provision{YType::boolean, "pending-provision"},
    pulse_sent{YType::boolean, "pulse-sent"},
    inside_prov_loop{YType::boolean, "inside-prov-loop"},
    fpd_in_progress{YType::boolean, "fpd-in-progress"},
    prov_run_count{YType::uint32, "prov-run-count"},
    sdk_version{YType::str, "sdk-version"},
    morgoth_running_version{YType::str, "morgoth-running-version"},
    morgoth_downloaded_version{YType::str, "morgoth-downloaded-version"},
    morgoth_golden_version{YType::str, "morgoth-golden-version"},
    denali0_version{YType::str, "denali0-version"},
    denali1_version{YType::str, "denali1-version"},
    denali2_version{YType::str, "denali2-version"},
    board_type{YType::str, "board-type"},
    jlink_op{YType::str, "jlink-op"}
{

    yang_name = "coherenthealth"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Coherenthealth::~Coherenthealth()
{
}

bool Coherent::Nodes::Node::Coherenthealth::has_data() const
{
    for (std::size_t index=0; index<port_data.size(); index++)
    {
        if(port_data[index]->has_data())
            return true;
    }
    return im_state.is_set
	|| aipc_srvr_state.is_set
	|| sysdb_state.is_set
	|| pm_state.is_set
	|| optics_ea_conn.is_set
	|| dsp_ea_conn.is_set
	|| vether_state.is_set
	|| morgoth_alive.is_set
	|| prov_infra_state.is_set
	|| sdk_fpga_compatible.is_set
	|| pending_provision.is_set
	|| pulse_sent.is_set
	|| inside_prov_loop.is_set
	|| fpd_in_progress.is_set
	|| prov_run_count.is_set
	|| sdk_version.is_set
	|| morgoth_running_version.is_set
	|| morgoth_downloaded_version.is_set
	|| morgoth_golden_version.is_set
	|| denali0_version.is_set
	|| denali1_version.is_set
	|| denali2_version.is_set
	|| board_type.is_set
	|| jlink_op.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::has_operation() const
{
    for (std::size_t index=0; index<port_data.size(); index++)
    {
        if(port_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(im_state.yfilter)
	|| ydk::is_set(aipc_srvr_state.yfilter)
	|| ydk::is_set(sysdb_state.yfilter)
	|| ydk::is_set(pm_state.yfilter)
	|| ydk::is_set(optics_ea_conn.yfilter)
	|| ydk::is_set(dsp_ea_conn.yfilter)
	|| ydk::is_set(vether_state.yfilter)
	|| ydk::is_set(morgoth_alive.yfilter)
	|| ydk::is_set(prov_infra_state.yfilter)
	|| ydk::is_set(sdk_fpga_compatible.yfilter)
	|| ydk::is_set(pending_provision.yfilter)
	|| ydk::is_set(pulse_sent.yfilter)
	|| ydk::is_set(inside_prov_loop.yfilter)
	|| ydk::is_set(fpd_in_progress.yfilter)
	|| ydk::is_set(prov_run_count.yfilter)
	|| ydk::is_set(sdk_version.yfilter)
	|| ydk::is_set(morgoth_running_version.yfilter)
	|| ydk::is_set(morgoth_downloaded_version.yfilter)
	|| ydk::is_set(morgoth_golden_version.yfilter)
	|| ydk::is_set(denali0_version.yfilter)
	|| ydk::is_set(denali1_version.yfilter)
	|| ydk::is_set(denali2_version.yfilter)
	|| ydk::is_set(board_type.yfilter)
	|| ydk::is_set(jlink_op.yfilter);
}

std::string Coherent::Nodes::Node::Coherenthealth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coherenthealth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Coherenthealth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (im_state.is_set || is_set(im_state.yfilter)) leaf_name_data.push_back(im_state.get_name_leafdata());
    if (aipc_srvr_state.is_set || is_set(aipc_srvr_state.yfilter)) leaf_name_data.push_back(aipc_srvr_state.get_name_leafdata());
    if (sysdb_state.is_set || is_set(sysdb_state.yfilter)) leaf_name_data.push_back(sysdb_state.get_name_leafdata());
    if (pm_state.is_set || is_set(pm_state.yfilter)) leaf_name_data.push_back(pm_state.get_name_leafdata());
    if (optics_ea_conn.is_set || is_set(optics_ea_conn.yfilter)) leaf_name_data.push_back(optics_ea_conn.get_name_leafdata());
    if (dsp_ea_conn.is_set || is_set(dsp_ea_conn.yfilter)) leaf_name_data.push_back(dsp_ea_conn.get_name_leafdata());
    if (vether_state.is_set || is_set(vether_state.yfilter)) leaf_name_data.push_back(vether_state.get_name_leafdata());
    if (morgoth_alive.is_set || is_set(morgoth_alive.yfilter)) leaf_name_data.push_back(morgoth_alive.get_name_leafdata());
    if (prov_infra_state.is_set || is_set(prov_infra_state.yfilter)) leaf_name_data.push_back(prov_infra_state.get_name_leafdata());
    if (sdk_fpga_compatible.is_set || is_set(sdk_fpga_compatible.yfilter)) leaf_name_data.push_back(sdk_fpga_compatible.get_name_leafdata());
    if (pending_provision.is_set || is_set(pending_provision.yfilter)) leaf_name_data.push_back(pending_provision.get_name_leafdata());
    if (pulse_sent.is_set || is_set(pulse_sent.yfilter)) leaf_name_data.push_back(pulse_sent.get_name_leafdata());
    if (inside_prov_loop.is_set || is_set(inside_prov_loop.yfilter)) leaf_name_data.push_back(inside_prov_loop.get_name_leafdata());
    if (fpd_in_progress.is_set || is_set(fpd_in_progress.yfilter)) leaf_name_data.push_back(fpd_in_progress.get_name_leafdata());
    if (prov_run_count.is_set || is_set(prov_run_count.yfilter)) leaf_name_data.push_back(prov_run_count.get_name_leafdata());
    if (sdk_version.is_set || is_set(sdk_version.yfilter)) leaf_name_data.push_back(sdk_version.get_name_leafdata());
    if (morgoth_running_version.is_set || is_set(morgoth_running_version.yfilter)) leaf_name_data.push_back(morgoth_running_version.get_name_leafdata());
    if (morgoth_downloaded_version.is_set || is_set(morgoth_downloaded_version.yfilter)) leaf_name_data.push_back(morgoth_downloaded_version.get_name_leafdata());
    if (morgoth_golden_version.is_set || is_set(morgoth_golden_version.yfilter)) leaf_name_data.push_back(morgoth_golden_version.get_name_leafdata());
    if (denali0_version.is_set || is_set(denali0_version.yfilter)) leaf_name_data.push_back(denali0_version.get_name_leafdata());
    if (denali1_version.is_set || is_set(denali1_version.yfilter)) leaf_name_data.push_back(denali1_version.get_name_leafdata());
    if (denali2_version.is_set || is_set(denali2_version.yfilter)) leaf_name_data.push_back(denali2_version.get_name_leafdata());
    if (board_type.is_set || is_set(board_type.yfilter)) leaf_name_data.push_back(board_type.get_name_leafdata());
    if (jlink_op.is_set || is_set(jlink_op.yfilter)) leaf_name_data.push_back(jlink_op.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Coherenthealth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-data")
    {
        for(auto const & c : port_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData>();
        c->parent = this;
        port_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Coherenthealth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "im-state")
    {
        im_state = value;
        im_state.value_namespace = name_space;
        im_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aipc-srvr-state")
    {
        aipc_srvr_state = value;
        aipc_srvr_state.value_namespace = name_space;
        aipc_srvr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysdb-state")
    {
        sysdb_state = value;
        sysdb_state.value_namespace = name_space;
        sysdb_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-state")
    {
        pm_state = value;
        pm_state.value_namespace = name_space;
        pm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ea-conn")
    {
        optics_ea_conn = value;
        optics_ea_conn.value_namespace = name_space;
        optics_ea_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp-ea-conn")
    {
        dsp_ea_conn = value;
        dsp_ea_conn.value_namespace = name_space;
        dsp_ea_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vether-state")
    {
        vether_state = value;
        vether_state.value_namespace = name_space;
        vether_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "morgoth-alive")
    {
        morgoth_alive = value;
        morgoth_alive.value_namespace = name_space;
        morgoth_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prov-infra-state")
    {
        prov_infra_state = value;
        prov_infra_state.value_namespace = name_space;
        prov_infra_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdk-fpga-compatible")
    {
        sdk_fpga_compatible = value;
        sdk_fpga_compatible.value_namespace = name_space;
        sdk_fpga_compatible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-provision")
    {
        pending_provision = value;
        pending_provision.value_namespace = name_space;
        pending_provision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pulse-sent")
    {
        pulse_sent = value;
        pulse_sent.value_namespace = name_space;
        pulse_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-prov-loop")
    {
        inside_prov_loop = value;
        inside_prov_loop.value_namespace = name_space;
        inside_prov_loop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-in-progress")
    {
        fpd_in_progress = value;
        fpd_in_progress.value_namespace = name_space;
        fpd_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prov-run-count")
    {
        prov_run_count = value;
        prov_run_count.value_namespace = name_space;
        prov_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdk-version")
    {
        sdk_version = value;
        sdk_version.value_namespace = name_space;
        sdk_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "morgoth-running-version")
    {
        morgoth_running_version = value;
        morgoth_running_version.value_namespace = name_space;
        morgoth_running_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "morgoth-downloaded-version")
    {
        morgoth_downloaded_version = value;
        morgoth_downloaded_version.value_namespace = name_space;
        morgoth_downloaded_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "morgoth-golden-version")
    {
        morgoth_golden_version = value;
        morgoth_golden_version.value_namespace = name_space;
        morgoth_golden_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denali0-version")
    {
        denali0_version = value;
        denali0_version.value_namespace = name_space;
        denali0_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denali1-version")
    {
        denali1_version = value;
        denali1_version.value_namespace = name_space;
        denali1_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denali2-version")
    {
        denali2_version = value;
        denali2_version.value_namespace = name_space;
        denali2_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-type")
    {
        board_type = value;
        board_type.value_namespace = name_space;
        board_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jlink-op")
    {
        jlink_op = value;
        jlink_op.value_namespace = name_space;
        jlink_op.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Coherenthealth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "im-state")
    {
        im_state.yfilter = yfilter;
    }
    if(value_path == "aipc-srvr-state")
    {
        aipc_srvr_state.yfilter = yfilter;
    }
    if(value_path == "sysdb-state")
    {
        sysdb_state.yfilter = yfilter;
    }
    if(value_path == "pm-state")
    {
        pm_state.yfilter = yfilter;
    }
    if(value_path == "optics-ea-conn")
    {
        optics_ea_conn.yfilter = yfilter;
    }
    if(value_path == "dsp-ea-conn")
    {
        dsp_ea_conn.yfilter = yfilter;
    }
    if(value_path == "vether-state")
    {
        vether_state.yfilter = yfilter;
    }
    if(value_path == "morgoth-alive")
    {
        morgoth_alive.yfilter = yfilter;
    }
    if(value_path == "prov-infra-state")
    {
        prov_infra_state.yfilter = yfilter;
    }
    if(value_path == "sdk-fpga-compatible")
    {
        sdk_fpga_compatible.yfilter = yfilter;
    }
    if(value_path == "pending-provision")
    {
        pending_provision.yfilter = yfilter;
    }
    if(value_path == "pulse-sent")
    {
        pulse_sent.yfilter = yfilter;
    }
    if(value_path == "inside-prov-loop")
    {
        inside_prov_loop.yfilter = yfilter;
    }
    if(value_path == "fpd-in-progress")
    {
        fpd_in_progress.yfilter = yfilter;
    }
    if(value_path == "prov-run-count")
    {
        prov_run_count.yfilter = yfilter;
    }
    if(value_path == "sdk-version")
    {
        sdk_version.yfilter = yfilter;
    }
    if(value_path == "morgoth-running-version")
    {
        morgoth_running_version.yfilter = yfilter;
    }
    if(value_path == "morgoth-downloaded-version")
    {
        morgoth_downloaded_version.yfilter = yfilter;
    }
    if(value_path == "morgoth-golden-version")
    {
        morgoth_golden_version.yfilter = yfilter;
    }
    if(value_path == "denali0-version")
    {
        denali0_version.yfilter = yfilter;
    }
    if(value_path == "denali1-version")
    {
        denali1_version.yfilter = yfilter;
    }
    if(value_path == "denali2-version")
    {
        denali2_version.yfilter = yfilter;
    }
    if(value_path == "board-type")
    {
        board_type.yfilter = yfilter;
    }
    if(value_path == "jlink-op")
    {
        jlink_op.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Coherenthealth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-data" || name == "im-state" || name == "aipc-srvr-state" || name == "sysdb-state" || name == "pm-state" || name == "optics-ea-conn" || name == "dsp-ea-conn" || name == "vether-state" || name == "morgoth-alive" || name == "prov-infra-state" || name == "sdk-fpga-compatible" || name == "pending-provision" || name == "pulse-sent" || name == "inside-prov-loop" || name == "fpd-in-progress" || name == "prov-run-count" || name == "sdk-version" || name == "morgoth-running-version" || name == "morgoth-downloaded-version" || name == "morgoth-golden-version" || name == "denali0-version" || name == "denali1-version" || name == "denali2-version" || name == "board-type" || name == "jlink-op")
        return true;
    return false;
}

Coherent::Nodes::Node::Coherenthealth::PortData::PortData()
    :
    optics_ctrl_created{YType::boolean, "optics-ctrl-created"},
    dsp_ctrl_created{YType::boolean, "dsp-ctrl-created"},
    has_pluggable{YType::boolean, "has-pluggable"},
    optics_admin_up{YType::boolean, "optics-admin-up"},
    dsp_admin_up{YType::boolean, "dsp-admin-up"},
    laser_state{YType::boolean, "laser-state"},
    laser_on_pending{YType::boolean, "laser-on-pending"},
    provisioning_needed{YType::boolean, "provisioning-needed"},
    force_reprovision{YType::boolean, "force-reprovision"},
    fp_port_idx{YType::uint32, "fp-port-idx"},
    configured_frequency{YType::uint32, "configured-frequency"},
    provisioned_frequency{YType::uint32, "provisioned-frequency"},
    configured_tx_power{YType::str, "configured-tx-power"},
    provisioned_tx_power{YType::str, "provisioned-tx-power"},
    configured_cd_min{YType::str, "configured-cd-min"},
    provisioned_cd_min{YType::str, "provisioned-cd-min"},
    configured_cd_max{YType::str, "configured-cd-max"},
    provisioned_cd_max{YType::str, "provisioned-cd-max"},
    configured_traffic_type{YType::str, "configured-traffic-type"},
    provisioned_traffic_type{YType::str, "provisioned-traffic-type"},
    configured_loopback_mode{YType::str, "configured-loopback-mode"},
    provisioned_loopback_mode{YType::str, "provisioned-loopback-mode"},
    expected_ctp2_led_state{YType::str, "expected-ctp2-led-state"},
    provisioned_ctp2_led_state{YType::str, "provisioned-ctp2-led-state"},
    led_op_rc{YType::int32, "led-op-rc"},
    laser_op_rc{YType::int32, "laser-op-rc"},
    wlen_op_rc{YType::int32, "wlen-op-rc"},
    traffic_op_rc{YType::int32, "traffic-op-rc"},
    loopback_op_rc{YType::int32, "loopback-op-rc"},
    tx_power_op_rc{YType::int32, "tx-power-op-rc"},
    cd_min_op_rc{YType::int32, "cd-min-op-rc"},
    cd_max_op_rc{YType::int32, "cd-max-op-rc"},
    provisioning_failed{YType::boolean, "provisioning-failed"},
    ctp2_hw_alarms{YType::str, "ctp2-hw-alarms"},
    denali_hw_alarms{YType::str, "denali-hw-alarms"},
    is_pm_port_created_opt{YType::boolean, "is-pm-port-created-opt"},
    rc_pm_port_opt{YType::int32, "rc-pm-port-opt"},
    pm_port_state_opt{YType::int32, "pm-port-state-opt"},
    rc_pm_provision_opt{YType::int32, "rc-pm-provision-opt"},
    is_alarm_port_created_opt{YType::boolean, "is-alarm-port-created-opt"},
    rc_alarm_port_opt{YType::int32, "rc-alarm-port-opt"},
    is_pm_port_created_dsp{YType::boolean, "is-pm-port-created-dsp"},
    rc_pm_port_dsp{YType::int32, "rc-pm-port-dsp"},
    pm_port_state_dsp{YType::int32, "pm-port-state-dsp"},
    rc_pm_provision_dsp{YType::int32, "rc-pm-provision-dsp"},
    is_alarm_port_created_dsp{YType::boolean, "is-alarm-port-created-dsp"},
    rc_alarm_port_dsp{YType::int32, "rc-alarm-port-dsp"}
    	,
    ctp_info(std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo>())
	,interface_info(std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo>())
{
    ctp_info->parent = this;
    interface_info->parent = this;

    yang_name = "port-data"; yang_parent_name = "coherenthealth"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Coherenthealth::PortData::~PortData()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::has_data() const
{
    return optics_ctrl_created.is_set
	|| dsp_ctrl_created.is_set
	|| has_pluggable.is_set
	|| optics_admin_up.is_set
	|| dsp_admin_up.is_set
	|| laser_state.is_set
	|| laser_on_pending.is_set
	|| provisioning_needed.is_set
	|| force_reprovision.is_set
	|| fp_port_idx.is_set
	|| configured_frequency.is_set
	|| provisioned_frequency.is_set
	|| configured_tx_power.is_set
	|| provisioned_tx_power.is_set
	|| configured_cd_min.is_set
	|| provisioned_cd_min.is_set
	|| configured_cd_max.is_set
	|| provisioned_cd_max.is_set
	|| configured_traffic_type.is_set
	|| provisioned_traffic_type.is_set
	|| configured_loopback_mode.is_set
	|| provisioned_loopback_mode.is_set
	|| expected_ctp2_led_state.is_set
	|| provisioned_ctp2_led_state.is_set
	|| led_op_rc.is_set
	|| laser_op_rc.is_set
	|| wlen_op_rc.is_set
	|| traffic_op_rc.is_set
	|| loopback_op_rc.is_set
	|| tx_power_op_rc.is_set
	|| cd_min_op_rc.is_set
	|| cd_max_op_rc.is_set
	|| provisioning_failed.is_set
	|| ctp2_hw_alarms.is_set
	|| denali_hw_alarms.is_set
	|| is_pm_port_created_opt.is_set
	|| rc_pm_port_opt.is_set
	|| pm_port_state_opt.is_set
	|| rc_pm_provision_opt.is_set
	|| is_alarm_port_created_opt.is_set
	|| rc_alarm_port_opt.is_set
	|| is_pm_port_created_dsp.is_set
	|| rc_pm_port_dsp.is_set
	|| pm_port_state_dsp.is_set
	|| rc_pm_provision_dsp.is_set
	|| is_alarm_port_created_dsp.is_set
	|| rc_alarm_port_dsp.is_set
	|| (ctp_info !=  nullptr && ctp_info->has_data())
	|| (interface_info !=  nullptr && interface_info->has_data());
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_ctrl_created.yfilter)
	|| ydk::is_set(dsp_ctrl_created.yfilter)
	|| ydk::is_set(has_pluggable.yfilter)
	|| ydk::is_set(optics_admin_up.yfilter)
	|| ydk::is_set(dsp_admin_up.yfilter)
	|| ydk::is_set(laser_state.yfilter)
	|| ydk::is_set(laser_on_pending.yfilter)
	|| ydk::is_set(provisioning_needed.yfilter)
	|| ydk::is_set(force_reprovision.yfilter)
	|| ydk::is_set(fp_port_idx.yfilter)
	|| ydk::is_set(configured_frequency.yfilter)
	|| ydk::is_set(provisioned_frequency.yfilter)
	|| ydk::is_set(configured_tx_power.yfilter)
	|| ydk::is_set(provisioned_tx_power.yfilter)
	|| ydk::is_set(configured_cd_min.yfilter)
	|| ydk::is_set(provisioned_cd_min.yfilter)
	|| ydk::is_set(configured_cd_max.yfilter)
	|| ydk::is_set(provisioned_cd_max.yfilter)
	|| ydk::is_set(configured_traffic_type.yfilter)
	|| ydk::is_set(provisioned_traffic_type.yfilter)
	|| ydk::is_set(configured_loopback_mode.yfilter)
	|| ydk::is_set(provisioned_loopback_mode.yfilter)
	|| ydk::is_set(expected_ctp2_led_state.yfilter)
	|| ydk::is_set(provisioned_ctp2_led_state.yfilter)
	|| ydk::is_set(led_op_rc.yfilter)
	|| ydk::is_set(laser_op_rc.yfilter)
	|| ydk::is_set(wlen_op_rc.yfilter)
	|| ydk::is_set(traffic_op_rc.yfilter)
	|| ydk::is_set(loopback_op_rc.yfilter)
	|| ydk::is_set(tx_power_op_rc.yfilter)
	|| ydk::is_set(cd_min_op_rc.yfilter)
	|| ydk::is_set(cd_max_op_rc.yfilter)
	|| ydk::is_set(provisioning_failed.yfilter)
	|| ydk::is_set(ctp2_hw_alarms.yfilter)
	|| ydk::is_set(denali_hw_alarms.yfilter)
	|| ydk::is_set(is_pm_port_created_opt.yfilter)
	|| ydk::is_set(rc_pm_port_opt.yfilter)
	|| ydk::is_set(pm_port_state_opt.yfilter)
	|| ydk::is_set(rc_pm_provision_opt.yfilter)
	|| ydk::is_set(is_alarm_port_created_opt.yfilter)
	|| ydk::is_set(rc_alarm_port_opt.yfilter)
	|| ydk::is_set(is_pm_port_created_dsp.yfilter)
	|| ydk::is_set(rc_pm_port_dsp.yfilter)
	|| ydk::is_set(pm_port_state_dsp.yfilter)
	|| ydk::is_set(rc_pm_provision_dsp.yfilter)
	|| ydk::is_set(is_alarm_port_created_dsp.yfilter)
	|| ydk::is_set(rc_alarm_port_dsp.yfilter)
	|| (ctp_info !=  nullptr && ctp_info->has_operation())
	|| (interface_info !=  nullptr && interface_info->has_operation());
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Coherenthealth::PortData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_ctrl_created.is_set || is_set(optics_ctrl_created.yfilter)) leaf_name_data.push_back(optics_ctrl_created.get_name_leafdata());
    if (dsp_ctrl_created.is_set || is_set(dsp_ctrl_created.yfilter)) leaf_name_data.push_back(dsp_ctrl_created.get_name_leafdata());
    if (has_pluggable.is_set || is_set(has_pluggable.yfilter)) leaf_name_data.push_back(has_pluggable.get_name_leafdata());
    if (optics_admin_up.is_set || is_set(optics_admin_up.yfilter)) leaf_name_data.push_back(optics_admin_up.get_name_leafdata());
    if (dsp_admin_up.is_set || is_set(dsp_admin_up.yfilter)) leaf_name_data.push_back(dsp_admin_up.get_name_leafdata());
    if (laser_state.is_set || is_set(laser_state.yfilter)) leaf_name_data.push_back(laser_state.get_name_leafdata());
    if (laser_on_pending.is_set || is_set(laser_on_pending.yfilter)) leaf_name_data.push_back(laser_on_pending.get_name_leafdata());
    if (provisioning_needed.is_set || is_set(provisioning_needed.yfilter)) leaf_name_data.push_back(provisioning_needed.get_name_leafdata());
    if (force_reprovision.is_set || is_set(force_reprovision.yfilter)) leaf_name_data.push_back(force_reprovision.get_name_leafdata());
    if (fp_port_idx.is_set || is_set(fp_port_idx.yfilter)) leaf_name_data.push_back(fp_port_idx.get_name_leafdata());
    if (configured_frequency.is_set || is_set(configured_frequency.yfilter)) leaf_name_data.push_back(configured_frequency.get_name_leafdata());
    if (provisioned_frequency.is_set || is_set(provisioned_frequency.yfilter)) leaf_name_data.push_back(provisioned_frequency.get_name_leafdata());
    if (configured_tx_power.is_set || is_set(configured_tx_power.yfilter)) leaf_name_data.push_back(configured_tx_power.get_name_leafdata());
    if (provisioned_tx_power.is_set || is_set(provisioned_tx_power.yfilter)) leaf_name_data.push_back(provisioned_tx_power.get_name_leafdata());
    if (configured_cd_min.is_set || is_set(configured_cd_min.yfilter)) leaf_name_data.push_back(configured_cd_min.get_name_leafdata());
    if (provisioned_cd_min.is_set || is_set(provisioned_cd_min.yfilter)) leaf_name_data.push_back(provisioned_cd_min.get_name_leafdata());
    if (configured_cd_max.is_set || is_set(configured_cd_max.yfilter)) leaf_name_data.push_back(configured_cd_max.get_name_leafdata());
    if (provisioned_cd_max.is_set || is_set(provisioned_cd_max.yfilter)) leaf_name_data.push_back(provisioned_cd_max.get_name_leafdata());
    if (configured_traffic_type.is_set || is_set(configured_traffic_type.yfilter)) leaf_name_data.push_back(configured_traffic_type.get_name_leafdata());
    if (provisioned_traffic_type.is_set || is_set(provisioned_traffic_type.yfilter)) leaf_name_data.push_back(provisioned_traffic_type.get_name_leafdata());
    if (configured_loopback_mode.is_set || is_set(configured_loopback_mode.yfilter)) leaf_name_data.push_back(configured_loopback_mode.get_name_leafdata());
    if (provisioned_loopback_mode.is_set || is_set(provisioned_loopback_mode.yfilter)) leaf_name_data.push_back(provisioned_loopback_mode.get_name_leafdata());
    if (expected_ctp2_led_state.is_set || is_set(expected_ctp2_led_state.yfilter)) leaf_name_data.push_back(expected_ctp2_led_state.get_name_leafdata());
    if (provisioned_ctp2_led_state.is_set || is_set(provisioned_ctp2_led_state.yfilter)) leaf_name_data.push_back(provisioned_ctp2_led_state.get_name_leafdata());
    if (led_op_rc.is_set || is_set(led_op_rc.yfilter)) leaf_name_data.push_back(led_op_rc.get_name_leafdata());
    if (laser_op_rc.is_set || is_set(laser_op_rc.yfilter)) leaf_name_data.push_back(laser_op_rc.get_name_leafdata());
    if (wlen_op_rc.is_set || is_set(wlen_op_rc.yfilter)) leaf_name_data.push_back(wlen_op_rc.get_name_leafdata());
    if (traffic_op_rc.is_set || is_set(traffic_op_rc.yfilter)) leaf_name_data.push_back(traffic_op_rc.get_name_leafdata());
    if (loopback_op_rc.is_set || is_set(loopback_op_rc.yfilter)) leaf_name_data.push_back(loopback_op_rc.get_name_leafdata());
    if (tx_power_op_rc.is_set || is_set(tx_power_op_rc.yfilter)) leaf_name_data.push_back(tx_power_op_rc.get_name_leafdata());
    if (cd_min_op_rc.is_set || is_set(cd_min_op_rc.yfilter)) leaf_name_data.push_back(cd_min_op_rc.get_name_leafdata());
    if (cd_max_op_rc.is_set || is_set(cd_max_op_rc.yfilter)) leaf_name_data.push_back(cd_max_op_rc.get_name_leafdata());
    if (provisioning_failed.is_set || is_set(provisioning_failed.yfilter)) leaf_name_data.push_back(provisioning_failed.get_name_leafdata());
    if (ctp2_hw_alarms.is_set || is_set(ctp2_hw_alarms.yfilter)) leaf_name_data.push_back(ctp2_hw_alarms.get_name_leafdata());
    if (denali_hw_alarms.is_set || is_set(denali_hw_alarms.yfilter)) leaf_name_data.push_back(denali_hw_alarms.get_name_leafdata());
    if (is_pm_port_created_opt.is_set || is_set(is_pm_port_created_opt.yfilter)) leaf_name_data.push_back(is_pm_port_created_opt.get_name_leafdata());
    if (rc_pm_port_opt.is_set || is_set(rc_pm_port_opt.yfilter)) leaf_name_data.push_back(rc_pm_port_opt.get_name_leafdata());
    if (pm_port_state_opt.is_set || is_set(pm_port_state_opt.yfilter)) leaf_name_data.push_back(pm_port_state_opt.get_name_leafdata());
    if (rc_pm_provision_opt.is_set || is_set(rc_pm_provision_opt.yfilter)) leaf_name_data.push_back(rc_pm_provision_opt.get_name_leafdata());
    if (is_alarm_port_created_opt.is_set || is_set(is_alarm_port_created_opt.yfilter)) leaf_name_data.push_back(is_alarm_port_created_opt.get_name_leafdata());
    if (rc_alarm_port_opt.is_set || is_set(rc_alarm_port_opt.yfilter)) leaf_name_data.push_back(rc_alarm_port_opt.get_name_leafdata());
    if (is_pm_port_created_dsp.is_set || is_set(is_pm_port_created_dsp.yfilter)) leaf_name_data.push_back(is_pm_port_created_dsp.get_name_leafdata());
    if (rc_pm_port_dsp.is_set || is_set(rc_pm_port_dsp.yfilter)) leaf_name_data.push_back(rc_pm_port_dsp.get_name_leafdata());
    if (pm_port_state_dsp.is_set || is_set(pm_port_state_dsp.yfilter)) leaf_name_data.push_back(pm_port_state_dsp.get_name_leafdata());
    if (rc_pm_provision_dsp.is_set || is_set(rc_pm_provision_dsp.yfilter)) leaf_name_data.push_back(rc_pm_provision_dsp.get_name_leafdata());
    if (is_alarm_port_created_dsp.is_set || is_set(is_alarm_port_created_dsp.yfilter)) leaf_name_data.push_back(is_alarm_port_created_dsp.get_name_leafdata());
    if (rc_alarm_port_dsp.is_set || is_set(rc_alarm_port_dsp.yfilter)) leaf_name_data.push_back(rc_alarm_port_dsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Coherenthealth::PortData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctp-info")
    {
        if(ctp_info == nullptr)
        {
            ctp_info = std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo>();
        }
        return ctp_info;
    }

    if(child_yang_name == "interface-info")
    {
        if(interface_info == nullptr)
        {
            interface_info = std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo>();
        }
        return interface_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Coherenthealth::PortData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ctp_info != nullptr)
    {
        children["ctp-info"] = ctp_info;
    }

    if(interface_info != nullptr)
    {
        children["interface-info"] = interface_info;
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-ctrl-created")
    {
        optics_ctrl_created = value;
        optics_ctrl_created.value_namespace = name_space;
        optics_ctrl_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp-ctrl-created")
    {
        dsp_ctrl_created = value;
        dsp_ctrl_created.value_namespace = name_space;
        dsp_ctrl_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-pluggable")
    {
        has_pluggable = value;
        has_pluggable.value_namespace = name_space;
        has_pluggable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-admin-up")
    {
        optics_admin_up = value;
        optics_admin_up.value_namespace = name_space;
        optics_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp-admin-up")
    {
        dsp_admin_up = value;
        dsp_admin_up.value_namespace = name_space;
        dsp_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-state")
    {
        laser_state = value;
        laser_state.value_namespace = name_space;
        laser_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-on-pending")
    {
        laser_on_pending = value;
        laser_on_pending.value_namespace = name_space;
        laser_on_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioning-needed")
    {
        provisioning_needed = value;
        provisioning_needed.value_namespace = name_space;
        provisioning_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-reprovision")
    {
        force_reprovision = value;
        force_reprovision.value_namespace = name_space;
        force_reprovision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fp-port-idx")
    {
        fp_port_idx = value;
        fp_port_idx.value_namespace = name_space;
        fp_port_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-frequency")
    {
        configured_frequency = value;
        configured_frequency.value_namespace = name_space;
        configured_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-frequency")
    {
        provisioned_frequency = value;
        provisioned_frequency.value_namespace = name_space;
        provisioned_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-tx-power")
    {
        configured_tx_power = value;
        configured_tx_power.value_namespace = name_space;
        configured_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-tx-power")
    {
        provisioned_tx_power = value;
        provisioned_tx_power.value_namespace = name_space;
        provisioned_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-cd-min")
    {
        configured_cd_min = value;
        configured_cd_min.value_namespace = name_space;
        configured_cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-cd-min")
    {
        provisioned_cd_min = value;
        provisioned_cd_min.value_namespace = name_space;
        provisioned_cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-cd-max")
    {
        configured_cd_max = value;
        configured_cd_max.value_namespace = name_space;
        configured_cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-cd-max")
    {
        provisioned_cd_max = value;
        provisioned_cd_max.value_namespace = name_space;
        provisioned_cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-traffic-type")
    {
        configured_traffic_type = value;
        configured_traffic_type.value_namespace = name_space;
        configured_traffic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-traffic-type")
    {
        provisioned_traffic_type = value;
        provisioned_traffic_type.value_namespace = name_space;
        provisioned_traffic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-loopback-mode")
    {
        configured_loopback_mode = value;
        configured_loopback_mode.value_namespace = name_space;
        configured_loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-loopback-mode")
    {
        provisioned_loopback_mode = value;
        provisioned_loopback_mode.value_namespace = name_space;
        provisioned_loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-ctp2-led-state")
    {
        expected_ctp2_led_state = value;
        expected_ctp2_led_state.value_namespace = name_space;
        expected_ctp2_led_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-ctp2-led-state")
    {
        provisioned_ctp2_led_state = value;
        provisioned_ctp2_led_state.value_namespace = name_space;
        provisioned_ctp2_led_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "led-op-rc")
    {
        led_op_rc = value;
        led_op_rc.value_namespace = name_space;
        led_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-op-rc")
    {
        laser_op_rc = value;
        laser_op_rc.value_namespace = name_space;
        laser_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlen-op-rc")
    {
        wlen_op_rc = value;
        wlen_op_rc.value_namespace = name_space;
        wlen_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-op-rc")
    {
        traffic_op_rc = value;
        traffic_op_rc.value_namespace = name_space;
        traffic_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-op-rc")
    {
        loopback_op_rc = value;
        loopback_op_rc.value_namespace = name_space;
        loopback_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power-op-rc")
    {
        tx_power_op_rc = value;
        tx_power_op_rc.value_namespace = name_space;
        tx_power_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-min-op-rc")
    {
        cd_min_op_rc = value;
        cd_min_op_rc.value_namespace = name_space;
        cd_min_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cd-max-op-rc")
    {
        cd_max_op_rc = value;
        cd_max_op_rc.value_namespace = name_space;
        cd_max_op_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioning-failed")
    {
        provisioning_failed = value;
        provisioning_failed.value_namespace = name_space;
        provisioning_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctp2-hw-alarms")
    {
        ctp2_hw_alarms = value;
        ctp2_hw_alarms.value_namespace = name_space;
        ctp2_hw_alarms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denali-hw-alarms")
    {
        denali_hw_alarms = value;
        denali_hw_alarms.value_namespace = name_space;
        denali_hw_alarms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pm-port-created-opt")
    {
        is_pm_port_created_opt = value;
        is_pm_port_created_opt.value_namespace = name_space;
        is_pm_port_created_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-pm-port-opt")
    {
        rc_pm_port_opt = value;
        rc_pm_port_opt.value_namespace = name_space;
        rc_pm_port_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-port-state-opt")
    {
        pm_port_state_opt = value;
        pm_port_state_opt.value_namespace = name_space;
        pm_port_state_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-pm-provision-opt")
    {
        rc_pm_provision_opt = value;
        rc_pm_provision_opt.value_namespace = name_space;
        rc_pm_provision_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-alarm-port-created-opt")
    {
        is_alarm_port_created_opt = value;
        is_alarm_port_created_opt.value_namespace = name_space;
        is_alarm_port_created_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-alarm-port-opt")
    {
        rc_alarm_port_opt = value;
        rc_alarm_port_opt.value_namespace = name_space;
        rc_alarm_port_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pm-port-created-dsp")
    {
        is_pm_port_created_dsp = value;
        is_pm_port_created_dsp.value_namespace = name_space;
        is_pm_port_created_dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-pm-port-dsp")
    {
        rc_pm_port_dsp = value;
        rc_pm_port_dsp.value_namespace = name_space;
        rc_pm_port_dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-port-state-dsp")
    {
        pm_port_state_dsp = value;
        pm_port_state_dsp.value_namespace = name_space;
        pm_port_state_dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-pm-provision-dsp")
    {
        rc_pm_provision_dsp = value;
        rc_pm_provision_dsp.value_namespace = name_space;
        rc_pm_provision_dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-alarm-port-created-dsp")
    {
        is_alarm_port_created_dsp = value;
        is_alarm_port_created_dsp.value_namespace = name_space;
        is_alarm_port_created_dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rc-alarm-port-dsp")
    {
        rc_alarm_port_dsp = value;
        rc_alarm_port_dsp.value_namespace = name_space;
        rc_alarm_port_dsp.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Coherenthealth::PortData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-ctrl-created")
    {
        optics_ctrl_created.yfilter = yfilter;
    }
    if(value_path == "dsp-ctrl-created")
    {
        dsp_ctrl_created.yfilter = yfilter;
    }
    if(value_path == "has-pluggable")
    {
        has_pluggable.yfilter = yfilter;
    }
    if(value_path == "optics-admin-up")
    {
        optics_admin_up.yfilter = yfilter;
    }
    if(value_path == "dsp-admin-up")
    {
        dsp_admin_up.yfilter = yfilter;
    }
    if(value_path == "laser-state")
    {
        laser_state.yfilter = yfilter;
    }
    if(value_path == "laser-on-pending")
    {
        laser_on_pending.yfilter = yfilter;
    }
    if(value_path == "provisioning-needed")
    {
        provisioning_needed.yfilter = yfilter;
    }
    if(value_path == "force-reprovision")
    {
        force_reprovision.yfilter = yfilter;
    }
    if(value_path == "fp-port-idx")
    {
        fp_port_idx.yfilter = yfilter;
    }
    if(value_path == "configured-frequency")
    {
        configured_frequency.yfilter = yfilter;
    }
    if(value_path == "provisioned-frequency")
    {
        provisioned_frequency.yfilter = yfilter;
    }
    if(value_path == "configured-tx-power")
    {
        configured_tx_power.yfilter = yfilter;
    }
    if(value_path == "provisioned-tx-power")
    {
        provisioned_tx_power.yfilter = yfilter;
    }
    if(value_path == "configured-cd-min")
    {
        configured_cd_min.yfilter = yfilter;
    }
    if(value_path == "provisioned-cd-min")
    {
        provisioned_cd_min.yfilter = yfilter;
    }
    if(value_path == "configured-cd-max")
    {
        configured_cd_max.yfilter = yfilter;
    }
    if(value_path == "provisioned-cd-max")
    {
        provisioned_cd_max.yfilter = yfilter;
    }
    if(value_path == "configured-traffic-type")
    {
        configured_traffic_type.yfilter = yfilter;
    }
    if(value_path == "provisioned-traffic-type")
    {
        provisioned_traffic_type.yfilter = yfilter;
    }
    if(value_path == "configured-loopback-mode")
    {
        configured_loopback_mode.yfilter = yfilter;
    }
    if(value_path == "provisioned-loopback-mode")
    {
        provisioned_loopback_mode.yfilter = yfilter;
    }
    if(value_path == "expected-ctp2-led-state")
    {
        expected_ctp2_led_state.yfilter = yfilter;
    }
    if(value_path == "provisioned-ctp2-led-state")
    {
        provisioned_ctp2_led_state.yfilter = yfilter;
    }
    if(value_path == "led-op-rc")
    {
        led_op_rc.yfilter = yfilter;
    }
    if(value_path == "laser-op-rc")
    {
        laser_op_rc.yfilter = yfilter;
    }
    if(value_path == "wlen-op-rc")
    {
        wlen_op_rc.yfilter = yfilter;
    }
    if(value_path == "traffic-op-rc")
    {
        traffic_op_rc.yfilter = yfilter;
    }
    if(value_path == "loopback-op-rc")
    {
        loopback_op_rc.yfilter = yfilter;
    }
    if(value_path == "tx-power-op-rc")
    {
        tx_power_op_rc.yfilter = yfilter;
    }
    if(value_path == "cd-min-op-rc")
    {
        cd_min_op_rc.yfilter = yfilter;
    }
    if(value_path == "cd-max-op-rc")
    {
        cd_max_op_rc.yfilter = yfilter;
    }
    if(value_path == "provisioning-failed")
    {
        provisioning_failed.yfilter = yfilter;
    }
    if(value_path == "ctp2-hw-alarms")
    {
        ctp2_hw_alarms.yfilter = yfilter;
    }
    if(value_path == "denali-hw-alarms")
    {
        denali_hw_alarms.yfilter = yfilter;
    }
    if(value_path == "is-pm-port-created-opt")
    {
        is_pm_port_created_opt.yfilter = yfilter;
    }
    if(value_path == "rc-pm-port-opt")
    {
        rc_pm_port_opt.yfilter = yfilter;
    }
    if(value_path == "pm-port-state-opt")
    {
        pm_port_state_opt.yfilter = yfilter;
    }
    if(value_path == "rc-pm-provision-opt")
    {
        rc_pm_provision_opt.yfilter = yfilter;
    }
    if(value_path == "is-alarm-port-created-opt")
    {
        is_alarm_port_created_opt.yfilter = yfilter;
    }
    if(value_path == "rc-alarm-port-opt")
    {
        rc_alarm_port_opt.yfilter = yfilter;
    }
    if(value_path == "is-pm-port-created-dsp")
    {
        is_pm_port_created_dsp.yfilter = yfilter;
    }
    if(value_path == "rc-pm-port-dsp")
    {
        rc_pm_port_dsp.yfilter = yfilter;
    }
    if(value_path == "pm-port-state-dsp")
    {
        pm_port_state_dsp.yfilter = yfilter;
    }
    if(value_path == "rc-pm-provision-dsp")
    {
        rc_pm_provision_dsp.yfilter = yfilter;
    }
    if(value_path == "is-alarm-port-created-dsp")
    {
        is_alarm_port_created_dsp.yfilter = yfilter;
    }
    if(value_path == "rc-alarm-port-dsp")
    {
        rc_alarm_port_dsp.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctp-info" || name == "interface-info" || name == "optics-ctrl-created" || name == "dsp-ctrl-created" || name == "has-pluggable" || name == "optics-admin-up" || name == "dsp-admin-up" || name == "laser-state" || name == "laser-on-pending" || name == "provisioning-needed" || name == "force-reprovision" || name == "fp-port-idx" || name == "configured-frequency" || name == "provisioned-frequency" || name == "configured-tx-power" || name == "provisioned-tx-power" || name == "configured-cd-min" || name == "provisioned-cd-min" || name == "configured-cd-max" || name == "provisioned-cd-max" || name == "configured-traffic-type" || name == "provisioned-traffic-type" || name == "configured-loopback-mode" || name == "provisioned-loopback-mode" || name == "expected-ctp2-led-state" || name == "provisioned-ctp2-led-state" || name == "led-op-rc" || name == "laser-op-rc" || name == "wlen-op-rc" || name == "traffic-op-rc" || name == "loopback-op-rc" || name == "tx-power-op-rc" || name == "cd-min-op-rc" || name == "cd-max-op-rc" || name == "provisioning-failed" || name == "ctp2-hw-alarms" || name == "denali-hw-alarms" || name == "is-pm-port-created-opt" || name == "rc-pm-port-opt" || name == "pm-port-state-opt" || name == "rc-pm-provision-opt" || name == "is-alarm-port-created-opt" || name == "rc-alarm-port-opt" || name == "is-pm-port-created-dsp" || name == "rc-pm-port-dsp" || name == "pm-port-state-dsp" || name == "rc-pm-provision-dsp" || name == "is-alarm-port-created-dsp" || name == "rc-alarm-port-dsp")
        return true;
    return false;
}

Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::CtpInfo()
    :
    deviation{YType::str, "deviation"},
    part_number{YType::str, "part-number"},
    serial_number{YType::str, "serial-number"},
    date_code_number{YType::str, "date-code-number"},
    clei_code_number{YType::str, "clei-code-number"},
    vendorname{YType::str, "vendorname"},
    description{YType::str, "description"},
    pid{YType::str, "pid"},
    vid{YType::str, "vid"},
    module_hardware_version_number{YType::uint16, "module-hardware-version-number"},
    module_firmware_running_version_number{YType::uint16, "module-firmware-running-version-number"},
    module_firmware_committed_version_number{YType::uint16, "module-firmware-committed-version-number"},
    ctp_type{YType::uint32, "ctp-type"}
{

    yang_name = "ctp-info"; yang_parent_name = "port-data"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::~CtpInfo()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::has_data() const
{
    return deviation.is_set
	|| part_number.is_set
	|| serial_number.is_set
	|| date_code_number.is_set
	|| clei_code_number.is_set
	|| vendorname.is_set
	|| description.is_set
	|| pid.is_set
	|| vid.is_set
	|| module_hardware_version_number.is_set
	|| module_firmware_running_version_number.is_set
	|| module_firmware_committed_version_number.is_set
	|| ctp_type.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deviation.yfilter)
	|| ydk::is_set(part_number.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(date_code_number.yfilter)
	|| ydk::is_set(clei_code_number.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(module_hardware_version_number.yfilter)
	|| ydk::is_set(module_firmware_running_version_number.yfilter)
	|| ydk::is_set(module_firmware_committed_version_number.yfilter)
	|| ydk::is_set(ctp_type.yfilter);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctp-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deviation.is_set || is_set(deviation.yfilter)) leaf_name_data.push_back(deviation.get_name_leafdata());
    if (part_number.is_set || is_set(part_number.yfilter)) leaf_name_data.push_back(part_number.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (date_code_number.is_set || is_set(date_code_number.yfilter)) leaf_name_data.push_back(date_code_number.get_name_leafdata());
    if (clei_code_number.is_set || is_set(clei_code_number.yfilter)) leaf_name_data.push_back(clei_code_number.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (module_hardware_version_number.is_set || is_set(module_hardware_version_number.yfilter)) leaf_name_data.push_back(module_hardware_version_number.get_name_leafdata());
    if (module_firmware_running_version_number.is_set || is_set(module_firmware_running_version_number.yfilter)) leaf_name_data.push_back(module_firmware_running_version_number.get_name_leafdata());
    if (module_firmware_committed_version_number.is_set || is_set(module_firmware_committed_version_number.yfilter)) leaf_name_data.push_back(module_firmware_committed_version_number.get_name_leafdata());
    if (ctp_type.is_set || is_set(ctp_type.yfilter)) leaf_name_data.push_back(ctp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deviation")
    {
        deviation = value;
        deviation.value_namespace = name_space;
        deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "part-number")
    {
        part_number = value;
        part_number.value_namespace = name_space;
        part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-code-number")
    {
        date_code_number = value;
        date_code_number.value_namespace = name_space;
        date_code_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei-code-number")
    {
        clei_code_number = value;
        clei_code_number.value_namespace = name_space;
        clei_code_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorname")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-hardware-version-number")
    {
        module_hardware_version_number = value;
        module_hardware_version_number.value_namespace = name_space;
        module_hardware_version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-firmware-running-version-number")
    {
        module_firmware_running_version_number = value;
        module_firmware_running_version_number.value_namespace = name_space;
        module_firmware_running_version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-firmware-committed-version-number")
    {
        module_firmware_committed_version_number = value;
        module_firmware_committed_version_number.value_namespace = name_space;
        module_firmware_committed_version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctp-type")
    {
        ctp_type = value;
        ctp_type.value_namespace = name_space;
        ctp_type.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deviation")
    {
        deviation.yfilter = yfilter;
    }
    if(value_path == "part-number")
    {
        part_number.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "date-code-number")
    {
        date_code_number.yfilter = yfilter;
    }
    if(value_path == "clei-code-number")
    {
        clei_code_number.yfilter = yfilter;
    }
    if(value_path == "vendorname")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "module-hardware-version-number")
    {
        module_hardware_version_number.yfilter = yfilter;
    }
    if(value_path == "module-firmware-running-version-number")
    {
        module_firmware_running_version_number.yfilter = yfilter;
    }
    if(value_path == "module-firmware-committed-version-number")
    {
        module_firmware_committed_version_number.yfilter = yfilter;
    }
    if(value_path == "ctp-type")
    {
        ctp_type.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deviation" || name == "part-number" || name == "serial-number" || name == "date-code-number" || name == "clei-code-number" || name == "vendorname" || name == "description" || name == "pid" || name == "vid" || name == "module-hardware-version-number" || name == "module-firmware-running-version-number" || name == "module-firmware-committed-version-number" || name == "ctp-type")
        return true;
    return false;
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::InterfaceInfo()
{

    yang_name = "interface-info"; yang_parent_name = "port-data"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::~InterfaceInfo()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::has_data() const
{
    for (std::size_t index=0; index<eth_data.size(); index++)
    {
        if(eth_data[index]->has_data())
            return true;
    }
    return false;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::has_operation() const
{
    for (std::size_t index=0; index<eth_data.size(); index++)
    {
        if(eth_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eth-data")
    {
        for(auto const & c : eth_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData>();
        c->parent = this;
        eth_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eth_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eth-data")
        return true;
    return false;
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::EthData()
    :
    ifname{YType::str, "ifname"},
    intf_handle{YType::str, "intf-handle"},
    admin_state{YType::str, "admin-state"},
    admin_up{YType::boolean, "admin-up"},
    is_created{YType::boolean, "is-created"}
{

    yang_name = "eth-data"; yang_parent_name = "interface-info"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::~EthData()
{
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::has_data() const
{
    return ifname.is_set
	|| intf_handle.is_set
	|| admin_state.is_set
	|| admin_up.is_set
	|| is_created.is_set;
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(intf_handle.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(admin_up.yfilter)
	|| ydk::is_set(is_created.yfilter);
}

std::string Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eth-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.yfilter)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (admin_up.is_set || is_set(admin_up.yfilter)) leaf_name_data.push_back(admin_up.get_name_leafdata());
    if (is_created.is_set || is_set(is_created.yfilter)) leaf_name_data.push_back(is_created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
        intf_handle.value_namespace = name_space;
        intf_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up")
    {
        admin_up = value;
        admin_up.value_namespace = name_space;
        admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-created")
    {
        is_created = value;
        is_created.value_namespace = name_space;
        is_created.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "intf-handle")
    {
        intf_handle.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "admin-up")
    {
        admin_up.yfilter = yfilter;
    }
    if(value_path == "is-created")
    {
        is_created.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname" || name == "intf-handle" || name == "admin-state" || name == "admin-up" || name == "is-created")
        return true;
    return false;
}

Coherent::Nodes::Node::PortModeAllInfo::PortModeAllInfo()
    :
    idx{YType::uint32, "idx"}
{

    yang_name = "port-mode-all-info"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::PortModeAllInfo::~PortModeAllInfo()
{
}

bool Coherent::Nodes::Node::PortModeAllInfo::has_data() const
{
    for (std::size_t index=0; index<portmode_entry.size(); index++)
    {
        if(portmode_entry[index]->has_data())
            return true;
    }
    return idx.is_set;
}

bool Coherent::Nodes::Node::PortModeAllInfo::has_operation() const
{
    for (std::size_t index=0; index<portmode_entry.size(); index++)
    {
        if(portmode_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter);
}

std::string Coherent::Nodes::Node::PortModeAllInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-mode-all-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::PortModeAllInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::PortModeAllInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "portmode-entry")
    {
        for(auto const & c : portmode_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry>();
        c->parent = this;
        portmode_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::PortModeAllInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : portmode_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Coherent::Nodes::Node::PortModeAllInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::PortModeAllInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::PortModeAllInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portmode-entry" || name == "idx")
        return true;
    return false;
}

Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::PortmodeEntry()
    :
    intf_name{YType::str, "intf-name"},
    speed{YType::str, "speed"},
    fec{YType::str, "fec"},
    diff{YType::str, "diff"},
    modulation{YType::str, "modulation"}
{

    yang_name = "portmode-entry"; yang_parent_name = "port-mode-all-info"; is_top_level_class = false; has_list_ancestor = true;
}

Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::~PortmodeEntry()
{
}

bool Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::has_data() const
{
    return intf_name.is_set
	|| speed.is_set
	|| fec.is_set
	|| diff.is_set
	|| modulation.is_set;
}

bool Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fec.yfilter)
	|| ydk::is_set(diff.yfilter)
	|| ydk::is_set(modulation.yfilter);
}

std::string Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portmode-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (diff.is_set || is_set(diff.yfilter)) leaf_name_data.push_back(diff.get_name_leafdata());
    if (modulation.is_set || is_set(modulation.yfilter)) leaf_name_data.push_back(modulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff")
    {
        diff = value;
        diff.value_namespace = name_space;
        diff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulation")
    {
        modulation = value;
        modulation.value_namespace = name_space;
        modulation.value_namespace_prefix = name_space_prefix;
    }
}

void Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
    if(value_path == "diff")
    {
        diff.yfilter = yfilter;
    }
    if(value_path == "modulation")
    {
        modulation.yfilter = yfilter;
    }
}

bool Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-name" || name == "speed" || name == "fec" || name == "diff" || name == "modulation")
        return true;
    return false;
}


}
}

