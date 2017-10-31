
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_prm_server_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_prm_server_oper {

HardwareModule::HardwareModule()
    :
    nodes(std::make_shared<HardwareModule::Nodes>())
{
    nodes->parent = this;

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-prm-server-oper"; is_top_level_class = true; has_list_ancestor = false;
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool HardwareModule::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<HardwareModule::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

HardwareModule::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false;
}

HardwareModule::Nodes::~Nodes()
{
}

bool HardwareModule::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<HardwareModule::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModule::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    np(std::make_shared<HardwareModule::Nodes::Node::Np>())
{
    np->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

HardwareModule::Nodes::Node::~Node()
{
}

bool HardwareModule::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (np !=  nullptr && np->has_data());
}

bool HardwareModule::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (np !=  nullptr && np->has_operation());
}

std::string HardwareModule::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:hardware-module/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "np")
    {
        if(np == nullptr)
        {
            np = std::make_shared<HardwareModule::Nodes::Node::Np>();
        }
        return np;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(np != nullptr)
    {
        children["np"] = np;
    }

    return children;
}

void HardwareModule::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HardwareModule::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "np" || name == "node-name")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::Np()
    :
    cpu(std::make_shared<HardwareModule::Nodes::Node::Np::Cpu>())
	,platform_drop(std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop>())
{
    cpu->parent = this;
    platform_drop->parent = this;

    yang_name = "np"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::~Np()
{
}

bool HardwareModule::Nodes::Node::Np::has_data() const
{
    return (cpu !=  nullptr && cpu->has_data())
	|| (platform_drop !=  nullptr && platform_drop->has_data());
}

bool HardwareModule::Nodes::Node::Np::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (platform_drop !=  nullptr && platform_drop->has_operation());
}

