
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_np_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_np_oper {

HardwareModuleNp::HardwareModuleNp()
    :
    nodes(std::make_shared<HardwareModuleNp::Nodes>())
{
    nodes->parent = this;

    yang_name = "hardware-module-np"; yang_parent_name = "Cisco-IOS-XR-asr9k-np-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModuleNp::~HardwareModuleNp()
{
}

bool HardwareModuleNp::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModuleNp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModuleNp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModuleNp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void HardwareModuleNp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HardwareModuleNp::clone_ptr() const
{
    return std::make_shared<HardwareModuleNp>();
}

std::string HardwareModuleNp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModuleNp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModuleNp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModuleNp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModuleNp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "hardware-module-np"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleNp::Nodes::~Nodes()
{
}

bool HardwareModuleNp::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleNp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleNp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    nps(std::make_shared<HardwareModuleNp::Nodes::Node::Nps>())
{
    nps->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModuleNp::Nodes::Node::~Node()
{
}

bool HardwareModuleNp::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (nps !=  nullptr && nps->has_data());
}

bool HardwareModuleNp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (nps !=  nullptr && nps->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-np-oper:hardware-module-np/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModuleNp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nps")
    {
        if(nps == nullptr)
        {
            nps = std::make_shared<HardwareModuleNp::Nodes::Node::Nps>();
        }
        return nps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nps != nullptr)
    {
        children["nps"] = nps;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nps" || name == "node-name")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Nps()
    :
    np(this, {"np_name"})
{

    yang_name = "nps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::~Nps()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np.len(); index++)
    {
        if(np[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::has_operation() const
{
    for (std::size_t index=0; index<np.len(); index++)
    {
        if(np[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np>();
        c->parent = this;
        np.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::Np()
    :
    np_name{YType::str, "np-name"}
        ,
    chn_load(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad>())
    , tcam_summary(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary>())
    , counters(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::Counters>())
    , fast_drop(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop>())
{
    chn_load->parent = this;
    tcam_summary->parent = this;
    counters->parent = this;
    fast_drop->parent = this;

    yang_name = "np"; yang_parent_name = "nps"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::~Np()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::has_data() const
{
    if (is_presence_container) return true;
    return np_name.is_set
	|| (chn_load !=  nullptr && chn_load->has_data())
	|| (tcam_summary !=  nullptr && tcam_summary->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (fast_drop !=  nullptr && fast_drop->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(np_name.yfilter)
	|| (chn_load !=  nullptr && chn_load->has_operation())
	|| (tcam_summary !=  nullptr && tcam_summary->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (fast_drop !=  nullptr && fast_drop->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np";
    ADD_KEY_TOKEN(np_name, "np-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (np_name.is_set || is_set(np_name.yfilter)) leaf_name_data.push_back(np_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chn-load")
    {
        if(chn_load == nullptr)
        {
            chn_load = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad>();
        }
        return chn_load;
    }

    if(child_yang_name == "tcam-summary")
    {
        if(tcam_summary == nullptr)
        {
            tcam_summary = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary>();
        }
        return tcam_summary;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "fast-drop")
    {
        if(fast_drop == nullptr)
        {
            fast_drop = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop>();
        }
        return fast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chn_load != nullptr)
    {
        children["chn-load"] = chn_load;
    }

    if(tcam_summary != nullptr)
    {
        children["tcam-summary"] = tcam_summary;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(fast_drop != nullptr)
    {
        children["fast-drop"] = fast_drop;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "np-name")
    {
        np_name = value;
        np_name.value_namespace = name_space;
        np_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "np-name")
    {
        np_name.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chn-load" || name == "tcam-summary" || name == "counters" || name == "fast-drop" || name == "np-name")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::ChnLoad()
    :
    np_chn_load(this, {})
{

    yang_name = "chn-load"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::~ChnLoad()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np_chn_load.len(); index++)
    {
        if(np_chn_load[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::has_operation() const
{
    for (std::size_t index=0; index<np_chn_load.len(); index++)
    {
        if(np_chn_load[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chn-load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-chn-load")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad>();
        c->parent = this;
        np_chn_load.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np_chn_load.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-chn-load")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::NpChnLoad()
    :
    flow_ctr_counter{YType::uint32, "flow-ctr-counter"},
    avg_rfd_usage{YType::uint32, "avg-rfd-usage"},
    peak_rfd_usage{YType::uint32, "peak-rfd-usage"},
    avg_guar_rfd_usage{YType::uint32, "avg-guar-rfd-usage"},
    peak_guar_rfd_usage{YType::uint32, "peak-guar-rfd-usage"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "np-chn-load"; yang_parent_name = "chn-load"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::~NpChnLoad()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::has_data() const
{
    if (is_presence_container) return true;
    return flow_ctr_counter.is_set
	|| avg_rfd_usage.is_set
	|| peak_rfd_usage.is_set
	|| avg_guar_rfd_usage.is_set
	|| peak_guar_rfd_usage.is_set
	|| interface_name.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_ctr_counter.yfilter)
	|| ydk::is_set(avg_rfd_usage.yfilter)
	|| ydk::is_set(peak_rfd_usage.yfilter)
	|| ydk::is_set(avg_guar_rfd_usage.yfilter)
	|| ydk::is_set(peak_guar_rfd_usage.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-chn-load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_ctr_counter.is_set || is_set(flow_ctr_counter.yfilter)) leaf_name_data.push_back(flow_ctr_counter.get_name_leafdata());
    if (avg_rfd_usage.is_set || is_set(avg_rfd_usage.yfilter)) leaf_name_data.push_back(avg_rfd_usage.get_name_leafdata());
    if (peak_rfd_usage.is_set || is_set(peak_rfd_usage.yfilter)) leaf_name_data.push_back(peak_rfd_usage.get_name_leafdata());
    if (avg_guar_rfd_usage.is_set || is_set(avg_guar_rfd_usage.yfilter)) leaf_name_data.push_back(avg_guar_rfd_usage.get_name_leafdata());
    if (peak_guar_rfd_usage.is_set || is_set(peak_guar_rfd_usage.yfilter)) leaf_name_data.push_back(peak_guar_rfd_usage.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-ctr-counter")
    {
        flow_ctr_counter = value;
        flow_ctr_counter.value_namespace = name_space;
        flow_ctr_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-rfd-usage")
    {
        avg_rfd_usage = value;
        avg_rfd_usage.value_namespace = name_space;
        avg_rfd_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rfd-usage")
    {
        peak_rfd_usage = value;
        peak_rfd_usage.value_namespace = name_space;
        peak_rfd_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-guar-rfd-usage")
    {
        avg_guar_rfd_usage = value;
        avg_guar_rfd_usage.value_namespace = name_space;
        avg_guar_rfd_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-guar-rfd-usage")
    {
        peak_guar_rfd_usage = value;
        peak_guar_rfd_usage.value_namespace = name_space;
        peak_guar_rfd_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-ctr-counter")
    {
        flow_ctr_counter.yfilter = yfilter;
    }
    if(value_path == "avg-rfd-usage")
    {
        avg_rfd_usage.yfilter = yfilter;
    }
    if(value_path == "peak-rfd-usage")
    {
        peak_rfd_usage.yfilter = yfilter;
    }
    if(value_path == "avg-guar-rfd-usage")
    {
        avg_guar_rfd_usage.yfilter = yfilter;
    }
    if(value_path == "peak-guar-rfd-usage")
    {
        peak_guar_rfd_usage.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::ChnLoad::NpChnLoad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-ctr-counter" || name == "avg-rfd-usage" || name == "peak-rfd-usage" || name == "avg-guar-rfd-usage" || name == "peak-guar-rfd-usage" || name == "interface-name")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamSummary()
    :
    internal_tcam_info(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo>())
    , tcam_info(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo>())
{
    internal_tcam_info->parent = this;
    tcam_info->parent = this;

    yang_name = "tcam-summary"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::~TcamSummary()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::has_data() const
{
    if (is_presence_container) return true;
    return (internal_tcam_info !=  nullptr && internal_tcam_info->has_data())
	|| (tcam_info !=  nullptr && tcam_info->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::has_operation() const
{
    return is_set(yfilter)
	|| (internal_tcam_info !=  nullptr && internal_tcam_info->has_operation())
	|| (tcam_info !=  nullptr && tcam_info->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-tcam-info")
    {
        if(internal_tcam_info == nullptr)
        {
            internal_tcam_info = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo>();
        }
        return internal_tcam_info;
    }

    if(child_yang_name == "tcam-info")
    {
        if(tcam_info == nullptr)
        {
            tcam_info = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo>();
        }
        return tcam_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal_tcam_info != nullptr)
    {
        children["internal-tcam-info"] = internal_tcam_info;
    }

    if(tcam_info != nullptr)
    {
        children["tcam-info"] = tcam_info;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-tcam-info" || name == "tcam-info")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::InternalTcamInfo()
    :
    tcam_lt_ods2(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2>())
    , tcam_lt_ods8(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8>())
    , tcam_lt_l2(this, {})
{
    tcam_lt_ods2->parent = this;
    tcam_lt_ods8->parent = this;

    yang_name = "internal-tcam-info"; yang_parent_name = "tcam-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::~InternalTcamInfo()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcam_lt_l2.len(); index++)
    {
        if(tcam_lt_l2[index]->has_data())
            return true;
    }
    return (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_data())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::has_operation() const
{
    for (std::size_t index=0; index<tcam_lt_l2.len(); index++)
    {
        if(tcam_lt_l2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_operation())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-tcam-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-lt-ods2")
    {
        if(tcam_lt_ods2 == nullptr)
        {
            tcam_lt_ods2 = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2>();
        }
        return tcam_lt_ods2;
    }

    if(child_yang_name == "tcam-lt-ods8")
    {
        if(tcam_lt_ods8 == nullptr)
        {
            tcam_lt_ods8 = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8>();
        }
        return tcam_lt_ods8;
    }

    if(child_yang_name == "tcam-lt-l2")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2>();
        c->parent = this;
        tcam_lt_l2.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcam_lt_ods2 != nullptr)
    {
        children["tcam-lt-ods2"] = tcam_lt_ods2;
    }

    if(tcam_lt_ods8 != nullptr)
    {
        children["tcam-lt-ods8"] = tcam_lt_ods8;
    }

    count = 0;
    for (auto c : tcam_lt_l2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-lt-ods2" || name == "tcam-lt-ods8" || name == "tcam-lt-l2")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::TcamLtOds2()
    :
    max_entries{YType::uint32, "max-entries"},
    free_entries{YType::uint32, "free-entries"}
        ,
    app_id_ifib(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib>())
    , app_id_qos(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos>())
    , app_id_acl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl>())
    , app_id_afmon(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon>())
    , app_id_li(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi>())
    , app_id_pbr(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr>())
    , application_edpl_entry(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry>())
{
    app_id_ifib->parent = this;
    app_id_qos->parent = this;
    app_id_acl->parent = this;
    app_id_afmon->parent = this;
    app_id_li->parent = this;
    app_id_pbr->parent = this;
    application_edpl_entry->parent = this;

    yang_name = "tcam-lt-ods2"; yang_parent_name = "internal-tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::~TcamLtOds2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::has_data() const
{
    if (is_presence_container) return true;
    return max_entries.is_set
	|| free_entries.is_set
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_entries.yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_entries.is_set || is_set(max_entries.yfilter)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib == nullptr)
        {
            app_id_ifib = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib>();
        }
        return app_id_ifib;
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos == nullptr)
        {
            app_id_qos = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos>();
        }
        return app_id_qos;
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl == nullptr)
        {
            app_id_acl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl>();
        }
        return app_id_acl;
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon == nullptr)
        {
            app_id_afmon = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon>();
        }
        return app_id_afmon;
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li == nullptr)
        {
            app_id_li = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi>();
        }
        return app_id_li;
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr == nullptr)
        {
            app_id_pbr = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr>();
        }
        return app_id_pbr;
    }

    if(child_yang_name == "application-edpl-entry")
    {
        if(application_edpl_entry == nullptr)
        {
            application_edpl_entry = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry>();
        }
        return application_edpl_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(app_id_ifib != nullptr)
    {
        children["app-id-ifib"] = app_id_ifib;
    }

    if(app_id_qos != nullptr)
    {
        children["app-id-qos"] = app_id_qos;
    }

    if(app_id_acl != nullptr)
    {
        children["app-id-acl"] = app_id_acl;
    }

    if(app_id_afmon != nullptr)
    {
        children["app-id-afmon"] = app_id_afmon;
    }

    if(app_id_li != nullptr)
    {
        children["app-id-li"] = app_id_li;
    }

    if(app_id_pbr != nullptr)
    {
        children["app-id-pbr"] = app_id_pbr;
    }

    if(application_edpl_entry != nullptr)
    {
        children["application-edpl-entry"] = application_edpl_entry;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-entries")
    {
        max_entries = value;
        max_entries.value_namespace = name_space;
        max_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-entries")
    {
        max_entries.yfilter = yfilter;
    }
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-id-ifib" || name == "app-id-qos" || name == "app-id-acl" || name == "app-id-afmon" || name == "app-id-li" || name == "app-id-pbr" || name == "application-edpl-entry" || name == "max-entries" || name == "free-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::AppIdIfib()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::AppIdQos()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::AppIdAcl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::AppIdAfmon()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdAfmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::AppIdLi()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdLi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::AppIdPbr()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::AppIdPbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::ApplicationEdplEntry()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "application-edpl-entry"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::~ApplicationEdplEntry()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-edpl-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds2::ApplicationEdplEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::TcamLtOds8()
    :
    max_entries{YType::uint32, "max-entries"},
    free_entries{YType::uint32, "free-entries"}
        ,
    app_id_ifib(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib>())
    , app_id_qos(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos>())
    , app_id_acl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl>())
    , app_id_afmon(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon>())
    , app_id_li(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi>())
    , app_id_pbr(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr>())
    , application_edpl_entry(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry>())
{
    app_id_ifib->parent = this;
    app_id_qos->parent = this;
    app_id_acl->parent = this;
    app_id_afmon->parent = this;
    app_id_li->parent = this;
    app_id_pbr->parent = this;
    application_edpl_entry->parent = this;

    yang_name = "tcam-lt-ods8"; yang_parent_name = "internal-tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::~TcamLtOds8()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::has_data() const
{
    if (is_presence_container) return true;
    return max_entries.is_set
	|| free_entries.is_set
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_entries.yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (application_edpl_entry !=  nullptr && application_edpl_entry->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods8";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_entries.is_set || is_set(max_entries.yfilter)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib == nullptr)
        {
            app_id_ifib = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib>();
        }
        return app_id_ifib;
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos == nullptr)
        {
            app_id_qos = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos>();
        }
        return app_id_qos;
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl == nullptr)
        {
            app_id_acl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl>();
        }
        return app_id_acl;
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon == nullptr)
        {
            app_id_afmon = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon>();
        }
        return app_id_afmon;
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li == nullptr)
        {
            app_id_li = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi>();
        }
        return app_id_li;
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr == nullptr)
        {
            app_id_pbr = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr>();
        }
        return app_id_pbr;
    }

    if(child_yang_name == "application-edpl-entry")
    {
        if(application_edpl_entry == nullptr)
        {
            application_edpl_entry = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry>();
        }
        return application_edpl_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(app_id_ifib != nullptr)
    {
        children["app-id-ifib"] = app_id_ifib;
    }

    if(app_id_qos != nullptr)
    {
        children["app-id-qos"] = app_id_qos;
    }

    if(app_id_acl != nullptr)
    {
        children["app-id-acl"] = app_id_acl;
    }

    if(app_id_afmon != nullptr)
    {
        children["app-id-afmon"] = app_id_afmon;
    }

    if(app_id_li != nullptr)
    {
        children["app-id-li"] = app_id_li;
    }

    if(app_id_pbr != nullptr)
    {
        children["app-id-pbr"] = app_id_pbr;
    }

    if(application_edpl_entry != nullptr)
    {
        children["application-edpl-entry"] = application_edpl_entry;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-entries")
    {
        max_entries = value;
        max_entries.value_namespace = name_space;
        max_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-entries")
    {
        max_entries.yfilter = yfilter;
    }
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-id-ifib" || name == "app-id-qos" || name == "app-id-acl" || name == "app-id-afmon" || name == "app-id-li" || name == "app-id-pbr" || name == "application-edpl-entry" || name == "max-entries" || name == "free-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::AppIdIfib()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::AppIdQos()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::AppIdAcl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::AppIdAfmon()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdAfmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::AppIdLi()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdLi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::AppIdPbr()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::AppIdPbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::ApplicationEdplEntry()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    total_used_entries{YType::uint32, "total-used-entries"},
    total_allocated_entries{YType::uint32, "total-allocated-entries"}
{

    yang_name = "application-edpl-entry"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::~ApplicationEdplEntry()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| total_used_entries.is_set
	|| total_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(total_used_entries.yfilter)
	|| ydk::is_set(total_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-edpl-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (total_used_entries.is_set || is_set(total_used_entries.yfilter)) leaf_name_data.push_back(total_used_entries.get_name_leafdata());
    if (total_allocated_entries.is_set || is_set(total_allocated_entries.yfilter)) leaf_name_data.push_back(total_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries = value;
        total_used_entries.value_namespace = name_space;
        total_used_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries = value;
        total_allocated_entries.value_namespace = name_space;
        total_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "total-used-entries")
    {
        total_used_entries.yfilter = yfilter;
    }
    if(value_path == "total-allocated-entries")
    {
        total_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtOds8::ApplicationEdplEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "total-used-entries" || name == "total-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::TcamLtL2()
    :
    partition_id{YType::uint32, "partition-id"},
    valid_entries{YType::uint32, "valid-entries"},
    free_entries{YType::uint32, "free-entries"}
{

    yang_name = "tcam-lt-l2"; yang_parent_name = "internal-tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::~TcamLtL2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::has_data() const
{
    if (is_presence_container) return true;
    return partition_id.is_set
	|| valid_entries.is_set
	|| free_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partition_id.yfilter)
	|| ydk::is_set(valid_entries.yfilter)
	|| ydk::is_set(free_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partition_id.is_set || is_set(partition_id.yfilter)) leaf_name_data.push_back(partition_id.get_name_leafdata());
    if (valid_entries.is_set || is_set(valid_entries.yfilter)) leaf_name_data.push_back(valid_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partition-id")
    {
        partition_id = value;
        partition_id.value_namespace = name_space;
        partition_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-entries")
    {
        valid_entries = value;
        valid_entries.value_namespace = name_space;
        valid_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partition-id")
    {
        partition_id.yfilter = yfilter;
    }
    if(value_path == "valid-entries")
    {
        valid_entries.yfilter = yfilter;
    }
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::InternalTcamInfo::TcamLtL2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partition-id" || name == "valid-entries" || name == "free-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamInfo()
    :
    tcam_lt_ods2(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2>())
    , tcam_lt_ods8(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8>())
    , tcam_lt_l2(this, {})
{
    tcam_lt_ods2->parent = this;
    tcam_lt_ods8->parent = this;

    yang_name = "tcam-info"; yang_parent_name = "tcam-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::~TcamInfo()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcam_lt_l2.len(); index++)
    {
        if(tcam_lt_l2[index]->has_data())
            return true;
    }
    return (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_data())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::has_operation() const
{
    for (std::size_t index=0; index<tcam_lt_l2.len(); index++)
    {
        if(tcam_lt_l2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tcam_lt_ods2 !=  nullptr && tcam_lt_ods2->has_operation())
	|| (tcam_lt_ods8 !=  nullptr && tcam_lt_ods8->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-lt-ods2")
    {
        if(tcam_lt_ods2 == nullptr)
        {
            tcam_lt_ods2 = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2>();
        }
        return tcam_lt_ods2;
    }

    if(child_yang_name == "tcam-lt-ods8")
    {
        if(tcam_lt_ods8 == nullptr)
        {
            tcam_lt_ods8 = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8>();
        }
        return tcam_lt_ods8;
    }

    if(child_yang_name == "tcam-lt-l2")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2>();
        c->parent = this;
        tcam_lt_l2.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcam_lt_ods2 != nullptr)
    {
        children["tcam-lt-ods2"] = tcam_lt_ods2;
    }

    if(tcam_lt_ods8 != nullptr)
    {
        children["tcam-lt-ods8"] = tcam_lt_ods8;
    }

    count = 0;
    for (auto c : tcam_lt_l2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-lt-ods2" || name == "tcam-lt-ods8" || name == "tcam-lt-l2")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::TcamLtOds2()
    :
    free_entries{YType::uint32, "free-entries"},
    reserved_entries{YType::uint32, "reserved-entries"}
        ,
    acl_common(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon>())
    , app_id_ifib(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib>())
    , app_id_qos(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos>())
    , app_id_acl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl>())
    , app_id_afmon(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon>())
    , app_id_li(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi>())
    , app_id_pbr(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr>())
    , app_id_edpl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl>())
{
    acl_common->parent = this;
    app_id_ifib->parent = this;
    app_id_qos->parent = this;
    app_id_acl->parent = this;
    app_id_afmon->parent = this;
    app_id_li->parent = this;
    app_id_pbr->parent = this;
    app_id_edpl->parent = this;

    yang_name = "tcam-lt-ods2"; yang_parent_name = "tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::~TcamLtOds2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::has_data() const
{
    if (is_presence_container) return true;
    return free_entries.is_set
	|| reserved_entries.is_set
	|| (acl_common !=  nullptr && acl_common->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| ydk::is_set(reserved_entries.yfilter)
	|| (acl_common !=  nullptr && acl_common->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (reserved_entries.is_set || is_set(reserved_entries.yfilter)) leaf_name_data.push_back(reserved_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-common")
    {
        if(acl_common == nullptr)
        {
            acl_common = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon>();
        }
        return acl_common;
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib == nullptr)
        {
            app_id_ifib = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib>();
        }
        return app_id_ifib;
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos == nullptr)
        {
            app_id_qos = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos>();
        }
        return app_id_qos;
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl == nullptr)
        {
            app_id_acl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl>();
        }
        return app_id_acl;
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon == nullptr)
        {
            app_id_afmon = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon>();
        }
        return app_id_afmon;
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li == nullptr)
        {
            app_id_li = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi>();
        }
        return app_id_li;
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr == nullptr)
        {
            app_id_pbr = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr>();
        }
        return app_id_pbr;
    }

    if(child_yang_name == "app-id-edpl")
    {
        if(app_id_edpl == nullptr)
        {
            app_id_edpl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl>();
        }
        return app_id_edpl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_common != nullptr)
    {
        children["acl-common"] = acl_common;
    }

    if(app_id_ifib != nullptr)
    {
        children["app-id-ifib"] = app_id_ifib;
    }

    if(app_id_qos != nullptr)
    {
        children["app-id-qos"] = app_id_qos;
    }

    if(app_id_acl != nullptr)
    {
        children["app-id-acl"] = app_id_acl;
    }

    if(app_id_afmon != nullptr)
    {
        children["app-id-afmon"] = app_id_afmon;
    }

    if(app_id_li != nullptr)
    {
        children["app-id-li"] = app_id_li;
    }

    if(app_id_pbr != nullptr)
    {
        children["app-id-pbr"] = app_id_pbr;
    }

    if(app_id_edpl != nullptr)
    {
        children["app-id-edpl"] = app_id_edpl;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries = value;
        reserved_entries.value_namespace = name_space;
        reserved_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-common" || name == "app-id-ifib" || name == "app-id-qos" || name == "app-id-acl" || name == "app-id-afmon" || name == "app-id-li" || name == "app-id-pbr" || name == "app-id-edpl" || name == "free-entries" || name == "reserved-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::AclCommon()
    :
    free_entries{YType::uint32, "free-entries"},
    allocated_entries{YType::uint32, "allocated-entries"}
{

    yang_name = "acl-common"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::~AclCommon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::has_data() const
{
    if (is_presence_container) return true;
    return free_entries.is_set
	|| allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| ydk::is_set(allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (allocated_entries.is_set || is_set(allocated_entries.yfilter)) leaf_name_data.push_back(allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-entries")
    {
        allocated_entries = value;
        allocated_entries.value_namespace = name_space;
        allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
    if(value_path == "allocated-entries")
    {
        allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AclCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-entries" || name == "allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::AppIdIfib()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::AppIdQos()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::AppIdAcl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::AppIdAfmon()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdAfmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::AppIdLi()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdLi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::AppIdPbr()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdPbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::AppIdEdpl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-edpl"; yang_parent_name = "tcam-lt-ods2"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::~AppIdEdpl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-edpl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds2::AppIdEdpl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::TcamLtOds8()
    :
    free_entries{YType::uint32, "free-entries"},
    reserved_entries{YType::uint32, "reserved-entries"}
        ,
    acl_common(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon>())
    , app_id_ifib(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib>())
    , app_id_qos(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos>())
    , app_id_acl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl>())
    , app_id_afmon(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon>())
    , app_id_li(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi>())
    , app_id_pbr(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr>())
    , app_id_edpl(std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl>())
{
    acl_common->parent = this;
    app_id_ifib->parent = this;
    app_id_qos->parent = this;
    app_id_acl->parent = this;
    app_id_afmon->parent = this;
    app_id_li->parent = this;
    app_id_pbr->parent = this;
    app_id_edpl->parent = this;

    yang_name = "tcam-lt-ods8"; yang_parent_name = "tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::~TcamLtOds8()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::has_data() const
{
    if (is_presence_container) return true;
    return free_entries.is_set
	|| reserved_entries.is_set
	|| (acl_common !=  nullptr && acl_common->has_data())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_data())
	|| (app_id_qos !=  nullptr && app_id_qos->has_data())
	|| (app_id_acl !=  nullptr && app_id_acl->has_data())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_data())
	|| (app_id_li !=  nullptr && app_id_li->has_data())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_data())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_data());
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| ydk::is_set(reserved_entries.yfilter)
	|| (acl_common !=  nullptr && acl_common->has_operation())
	|| (app_id_ifib !=  nullptr && app_id_ifib->has_operation())
	|| (app_id_qos !=  nullptr && app_id_qos->has_operation())
	|| (app_id_acl !=  nullptr && app_id_acl->has_operation())
	|| (app_id_afmon !=  nullptr && app_id_afmon->has_operation())
	|| (app_id_li !=  nullptr && app_id_li->has_operation())
	|| (app_id_pbr !=  nullptr && app_id_pbr->has_operation())
	|| (app_id_edpl !=  nullptr && app_id_edpl->has_operation());
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-ods8";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (reserved_entries.is_set || is_set(reserved_entries.yfilter)) leaf_name_data.push_back(reserved_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-common")
    {
        if(acl_common == nullptr)
        {
            acl_common = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon>();
        }
        return acl_common;
    }

    if(child_yang_name == "app-id-ifib")
    {
        if(app_id_ifib == nullptr)
        {
            app_id_ifib = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib>();
        }
        return app_id_ifib;
    }

    if(child_yang_name == "app-id-qos")
    {
        if(app_id_qos == nullptr)
        {
            app_id_qos = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos>();
        }
        return app_id_qos;
    }

    if(child_yang_name == "app-id-acl")
    {
        if(app_id_acl == nullptr)
        {
            app_id_acl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl>();
        }
        return app_id_acl;
    }

    if(child_yang_name == "app-id-afmon")
    {
        if(app_id_afmon == nullptr)
        {
            app_id_afmon = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon>();
        }
        return app_id_afmon;
    }

    if(child_yang_name == "app-id-li")
    {
        if(app_id_li == nullptr)
        {
            app_id_li = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi>();
        }
        return app_id_li;
    }

    if(child_yang_name == "app-id-pbr")
    {
        if(app_id_pbr == nullptr)
        {
            app_id_pbr = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr>();
        }
        return app_id_pbr;
    }

    if(child_yang_name == "app-id-edpl")
    {
        if(app_id_edpl == nullptr)
        {
            app_id_edpl = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl>();
        }
        return app_id_edpl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_common != nullptr)
    {
        children["acl-common"] = acl_common;
    }

    if(app_id_ifib != nullptr)
    {
        children["app-id-ifib"] = app_id_ifib;
    }

    if(app_id_qos != nullptr)
    {
        children["app-id-qos"] = app_id_qos;
    }

    if(app_id_acl != nullptr)
    {
        children["app-id-acl"] = app_id_acl;
    }

    if(app_id_afmon != nullptr)
    {
        children["app-id-afmon"] = app_id_afmon;
    }

    if(app_id_li != nullptr)
    {
        children["app-id-li"] = app_id_li;
    }

    if(app_id_pbr != nullptr)
    {
        children["app-id-pbr"] = app_id_pbr;
    }

    if(app_id_edpl != nullptr)
    {
        children["app-id-edpl"] = app_id_edpl;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries = value;
        reserved_entries.value_namespace = name_space;
        reserved_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
    if(value_path == "reserved-entries")
    {
        reserved_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-common" || name == "app-id-ifib" || name == "app-id-qos" || name == "app-id-acl" || name == "app-id-afmon" || name == "app-id-li" || name == "app-id-pbr" || name == "app-id-edpl" || name == "free-entries" || name == "reserved-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::AclCommon()
    :
    free_entries{YType::uint32, "free-entries"},
    allocated_entries{YType::uint32, "allocated-entries"}
{

    yang_name = "acl-common"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::~AclCommon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::has_data() const
{
    if (is_presence_container) return true;
    return free_entries.is_set
	|| allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_entries.yfilter)
	|| ydk::is_set(allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());
    if (allocated_entries.is_set || is_set(allocated_entries.yfilter)) leaf_name_data.push_back(allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-entries")
    {
        allocated_entries = value;
        allocated_entries.value_namespace = name_space;
        allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
    if(value_path == "allocated-entries")
    {
        allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AclCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-entries" || name == "allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::AppIdIfib()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-ifib"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::~AppIdIfib()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::AppIdQos()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-qos"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::~AppIdQos()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::AppIdAcl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-acl"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::~AppIdAcl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::AppIdAfmon()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-afmon"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::~AppIdAfmon()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-afmon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdAfmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::AppIdLi()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-li"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::~AppIdLi()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-li";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdLi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::AppIdPbr()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-pbr"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::~AppIdPbr()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdPbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::AppIdEdpl()
    :
    num_vmr_ids{YType::uint32, "num-vmr-ids"},
    num_active_entries{YType::uint32, "num-active-entries"},
    num_allocated_entries{YType::uint32, "num-allocated-entries"}
{

    yang_name = "app-id-edpl"; yang_parent_name = "tcam-lt-ods8"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::~AppIdEdpl()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::has_data() const
{
    if (is_presence_container) return true;
    return num_vmr_ids.is_set
	|| num_active_entries.is_set
	|| num_allocated_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_vmr_ids.yfilter)
	|| ydk::is_set(num_active_entries.yfilter)
	|| ydk::is_set(num_allocated_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-id-edpl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_vmr_ids.is_set || is_set(num_vmr_ids.yfilter)) leaf_name_data.push_back(num_vmr_ids.get_name_leafdata());
    if (num_active_entries.is_set || is_set(num_active_entries.yfilter)) leaf_name_data.push_back(num_active_entries.get_name_leafdata());
    if (num_allocated_entries.is_set || is_set(num_allocated_entries.yfilter)) leaf_name_data.push_back(num_allocated_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids = value;
        num_vmr_ids.value_namespace = name_space;
        num_vmr_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries = value;
        num_active_entries.value_namespace = name_space;
        num_active_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries = value;
        num_allocated_entries.value_namespace = name_space;
        num_allocated_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-vmr-ids")
    {
        num_vmr_ids.yfilter = yfilter;
    }
    if(value_path == "num-active-entries")
    {
        num_active_entries.yfilter = yfilter;
    }
    if(value_path == "num-allocated-entries")
    {
        num_allocated_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtOds8::AppIdEdpl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-vmr-ids" || name == "num-active-entries" || name == "num-allocated-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::TcamLtL2()
    :
    partition_id{YType::uint32, "partition-id"},
    priority{YType::uint32, "priority"},
    valid_entries{YType::uint32, "valid-entries"},
    free_entries{YType::uint32, "free-entries"}
{

    yang_name = "tcam-lt-l2"; yang_parent_name = "tcam-info"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::~TcamLtL2()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::has_data() const
{
    if (is_presence_container) return true;
    return partition_id.is_set
	|| priority.is_set
	|| valid_entries.is_set
	|| free_entries.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partition_id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(valid_entries.yfilter)
	|| ydk::is_set(free_entries.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-lt-l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partition_id.is_set || is_set(partition_id.yfilter)) leaf_name_data.push_back(partition_id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (valid_entries.is_set || is_set(valid_entries.yfilter)) leaf_name_data.push_back(valid_entries.get_name_leafdata());
    if (free_entries.is_set || is_set(free_entries.yfilter)) leaf_name_data.push_back(free_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partition-id")
    {
        partition_id = value;
        partition_id.value_namespace = name_space;
        partition_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-entries")
    {
        valid_entries = value;
        valid_entries.value_namespace = name_space;
        valid_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-entries")
    {
        free_entries = value;
        free_entries.value_namespace = name_space;
        free_entries.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partition-id")
    {
        partition_id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "valid-entries")
    {
        valid_entries.yfilter = yfilter;
    }
    if(value_path == "free-entries")
    {
        free_entries.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::TcamSummary::TcamInfo::TcamLtL2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partition-id" || name == "priority" || name == "valid-entries" || name == "free-entries")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::Counters()
    :
    np_counter(this, {})
{

    yang_name = "counters"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::~Counters()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np_counter.len(); index++)
    {
        if(np_counter[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::has_operation() const
{
    for (std::size_t index=0; index<np_counter.len(); index++)
    {
        if(np_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-counter")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter>();
        c->parent = this;
        np_counter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np_counter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-counter")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::NpCounter()
    :
    counter_index{YType::uint32, "counter-index"},
    counter_value{YType::uint64, "counter-value"},
    rate{YType::uint32, "rate"},
    counter_type{YType::str, "counter-type"},
    counter_name{YType::str, "counter-name"}
{

    yang_name = "np-counter"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::~NpCounter()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::has_data() const
{
    if (is_presence_container) return true;
    return counter_index.is_set
	|| counter_value.is_set
	|| rate.is_set
	|| counter_type.is_set
	|| counter_name.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_index.yfilter)
	|| ydk::is_set(counter_value.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(counter_type.yfilter)
	|| ydk::is_set(counter_name.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_index.is_set || is_set(counter_index.yfilter)) leaf_name_data.push_back(counter_index.get_name_leafdata());
    if (counter_value.is_set || is_set(counter_value.yfilter)) leaf_name_data.push_back(counter_value.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (counter_type.is_set || is_set(counter_type.yfilter)) leaf_name_data.push_back(counter_type.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-index")
    {
        counter_index = value;
        counter_index.value_namespace = name_space;
        counter_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-value")
    {
        counter_value = value;
        counter_value.value_namespace = name_space;
        counter_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-type")
    {
        counter_type = value;
        counter_type.value_namespace = name_space;
        counter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-index")
    {
        counter_index.yfilter = yfilter;
    }
    if(value_path == "counter-value")
    {
        counter_value.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "counter-type")
    {
        counter_type.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::Counters::NpCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-index" || name == "counter-value" || name == "rate" || name == "counter-type" || name == "counter-name")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::FastDrop()
    :
    np_fast_drop(this, {})
{

    yang_name = "fast-drop"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::~FastDrop()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<np_fast_drop.len(); index++)
    {
        if(np_fast_drop[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::has_operation() const
{
    for (std::size_t index=0; index<np_fast_drop.len(); index++)
    {
        if(np_fast_drop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np-fast-drop")
    {
        auto c = std::make_shared<HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop>();
        c->parent = this;
        np_fast_drop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : np_fast_drop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np-fast-drop")
        return true;
    return false;
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::NpFastDrop()
    :
    interface_name{YType::str, "interface-name"},
    counter_value{YType::uint64, "counter-value"}
{

    yang_name = "np-fast-drop"; yang_parent_name = "fast-drop"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::~NpFastDrop()
{
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| counter_value.is_set;
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(counter_value.yfilter);
}

std::string HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np-fast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (counter_value.is_set || is_set(counter_value.yfilter)) leaf_name_data.push_back(counter_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-value")
    {
        counter_value = value;
        counter_value.value_namespace = name_space;
        counter_value.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "counter-value")
    {
        counter_value.yfilter = yfilter;
    }
}

bool HardwareModuleNp::Nodes::Node::Nps::Np::FastDrop::NpFastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "counter-value")
        return true;
    return false;
}


}
}