std::string HardwareModule::Nodes::Node::Np::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "np";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<HardwareModule::Nodes::Node::Np::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "platform-drop")
    {
        if(platform_drop == nullptr)
        {
            platform_drop = std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop>();
        }
        return platform_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    if(platform_drop != nullptr)
    {
        children["platform-drop"] = platform_drop;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "platform-drop")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::Cpu::Cpu()
    :
    indexes(std::make_shared<HardwareModule::Nodes::Node::Np::Cpu::Indexes>())
{
    indexes->parent = this;

    yang_name = "cpu"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::Cpu::~Cpu()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::has_data() const
{
    return (indexes !=  nullptr && indexes->has_data());
}

bool HardwareModule::Nodes::Node::Np::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (indexes !=  nullptr && indexes->has_operation());
}

std::string HardwareModule::Nodes::Node::Np::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<HardwareModule::Nodes::Node::Np::Cpu::Indexes>();
        }
        return indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indexes")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Indexes()
{

    yang_name = "indexes"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::~Indexes()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::Cpu::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::Index_()
    :
    index_{YType::int32, "index"},
    cos_q_name{YType::str, "cos-q-name"},
    cos_q{YType::uint8, "cos-q"},
    rx_channel{YType::uint32, "rx-channel"},
    flow_rate{YType::uint32, "flow-rate"},
    burst{YType::uint32, "burst"},
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::~Index_()
{
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::has_data() const
{
    return index_.is_set
	|| cos_q_name.is_set
	|| cos_q.is_set
	|| rx_channel.is_set
	|| flow_rate.is_set
	|| burst.is_set
	|| accepted.is_set
	|| dropped.is_set;
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(cos_q_name.yfilter)
	|| ydk::is_set(cos_q.yfilter)
	|| ydk::is_set(rx_channel.yfilter)
	|| ydk::is_set(flow_rate.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter);
}

std::string HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (cos_q_name.is_set || is_set(cos_q_name.yfilter)) leaf_name_data.push_back(cos_q_name.get_name_leafdata());
    if (cos_q.is_set || is_set(cos_q.yfilter)) leaf_name_data.push_back(cos_q.get_name_leafdata());
    if (rx_channel.is_set || is_set(rx_channel.yfilter)) leaf_name_data.push_back(rx_channel.get_name_leafdata());
    if (flow_rate.is_set || is_set(flow_rate.yfilter)) leaf_name_data.push_back(flow_rate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-q-name")
    {
        cos_q_name = value;
        cos_q_name.value_namespace = name_space;
        cos_q_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-q")
    {
        cos_q = value;
        cos_q.value_namespace = name_space;
        cos_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-channel")
    {
        rx_channel = value;
        rx_channel.value_namespace = name_space;
        rx_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-rate")
    {
        flow_rate = value;
        flow_rate.value_namespace = name_space;
        flow_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "cos-q-name")
    {
        cos_q_name.yfilter = yfilter;
    }
    if(value_path == "cos-q")
    {
        cos_q.yfilter = yfilter;
    }
    if(value_path == "rx-channel")
    {
        rx_channel.yfilter = yfilter;
    }
    if(value_path == "flow-rate")
    {
        flow_rate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
}

bool HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "cos-q-name" || name == "cos-q" || name == "rx-channel" || name == "flow-rate" || name == "burst" || name == "accepted" || name == "dropped")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::PlatformDrop()
    :
    indxes(std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes>())
	,idxes(std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes>())
{
    indxes->parent = this;
    idxes->parent = this;

    yang_name = "platform-drop"; yang_parent_name = "np"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::~PlatformDrop()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::has_data() const
{
    return (indxes !=  nullptr && indxes->has_data())
	|| (idxes !=  nullptr && idxes->has_data());
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (indxes !=  nullptr && indxes->has_operation())
	|| (idxes !=  nullptr && idxes->has_operation());
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::PlatformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::PlatformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indxes")
    {
        if(indxes == nullptr)
        {
            indxes = std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes>();
        }
        return indxes;
    }

    if(child_yang_name == "idxes")
    {
        if(idxes == nullptr)
        {
            idxes = std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes>();
        }
        return idxes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::PlatformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(indxes != nullptr)
    {
        children["indxes"] = indxes;
    }

    if(idxes != nullptr)
    {
        children["idxes"] = idxes;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indxes" || name == "idxes")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indxes()
{

    yang_name = "indxes"; yang_parent_name = "platform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::~Indxes()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::has_data() const
{
    for (std::size_t index=0; index<indx.size(); index++)
    {
        if(indx[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::has_operation() const
{
    for (std::size_t index=0; index<indx.size(); index++)
    {
        if(indx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indx")
    {
        for(auto const & c : indx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx>();
        c->parent = this;
        indx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : indx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indx")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::Indx()
    :
    index_{YType::int32, "index"},
    total_captured{YType::uint32, "total-captured"},
    captured_pak{YType::str, "captured-pak"},
    pkt_index{YType::uint8, "pkt-index"},
    ifhandle{YType::uint32, "ifhandle"},
    buffer_len{YType::uint32, "buffer-len"},
    reason_hi{YType::uint32, "reason-hi"},
    reason{YType::uint32, "reason"},
    years{YType::uint64, "years"},
    hours{YType::uint64, "hours"},
    days{YType::uint64, "days"},
    mins{YType::uint64, "mins"},
    secs{YType::uint64, "secs"}
{

    yang_name = "indx"; yang_parent_name = "indxes"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::~Indx()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::has_data() const
{
    return index_.is_set
	|| total_captured.is_set
	|| captured_pak.is_set
	|| pkt_index.is_set
	|| ifhandle.is_set
	|| buffer_len.is_set
	|| reason_hi.is_set
	|| reason.is_set
	|| years.is_set
	|| hours.is_set
	|| days.is_set
	|| mins.is_set
	|| secs.is_set;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(total_captured.yfilter)
	|| ydk::is_set(captured_pak.yfilter)
	|| ydk::is_set(pkt_index.yfilter)
	|| ydk::is_set(ifhandle.yfilter)
	|| ydk::is_set(buffer_len.yfilter)
	|| ydk::is_set(reason_hi.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(years.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(mins.yfilter)
	|| ydk::is_set(secs.yfilter);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indx" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (total_captured.is_set || is_set(total_captured.yfilter)) leaf_name_data.push_back(total_captured.get_name_leafdata());
    if (captured_pak.is_set || is_set(captured_pak.yfilter)) leaf_name_data.push_back(captured_pak.get_name_leafdata());
    if (pkt_index.is_set || is_set(pkt_index.yfilter)) leaf_name_data.push_back(pkt_index.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.yfilter)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (buffer_len.is_set || is_set(buffer_len.yfilter)) leaf_name_data.push_back(buffer_len.get_name_leafdata());
    if (reason_hi.is_set || is_set(reason_hi.yfilter)) leaf_name_data.push_back(reason_hi.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (years.is_set || is_set(years.yfilter)) leaf_name_data.push_back(years.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (mins.is_set || is_set(mins.yfilter)) leaf_name_data.push_back(mins.get_name_leafdata());
    if (secs.is_set || is_set(secs.yfilter)) leaf_name_data.push_back(secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-captured")
    {
        total_captured = value;
        total_captured.value_namespace = name_space;
        total_captured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captured-pak")
    {
        captured_pak = value;
        captured_pak.value_namespace = name_space;
        captured_pak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-index")
    {
        pkt_index = value;
        pkt_index.value_namespace = name_space;
        pkt_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
        ifhandle.value_namespace = name_space;
        ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-len")
    {
        buffer_len = value;
        buffer_len.value_namespace = name_space;
        buffer_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-hi")
    {
        reason_hi = value;
        reason_hi.value_namespace = name_space;
        reason_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "years")
    {
        years = value;
        years.value_namespace = name_space;
        years.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mins")
    {
        mins = value;
        mins.value_namespace = name_space;
        mins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs")
    {
        secs = value;
        secs.value_namespace = name_space;
        secs.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "total-captured")
    {
        total_captured.yfilter = yfilter;
    }
    if(value_path == "captured-pak")
    {
        captured_pak.yfilter = yfilter;
    }
    if(value_path == "pkt-index")
    {
        pkt_index.yfilter = yfilter;
    }
    if(value_path == "ifhandle")
    {
        ifhandle.yfilter = yfilter;
    }
    if(value_path == "buffer-len")
    {
        buffer_len.yfilter = yfilter;
    }
    if(value_path == "reason-hi")
    {
        reason_hi.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "years")
    {
        years.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "mins")
    {
        mins.yfilter = yfilter;
    }
    if(value_path == "secs")
    {
        secs.yfilter = yfilter;
    }
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "total-captured" || name == "captured-pak" || name == "pkt-index" || name == "ifhandle" || name == "buffer-len" || name == "reason-hi" || name == "reason" || name == "years" || name == "hours" || name == "days" || name == "mins" || name == "secs")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idxes()
{

    yang_name = "idxes"; yang_parent_name = "platform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::~Idxes()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::has_data() const
{
    for (std::size_t index=0; index<idx.size(); index++)
    {
        if(idx[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::has_operation() const
{
    for (std::size_t index=0; index<idx.size(); index++)
    {
        if(idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idx")
    {
        for(auto const & c : idx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx>();
        c->parent = this;
        idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : idx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx")
        return true;
    return false;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::Idx()
    :
    index_{YType::int32, "index"},
    drop_reason{YType::str, "drop-reason"},
    counters{YType::uint32, "counters"}
{

    yang_name = "idx"; yang_parent_name = "idxes"; is_top_level_class = false; has_list_ancestor = true;
}

HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::~Idx()
{
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::has_data() const
{
    return index_.is_set
	|| drop_reason.is_set
	|| counters.is_set;
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(drop_reason.yfilter)
	|| ydk::is_set(counters.yfilter);
}

std::string HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idx" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (drop_reason.is_set || is_set(drop_reason.yfilter)) leaf_name_data.push_back(drop_reason.get_name_leafdata());
    if (counters.is_set || is_set(counters.yfilter)) leaf_name_data.push_back(counters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-reason")
    {
        drop_reason = value;
        drop_reason.value_namespace = name_space;
        drop_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counters")
    {
        counters = value;
        counters.value_namespace = name_space;
        counters.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "drop-reason")
    {
        drop_reason.yfilter = yfilter;
    }
    if(value_path == "counters")
    {
        counters.yfilter = yfilter;
    }
}

bool HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "drop-reason" || name == "counters")
        return true;
    return false;
}

Prm::Prm()
    :
    nodes(std::make_shared<Prm::Nodes>())
{
    nodes->parent = this;

    yang_name = "prm"; yang_parent_name = "Cisco-IOS-XR-prm-server-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Prm::~Prm()
{
}

bool Prm::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Prm::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Prm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:prm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Prm::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Prm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Prm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Prm::clone_ptr() const
{
    return std::make_shared<Prm>();
}

std::string Prm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Prm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Prm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Prm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Prm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Prm::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "prm"; is_top_level_class = false; has_list_ancestor = false;
}

Prm::Nodes::~Nodes()
{
}

bool Prm::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Prm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Prm::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:prm/" << get_segment_path();
    return path_buffer.str();
}

std::string Prm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Prm::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Prm::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Prm::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Prm::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Prm::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    server(std::make_shared<Prm::Nodes::Node::Server>())
{
    server->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Prm::Nodes::Node::~Node()
{
}

bool Prm::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (server !=  nullptr && server->has_data());
}

bool Prm::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Prm::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-prm-server-oper:prm/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Prm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Prm::Nodes::Node::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Prm::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Prm::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Prm::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "node-name")
        return true;
    return false;
}

Prm::Nodes::Node::Server::Server()
    :
    resource(std::make_shared<Prm::Nodes::Node::Server::Resource>())
{
    resource->parent = this;

    yang_name = "server"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Prm::Nodes::Node::Server::~Server()
{
}

bool Prm::Nodes::Node::Server::has_data() const
{
    return (resource !=  nullptr && resource->has_data());
}

bool Prm::Nodes::Node::Server::has_operation() const
{
    return is_set(yfilter)
	|| (resource !=  nullptr && resource->has_operation());
}

std::string Prm::Nodes::Node::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::Node::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::Node::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Prm::Nodes::Node::Server::Resource>();
        }
        return resource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::Node::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resource != nullptr)
    {
        children["resource"] = resource;
    }

    return children;
}

void Prm::Nodes::Node::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Prm::Nodes::Node::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Prm::Nodes::Node::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource")
        return true;
    return false;
}

Prm::Nodes::Node::Server::Resource::Resource()
    :
    indexes(std::make_shared<Prm::Nodes::Node::Server::Resource::Indexes>())
{
    indexes->parent = this;

    yang_name = "resource"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Prm::Nodes::Node::Server::Resource::~Resource()
{
}

bool Prm::Nodes::Node::Server::Resource::has_data() const
{
    return (indexes !=  nullptr && indexes->has_data());
}

bool Prm::Nodes::Node::Server::Resource::has_operation() const
{
    return is_set(yfilter)
	|| (indexes !=  nullptr && indexes->has_operation());
}

std::string Prm::Nodes::Node::Server::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::Node::Server::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::Node::Server::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<Prm::Nodes::Node::Server::Resource::Indexes>();
        }
        return indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::Node::Server::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    return children;
}

void Prm::Nodes::Node::Server::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Prm::Nodes::Node::Server::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Prm::Nodes::Node::Server::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indexes")
        return true;
    return false;
}

Prm::Nodes::Node::Server::Resource::Indexes::Indexes()
{

    yang_name = "indexes"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = true;
}

Prm::Nodes::Node::Server::Resource::Indexes::~Indexes()
{
}

bool Prm::Nodes::Node::Server::Resource::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool Prm::Nodes::Node::Server::Resource::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Prm::Nodes::Node::Server::Resource::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::Node::Server::Resource::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::Node::Server::Resource::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Prm::Nodes::Node::Server::Resource::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::Node::Server::Resource::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Prm::Nodes::Node::Server::Resource::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Prm::Nodes::Node::Server::Resource::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Prm::Nodes::Node::Server::Resource::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

Prm::Nodes::Node::Server::Resource::Indexes::Index_::Index_()
    :
    index_{YType::int32, "index"},
    resource_name{YType::str, "resource-name"},
    resource_type{YType::uint32, "resource-type"},
    total_num{YType::uint32, "total-num"},
    free_num{YType::uint32, "free-num"},
    first_available_index{YType::uint32, "first-available-index"},
    start_index{YType::uint32, "start-index"},
    availability_status{YType::boolean, "availability-status"},
    flags{YType::uint8, "flags"},
    inconsistent{YType::boolean, "inconsistent"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = true;
}

Prm::Nodes::Node::Server::Resource::Indexes::Index_::~Index_()
{
}

bool Prm::Nodes::Node::Server::Resource::Indexes::Index_::has_data() const
{
    return index_.is_set
	|| resource_name.is_set
	|| resource_type.is_set
	|| total_num.is_set
	|| free_num.is_set
	|| first_available_index.is_set
	|| start_index.is_set
	|| availability_status.is_set
	|| flags.is_set
	|| inconsistent.is_set;
}

bool Prm::Nodes::Node::Server::Resource::Indexes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(resource_name.yfilter)
	|| ydk::is_set(resource_type.yfilter)
	|| ydk::is_set(total_num.yfilter)
	|| ydk::is_set(free_num.yfilter)
	|| ydk::is_set(first_available_index.yfilter)
	|| ydk::is_set(start_index.yfilter)
	|| ydk::is_set(availability_status.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(inconsistent.yfilter);
}

std::string Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (resource_name.is_set || is_set(resource_name.yfilter)) leaf_name_data.push_back(resource_name.get_name_leafdata());
    if (resource_type.is_set || is_set(resource_type.yfilter)) leaf_name_data.push_back(resource_type.get_name_leafdata());
    if (total_num.is_set || is_set(total_num.yfilter)) leaf_name_data.push_back(total_num.get_name_leafdata());
    if (free_num.is_set || is_set(free_num.yfilter)) leaf_name_data.push_back(free_num.get_name_leafdata());
    if (first_available_index.is_set || is_set(first_available_index.yfilter)) leaf_name_data.push_back(first_available_index.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.yfilter)) leaf_name_data.push_back(start_index.get_name_leafdata());
    if (availability_status.is_set || is_set(availability_status.yfilter)) leaf_name_data.push_back(availability_status.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (inconsistent.is_set || is_set(inconsistent.yfilter)) leaf_name_data.push_back(inconsistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Prm::Nodes::Node::Server::Resource::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Prm::Nodes::Node::Server::Resource::Indexes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-name")
    {
        resource_name = value;
        resource_name.value_namespace = name_space;
        resource_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-type")
    {
        resource_type = value;
        resource_type.value_namespace = name_space;
        resource_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-num")
    {
        total_num = value;
        total_num.value_namespace = name_space;
        total_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-num")
    {
        free_num = value;
        free_num.value_namespace = name_space;
        free_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-available-index")
    {
        first_available_index = value;
        first_available_index.value_namespace = name_space;
        first_available_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-index")
    {
        start_index = value;
        start_index.value_namespace = name_space;
        start_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-status")
    {
        availability_status = value;
        availability_status.value_namespace = name_space;
        availability_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inconsistent")
    {
        inconsistent = value;
        inconsistent.value_namespace = name_space;
        inconsistent.value_namespace_prefix = name_space_prefix;
    }
}

void Prm::Nodes::Node::Server::Resource::Indexes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "resource-name")
    {
        resource_name.yfilter = yfilter;
    }
    if(value_path == "resource-type")
    {
        resource_type.yfilter = yfilter;
    }
    if(value_path == "total-num")
    {
        total_num.yfilter = yfilter;
    }
    if(value_path == "free-num")
    {
        free_num.yfilter = yfilter;
    }
    if(value_path == "first-available-index")
    {
        first_available_index.yfilter = yfilter;
    }
    if(value_path == "start-index")
    {
        start_index.yfilter = yfilter;
    }
    if(value_path == "availability-status")
    {
        availability_status.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "inconsistent")
    {
        inconsistent.yfilter = yfilter;
    }
}

bool Prm::Nodes::Node::Server::Resource::Indexes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "resource-name" || name == "resource-type" || name == "total-num" || name == "free-num" || name == "first-available-index" || name == "start-index" || name == "availability-status" || name == "flags" || name == "inconsistent")
        return true;
    return false;
}


}
}

