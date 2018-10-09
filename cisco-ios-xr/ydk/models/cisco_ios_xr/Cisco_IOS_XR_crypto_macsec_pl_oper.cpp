
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_pl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_pl_oper {

MacsecPlatform::MacsecPlatform()
    :
    nodes(std::make_shared<MacsecPlatform::Nodes>())
{
    nodes->parent = this;

    yang_name = "macsec-platform"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-pl-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MacsecPlatform::~MacsecPlatform()
{
}

bool MacsecPlatform::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool MacsecPlatform::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MacsecPlatform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec-platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MacsecPlatform::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MacsecPlatform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MacsecPlatform::clone_ptr() const
{
    return std::make_shared<MacsecPlatform>();
}

std::string MacsecPlatform::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MacsecPlatform::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MacsecPlatform::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MacsecPlatform::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MacsecPlatform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MacsecPlatform::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "macsec-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

MacsecPlatform::Nodes::~Nodes()
{
}

bool MacsecPlatform::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecPlatform::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacsecPlatform::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string MacsecPlatform::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::get_children() const
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

void MacsecPlatform::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    interfaces(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

MacsecPlatform::Nodes::Node::~Node()
{
}

bool MacsecPlatform::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MacsecPlatform::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MacsecPlatform::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-pl-oper:macsec-platform/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MacsecPlatform::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "node-name")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::~Interfaces()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecPlatform::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    hw_statistics(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics>())
    , hw_sas(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas>())
    , hw_flow_s(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS>())
    , sw_statistics(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics>())
{
    hw_statistics->parent = this;
    hw_sas->parent = this;
    hw_flow_s->parent = this;
    sw_statistics->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (hw_statistics !=  nullptr && hw_statistics->has_data())
	|| (hw_sas !=  nullptr && hw_sas->has_data())
	|| (hw_flow_s !=  nullptr && hw_flow_s->has_data())
	|| (sw_statistics !=  nullptr && sw_statistics->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (hw_statistics !=  nullptr && hw_statistics->has_operation())
	|| (hw_sas !=  nullptr && hw_sas->has_operation())
	|| (hw_flow_s !=  nullptr && hw_flow_s->has_operation())
	|| (sw_statistics !=  nullptr && sw_statistics->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-statistics")
    {
        if(hw_statistics == nullptr)
        {
            hw_statistics = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics>();
        }
        return hw_statistics;
    }

    if(child_yang_name == "hw-sas")
    {
        if(hw_sas == nullptr)
        {
            hw_sas = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas>();
        }
        return hw_sas;
    }

    if(child_yang_name == "hw-flow-s")
    {
        if(hw_flow_s == nullptr)
        {
            hw_flow_s = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS>();
        }
        return hw_flow_s;
    }

    if(child_yang_name == "sw-statistics")
    {
        if(sw_statistics == nullptr)
        {
            sw_statistics = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics>();
        }
        return sw_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hw_statistics != nullptr)
    {
        children["hw-statistics"] = hw_statistics;
    }

    if(hw_sas != nullptr)
    {
        children["hw-sas"] = hw_sas;
    }

    if(hw_flow_s != nullptr)
    {
        children["hw-flow-s"] = hw_flow_s;
    }

    if(sw_statistics != nullptr)
    {
        children["sw-statistics"] = sw_statistics;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-statistics" || name == "hw-sas" || name == "hw-flow-s" || name == "sw-statistics" || name == "name")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::HwStatistics()
    :
    ext(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext>())
{
    ext->parent = this;

    yang_name = "hw-statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::~HwStatistics()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (ext !=  nullptr && ext->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Ext()
    :
    type{YType::enumeration, "type"}
        ,
    msfpga_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats>())
    , xlfpga_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats>())
    , es200_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats>())
{
    msfpga_stats->parent = this;
    xlfpga_stats->parent = this;
    es200_stats->parent = this;

    yang_name = "ext"; yang_parent_name = "hw-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::~Ext()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_data())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_data())
	|| (es200_stats !=  nullptr && es200_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_operation())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_operation())
	|| (es200_stats !=  nullptr && es200_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msfpga-stats")
    {
        if(msfpga_stats == nullptr)
        {
            msfpga_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats>();
        }
        return msfpga_stats;
    }

    if(child_yang_name == "xlfpga-stats")
    {
        if(xlfpga_stats == nullptr)
        {
            xlfpga_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats>();
        }
        return xlfpga_stats;
    }

    if(child_yang_name == "es200-stats")
    {
        if(es200_stats == nullptr)
        {
            es200_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats>();
        }
        return es200_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msfpga_stats != nullptr)
    {
        children["msfpga-stats"] = msfpga_stats;
    }

    if(xlfpga_stats != nullptr)
    {
        children["xlfpga-stats"] = xlfpga_stats;
    }

    if(es200_stats != nullptr)
    {
        children["es200-stats"] = es200_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msfpga-stats" || name == "xlfpga-stats" || name == "es200-stats" || name == "type")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::MsfpgaStats()
    :
    tx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats>())
    , rx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats>())
    , tx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats>())
    , rx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats>())
{
    tx_sa_stats->parent = this;
    rx_sa_stats->parent = this;
    tx_interface_macsec_stats->parent = this;
    rx_interface_macsec_stats->parent = this;

    yang_name = "msfpga-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::~MsfpgaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa_stats !=  nullptr && tx_sa_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats == nullptr)
        {
            tx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats>();
        }
        return tx_sa_stats;
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats == nullptr)
        {
            rx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats>();
        }
        return rx_sa_stats;
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats == nullptr)
        {
            tx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats>();
        }
        return tx_interface_macsec_stats;
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats == nullptr)
        {
            rx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats>();
        }
        return rx_interface_macsec_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa_stats != nullptr)
    {
        children["tx-sa-stats"] = tx_sa_stats;
    }

    if(rx_sa_stats != nullptr)
    {
        children["rx-sa-stats"] = rx_sa_stats;
    }

    if(tx_interface_macsec_stats != nullptr)
    {
        children["tx-interface-macsec-stats"] = tx_interface_macsec_stats;
    }

    if(rx_interface_macsec_stats != nullptr)
    {
        children["rx-interface-macsec-stats"] = rx_interface_macsec_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa-stats" || name == "rx-sa-stats" || name == "tx-interface-macsec-stats" || name == "rx-interface-macsec-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::TxSaStats()
    :
    out_pkts_protected{YType::uint64, "out-pkts-protected"},
    out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"}
{

    yang_name = "tx-sa-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::~TxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_octets_encrypted.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_protected.yfilter)
	|| ydk::is_set(out_pkts_encrypted.yfilter)
	|| ydk::is_set(out_octets_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_protected.is_set || is_set(out_pkts_protected.yfilter)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.yfilter)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.yfilter)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.yfilter)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
        out_pkts_protected.value_namespace = name_space;
        out_pkts_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
        out_pkts_encrypted.value_namespace = name_space;
        out_pkts_encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
        out_octets_protected.value_namespace = name_space;
        out_octets_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
        out_octets_encrypted.value_namespace = name_space;
        out_octets_encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted.yfilter = yfilter;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "out-octets-protected" || name == "out-octets-encrypted")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::RxSaStats()
    :
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"}
{

    yang_name = "rx-sa-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::~RxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_unused_sa.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_unchecked.is_set
	|| in_octets_validated.is_set
	|| in_octets_decrypted.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter)
	|| ydk::is_set(in_octets_decrypted.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.yfilter)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
        in_octets_decrypted.value_namespace = name_space;
        in_octets_decrypted.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unused-sa" || name == "in-pkts-not-using-sa" || name == "in-pkts-not-valid" || name == "in-pkts-invalid" || name == "in-pkts-ok" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-unchecked" || name == "in-octets-validated" || name == "in-octets-decrypted")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    out_pkt_uncontrolled{YType::uint64, "out-pkt-uncontrolled"},
    out_pkt_untagged{YType::uint64, "out-pkt-untagged"},
    out_pkt_too_long{YType::uint64, "out-pkt-too-long"}
{

    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkt_uncontrolled.is_set
	|| out_pkt_untagged.is_set
	|| out_pkt_too_long.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkt_uncontrolled.yfilter)
	|| ydk::is_set(out_pkt_untagged.yfilter)
	|| ydk::is_set(out_pkt_too_long.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkt_uncontrolled.is_set || is_set(out_pkt_uncontrolled.yfilter)) leaf_name_data.push_back(out_pkt_uncontrolled.get_name_leafdata());
    if (out_pkt_untagged.is_set || is_set(out_pkt_untagged.yfilter)) leaf_name_data.push_back(out_pkt_untagged.get_name_leafdata());
    if (out_pkt_too_long.is_set || is_set(out_pkt_too_long.yfilter)) leaf_name_data.push_back(out_pkt_too_long.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled = value;
        out_pkt_uncontrolled.value_namespace = name_space;
        out_pkt_uncontrolled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged = value;
        out_pkt_untagged.value_namespace = name_space;
        out_pkt_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long = value;
        out_pkt_too_long.value_namespace = name_space;
        out_pkt_too_long.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled.yfilter = yfilter;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged.yfilter = yfilter;
    }
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkt-uncontrolled" || name == "out-pkt-untagged" || name == "out-pkt-too-long")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    in_pkt_untagged{YType::uint64, "in-pkt-untagged"},
    in_pkt_notag{YType::uint64, "in-pkt-notag"},
    in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
    in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
    in_pkt_unknown_sci{YType::uint64, "in-pkt-unknown-sci"},
    in_pkt_tagged{YType::uint64, "in-pkt-tagged"},
    in_pkt_overrun{YType::uint64, "in-pkt-overrun"},
    in_pkt_uncontrolled{YType::uint64, "in-pkt-uncontrolled"}
{

    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkt_untagged.is_set
	|| in_pkt_notag.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_unknown_sci.is_set
	|| in_pkt_tagged.is_set
	|| in_pkt_overrun.is_set
	|| in_pkt_uncontrolled.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_untagged.yfilter)
	|| ydk::is_set(in_pkt_notag.yfilter)
	|| ydk::is_set(in_pkt_bad_tag.yfilter)
	|| ydk::is_set(in_pkt_no_sci.yfilter)
	|| ydk::is_set(in_pkt_unknown_sci.yfilter)
	|| ydk::is_set(in_pkt_tagged.yfilter)
	|| ydk::is_set(in_pkt_overrun.yfilter)
	|| ydk::is_set(in_pkt_uncontrolled.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_untagged.is_set || is_set(in_pkt_untagged.yfilter)) leaf_name_data.push_back(in_pkt_untagged.get_name_leafdata());
    if (in_pkt_notag.is_set || is_set(in_pkt_notag.yfilter)) leaf_name_data.push_back(in_pkt_notag.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.yfilter)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.yfilter)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_unknown_sci.is_set || is_set(in_pkt_unknown_sci.yfilter)) leaf_name_data.push_back(in_pkt_unknown_sci.get_name_leafdata());
    if (in_pkt_tagged.is_set || is_set(in_pkt_tagged.yfilter)) leaf_name_data.push_back(in_pkt_tagged.get_name_leafdata());
    if (in_pkt_overrun.is_set || is_set(in_pkt_overrun.yfilter)) leaf_name_data.push_back(in_pkt_overrun.get_name_leafdata());
    if (in_pkt_uncontrolled.is_set || is_set(in_pkt_uncontrolled.yfilter)) leaf_name_data.push_back(in_pkt_uncontrolled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged = value;
        in_pkt_untagged.value_namespace = name_space;
        in_pkt_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag = value;
        in_pkt_notag.value_namespace = name_space;
        in_pkt_notag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
        in_pkt_bad_tag.value_namespace = name_space;
        in_pkt_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
        in_pkt_no_sci.value_namespace = name_space;
        in_pkt_no_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci = value;
        in_pkt_unknown_sci.value_namespace = name_space;
        in_pkt_unknown_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged = value;
        in_pkt_tagged.value_namespace = name_space;
        in_pkt_tagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun = value;
        in_pkt_overrun.value_namespace = name_space;
        in_pkt_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled = value;
        in_pkt_uncontrolled.value_namespace = name_space;
        in_pkt_uncontrolled.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-untagged" || name == "in-pkt-notag" || name == "in-pkt-bad-tag" || name == "in-pkt-no-sci" || name == "in-pkt-unknown-sci" || name == "in-pkt-tagged" || name == "in-pkt-overrun" || name == "in-pkt-uncontrolled")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::XlfpgaStats()
    :
    macsec_tx_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats>())
    , macsec_rx_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats>())
{
    macsec_tx_stats->parent = this;
    macsec_rx_stats->parent = this;

    yang_name = "xlfpga-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::~XlfpgaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::has_data() const
{
    if (is_presence_container) return true;
    return (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_data())
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_operation())
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-tx-stats")
    {
        if(macsec_tx_stats == nullptr)
        {
            macsec_tx_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats>();
        }
        return macsec_tx_stats;
    }

    if(child_yang_name == "macsec-rx-stats")
    {
        if(macsec_rx_stats == nullptr)
        {
            macsec_rx_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats>();
        }
        return macsec_rx_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(macsec_tx_stats != nullptr)
    {
        children["macsec-tx-stats"] = macsec_tx_stats;
    }

    if(macsec_rx_stats != nullptr)
    {
        children["macsec-rx-stats"] = macsec_rx_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-tx-stats" || name == "macsec-rx-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::MacsecTxStats()
    :
    sc_encrypted_octets{YType::uint64, "sc-encrypted-octets"},
    sc_toolong_pkts{YType::uint64, "sc-toolong-pkts"},
    sc_encrypted_pkts{YType::uint64, "sc-encrypted-pkts"},
    sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
    sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
    sc_bypass_pkts{YType::uint64, "sc-bypass-pkts"},
    sc_eapol_pkts{YType::uint64, "sc-eapol-pkts"},
    sc_dropped_pkts{YType::uint64, "sc-dropped-pkts"},
    current_an{YType::uint64, "current-an"},
    sa_encrypted_pkts{YType::uint64, "sa-encrypted-pkts"}
{

    yang_name = "macsec-tx-stats"; yang_parent_name = "xlfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::~MacsecTxStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_data() const
{
    if (is_presence_container) return true;
    return sc_encrypted_octets.is_set
	|| sc_toolong_pkts.is_set
	|| sc_encrypted_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_bypass_pkts.is_set
	|| sc_eapol_pkts.is_set
	|| sc_dropped_pkts.is_set
	|| current_an.is_set
	|| sa_encrypted_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sc_encrypted_octets.yfilter)
	|| ydk::is_set(sc_toolong_pkts.yfilter)
	|| ydk::is_set(sc_encrypted_pkts.yfilter)
	|| ydk::is_set(sc_untagged_pkts.yfilter)
	|| ydk::is_set(sc_overrun_pkts.yfilter)
	|| ydk::is_set(sc_bypass_pkts.yfilter)
	|| ydk::is_set(sc_eapol_pkts.yfilter)
	|| ydk::is_set(sc_dropped_pkts.yfilter)
	|| ydk::is_set(current_an.yfilter)
	|| ydk::is_set(sa_encrypted_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-tx-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_encrypted_octets.is_set || is_set(sc_encrypted_octets.yfilter)) leaf_name_data.push_back(sc_encrypted_octets.get_name_leafdata());
    if (sc_toolong_pkts.is_set || is_set(sc_toolong_pkts.yfilter)) leaf_name_data.push_back(sc_toolong_pkts.get_name_leafdata());
    if (sc_encrypted_pkts.is_set || is_set(sc_encrypted_pkts.yfilter)) leaf_name_data.push_back(sc_encrypted_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.yfilter)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.yfilter)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_bypass_pkts.is_set || is_set(sc_bypass_pkts.yfilter)) leaf_name_data.push_back(sc_bypass_pkts.get_name_leafdata());
    if (sc_eapol_pkts.is_set || is_set(sc_eapol_pkts.yfilter)) leaf_name_data.push_back(sc_eapol_pkts.get_name_leafdata());
    if (sc_dropped_pkts.is_set || is_set(sc_dropped_pkts.yfilter)) leaf_name_data.push_back(sc_dropped_pkts.get_name_leafdata());
    if (current_an.is_set || is_set(current_an.yfilter)) leaf_name_data.push_back(current_an.get_name_leafdata());
    if (sa_encrypted_pkts.is_set || is_set(sa_encrypted_pkts.yfilter)) leaf_name_data.push_back(sa_encrypted_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets = value;
        sc_encrypted_octets.value_namespace = name_space;
        sc_encrypted_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts = value;
        sc_toolong_pkts.value_namespace = name_space;
        sc_toolong_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts = value;
        sc_encrypted_pkts.value_namespace = name_space;
        sc_encrypted_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
        sc_untagged_pkts.value_namespace = name_space;
        sc_untagged_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
        sc_overrun_pkts.value_namespace = name_space;
        sc_overrun_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts = value;
        sc_bypass_pkts.value_namespace = name_space;
        sc_bypass_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts = value;
        sc_eapol_pkts.value_namespace = name_space;
        sc_eapol_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts = value;
        sc_dropped_pkts.value_namespace = name_space;
        sc_dropped_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-an")
    {
        current_an = value;
        current_an.value_namespace = name_space;
        current_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts = value;
        sa_encrypted_pkts.value_namespace = name_space;
        sa_encrypted_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets.yfilter = yfilter;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts.yfilter = yfilter;
    }
    if(value_path == "current-an")
    {
        current_an.yfilter = yfilter;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sc-encrypted-octets" || name == "sc-toolong-pkts" || name == "sc-encrypted-pkts" || name == "sc-untagged-pkts" || name == "sc-overrun-pkts" || name == "sc-bypass-pkts" || name == "sc-eapol-pkts" || name == "sc-dropped-pkts" || name == "current-an" || name == "sa-encrypted-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::MacsecRxStats()
    :
    sc_decrypted_octets{YType::uint64, "sc-decrypted-octets"},
    sc_no_tag_pkts{YType::uint64, "sc-no-tag-pkts"},
    sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
    sc_bad_tag_pkts{YType::uint64, "sc-bad-tag-pkts"},
    sc_late_pkts{YType::uint64, "sc-late-pkts"},
    sc_delayed_pkts{YType::uint64, "sc-delayed-pkts"},
    sc_unchecked_pkts{YType::uint64, "sc-unchecked-pkts"},
    sc_no_sci_pkts{YType::uint64, "sc-no-sci-pkts"},
    sc_unknown_sci_pkts{YType::uint64, "sc-unknown-sci-pkts"},
    sc_ok_pkts{YType::uint64, "sc-ok-pkts"},
    sc_not_using_pkts{YType::uint64, "sc-not-using-pkts"},
    sc_unused_pkts{YType::uint64, "sc-unused-pkts"},
    sc_not_valid_pkts{YType::uint64, "sc-not-valid-pkts"},
    sc_invalid_pkts{YType::uint64, "sc-invalid-pkts"},
    sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
    sc_bypass_pkts{YType::uint64, "sc-bypass-pkts"},
    sc_eapol_pkts{YType::uint64, "sc-eapol-pkts"},
    sc_dropped_pkts{YType::uint64, "sc-dropped-pkts"}
        ,
    rx_sa_stat(this, {})
{

    yang_name = "macsec-rx-stats"; yang_parent_name = "xlfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::~MacsecRxStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx_sa_stat.len(); index++)
    {
        if(rx_sa_stat[index]->has_data())
            return true;
    }
    return sc_decrypted_octets.is_set
	|| sc_no_tag_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_bad_tag_pkts.is_set
	|| sc_late_pkts.is_set
	|| sc_delayed_pkts.is_set
	|| sc_unchecked_pkts.is_set
	|| sc_no_sci_pkts.is_set
	|| sc_unknown_sci_pkts.is_set
	|| sc_ok_pkts.is_set
	|| sc_not_using_pkts.is_set
	|| sc_unused_pkts.is_set
	|| sc_not_valid_pkts.is_set
	|| sc_invalid_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_bypass_pkts.is_set
	|| sc_eapol_pkts.is_set
	|| sc_dropped_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_operation() const
{
    for (std::size_t index=0; index<rx_sa_stat.len(); index++)
    {
        if(rx_sa_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sc_decrypted_octets.yfilter)
	|| ydk::is_set(sc_no_tag_pkts.yfilter)
	|| ydk::is_set(sc_untagged_pkts.yfilter)
	|| ydk::is_set(sc_bad_tag_pkts.yfilter)
	|| ydk::is_set(sc_late_pkts.yfilter)
	|| ydk::is_set(sc_delayed_pkts.yfilter)
	|| ydk::is_set(sc_unchecked_pkts.yfilter)
	|| ydk::is_set(sc_no_sci_pkts.yfilter)
	|| ydk::is_set(sc_unknown_sci_pkts.yfilter)
	|| ydk::is_set(sc_ok_pkts.yfilter)
	|| ydk::is_set(sc_not_using_pkts.yfilter)
	|| ydk::is_set(sc_unused_pkts.yfilter)
	|| ydk::is_set(sc_not_valid_pkts.yfilter)
	|| ydk::is_set(sc_invalid_pkts.yfilter)
	|| ydk::is_set(sc_overrun_pkts.yfilter)
	|| ydk::is_set(sc_bypass_pkts.yfilter)
	|| ydk::is_set(sc_eapol_pkts.yfilter)
	|| ydk::is_set(sc_dropped_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-rx-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_decrypted_octets.is_set || is_set(sc_decrypted_octets.yfilter)) leaf_name_data.push_back(sc_decrypted_octets.get_name_leafdata());
    if (sc_no_tag_pkts.is_set || is_set(sc_no_tag_pkts.yfilter)) leaf_name_data.push_back(sc_no_tag_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.yfilter)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_bad_tag_pkts.is_set || is_set(sc_bad_tag_pkts.yfilter)) leaf_name_data.push_back(sc_bad_tag_pkts.get_name_leafdata());
    if (sc_late_pkts.is_set || is_set(sc_late_pkts.yfilter)) leaf_name_data.push_back(sc_late_pkts.get_name_leafdata());
    if (sc_delayed_pkts.is_set || is_set(sc_delayed_pkts.yfilter)) leaf_name_data.push_back(sc_delayed_pkts.get_name_leafdata());
    if (sc_unchecked_pkts.is_set || is_set(sc_unchecked_pkts.yfilter)) leaf_name_data.push_back(sc_unchecked_pkts.get_name_leafdata());
    if (sc_no_sci_pkts.is_set || is_set(sc_no_sci_pkts.yfilter)) leaf_name_data.push_back(sc_no_sci_pkts.get_name_leafdata());
    if (sc_unknown_sci_pkts.is_set || is_set(sc_unknown_sci_pkts.yfilter)) leaf_name_data.push_back(sc_unknown_sci_pkts.get_name_leafdata());
    if (sc_ok_pkts.is_set || is_set(sc_ok_pkts.yfilter)) leaf_name_data.push_back(sc_ok_pkts.get_name_leafdata());
    if (sc_not_using_pkts.is_set || is_set(sc_not_using_pkts.yfilter)) leaf_name_data.push_back(sc_not_using_pkts.get_name_leafdata());
    if (sc_unused_pkts.is_set || is_set(sc_unused_pkts.yfilter)) leaf_name_data.push_back(sc_unused_pkts.get_name_leafdata());
    if (sc_not_valid_pkts.is_set || is_set(sc_not_valid_pkts.yfilter)) leaf_name_data.push_back(sc_not_valid_pkts.get_name_leafdata());
    if (sc_invalid_pkts.is_set || is_set(sc_invalid_pkts.yfilter)) leaf_name_data.push_back(sc_invalid_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.yfilter)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_bypass_pkts.is_set || is_set(sc_bypass_pkts.yfilter)) leaf_name_data.push_back(sc_bypass_pkts.get_name_leafdata());
    if (sc_eapol_pkts.is_set || is_set(sc_eapol_pkts.yfilter)) leaf_name_data.push_back(sc_eapol_pkts.get_name_leafdata());
    if (sc_dropped_pkts.is_set || is_set(sc_dropped_pkts.yfilter)) leaf_name_data.push_back(sc_dropped_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-sa-stat")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat>();
        c->parent = this;
        rx_sa_stat.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rx_sa_stat.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets = value;
        sc_decrypted_octets.value_namespace = name_space;
        sc_decrypted_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts = value;
        sc_no_tag_pkts.value_namespace = name_space;
        sc_no_tag_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
        sc_untagged_pkts.value_namespace = name_space;
        sc_untagged_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts = value;
        sc_bad_tag_pkts.value_namespace = name_space;
        sc_bad_tag_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts = value;
        sc_late_pkts.value_namespace = name_space;
        sc_late_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts = value;
        sc_delayed_pkts.value_namespace = name_space;
        sc_delayed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts = value;
        sc_unchecked_pkts.value_namespace = name_space;
        sc_unchecked_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts = value;
        sc_no_sci_pkts.value_namespace = name_space;
        sc_no_sci_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts = value;
        sc_unknown_sci_pkts.value_namespace = name_space;
        sc_unknown_sci_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts = value;
        sc_ok_pkts.value_namespace = name_space;
        sc_ok_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts = value;
        sc_not_using_pkts.value_namespace = name_space;
        sc_not_using_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts = value;
        sc_unused_pkts.value_namespace = name_space;
        sc_unused_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts = value;
        sc_not_valid_pkts.value_namespace = name_space;
        sc_not_valid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts = value;
        sc_invalid_pkts.value_namespace = name_space;
        sc_invalid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
        sc_overrun_pkts.value_namespace = name_space;
        sc_overrun_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts = value;
        sc_bypass_pkts.value_namespace = name_space;
        sc_bypass_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts = value;
        sc_eapol_pkts.value_namespace = name_space;
        sc_eapol_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts = value;
        sc_dropped_pkts.value_namespace = name_space;
        sc_dropped_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets.yfilter = yfilter;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-sa-stat" || name == "sc-decrypted-octets" || name == "sc-no-tag-pkts" || name == "sc-untagged-pkts" || name == "sc-bad-tag-pkts" || name == "sc-late-pkts" || name == "sc-delayed-pkts" || name == "sc-unchecked-pkts" || name == "sc-no-sci-pkts" || name == "sc-unknown-sci-pkts" || name == "sc-ok-pkts" || name == "sc-not-using-pkts" || name == "sc-unused-pkts" || name == "sc-not-valid-pkts" || name == "sc-invalid-pkts" || name == "sc-overrun-pkts" || name == "sc-bypass-pkts" || name == "sc-eapol-pkts" || name == "sc-dropped-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::RxSaStat()
    :
    an{YType::uint64, "an"},
    sa_ok_pkts{YType::uint64, "sa-ok-pkts"},
    sa_not_using_pkts{YType::uint64, "sa-not-using-pkts"},
    sa_unused_pkts{YType::uint64, "sa-unused-pkts"},
    sa_not_valid_pkts{YType::uint64, "sa-not-valid-pkts"},
    sa_invalid_pkts{YType::uint64, "sa-invalid-pkts"}
{

    yang_name = "rx-sa-stat"; yang_parent_name = "macsec-rx-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::~RxSaStat()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_data() const
{
    if (is_presence_container) return true;
    return an.is_set
	|| sa_ok_pkts.is_set
	|| sa_not_using_pkts.is_set
	|| sa_unused_pkts.is_set
	|| sa_not_valid_pkts.is_set
	|| sa_invalid_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(sa_ok_pkts.yfilter)
	|| ydk::is_set(sa_not_using_pkts.yfilter)
	|| ydk::is_set(sa_unused_pkts.yfilter)
	|| ydk::is_set(sa_not_valid_pkts.yfilter)
	|| ydk::is_set(sa_invalid_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (sa_ok_pkts.is_set || is_set(sa_ok_pkts.yfilter)) leaf_name_data.push_back(sa_ok_pkts.get_name_leafdata());
    if (sa_not_using_pkts.is_set || is_set(sa_not_using_pkts.yfilter)) leaf_name_data.push_back(sa_not_using_pkts.get_name_leafdata());
    if (sa_unused_pkts.is_set || is_set(sa_unused_pkts.yfilter)) leaf_name_data.push_back(sa_unused_pkts.get_name_leafdata());
    if (sa_not_valid_pkts.is_set || is_set(sa_not_valid_pkts.yfilter)) leaf_name_data.push_back(sa_not_valid_pkts.get_name_leafdata());
    if (sa_invalid_pkts.is_set || is_set(sa_invalid_pkts.yfilter)) leaf_name_data.push_back(sa_invalid_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts = value;
        sa_ok_pkts.value_namespace = name_space;
        sa_ok_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts = value;
        sa_not_using_pkts.value_namespace = name_space;
        sa_not_using_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts = value;
        sa_unused_pkts.value_namespace = name_space;
        sa_unused_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts = value;
        sa_not_valid_pkts.value_namespace = name_space;
        sa_not_valid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts = value;
        sa_invalid_pkts.value_namespace = name_space;
        sa_invalid_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "an" || name == "sa-ok-pkts" || name == "sa-not-using-pkts" || name == "sa-unused-pkts" || name == "sa-not-valid-pkts" || name == "sa-invalid-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::Es200Stats()
    :
    tx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats>())
    , rx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats>())
    , tx_sc_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats>())
    , rx_sc_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats>())
    , tx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats>())
    , rx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats>())
    , tx_port_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats>())
    , rx_port_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats>())
{
    tx_sa_stats->parent = this;
    rx_sa_stats->parent = this;
    tx_sc_macsec_stats->parent = this;
    rx_sc_macsec_stats->parent = this;
    tx_interface_macsec_stats->parent = this;
    rx_interface_macsec_stats->parent = this;
    tx_port_stats->parent = this;
    rx_port_stats->parent = this;

    yang_name = "es200-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::~Es200Stats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa_stats !=  nullptr && tx_sa_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_sc_macsec_stats !=  nullptr && tx_sc_macsec_stats->has_data())
	|| (rx_sc_macsec_stats !=  nullptr && rx_sc_macsec_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (tx_port_stats !=  nullptr && tx_port_stats->has_data())
	|| (rx_port_stats !=  nullptr && rx_port_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_sc_macsec_stats !=  nullptr && tx_sc_macsec_stats->has_operation())
	|| (rx_sc_macsec_stats !=  nullptr && rx_sc_macsec_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (tx_port_stats !=  nullptr && tx_port_stats->has_operation())
	|| (rx_port_stats !=  nullptr && rx_port_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats == nullptr)
        {
            tx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats>();
        }
        return tx_sa_stats;
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats == nullptr)
        {
            rx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats>();
        }
        return rx_sa_stats;
    }

    if(child_yang_name == "tx-sc-macsec-stats")
    {
        if(tx_sc_macsec_stats == nullptr)
        {
            tx_sc_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats>();
        }
        return tx_sc_macsec_stats;
    }

    if(child_yang_name == "rx-sc-macsec-stats")
    {
        if(rx_sc_macsec_stats == nullptr)
        {
            rx_sc_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats>();
        }
        return rx_sc_macsec_stats;
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats == nullptr)
        {
            tx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats>();
        }
        return tx_interface_macsec_stats;
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats == nullptr)
        {
            rx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats>();
        }
        return rx_interface_macsec_stats;
    }

    if(child_yang_name == "tx-port-stats")
    {
        if(tx_port_stats == nullptr)
        {
            tx_port_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats>();
        }
        return tx_port_stats;
    }

    if(child_yang_name == "rx-port-stats")
    {
        if(rx_port_stats == nullptr)
        {
            rx_port_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats>();
        }
        return rx_port_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa_stats != nullptr)
    {
        children["tx-sa-stats"] = tx_sa_stats;
    }

    if(rx_sa_stats != nullptr)
    {
        children["rx-sa-stats"] = rx_sa_stats;
    }

    if(tx_sc_macsec_stats != nullptr)
    {
        children["tx-sc-macsec-stats"] = tx_sc_macsec_stats;
    }

    if(rx_sc_macsec_stats != nullptr)
    {
        children["rx-sc-macsec-stats"] = rx_sc_macsec_stats;
    }

    if(tx_interface_macsec_stats != nullptr)
    {
        children["tx-interface-macsec-stats"] = tx_interface_macsec_stats;
    }

    if(rx_interface_macsec_stats != nullptr)
    {
        children["rx-interface-macsec-stats"] = rx_interface_macsec_stats;
    }

    if(tx_port_stats != nullptr)
    {
        children["tx-port-stats"] = tx_port_stats;
    }

    if(rx_port_stats != nullptr)
    {
        children["rx-port-stats"] = rx_port_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa-stats" || name == "rx-sa-stats" || name == "tx-sc-macsec-stats" || name == "rx-sc-macsec-stats" || name == "tx-interface-macsec-stats" || name == "rx-interface-macsec-stats" || name == "tx-port-stats" || name == "rx-port-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::TxSaStats()
    :
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"},
    out_pkts_encrypted_protected{YType::uint64, "out-pkts-encrypted-protected"},
    out_octets_encrypted_protected1{YType::uint64, "out-octets-encrypted-protected1"}
{

    yang_name = "tx-sa-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::~TxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_too_long.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_octets_encrypted_protected1.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_too_long.yfilter)
	|| ydk::is_set(out_pkts_encrypted_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted_protected1.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.yfilter)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.yfilter)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.yfilter)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
        out_pkts_too_long.value_namespace = name_space;
        out_pkts_too_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
        out_pkts_encrypted_protected.value_namespace = name_space;
        out_pkts_encrypted_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
        out_octets_encrypted_protected1.value_namespace = name_space;
        out_octets_encrypted_protected1.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-too-long" || name == "out-pkts-encrypted-protected" || name == "out-octets-encrypted-protected1")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::RxSaStats()
    :
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    in_octets_decrypted_validated1{YType::uint64, "in-octets-decrypted-validated1"},
    in_octets_validated{YType::uint64, "in-octets-validated"}
{

    yang_name = "rx-sa-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::~RxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_unchecked.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_unused_sa.is_set
	|| in_octets_decrypted_validated1.is_set
	|| in_octets_validated.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_octets_decrypted_validated1.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.yfilter)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
        in_octets_decrypted_validated1.value_namespace = name_space;
        in_octets_decrypted_validated1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-octets-decrypted-validated1" || name == "in-octets-validated")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::TxScMacsecStats()
    :
    out_pkts_sa_not_in_use{YType::uint64, "out-pkts-sa-not-in-use"}
{

    yang_name = "tx-sc-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::~TxScMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_sa_not_in_use.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_sa_not_in_use.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sc-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.yfilter)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
        out_pkts_sa_not_in_use.value_namespace = name_space;
        out_pkts_sa_not_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-sa-not-in-use")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::RxScMacsecStats()
    :
    in_pkts_sa_not_in_use{YType::uint64, "in-pkts-sa-not-in-use"}
{

    yang_name = "rx-sc-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::~RxScMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_sa_not_in_use.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_sa_not_in_use.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sc-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_sa_not_in_use.is_set || is_set(in_pkts_sa_not_in_use.yfilter)) leaf_name_data.push_back(in_pkts_sa_not_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use = value;
        in_pkts_sa_not_in_use.value_namespace = name_space;
        in_pkts_sa_not_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-sa-not-in-use")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    transform_error_pkts{YType::uint64, "transform-error-pkts"},
    out_pkt_ctrl{YType::uint64, "out-pkt-ctrl"},
    out_pkts_untagged{YType::uint64, "out-pkts-untagged"},
    out_octets_unctrl{YType::uint64, "out-octets-unctrl"},
    out_octets_ctrl{YType::uint64, "out-octets-ctrl"},
    out_octets_common{YType::uint64, "out-octets-common"},
    out_ucast_pkts_unctrl{YType::uint64, "out-ucast-pkts-unctrl"},
    out_ucast_pkts_ctrl{YType::uint64, "out-ucast-pkts-ctrl"},
    out_mcast_pkts_unctrl{YType::uint64, "out-mcast-pkts-unctrl"},
    out_mcast_pkts_ctrl{YType::uint64, "out-mcast-pkts-ctrl"},
    out_bcast_pkts_unctrl{YType::uint64, "out-bcast-pkts-unctrl"},
    out_bcast_pkts_ctrl{YType::uint64, "out-bcast-pkts-ctrl"},
    out_rx_drop_pkts_unctrl{YType::uint64, "out-rx-drop-pkts-unctrl"},
    out_rx_drop_pkts_ctrl{YType::uint64, "out-rx-drop-pkts-ctrl"},
    out_rx_err_pkts_unctrl{YType::uint64, "out-rx-err-pkts-unctrl"},
    out_rx_err_pkts_ctrl{YType::uint64, "out-rx-err-pkts-ctrl"},
    out_drop_pkts_class{YType::uint64, "out-drop-pkts-class"},
    out_drop_pkts_data{YType::uint64, "out-drop-pkts-data"}
{

    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return transform_error_pkts.is_set
	|| out_pkt_ctrl.is_set
	|| out_pkts_untagged.is_set
	|| out_octets_unctrl.is_set
	|| out_octets_ctrl.is_set
	|| out_octets_common.is_set
	|| out_ucast_pkts_unctrl.is_set
	|| out_ucast_pkts_ctrl.is_set
	|| out_mcast_pkts_unctrl.is_set
	|| out_mcast_pkts_ctrl.is_set
	|| out_bcast_pkts_unctrl.is_set
	|| out_bcast_pkts_ctrl.is_set
	|| out_rx_drop_pkts_unctrl.is_set
	|| out_rx_drop_pkts_ctrl.is_set
	|| out_rx_err_pkts_unctrl.is_set
	|| out_rx_err_pkts_ctrl.is_set
	|| out_drop_pkts_class.is_set
	|| out_drop_pkts_data.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transform_error_pkts.yfilter)
	|| ydk::is_set(out_pkt_ctrl.yfilter)
	|| ydk::is_set(out_pkts_untagged.yfilter)
	|| ydk::is_set(out_octets_unctrl.yfilter)
	|| ydk::is_set(out_octets_ctrl.yfilter)
	|| ydk::is_set(out_octets_common.yfilter)
	|| ydk::is_set(out_ucast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_ucast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_mcast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_mcast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_bcast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_bcast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_rx_drop_pkts_unctrl.yfilter)
	|| ydk::is_set(out_rx_drop_pkts_ctrl.yfilter)
	|| ydk::is_set(out_rx_err_pkts_unctrl.yfilter)
	|| ydk::is_set(out_rx_err_pkts_ctrl.yfilter)
	|| ydk::is_set(out_drop_pkts_class.yfilter)
	|| ydk::is_set(out_drop_pkts_data.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transform_error_pkts.is_set || is_set(transform_error_pkts.yfilter)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());
    if (out_pkt_ctrl.is_set || is_set(out_pkt_ctrl.yfilter)) leaf_name_data.push_back(out_pkt_ctrl.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.yfilter)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());
    if (out_octets_unctrl.is_set || is_set(out_octets_unctrl.yfilter)) leaf_name_data.push_back(out_octets_unctrl.get_name_leafdata());
    if (out_octets_ctrl.is_set || is_set(out_octets_ctrl.yfilter)) leaf_name_data.push_back(out_octets_ctrl.get_name_leafdata());
    if (out_octets_common.is_set || is_set(out_octets_common.yfilter)) leaf_name_data.push_back(out_octets_common.get_name_leafdata());
    if (out_ucast_pkts_unctrl.is_set || is_set(out_ucast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_ucast_pkts_unctrl.get_name_leafdata());
    if (out_ucast_pkts_ctrl.is_set || is_set(out_ucast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_ucast_pkts_ctrl.get_name_leafdata());
    if (out_mcast_pkts_unctrl.is_set || is_set(out_mcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_mcast_pkts_unctrl.get_name_leafdata());
    if (out_mcast_pkts_ctrl.is_set || is_set(out_mcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_mcast_pkts_ctrl.get_name_leafdata());
    if (out_bcast_pkts_unctrl.is_set || is_set(out_bcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_bcast_pkts_unctrl.get_name_leafdata());
    if (out_bcast_pkts_ctrl.is_set || is_set(out_bcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_bcast_pkts_ctrl.get_name_leafdata());
    if (out_rx_drop_pkts_unctrl.is_set || is_set(out_rx_drop_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_rx_drop_pkts_unctrl.get_name_leafdata());
    if (out_rx_drop_pkts_ctrl.is_set || is_set(out_rx_drop_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_rx_drop_pkts_ctrl.get_name_leafdata());
    if (out_rx_err_pkts_unctrl.is_set || is_set(out_rx_err_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_rx_err_pkts_unctrl.get_name_leafdata());
    if (out_rx_err_pkts_ctrl.is_set || is_set(out_rx_err_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_rx_err_pkts_ctrl.get_name_leafdata());
    if (out_drop_pkts_class.is_set || is_set(out_drop_pkts_class.yfilter)) leaf_name_data.push_back(out_drop_pkts_class.get_name_leafdata());
    if (out_drop_pkts_data.is_set || is_set(out_drop_pkts_data.yfilter)) leaf_name_data.push_back(out_drop_pkts_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
        transform_error_pkts.value_namespace = name_space;
        transform_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl = value;
        out_pkt_ctrl.value_namespace = name_space;
        out_pkt_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
        out_pkts_untagged.value_namespace = name_space;
        out_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl = value;
        out_octets_unctrl.value_namespace = name_space;
        out_octets_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl = value;
        out_octets_ctrl.value_namespace = name_space;
        out_octets_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common = value;
        out_octets_common.value_namespace = name_space;
        out_octets_common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl = value;
        out_ucast_pkts_unctrl.value_namespace = name_space;
        out_ucast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl = value;
        out_ucast_pkts_ctrl.value_namespace = name_space;
        out_ucast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl = value;
        out_mcast_pkts_unctrl.value_namespace = name_space;
        out_mcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl = value;
        out_mcast_pkts_ctrl.value_namespace = name_space;
        out_mcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl = value;
        out_bcast_pkts_unctrl.value_namespace = name_space;
        out_bcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl = value;
        out_bcast_pkts_ctrl.value_namespace = name_space;
        out_bcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl = value;
        out_rx_drop_pkts_unctrl.value_namespace = name_space;
        out_rx_drop_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl = value;
        out_rx_drop_pkts_ctrl.value_namespace = name_space;
        out_rx_drop_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl = value;
        out_rx_err_pkts_unctrl.value_namespace = name_space;
        out_rx_err_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl = value;
        out_rx_err_pkts_ctrl.value_namespace = name_space;
        out_rx_err_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class = value;
        out_drop_pkts_class.value_namespace = name_space;
        out_drop_pkts_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data = value;
        out_drop_pkts_data.value_namespace = name_space;
        out_drop_pkts_data.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts.yfilter = yfilter;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class.yfilter = yfilter;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transform-error-pkts" || name == "out-pkt-ctrl" || name == "out-pkts-untagged" || name == "out-octets-unctrl" || name == "out-octets-ctrl" || name == "out-octets-common" || name == "out-ucast-pkts-unctrl" || name == "out-ucast-pkts-ctrl" || name == "out-mcast-pkts-unctrl" || name == "out-mcast-pkts-ctrl" || name == "out-bcast-pkts-unctrl" || name == "out-bcast-pkts-ctrl" || name == "out-rx-drop-pkts-unctrl" || name == "out-rx-drop-pkts-ctrl" || name == "out-rx-err-pkts-unctrl" || name == "out-rx-err-pkts-ctrl" || name == "out-drop-pkts-class" || name == "out-drop-pkts-data")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    transform_error_pkts{YType::uint64, "transform-error-pkts"},
    in_pkt_ctrl{YType::uint64, "in-pkt-ctrl"},
    in_pkt_no_tag{YType::uint64, "in-pkt-no-tag"},
    in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
    in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
    in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
    in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
    in_pkts_tagged_ctrl{YType::uint64, "in-pkts-tagged-ctrl"},
    in_octets_unctrl{YType::uint64, "in-octets-unctrl"},
    in_octets_ctrl{YType::uint64, "in-octets-ctrl"},
    in_ucast_pkts_unctrl{YType::uint64, "in-ucast-pkts-unctrl"},
    in_ucast_pkts_ctrl{YType::uint64, "in-ucast-pkts-ctrl"},
    in_mcast_pkts_unctrl{YType::uint64, "in-mcast-pkts-unctrl"},
    in_mcast_pkts_ctrl{YType::uint64, "in-mcast-pkts-ctrl"},
    in_bcast_pkts_unctrl{YType::uint64, "in-bcast-pkts-unctrl"},
    in_bcast_pkts_ctrl{YType::uint64, "in-bcast-pkts-ctrl"},
    in_rx_drop_pkts_unctrl{YType::uint64, "in-rx-drop-pkts-unctrl"},
    in_rx_drop_pkts_ctrl{YType::uint64, "in-rx-drop-pkts-ctrl"},
    in_rx_error_pkts_unctrl{YType::uint64, "in-rx-error-pkts-unctrl"},
    in_rx_error_pkts_ctrl{YType::uint64, "in-rx-error-pkts-ctrl"},
    in_drop_pkts_class{YType::uint64, "in-drop-pkts-class"},
    in_drop_pkts_data{YType::uint64, "in-drop-pkts-data"}
{

    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return transform_error_pkts.is_set
	|| in_pkt_ctrl.is_set
	|| in_pkt_no_tag.is_set
	|| in_pkts_untagged.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_tagged_ctrl.is_set
	|| in_octets_unctrl.is_set
	|| in_octets_ctrl.is_set
	|| in_ucast_pkts_unctrl.is_set
	|| in_ucast_pkts_ctrl.is_set
	|| in_mcast_pkts_unctrl.is_set
	|| in_mcast_pkts_ctrl.is_set
	|| in_bcast_pkts_unctrl.is_set
	|| in_bcast_pkts_ctrl.is_set
	|| in_rx_drop_pkts_unctrl.is_set
	|| in_rx_drop_pkts_ctrl.is_set
	|| in_rx_error_pkts_unctrl.is_set
	|| in_rx_error_pkts_ctrl.is_set
	|| in_drop_pkts_class.is_set
	|| in_drop_pkts_data.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transform_error_pkts.yfilter)
	|| ydk::is_set(in_pkt_ctrl.yfilter)
	|| ydk::is_set(in_pkt_no_tag.yfilter)
	|| ydk::is_set(in_pkts_untagged.yfilter)
	|| ydk::is_set(in_pkt_bad_tag.yfilter)
	|| ydk::is_set(in_pkt_no_sci.yfilter)
	|| ydk::is_set(in_pkts_unknown_sci.yfilter)
	|| ydk::is_set(in_pkts_tagged_ctrl.yfilter)
	|| ydk::is_set(in_octets_unctrl.yfilter)
	|| ydk::is_set(in_octets_ctrl.yfilter)
	|| ydk::is_set(in_ucast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_ucast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_mcast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_mcast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_bcast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_bcast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_rx_drop_pkts_unctrl.yfilter)
	|| ydk::is_set(in_rx_drop_pkts_ctrl.yfilter)
	|| ydk::is_set(in_rx_error_pkts_unctrl.yfilter)
	|| ydk::is_set(in_rx_error_pkts_ctrl.yfilter)
	|| ydk::is_set(in_drop_pkts_class.yfilter)
	|| ydk::is_set(in_drop_pkts_data.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transform_error_pkts.is_set || is_set(transform_error_pkts.yfilter)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());
    if (in_pkt_ctrl.is_set || is_set(in_pkt_ctrl.yfilter)) leaf_name_data.push_back(in_pkt_ctrl.get_name_leafdata());
    if (in_pkt_no_tag.is_set || is_set(in_pkt_no_tag.yfilter)) leaf_name_data.push_back(in_pkt_no_tag.get_name_leafdata());
    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.yfilter)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.yfilter)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.yfilter)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.yfilter)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_tagged_ctrl.is_set || is_set(in_pkts_tagged_ctrl.yfilter)) leaf_name_data.push_back(in_pkts_tagged_ctrl.get_name_leafdata());
    if (in_octets_unctrl.is_set || is_set(in_octets_unctrl.yfilter)) leaf_name_data.push_back(in_octets_unctrl.get_name_leafdata());
    if (in_octets_ctrl.is_set || is_set(in_octets_ctrl.yfilter)) leaf_name_data.push_back(in_octets_ctrl.get_name_leafdata());
    if (in_ucast_pkts_unctrl.is_set || is_set(in_ucast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_ucast_pkts_unctrl.get_name_leafdata());
    if (in_ucast_pkts_ctrl.is_set || is_set(in_ucast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_ucast_pkts_ctrl.get_name_leafdata());
    if (in_mcast_pkts_unctrl.is_set || is_set(in_mcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_mcast_pkts_unctrl.get_name_leafdata());
    if (in_mcast_pkts_ctrl.is_set || is_set(in_mcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_mcast_pkts_ctrl.get_name_leafdata());
    if (in_bcast_pkts_unctrl.is_set || is_set(in_bcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_bcast_pkts_unctrl.get_name_leafdata());
    if (in_bcast_pkts_ctrl.is_set || is_set(in_bcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_bcast_pkts_ctrl.get_name_leafdata());
    if (in_rx_drop_pkts_unctrl.is_set || is_set(in_rx_drop_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_rx_drop_pkts_unctrl.get_name_leafdata());
    if (in_rx_drop_pkts_ctrl.is_set || is_set(in_rx_drop_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_rx_drop_pkts_ctrl.get_name_leafdata());
    if (in_rx_error_pkts_unctrl.is_set || is_set(in_rx_error_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_rx_error_pkts_unctrl.get_name_leafdata());
    if (in_rx_error_pkts_ctrl.is_set || is_set(in_rx_error_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_rx_error_pkts_ctrl.get_name_leafdata());
    if (in_drop_pkts_class.is_set || is_set(in_drop_pkts_class.yfilter)) leaf_name_data.push_back(in_drop_pkts_class.get_name_leafdata());
    if (in_drop_pkts_data.is_set || is_set(in_drop_pkts_data.yfilter)) leaf_name_data.push_back(in_drop_pkts_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
        transform_error_pkts.value_namespace = name_space;
        transform_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl = value;
        in_pkt_ctrl.value_namespace = name_space;
        in_pkt_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag = value;
        in_pkt_no_tag.value_namespace = name_space;
        in_pkt_no_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
        in_pkts_untagged.value_namespace = name_space;
        in_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
        in_pkt_bad_tag.value_namespace = name_space;
        in_pkt_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
        in_pkt_no_sci.value_namespace = name_space;
        in_pkt_no_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
        in_pkts_unknown_sci.value_namespace = name_space;
        in_pkts_unknown_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl = value;
        in_pkts_tagged_ctrl.value_namespace = name_space;
        in_pkts_tagged_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl = value;
        in_octets_unctrl.value_namespace = name_space;
        in_octets_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl = value;
        in_octets_ctrl.value_namespace = name_space;
        in_octets_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl = value;
        in_ucast_pkts_unctrl.value_namespace = name_space;
        in_ucast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl = value;
        in_ucast_pkts_ctrl.value_namespace = name_space;
        in_ucast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl = value;
        in_mcast_pkts_unctrl.value_namespace = name_space;
        in_mcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl = value;
        in_mcast_pkts_ctrl.value_namespace = name_space;
        in_mcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl = value;
        in_bcast_pkts_unctrl.value_namespace = name_space;
        in_bcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl = value;
        in_bcast_pkts_ctrl.value_namespace = name_space;
        in_bcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl = value;
        in_rx_drop_pkts_unctrl.value_namespace = name_space;
        in_rx_drop_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl = value;
        in_rx_drop_pkts_ctrl.value_namespace = name_space;
        in_rx_drop_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl = value;
        in_rx_error_pkts_unctrl.value_namespace = name_space;
        in_rx_error_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl = value;
        in_rx_error_pkts_ctrl.value_namespace = name_space;
        in_rx_error_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class = value;
        in_drop_pkts_class.value_namespace = name_space;
        in_drop_pkts_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data = value;
        in_drop_pkts_data.value_namespace = name_space;
        in_drop_pkts_data.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts.yfilter = yfilter;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class.yfilter = yfilter;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transform-error-pkts" || name == "in-pkt-ctrl" || name == "in-pkt-no-tag" || name == "in-pkts-untagged" || name == "in-pkt-bad-tag" || name == "in-pkt-no-sci" || name == "in-pkts-unknown-sci" || name == "in-pkts-tagged-ctrl" || name == "in-octets-unctrl" || name == "in-octets-ctrl" || name == "in-ucast-pkts-unctrl" || name == "in-ucast-pkts-ctrl" || name == "in-mcast-pkts-unctrl" || name == "in-mcast-pkts-ctrl" || name == "in-bcast-pkts-unctrl" || name == "in-bcast-pkts-ctrl" || name == "in-rx-drop-pkts-unctrl" || name == "in-rx-drop-pkts-ctrl" || name == "in-rx-error-pkts-unctrl" || name == "in-rx-error-pkts-ctrl" || name == "in-drop-pkts-class" || name == "in-drop-pkts-data")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::TxPortStats()
    :
    multi_flow_match{YType::uint64, "multi-flow-match"},
    parser_dropped{YType::uint64, "parser-dropped"},
    flow_miss{YType::uint64, "flow-miss"},
    pkts_ctrl{YType::uint64, "pkts-ctrl"},
    pkts_data{YType::uint64, "pkts-data"},
    pkts_dropped{YType::uint64, "pkts-dropped"},
    pkts_err_in{YType::uint64, "pkts-err-in"}
{

    yang_name = "tx-port-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::~TxPortStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::has_data() const
{
    if (is_presence_container) return true;
    return multi_flow_match.is_set
	|| parser_dropped.is_set
	|| flow_miss.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_flow_match.yfilter)
	|| ydk::is_set(parser_dropped.yfilter)
	|| ydk::is_set(flow_miss.yfilter)
	|| ydk::is_set(pkts_ctrl.yfilter)
	|| ydk::is_set(pkts_data.yfilter)
	|| ydk::is_set(pkts_dropped.yfilter)
	|| ydk::is_set(pkts_err_in.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-port-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_flow_match.is_set || is_set(multi_flow_match.yfilter)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.yfilter)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.yfilter)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.yfilter)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.yfilter)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.yfilter)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.yfilter)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
        multi_flow_match.value_namespace = name_space;
        multi_flow_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
        parser_dropped.value_namespace = name_space;
        parser_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
        flow_miss.value_namespace = name_space;
        flow_miss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
        pkts_ctrl.value_namespace = name_space;
        pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
        pkts_data.value_namespace = name_space;
        pkts_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
        pkts_dropped.value_namespace = name_space;
        pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
        pkts_err_in.value_namespace = name_space;
        pkts_err_in.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match.yfilter = yfilter;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped.yfilter = yfilter;
    }
    if(value_path == "flow-miss")
    {
        flow_miss.yfilter = yfilter;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "pkts-data")
    {
        pkts_data.yfilter = yfilter;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-flow-match" || name == "parser-dropped" || name == "flow-miss" || name == "pkts-ctrl" || name == "pkts-data" || name == "pkts-dropped" || name == "pkts-err-in")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::RxPortStats()
    :
    multi_flow_match{YType::uint64, "multi-flow-match"},
    parser_dropped{YType::uint64, "parser-dropped"},
    flow_miss{YType::uint64, "flow-miss"},
    pkts_ctrl{YType::uint64, "pkts-ctrl"},
    pkts_data{YType::uint64, "pkts-data"},
    pkts_dropped{YType::uint64, "pkts-dropped"},
    pkts_err_in{YType::uint64, "pkts-err-in"}
{

    yang_name = "rx-port-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::~RxPortStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::has_data() const
{
    if (is_presence_container) return true;
    return multi_flow_match.is_set
	|| parser_dropped.is_set
	|| flow_miss.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_flow_match.yfilter)
	|| ydk::is_set(parser_dropped.yfilter)
	|| ydk::is_set(flow_miss.yfilter)
	|| ydk::is_set(pkts_ctrl.yfilter)
	|| ydk::is_set(pkts_data.yfilter)
	|| ydk::is_set(pkts_dropped.yfilter)
	|| ydk::is_set(pkts_err_in.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-port-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_flow_match.is_set || is_set(multi_flow_match.yfilter)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.yfilter)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.yfilter)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.yfilter)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.yfilter)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.yfilter)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.yfilter)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
        multi_flow_match.value_namespace = name_space;
        multi_flow_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
        parser_dropped.value_namespace = name_space;
        parser_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
        flow_miss.value_namespace = name_space;
        flow_miss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
        pkts_ctrl.value_namespace = name_space;
        pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
        pkts_data.value_namespace = name_space;
        pkts_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
        pkts_dropped.value_namespace = name_space;
        pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
        pkts_err_in.value_namespace = name_space;
        pkts_err_in.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match.yfilter = yfilter;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped.yfilter = yfilter;
    }
    if(value_path == "flow-miss")
    {
        flow_miss.yfilter = yfilter;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "pkts-data")
    {
        pkts_data.yfilter = yfilter;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-flow-match" || name == "parser-dropped" || name == "flow-miss" || name == "pkts-ctrl" || name == "pkts-data" || name == "pkts-dropped" || name == "pkts-err-in")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSas()
    :
    hw_sa(this, {"sa_id"})
{

    yang_name = "hw-sas"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::~HwSas()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hw_sa.len(); index++)
    {
        if(hw_sa[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::has_operation() const
{
    for (std::size_t index=0; index<hw_sa.len(); index++)
    {
        if(hw_sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-sas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-sa")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa>();
        c->parent = this;
        hw_sa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hw_sa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-sa")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::HwSa()
    :
    sa_id{YType::uint32, "sa-id"}
        ,
    ext(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext>())
{
    ext->parent = this;

    yang_name = "hw-sa"; yang_parent_name = "hw-sas"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::~HwSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::has_data() const
{
    if (is_presence_container) return true;
    return sa_id.is_set
	|| (ext !=  nullptr && ext->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_id.yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-sa";
    ADD_KEY_TOKEN(sa_id, "sa-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_id.is_set || is_set(sa_id.yfilter)) leaf_name_data.push_back(sa_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-id")
    {
        sa_id = value;
        sa_id.value_namespace = name_space;
        sa_id.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-id")
    {
        sa_id.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext" || name == "sa-id")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Ext()
    :
    type{YType::enumeration, "type"}
        ,
    msfpga_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa>())
    , xlfpga_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa>())
    , es200_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa>())
{
    msfpga_sa->parent = this;
    xlfpga_sa->parent = this;
    es200_sa->parent = this;

    yang_name = "ext"; yang_parent_name = "hw-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::~Ext()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_data())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_data())
	|| (es200_sa !=  nullptr && es200_sa->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (msfpga_sa !=  nullptr && msfpga_sa->has_operation())
	|| (xlfpga_sa !=  nullptr && xlfpga_sa->has_operation())
	|| (es200_sa !=  nullptr && es200_sa->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msfpga-sa")
    {
        if(msfpga_sa == nullptr)
        {
            msfpga_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa>();
        }
        return msfpga_sa;
    }

    if(child_yang_name == "xlfpga-sa")
    {
        if(xlfpga_sa == nullptr)
        {
            xlfpga_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa>();
        }
        return xlfpga_sa;
    }

    if(child_yang_name == "es200-sa")
    {
        if(es200_sa == nullptr)
        {
            es200_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa>();
        }
        return es200_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msfpga_sa != nullptr)
    {
        children["msfpga-sa"] = msfpga_sa;
    }

    if(xlfpga_sa != nullptr)
    {
        children["xlfpga-sa"] = xlfpga_sa;
    }

    if(es200_sa != nullptr)
    {
        children["es200-sa"] = es200_sa;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msfpga-sa" || name == "xlfpga-sa" || name == "es200-sa" || name == "type")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::MsfpgaSa()
    :
    tx_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa>())
    , rx_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa>())
{
    tx_sa->parent = this;
    rx_sa->parent = this;

    yang_name = "msfpga-sa"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::~MsfpgaSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa !=  nullptr && tx_sa->has_data())
	|| (rx_sa !=  nullptr && rx_sa->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa !=  nullptr && tx_sa->has_operation())
	|| (rx_sa !=  nullptr && rx_sa->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa")
    {
        if(tx_sa == nullptr)
        {
            tx_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa>();
        }
        return tx_sa;
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa == nullptr)
        {
            rx_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa>();
        }
        return rx_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa != nullptr)
    {
        children["tx-sa"] = tx_sa;
    }

    if(rx_sa != nullptr)
    {
        children["rx-sa"] = rx_sa;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa" || name == "rx-sa")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::TxSa()
    :
    sa_id{YType::uint8, "sa-id"},
    valid{YType::boolean, "valid"},
    is_egress{YType::boolean, "is-egress"},
    crypto_algo{YType::uint8, "crypto-algo"},
    key_len{YType::uint8, "key-len"},
    an{YType::uint8, "an"},
    xpn{YType::uint8, "xpn"},
    sci{YType::uint64, "sci"},
    in_use{YType::boolean, "in-use"},
    next_pn{YType::uint64, "next-pn"},
    c_offset{YType::uint8, "c-offset"},
    action{YType::uint8, "action"},
    q_bit{YType::boolean, "q-bit"},
    qq_bit{YType::boolean, "qq-bit"}
{

    yang_name = "tx-sa"; yang_parent_name = "msfpga-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::~TxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::has_data() const
{
    if (is_presence_container) return true;
    return sa_id.is_set
	|| valid.is_set
	|| is_egress.is_set
	|| crypto_algo.is_set
	|| key_len.is_set
	|| an.is_set
	|| xpn.is_set
	|| sci.is_set
	|| in_use.is_set
	|| next_pn.is_set
	|| c_offset.is_set
	|| action.is_set
	|| q_bit.is_set
	|| qq_bit.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(is_egress.yfilter)
	|| ydk::is_set(crypto_algo.yfilter)
	|| ydk::is_set(key_len.yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(xpn.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(next_pn.yfilter)
	|| ydk::is_set(c_offset.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(q_bit.yfilter)
	|| ydk::is_set(qq_bit.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_id.is_set || is_set(sa_id.yfilter)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.yfilter)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.yfilter)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.yfilter)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.yfilter)) leaf_name_data.push_back(xpn.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.yfilter)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.yfilter)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.yfilter)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.yfilter)) leaf_name_data.push_back(qq_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-id")
    {
        sa_id = value;
        sa_id.value_namespace = name_space;
        sa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
        is_egress.value_namespace = name_space;
        is_egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
        crypto_algo.value_namespace = name_space;
        crypto_algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-len")
    {
        key_len = value;
        key_len.value_namespace = name_space;
        key_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn")
    {
        xpn = value;
        xpn.value_namespace = name_space;
        xpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
        next_pn.value_namespace = name_space;
        next_pn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
        c_offset.value_namespace = name_space;
        c_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
        q_bit.value_namespace = name_space;
        q_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
        qq_bit.value_namespace = name_space;
        qq_bit.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-id")
    {
        sa_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "is-egress")
    {
        is_egress.yfilter = yfilter;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo.yfilter = yfilter;
    }
    if(value_path == "key-len")
    {
        key_len.yfilter = yfilter;
    }
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "xpn")
    {
        xpn.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "next-pn")
    {
        next_pn.yfilter = yfilter;
    }
    if(value_path == "c-offset")
    {
        c_offset.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "q-bit")
    {
        q_bit.yfilter = yfilter;
    }
    if(value_path == "qq-bit")
    {
        qq_bit.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-id" || name == "valid" || name == "is-egress" || name == "crypto-algo" || name == "key-len" || name == "an" || name == "xpn" || name == "sci" || name == "in-use" || name == "next-pn" || name == "c-offset" || name == "action" || name == "q-bit" || name == "qq-bit")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::RxSa()
    :
    sa_id{YType::uint8, "sa-id"},
    valid{YType::boolean, "valid"},
    is_egress{YType::boolean, "is-egress"},
    crypto_algo{YType::uint8, "crypto-algo"},
    key_len{YType::uint8, "key-len"},
    an{YType::uint8, "an"},
    xpn{YType::uint8, "xpn"},
    sci{YType::uint64, "sci"},
    in_use{YType::boolean, "in-use"},
    next_pn{YType::uint64, "next-pn"},
    c_offset{YType::uint8, "c-offset"},
    action{YType::uint8, "action"},
    q_bit{YType::boolean, "q-bit"},
    qq_bit{YType::boolean, "qq-bit"}
{

    yang_name = "rx-sa"; yang_parent_name = "msfpga-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::~RxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::has_data() const
{
    if (is_presence_container) return true;
    return sa_id.is_set
	|| valid.is_set
	|| is_egress.is_set
	|| crypto_algo.is_set
	|| key_len.is_set
	|| an.is_set
	|| xpn.is_set
	|| sci.is_set
	|| in_use.is_set
	|| next_pn.is_set
	|| c_offset.is_set
	|| action.is_set
	|| q_bit.is_set
	|| qq_bit.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(is_egress.yfilter)
	|| ydk::is_set(crypto_algo.yfilter)
	|| ydk::is_set(key_len.yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(xpn.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(next_pn.yfilter)
	|| ydk::is_set(c_offset.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(q_bit.yfilter)
	|| ydk::is_set(qq_bit.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_id.is_set || is_set(sa_id.yfilter)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.yfilter)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (crypto_algo.is_set || is_set(crypto_algo.yfilter)) leaf_name_data.push_back(crypto_algo.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.yfilter)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (xpn.is_set || is_set(xpn.yfilter)) leaf_name_data.push_back(xpn.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.yfilter)) leaf_name_data.push_back(next_pn.get_name_leafdata());
    if (c_offset.is_set || is_set(c_offset.yfilter)) leaf_name_data.push_back(c_offset.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (q_bit.is_set || is_set(q_bit.yfilter)) leaf_name_data.push_back(q_bit.get_name_leafdata());
    if (qq_bit.is_set || is_set(qq_bit.yfilter)) leaf_name_data.push_back(qq_bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-id")
    {
        sa_id = value;
        sa_id.value_namespace = name_space;
        sa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
        is_egress.value_namespace = name_space;
        is_egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo = value;
        crypto_algo.value_namespace = name_space;
        crypto_algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-len")
    {
        key_len = value;
        key_len.value_namespace = name_space;
        key_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn")
    {
        xpn = value;
        xpn.value_namespace = name_space;
        xpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
        next_pn.value_namespace = name_space;
        next_pn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "c-offset")
    {
        c_offset = value;
        c_offset.value_namespace = name_space;
        c_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "q-bit")
    {
        q_bit = value;
        q_bit.value_namespace = name_space;
        q_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qq-bit")
    {
        qq_bit = value;
        qq_bit.value_namespace = name_space;
        qq_bit.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-id")
    {
        sa_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "is-egress")
    {
        is_egress.yfilter = yfilter;
    }
    if(value_path == "crypto-algo")
    {
        crypto_algo.yfilter = yfilter;
    }
    if(value_path == "key-len")
    {
        key_len.yfilter = yfilter;
    }
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "xpn")
    {
        xpn.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "next-pn")
    {
        next_pn.yfilter = yfilter;
    }
    if(value_path == "c-offset")
    {
        c_offset.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "q-bit")
    {
        q_bit.yfilter = yfilter;
    }
    if(value_path == "qq-bit")
    {
        qq_bit.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-id" || name == "valid" || name == "is-egress" || name == "crypto-algo" || name == "key-len" || name == "an" || name == "xpn" || name == "sci" || name == "in-use" || name == "next-pn" || name == "c-offset" || name == "action" || name == "q-bit" || name == "qq-bit")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::XlfpgaSa()
    :
    tx_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa>())
    , rx_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa>())
{
    tx_sa->parent = this;
    rx_sa->parent = this;

    yang_name = "xlfpga-sa"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::~XlfpgaSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa !=  nullptr && tx_sa->has_data())
	|| (rx_sa !=  nullptr && rx_sa->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa !=  nullptr && tx_sa->has_operation())
	|| (rx_sa !=  nullptr && rx_sa->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa")
    {
        if(tx_sa == nullptr)
        {
            tx_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa>();
        }
        return tx_sa;
    }

    if(child_yang_name == "rx-sa")
    {
        if(rx_sa == nullptr)
        {
            rx_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa>();
        }
        return rx_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa != nullptr)
    {
        children["tx-sa"] = tx_sa;
    }

    if(rx_sa != nullptr)
    {
        children["rx-sa"] = rx_sa;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa" || name == "rx-sa")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::TxSa()
    :
    protection_enable{YType::boolean, "protection-enable"},
    secure_mode{YType::uint8, "secure-mode"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    sectag_length{YType::uint32, "sectag-length"},
    cipher_suite{YType::uint32, "cipher-suite"},
    confidentiality_offset{YType::uint8, "confidentiality-offset"},
    fcs_err_cfg{YType::uint8, "fcs-err-cfg"},
    max_packet_num{YType::uint64, "max-packet-num"},
    an{YType::uint8, "an"},
    initial_packet_number{YType::uint64, "initial-packet-number"},
    ssci{YType::uint32, "ssci"},
    current_packet_num{YType::uint64, "current-packet-num"},
    crc_value{YType::uint32, "crc-value"}
{

    yang_name = "tx-sa"; yang_parent_name = "xlfpga-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::~TxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::has_data() const
{
    if (is_presence_container) return true;
    return protection_enable.is_set
	|| secure_mode.is_set
	|| secure_channel_id.is_set
	|| sectag_length.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| fcs_err_cfg.is_set
	|| max_packet_num.is_set
	|| an.is_set
	|| initial_packet_number.is_set
	|| ssci.is_set
	|| current_packet_num.is_set
	|| crc_value.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection_enable.yfilter)
	|| ydk::is_set(secure_mode.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(sectag_length.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(fcs_err_cfg.yfilter)
	|| ydk::is_set(max_packet_num.yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(initial_packet_number.yfilter)
	|| ydk::is_set(ssci.yfilter)
	|| ydk::is_set(current_packet_num.yfilter)
	|| ydk::is_set(crc_value.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enable.is_set || is_set(protection_enable.yfilter)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.yfilter)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (sectag_length.is_set || is_set(sectag_length.yfilter)) leaf_name_data.push_back(sectag_length.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.yfilter)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.yfilter)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.yfilter)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.yfilter)) leaf_name_data.push_back(ssci.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.yfilter)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());
    if (crc_value.is_set || is_set(crc_value.yfilter)) leaf_name_data.push_back(crc_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enable")
    {
        protection_enable = value;
        protection_enable.value_namespace = name_space;
        protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
        secure_mode.value_namespace = name_space;
        secure_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sectag-length")
    {
        sectag_length = value;
        sectag_length.value_namespace = name_space;
        sectag_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
        fcs_err_cfg.value_namespace = name_space;
        fcs_err_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
        max_packet_num.value_namespace = name_space;
        max_packet_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
        initial_packet_number.value_namespace = name_space;
        initial_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci = value;
        ssci.value_namespace = name_space;
        ssci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
        current_packet_num.value_namespace = name_space;
        current_packet_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-value")
    {
        crc_value = value;
        crc_value.value_namespace = name_space;
        crc_value.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enable")
    {
        protection_enable.yfilter = yfilter;
    }
    if(value_path == "secure-mode")
    {
        secure_mode.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "sectag-length")
    {
        sectag_length.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg.yfilter = yfilter;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num.yfilter = yfilter;
    }
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num.yfilter = yfilter;
    }
    if(value_path == "crc-value")
    {
        crc_value.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-enable" || name == "secure-mode" || name == "secure-channel-id" || name == "sectag-length" || name == "cipher-suite" || name == "confidentiality-offset" || name == "fcs-err-cfg" || name == "max-packet-num" || name == "an" || name == "initial-packet-number" || name == "ssci" || name == "current-packet-num" || name == "crc-value")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::RxSa()
    :
    protection_enable{YType::boolean, "protection-enable"},
    secure_mode{YType::uint32, "secure-mode"},
    replay_protect_mode{YType::boolean, "replay-protect-mode"},
    validation_mode{YType::uint32, "validation-mode"},
    replay_window{YType::uint32, "replay-window"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    cipher_suite{YType::uint32, "cipher-suite"},
    confidentiality_offset{YType::uint8, "confidentiality-offset"},
    fcs_err_cfg{YType::uint32, "fcs-err-cfg"},
    auth_err_cfg{YType::uint32, "auth-err-cfg"},
    max_packet_num{YType::uint64, "max-packet-num"},
    num_an_in_use{YType::uint32, "num-an-in-use"},
    an{YType::str, "an"},
    recent_an{YType::uint8, "recent-an"},
    pkt_untagged_detected{YType::boolean, "pkt-untagged-detected"},
    pkt_tagged_detected{YType::boolean, "pkt-tagged-detected"},
    pkt_tagged_validated{YType::boolean, "pkt-tagged-validated"},
    current_packet_num{YType::uint64, "current-packet-num"},
    ssci{YType::uint32, "ssci"},
    lowest_acceptable_packet_num{YType::uint64, "lowest-acceptable-packet-num"},
    next_expected_packet_num{YType::uint64, "next-expected-packet-num"},
    crc_value{YType::uint32, "crc-value"}
{

    yang_name = "rx-sa"; yang_parent_name = "xlfpga-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::~RxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lowest_acceptable_packet_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : next_expected_packet_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return protection_enable.is_set
	|| secure_mode.is_set
	|| replay_protect_mode.is_set
	|| validation_mode.is_set
	|| replay_window.is_set
	|| secure_channel_id.is_set
	|| cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| fcs_err_cfg.is_set
	|| auth_err_cfg.is_set
	|| max_packet_num.is_set
	|| num_an_in_use.is_set
	|| an.is_set
	|| recent_an.is_set
	|| pkt_untagged_detected.is_set
	|| pkt_tagged_detected.is_set
	|| pkt_tagged_validated.is_set
	|| current_packet_num.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::has_operation() const
{
    for (auto const & leaf : ssci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lowest_acceptable_packet_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : next_expected_packet_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : crc_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protection_enable.yfilter)
	|| ydk::is_set(secure_mode.yfilter)
	|| ydk::is_set(replay_protect_mode.yfilter)
	|| ydk::is_set(validation_mode.yfilter)
	|| ydk::is_set(replay_window.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(fcs_err_cfg.yfilter)
	|| ydk::is_set(auth_err_cfg.yfilter)
	|| ydk::is_set(max_packet_num.yfilter)
	|| ydk::is_set(num_an_in_use.yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(recent_an.yfilter)
	|| ydk::is_set(pkt_untagged_detected.yfilter)
	|| ydk::is_set(pkt_tagged_detected.yfilter)
	|| ydk::is_set(pkt_tagged_validated.yfilter)
	|| ydk::is_set(current_packet_num.yfilter)
	|| ydk::is_set(ssci.yfilter)
	|| ydk::is_set(lowest_acceptable_packet_num.yfilter)
	|| ydk::is_set(next_expected_packet_num.yfilter)
	|| ydk::is_set(crc_value.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enable.is_set || is_set(protection_enable.yfilter)) leaf_name_data.push_back(protection_enable.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.yfilter)) leaf_name_data.push_back(secure_mode.get_name_leafdata());
    if (replay_protect_mode.is_set || is_set(replay_protect_mode.yfilter)) leaf_name_data.push_back(replay_protect_mode.get_name_leafdata());
    if (validation_mode.is_set || is_set(validation_mode.yfilter)) leaf_name_data.push_back(validation_mode.get_name_leafdata());
    if (replay_window.is_set || is_set(replay_window.yfilter)) leaf_name_data.push_back(replay_window.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (fcs_err_cfg.is_set || is_set(fcs_err_cfg.yfilter)) leaf_name_data.push_back(fcs_err_cfg.get_name_leafdata());
    if (auth_err_cfg.is_set || is_set(auth_err_cfg.yfilter)) leaf_name_data.push_back(auth_err_cfg.get_name_leafdata());
    if (max_packet_num.is_set || is_set(max_packet_num.yfilter)) leaf_name_data.push_back(max_packet_num.get_name_leafdata());
    if (num_an_in_use.is_set || is_set(num_an_in_use.yfilter)) leaf_name_data.push_back(num_an_in_use.get_name_leafdata());
    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (recent_an.is_set || is_set(recent_an.yfilter)) leaf_name_data.push_back(recent_an.get_name_leafdata());
    if (pkt_untagged_detected.is_set || is_set(pkt_untagged_detected.yfilter)) leaf_name_data.push_back(pkt_untagged_detected.get_name_leafdata());
    if (pkt_tagged_detected.is_set || is_set(pkt_tagged_detected.yfilter)) leaf_name_data.push_back(pkt_tagged_detected.get_name_leafdata());
    if (pkt_tagged_validated.is_set || is_set(pkt_tagged_validated.yfilter)) leaf_name_data.push_back(pkt_tagged_validated.get_name_leafdata());
    if (current_packet_num.is_set || is_set(current_packet_num.yfilter)) leaf_name_data.push_back(current_packet_num.get_name_leafdata());

    auto ssci_name_datas = ssci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ssci_name_datas.begin(), ssci_name_datas.end());
    auto lowest_acceptable_packet_num_name_datas = lowest_acceptable_packet_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lowest_acceptable_packet_num_name_datas.begin(), lowest_acceptable_packet_num_name_datas.end());
    auto next_expected_packet_num_name_datas = next_expected_packet_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_expected_packet_num_name_datas.begin(), next_expected_packet_num_name_datas.end());
    auto crc_value_name_datas = crc_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), crc_value_name_datas.begin(), crc_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enable")
    {
        protection_enable = value;
        protection_enable.value_namespace = name_space;
        protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
        secure_mode.value_namespace = name_space;
        secure_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-protect-mode")
    {
        replay_protect_mode = value;
        replay_protect_mode.value_namespace = name_space;
        replay_protect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validation-mode")
    {
        validation_mode = value;
        validation_mode.value_namespace = name_space;
        validation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-window")
    {
        replay_window = value;
        replay_window.value_namespace = name_space;
        replay_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg = value;
        fcs_err_cfg.value_namespace = name_space;
        fcs_err_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-err-cfg")
    {
        auth_err_cfg = value;
        auth_err_cfg.value_namespace = name_space;
        auth_err_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num = value;
        max_packet_num.value_namespace = name_space;
        max_packet_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-an-in-use")
    {
        num_an_in_use = value;
        num_an_in_use.value_namespace = name_space;
        num_an_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-an")
    {
        recent_an = value;
        recent_an.value_namespace = name_space;
        recent_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-untagged-detected")
    {
        pkt_untagged_detected = value;
        pkt_untagged_detected.value_namespace = name_space;
        pkt_untagged_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-tagged-detected")
    {
        pkt_tagged_detected = value;
        pkt_tagged_detected.value_namespace = name_space;
        pkt_tagged_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-tagged-validated")
    {
        pkt_tagged_validated = value;
        pkt_tagged_validated.value_namespace = name_space;
        pkt_tagged_validated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num = value;
        current_packet_num.value_namespace = name_space;
        current_packet_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci.append(value);
    }
    if(value_path == "lowest-acceptable-packet-num")
    {
        lowest_acceptable_packet_num.append(value);
    }
    if(value_path == "next-expected-packet-num")
    {
        next_expected_packet_num.append(value);
    }
    if(value_path == "crc-value")
    {
        crc_value.append(value);
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enable")
    {
        protection_enable.yfilter = yfilter;
    }
    if(value_path == "secure-mode")
    {
        secure_mode.yfilter = yfilter;
    }
    if(value_path == "replay-protect-mode")
    {
        replay_protect_mode.yfilter = yfilter;
    }
    if(value_path == "validation-mode")
    {
        validation_mode.yfilter = yfilter;
    }
    if(value_path == "replay-window")
    {
        replay_window.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "fcs-err-cfg")
    {
        fcs_err_cfg.yfilter = yfilter;
    }
    if(value_path == "auth-err-cfg")
    {
        auth_err_cfg.yfilter = yfilter;
    }
    if(value_path == "max-packet-num")
    {
        max_packet_num.yfilter = yfilter;
    }
    if(value_path == "num-an-in-use")
    {
        num_an_in_use.yfilter = yfilter;
    }
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "recent-an")
    {
        recent_an.yfilter = yfilter;
    }
    if(value_path == "pkt-untagged-detected")
    {
        pkt_untagged_detected.yfilter = yfilter;
    }
    if(value_path == "pkt-tagged-detected")
    {
        pkt_tagged_detected.yfilter = yfilter;
    }
    if(value_path == "pkt-tagged-validated")
    {
        pkt_tagged_validated.yfilter = yfilter;
    }
    if(value_path == "current-packet-num")
    {
        current_packet_num.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
    if(value_path == "lowest-acceptable-packet-num")
    {
        lowest_acceptable_packet_num.yfilter = yfilter;
    }
    if(value_path == "next-expected-packet-num")
    {
        next_expected_packet_num.yfilter = yfilter;
    }
    if(value_path == "crc-value")
    {
        crc_value.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-enable" || name == "secure-mode" || name == "replay-protect-mode" || name == "validation-mode" || name == "replay-window" || name == "secure-channel-id" || name == "cipher-suite" || name == "confidentiality-offset" || name == "fcs-err-cfg" || name == "auth-err-cfg" || name == "max-packet-num" || name == "num-an-in-use" || name == "an" || name == "recent-an" || name == "pkt-untagged-detected" || name == "pkt-tagged-detected" || name == "pkt-tagged-validated" || name == "current-packet-num" || name == "ssci" || name == "lowest-acceptable-packet-num" || name == "next-expected-packet-num" || name == "crc-value")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::Es200Sa()
    :
    tx_sa(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa>())
    , rx_sa(this, {})
{
    tx_sa->parent = this;

    yang_name = "es200-sa"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::~Es200Sa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx_sa.len(); index++)
    {
        if(rx_sa[index]->has_data())
            return true;
    }
    return (tx_sa !=  nullptr && tx_sa->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::has_operation() const
{
    for (std::size_t index=0; index<rx_sa.len(); index++)
    {
        if(rx_sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tx_sa !=  nullptr && tx_sa->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa")
    {
        if(tx_sa == nullptr)
        {
            tx_sa = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa>();
        }
        return tx_sa;
    }

    if(child_yang_name == "rx-sa")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa>();
        c->parent = this;
        rx_sa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa != nullptr)
    {
        children["tx-sa"] = tx_sa;
    }

    count = 0;
    for (auto c : rx_sa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa" || name == "rx-sa")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::TxSa()
    :
    is_valid{YType::boolean, "is-valid"},
    sa_id{YType::uint8, "sa-id"},
    sc_no{YType::uint32, "sc-no"},
    out_pkts_too_long{YType::uint8, "out-pkts-too-long"},
    out_pkts_encrypted_protected{YType::uint8, "out-pkts-encrypted-protected"},
    out_octets_encrypted_protected1{YType::uint8, "out-octets-encrypted-protected1"},
    initial_pkt_number{YType::uint8, "initial-pkt-number"},
    current_pkt_number{YType::uint64, "current-pkt-number"},
    max_pkt_number{YType::uint64, "max-pkt-number"}
        ,
    xform_params(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams>())
{
    xform_params->parent = this;

    yang_name = "tx-sa"; yang_parent_name = "es200-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::~TxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| out_pkts_too_long.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_octets_encrypted_protected1.is_set
	|| initial_pkt_number.is_set
	|| current_pkt_number.is_set
	|| max_pkt_number.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(sa_id.yfilter)
	|| ydk::is_set(sc_no.yfilter)
	|| ydk::is_set(out_pkts_too_long.yfilter)
	|| ydk::is_set(out_pkts_encrypted_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted_protected1.yfilter)
	|| ydk::is_set(initial_pkt_number.yfilter)
	|| ydk::is_set(current_pkt_number.yfilter)
	|| ydk::is_set(max_pkt_number.yfilter)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.yfilter)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.yfilter)) leaf_name_data.push_back(sc_no.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.yfilter)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.yfilter)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.yfilter)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());
    if (initial_pkt_number.is_set || is_set(initial_pkt_number.yfilter)) leaf_name_data.push_back(initial_pkt_number.get_name_leafdata());
    if (current_pkt_number.is_set || is_set(current_pkt_number.yfilter)) leaf_name_data.push_back(current_pkt_number.get_name_leafdata());
    if (max_pkt_number.is_set || is_set(max_pkt_number.yfilter)) leaf_name_data.push_back(max_pkt_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xform-params")
    {
        if(xform_params == nullptr)
        {
            xform_params = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams>();
        }
        return xform_params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xform_params != nullptr)
    {
        children["xform-params"] = xform_params;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
        sa_id.value_namespace = name_space;
        sa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
        sc_no.value_namespace = name_space;
        sc_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
        out_pkts_too_long.value_namespace = name_space;
        out_pkts_too_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
        out_pkts_encrypted_protected.value_namespace = name_space;
        out_pkts_encrypted_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
        out_octets_encrypted_protected1.value_namespace = name_space;
        out_octets_encrypted_protected1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-pkt-number")
    {
        initial_pkt_number = value;
        initial_pkt_number.value_namespace = name_space;
        initial_pkt_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pkt-number")
    {
        current_pkt_number = value;
        current_pkt_number.value_namespace = name_space;
        current_pkt_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-number")
    {
        max_pkt_number = value;
        max_pkt_number.value_namespace = name_space;
        max_pkt_number.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "sa-id")
    {
        sa_id.yfilter = yfilter;
    }
    if(value_path == "sc-no")
    {
        sc_no.yfilter = yfilter;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1.yfilter = yfilter;
    }
    if(value_path == "initial-pkt-number")
    {
        initial_pkt_number.yfilter = yfilter;
    }
    if(value_path == "current-pkt-number")
    {
        current_pkt_number.yfilter = yfilter;
    }
    if(value_path == "max-pkt-number")
    {
        max_pkt_number.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xform-params" || name == "is-valid" || name == "sa-id" || name == "sc-no" || name == "out-pkts-too-long" || name == "out-pkts-encrypted-protected" || name == "out-octets-encrypted-protected1" || name == "initial-pkt-number" || name == "current-pkt-number" || name == "max-pkt-number")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::XformParams()
    :
    replay_win_size{YType::uint32, "replay-win-size"},
    crypt_algo{YType::str, "crypt-algo"},
    is_egress_tr{YType::boolean, "is-egress-tr"},
    aes_key_len{YType::str, "aes-key-len"},
    assoc_num{YType::uint8, "assoc-num"},
    is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
    bgen_auth_key{YType::boolean, "bgen-auth-key"}
{

    yang_name = "xform-params"; yang_parent_name = "tx-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::~XformParams()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::has_data() const
{
    if (is_presence_container) return true;
    return replay_win_size.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| aes_key_len.is_set
	|| assoc_num.is_set
	|| is_seq_num64_bit.is_set
	|| bgen_auth_key.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replay_win_size.yfilter)
	|| ydk::is_set(crypt_algo.yfilter)
	|| ydk::is_set(is_egress_tr.yfilter)
	|| ydk::is_set(aes_key_len.yfilter)
	|| ydk::is_set(assoc_num.yfilter)
	|| ydk::is_set(is_seq_num64_bit.yfilter)
	|| ydk::is_set(bgen_auth_key.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replay_win_size.is_set || is_set(replay_win_size.yfilter)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.yfilter)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.yfilter)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (aes_key_len.is_set || is_set(aes_key_len.yfilter)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.yfilter)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.yfilter)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.yfilter)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
        replay_win_size.value_namespace = name_space;
        replay_win_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
        crypt_algo.value_namespace = name_space;
        crypt_algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
        is_egress_tr.value_namespace = name_space;
        is_egress_tr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
        aes_key_len.value_namespace = name_space;
        aes_key_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
        assoc_num.value_namespace = name_space;
        assoc_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
        is_seq_num64_bit.value_namespace = name_space;
        is_seq_num64_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
        bgen_auth_key.value_namespace = name_space;
        bgen_auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replay-win-size")
    {
        replay_win_size.yfilter = yfilter;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo.yfilter = yfilter;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr.yfilter = yfilter;
    }
    if(value_path == "aes-key-len")
    {
        aes_key_len.yfilter = yfilter;
    }
    if(value_path == "assoc-num")
    {
        assoc_num.yfilter = yfilter;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit.yfilter = yfilter;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-win-size" || name == "crypt-algo" || name == "is-egress-tr" || name == "aes-key-len" || name == "assoc-num" || name == "is-seq-num64-bit" || name == "bgen-auth-key")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::RxSa()
    :
    is_valid{YType::boolean, "is-valid"},
    sa_id{YType::uint8, "sa-id"},
    sc_no{YType::uint32, "sc-no"},
    in_pkts_unchecked{YType::uint8, "in-pkts-unchecked"},
    in_pkts_delayed{YType::uint8, "in-pkts-delayed"},
    in_pkts_late{YType::uint8, "in-pkts-late"},
    in_pkts_ok{YType::uint8, "in-pkts-ok"},
    in_pkts_invalid{YType::uint8, "in-pkts-invalid"},
    in_pkts_not_valid{YType::uint8, "in-pkts-not-valid"},
    in_pkts_not_using_sa{YType::uint8, "in-pkts-not-using-sa"},
    in_pkts_unused_sa{YType::uint8, "in-pkts-unused-sa"},
    in_octets_decrypted_validated1{YType::uint8, "in-octets-decrypted-validated1"},
    in_octets_validated{YType::uint8, "in-octets-validated"}
        ,
    xform_params(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams>())
{
    xform_params->parent = this;

    yang_name = "rx-sa"; yang_parent_name = "es200-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::~RxSa()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| sa_id.is_set
	|| sc_no.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_unused_sa.is_set
	|| in_octets_decrypted_validated1.is_set
	|| in_octets_validated.is_set
	|| (xform_params !=  nullptr && xform_params->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(sa_id.yfilter)
	|| ydk::is_set(sc_no.yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_octets_decrypted_validated1.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter)
	|| (xform_params !=  nullptr && xform_params->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (sa_id.is_set || is_set(sa_id.yfilter)) leaf_name_data.push_back(sa_id.get_name_leafdata());
    if (sc_no.is_set || is_set(sc_no.yfilter)) leaf_name_data.push_back(sc_no.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.yfilter)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xform-params")
    {
        if(xform_params == nullptr)
        {
            xform_params = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams>();
        }
        return xform_params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xform_params != nullptr)
    {
        children["xform-params"] = xform_params;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-id")
    {
        sa_id = value;
        sa_id.value_namespace = name_space;
        sa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no")
    {
        sc_no = value;
        sc_no.value_namespace = name_space;
        sc_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
        in_octets_decrypted_validated1.value_namespace = name_space;
        in_octets_decrypted_validated1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "sa-id")
    {
        sa_id.yfilter = yfilter;
    }
    if(value_path == "sc-no")
    {
        sc_no.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xform-params" || name == "is-valid" || name == "sa-id" || name == "sc-no" || name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-octets-decrypted-validated1" || name == "in-octets-validated")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::XformParams()
    :
    replay_win_size{YType::uint32, "replay-win-size"},
    crypt_algo{YType::str, "crypt-algo"},
    is_egress_tr{YType::boolean, "is-egress-tr"},
    aes_key_len{YType::str, "aes-key-len"},
    assoc_num{YType::uint8, "assoc-num"},
    is_seq_num64_bit{YType::boolean, "is-seq-num64-bit"},
    bgen_auth_key{YType::boolean, "bgen-auth-key"}
{

    yang_name = "xform-params"; yang_parent_name = "rx-sa"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::~XformParams()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::has_data() const
{
    if (is_presence_container) return true;
    return replay_win_size.is_set
	|| crypt_algo.is_set
	|| is_egress_tr.is_set
	|| aes_key_len.is_set
	|| assoc_num.is_set
	|| is_seq_num64_bit.is_set
	|| bgen_auth_key.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replay_win_size.yfilter)
	|| ydk::is_set(crypt_algo.yfilter)
	|| ydk::is_set(is_egress_tr.yfilter)
	|| ydk::is_set(aes_key_len.yfilter)
	|| ydk::is_set(assoc_num.yfilter)
	|| ydk::is_set(is_seq_num64_bit.yfilter)
	|| ydk::is_set(bgen_auth_key.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xform-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replay_win_size.is_set || is_set(replay_win_size.yfilter)) leaf_name_data.push_back(replay_win_size.get_name_leafdata());
    if (crypt_algo.is_set || is_set(crypt_algo.yfilter)) leaf_name_data.push_back(crypt_algo.get_name_leafdata());
    if (is_egress_tr.is_set || is_set(is_egress_tr.yfilter)) leaf_name_data.push_back(is_egress_tr.get_name_leafdata());
    if (aes_key_len.is_set || is_set(aes_key_len.yfilter)) leaf_name_data.push_back(aes_key_len.get_name_leafdata());
    if (assoc_num.is_set || is_set(assoc_num.yfilter)) leaf_name_data.push_back(assoc_num.get_name_leafdata());
    if (is_seq_num64_bit.is_set || is_set(is_seq_num64_bit.yfilter)) leaf_name_data.push_back(is_seq_num64_bit.get_name_leafdata());
    if (bgen_auth_key.is_set || is_set(bgen_auth_key.yfilter)) leaf_name_data.push_back(bgen_auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replay-win-size")
    {
        replay_win_size = value;
        replay_win_size.value_namespace = name_space;
        replay_win_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo = value;
        crypt_algo.value_namespace = name_space;
        crypt_algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr = value;
        is_egress_tr.value_namespace = name_space;
        is_egress_tr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-key-len")
    {
        aes_key_len = value;
        aes_key_len.value_namespace = name_space;
        aes_key_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assoc-num")
    {
        assoc_num = value;
        assoc_num.value_namespace = name_space;
        assoc_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit = value;
        is_seq_num64_bit.value_namespace = name_space;
        is_seq_num64_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key = value;
        bgen_auth_key.value_namespace = name_space;
        bgen_auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replay-win-size")
    {
        replay_win_size.yfilter = yfilter;
    }
    if(value_path == "crypt-algo")
    {
        crypt_algo.yfilter = yfilter;
    }
    if(value_path == "is-egress-tr")
    {
        is_egress_tr.yfilter = yfilter;
    }
    if(value_path == "aes-key-len")
    {
        aes_key_len.yfilter = yfilter;
    }
    if(value_path == "assoc-num")
    {
        assoc_num.yfilter = yfilter;
    }
    if(value_path == "is-seq-num64-bit")
    {
        is_seq_num64_bit.yfilter = yfilter;
    }
    if(value_path == "bgen-auth-key")
    {
        bgen_auth_key.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-win-size" || name == "crypt-algo" || name == "is-egress-tr" || name == "aes-key-len" || name == "assoc-num" || name == "is-seq-num64-bit" || name == "bgen-auth-key")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlowS()
    :
    hw_flow(this, {"flow_id"})
{

    yang_name = "hw-flow-s"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::~HwFlowS()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hw_flow.len(); index++)
    {
        if(hw_flow[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::has_operation() const
{
    for (std::size_t index=0; index<hw_flow.len(); index++)
    {
        if(hw_flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-flow-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-flow")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow>();
        c->parent = this;
        hw_flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hw_flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-flow")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::HwFlow()
    :
    flow_id{YType::uint32, "flow-id"}
        ,
    ext(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext>())
{
    ext->parent = this;

    yang_name = "hw-flow"; yang_parent_name = "hw-flow-s"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::~HwFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::has_data() const
{
    if (is_presence_container) return true;
    return flow_id.is_set
	|| (ext !=  nullptr && ext->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_id.yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-flow";
    ADD_KEY_TOKEN(flow_id, "flow-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_id.is_set || is_set(flow_id.yfilter)) leaf_name_data.push_back(flow_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-id")
    {
        flow_id = value;
        flow_id.value_namespace = name_space;
        flow_id.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-id")
    {
        flow_id.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext" || name == "flow-id")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Ext()
    :
    type{YType::enumeration, "type"}
        ,
    msfpga_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow>())
    , es200_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow>())
{
    msfpga_flow->parent = this;
    es200_flow->parent = this;

    yang_name = "ext"; yang_parent_name = "hw-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::~Ext()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_data())
	|| (es200_flow !=  nullptr && es200_flow->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (msfpga_flow !=  nullptr && msfpga_flow->has_operation())
	|| (es200_flow !=  nullptr && es200_flow->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msfpga-flow")
    {
        if(msfpga_flow == nullptr)
        {
            msfpga_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow>();
        }
        return msfpga_flow;
    }

    if(child_yang_name == "es200-flow")
    {
        if(es200_flow == nullptr)
        {
            es200_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow>();
        }
        return es200_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msfpga_flow != nullptr)
    {
        children["msfpga-flow"] = msfpga_flow;
    }

    if(es200_flow != nullptr)
    {
        children["es200-flow"] = es200_flow;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msfpga-flow" || name == "es200-flow" || name == "type")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::MsfpgaFlow()
    :
    tx_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow>())
    , rx_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow>())
{
    tx_flow->parent = this;
    rx_flow->parent = this;

    yang_name = "msfpga-flow"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::~MsfpgaFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::has_data() const
{
    if (is_presence_container) return true;
    return (tx_flow !=  nullptr && tx_flow->has_data())
	|| (rx_flow !=  nullptr && rx_flow->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::has_operation() const
{
    return is_set(yfilter)
	|| (tx_flow !=  nullptr && tx_flow->has_operation())
	|| (rx_flow !=  nullptr && rx_flow->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-flow")
    {
        if(tx_flow == nullptr)
        {
            tx_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow>();
        }
        return tx_flow;
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow == nullptr)
        {
            rx_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow>();
        }
        return rx_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_flow != nullptr)
    {
        children["tx-flow"] = tx_flow;
    }

    if(rx_flow != nullptr)
    {
        children["rx-flow"] = rx_flow;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-flow" || name == "rx-flow")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::TxFlow()
    :
    flow_id{YType::uint8, "flow-id"},
    valid{YType::boolean, "valid"},
    is_egress{YType::boolean, "is-egress"},
    in_use{YType::boolean, "in-use"},
    action{YType::uint8, "action"},
    smac_inuse{YType::boolean, "smac-inuse"},
    dmac_inuse{YType::boolean, "dmac-inuse"},
    ethertype{YType::uint16, "ethertype"},
    outer_vlan{YType::uint16, "outer-vlan"},
    outer_vlan_up{YType::uint8, "outer-vlan-up"},
    outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
    inner_vlan{YType::uint16, "inner-vlan"},
    inner_vlan_up{YType::uint8, "inner-vlan-up"},
    inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
    source_port{YType::uint32, "source-port"},
    source_port_chk{YType::boolean, "source-port-chk"},
    sci_inuse{YType::boolean, "sci-inuse"},
    sci{YType::uint64, "sci"},
    match_pri{YType::uint8, "match-pri"},
    is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
    ctrl_check{YType::boolean, "ctrl-check"},
    match_untagged{YType::boolean, "match-untagged"},
    match_tagged{YType::boolean, "match-tagged"},
    match_bad_tag{YType::boolean, "match-bad-tag"},
    match_kay_tag{YType::boolean, "match-kay-tag"},
    tci_v{YType::uint8, "tci-v"},
    tci_e_xr{YType::uint8, "tci-e-xr"},
    tci_sc{YType::uint8, "tci-sc"},
    tci_scb{YType::uint8, "tci-scb"},
    tci{YType::uint8, "tci"},
    tci_c{YType::uint8, "tci-c"},
    tci_an{YType::uint8, "tci-an"},
    tci_an_chk{YType::boolean, "tci-an-chk"},
    tci_chk{YType::boolean, "tci-chk"},
    sai{YType::uint32, "sai"},
    macsa{YType::uint8, "macsa"},
    macda{YType::uint8, "macda"}
{

    yang_name = "tx-flow"; yang_parent_name = "msfpga-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::~TxFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flow_id.is_set
	|| valid.is_set
	|| is_egress.is_set
	|| in_use.is_set
	|| action.is_set
	|| smac_inuse.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| outer_vlan.is_set
	|| outer_vlan_up.is_set
	|| outer_vlan_tpid.is_set
	|| inner_vlan.is_set
	|| inner_vlan_up.is_set
	|| inner_vlan_tpid.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| sci_inuse.is_set
	|| sci.is_set
	|| match_pri.is_set
	|| is_ctrl_pkt.is_set
	|| ctrl_check.is_set
	|| match_untagged.is_set
	|| match_tagged.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| tci_v.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_chk.is_set
	|| sai.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::has_operation() const
{
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(is_egress.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(smac_inuse.yfilter)
	|| ydk::is_set(dmac_inuse.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(outer_vlan.yfilter)
	|| ydk::is_set(outer_vlan_up.yfilter)
	|| ydk::is_set(outer_vlan_tpid.yfilter)
	|| ydk::is_set(inner_vlan.yfilter)
	|| ydk::is_set(inner_vlan_up.yfilter)
	|| ydk::is_set(inner_vlan_tpid.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(source_port_chk.yfilter)
	|| ydk::is_set(sci_inuse.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(match_pri.yfilter)
	|| ydk::is_set(is_ctrl_pkt.yfilter)
	|| ydk::is_set(ctrl_check.yfilter)
	|| ydk::is_set(match_untagged.yfilter)
	|| ydk::is_set(match_tagged.yfilter)
	|| ydk::is_set(match_bad_tag.yfilter)
	|| ydk::is_set(match_kay_tag.yfilter)
	|| ydk::is_set(tci_v.yfilter)
	|| ydk::is_set(tci_e_xr.yfilter)
	|| ydk::is_set(tci_sc.yfilter)
	|| ydk::is_set(tci_scb.yfilter)
	|| ydk::is_set(tci.yfilter)
	|| ydk::is_set(tci_c.yfilter)
	|| ydk::is_set(tci_an.yfilter)
	|| ydk::is_set(tci_an_chk.yfilter)
	|| ydk::is_set(tci_chk.yfilter)
	|| ydk::is_set(sai.yfilter)
	|| ydk::is_set(macsa.yfilter)
	|| ydk::is_set(macda.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_id.is_set || is_set(flow_id.yfilter)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.yfilter)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.yfilter)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.yfilter)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.yfilter)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.yfilter)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.yfilter)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.yfilter)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.yfilter)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.yfilter)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.yfilter)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.yfilter)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.yfilter)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.yfilter)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.yfilter)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.yfilter)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.yfilter)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.yfilter)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.yfilter)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.yfilter)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.yfilter)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.yfilter)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.yfilter)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci.is_set || is_set(tci.yfilter)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.yfilter)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.yfilter)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.yfilter)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.yfilter)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (sai.is_set || is_set(sai.yfilter)) leaf_name_data.push_back(sai.get_name_leafdata());

    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());
    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-id")
    {
        flow_id = value;
        flow_id.value_namespace = name_space;
        flow_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
        is_egress.value_namespace = name_space;
        is_egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
        smac_inuse.value_namespace = name_space;
        smac_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
        dmac_inuse.value_namespace = name_space;
        dmac_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
        outer_vlan.value_namespace = name_space;
        outer_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
        outer_vlan_up.value_namespace = name_space;
        outer_vlan_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
        outer_vlan_tpid.value_namespace = name_space;
        outer_vlan_tpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
        inner_vlan.value_namespace = name_space;
        inner_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
        inner_vlan_up.value_namespace = name_space;
        inner_vlan_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
        inner_vlan_tpid.value_namespace = name_space;
        inner_vlan_tpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
        source_port_chk.value_namespace = name_space;
        source_port_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
        sci_inuse.value_namespace = name_space;
        sci_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
        match_pri.value_namespace = name_space;
        match_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
        is_ctrl_pkt.value_namespace = name_space;
        is_ctrl_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
        ctrl_check.value_namespace = name_space;
        ctrl_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
        match_untagged.value_namespace = name_space;
        match_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
        match_tagged.value_namespace = name_space;
        match_tagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
        match_bad_tag.value_namespace = name_space;
        match_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
        match_kay_tag.value_namespace = name_space;
        match_kay_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
        tci_v.value_namespace = name_space;
        tci_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
        tci_e_xr.value_namespace = name_space;
        tci_e_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
        tci_sc.value_namespace = name_space;
        tci_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
        tci_scb.value_namespace = name_space;
        tci_scb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci")
    {
        tci = value;
        tci.value_namespace = name_space;
        tci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
        tci_c.value_namespace = name_space;
        tci_c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
        tci_an.value_namespace = name_space;
        tci_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
        tci_an_chk.value_namespace = name_space;
        tci_an_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
        tci_chk.value_namespace = name_space;
        tci_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sai")
    {
        sai = value;
        sai.value_namespace = name_space;
        sai.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-id")
    {
        flow_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "is-egress")
    {
        is_egress.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse.yfilter = yfilter;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid.yfilter = yfilter;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk.yfilter = yfilter;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "match-pri")
    {
        match_pri.yfilter = yfilter;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt.yfilter = yfilter;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check.yfilter = yfilter;
    }
    if(value_path == "match-untagged")
    {
        match_untagged.yfilter = yfilter;
    }
    if(value_path == "match-tagged")
    {
        match_tagged.yfilter = yfilter;
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag.yfilter = yfilter;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag.yfilter = yfilter;
    }
    if(value_path == "tci-v")
    {
        tci_v.yfilter = yfilter;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr.yfilter = yfilter;
    }
    if(value_path == "tci-sc")
    {
        tci_sc.yfilter = yfilter;
    }
    if(value_path == "tci-scb")
    {
        tci_scb.yfilter = yfilter;
    }
    if(value_path == "tci")
    {
        tci.yfilter = yfilter;
    }
    if(value_path == "tci-c")
    {
        tci_c.yfilter = yfilter;
    }
    if(value_path == "tci-an")
    {
        tci_an.yfilter = yfilter;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk.yfilter = yfilter;
    }
    if(value_path == "tci-chk")
    {
        tci_chk.yfilter = yfilter;
    }
    if(value_path == "sai")
    {
        sai.yfilter = yfilter;
    }
    if(value_path == "macsa")
    {
        macsa.yfilter = yfilter;
    }
    if(value_path == "macda")
    {
        macda.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-id" || name == "valid" || name == "is-egress" || name == "in-use" || name == "action" || name == "smac-inuse" || name == "dmac-inuse" || name == "ethertype" || name == "outer-vlan" || name == "outer-vlan-up" || name == "outer-vlan-tpid" || name == "inner-vlan" || name == "inner-vlan-up" || name == "inner-vlan-tpid" || name == "source-port" || name == "source-port-chk" || name == "sci-inuse" || name == "sci" || name == "match-pri" || name == "is-ctrl-pkt" || name == "ctrl-check" || name == "match-untagged" || name == "match-tagged" || name == "match-bad-tag" || name == "match-kay-tag" || name == "tci-v" || name == "tci-e-xr" || name == "tci-sc" || name == "tci-scb" || name == "tci" || name == "tci-c" || name == "tci-an" || name == "tci-an-chk" || name == "tci-chk" || name == "sai" || name == "macsa" || name == "macda")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::RxFlow()
    :
    flow_id{YType::uint8, "flow-id"},
    valid{YType::boolean, "valid"},
    is_egress{YType::boolean, "is-egress"},
    in_use{YType::boolean, "in-use"},
    action{YType::uint8, "action"},
    smac_inuse{YType::boolean, "smac-inuse"},
    dmac_inuse{YType::boolean, "dmac-inuse"},
    ethertype{YType::uint16, "ethertype"},
    outer_vlan{YType::uint16, "outer-vlan"},
    outer_vlan_up{YType::uint8, "outer-vlan-up"},
    outer_vlan_tpid{YType::uint16, "outer-vlan-tpid"},
    inner_vlan{YType::uint16, "inner-vlan"},
    inner_vlan_up{YType::uint8, "inner-vlan-up"},
    inner_vlan_tpid{YType::uint16, "inner-vlan-tpid"},
    source_port{YType::uint32, "source-port"},
    source_port_chk{YType::boolean, "source-port-chk"},
    sci_inuse{YType::boolean, "sci-inuse"},
    sci{YType::uint64, "sci"},
    match_pri{YType::uint8, "match-pri"},
    is_ctrl_pkt{YType::boolean, "is-ctrl-pkt"},
    ctrl_check{YType::boolean, "ctrl-check"},
    match_untagged{YType::boolean, "match-untagged"},
    match_tagged{YType::boolean, "match-tagged"},
    match_bad_tag{YType::boolean, "match-bad-tag"},
    match_kay_tag{YType::boolean, "match-kay-tag"},
    tci_v{YType::uint8, "tci-v"},
    tci_e_xr{YType::uint8, "tci-e-xr"},
    tci_sc{YType::uint8, "tci-sc"},
    tci_scb{YType::uint8, "tci-scb"},
    tci{YType::uint8, "tci"},
    tci_c{YType::uint8, "tci-c"},
    tci_an{YType::uint8, "tci-an"},
    tci_an_chk{YType::boolean, "tci-an-chk"},
    tci_chk{YType::boolean, "tci-chk"},
    sai{YType::uint32, "sai"},
    macsa{YType::uint8, "macsa"},
    macda{YType::uint8, "macda"}
{

    yang_name = "rx-flow"; yang_parent_name = "msfpga-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::~RxFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flow_id.is_set
	|| valid.is_set
	|| is_egress.is_set
	|| in_use.is_set
	|| action.is_set
	|| smac_inuse.is_set
	|| dmac_inuse.is_set
	|| ethertype.is_set
	|| outer_vlan.is_set
	|| outer_vlan_up.is_set
	|| outer_vlan_tpid.is_set
	|| inner_vlan.is_set
	|| inner_vlan_up.is_set
	|| inner_vlan_tpid.is_set
	|| source_port.is_set
	|| source_port_chk.is_set
	|| sci_inuse.is_set
	|| sci.is_set
	|| match_pri.is_set
	|| is_ctrl_pkt.is_set
	|| ctrl_check.is_set
	|| match_untagged.is_set
	|| match_tagged.is_set
	|| match_bad_tag.is_set
	|| match_kay_tag.is_set
	|| tci_v.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_an.is_set
	|| tci_an_chk.is_set
	|| tci_chk.is_set
	|| sai.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::has_operation() const
{
    for (auto const & leaf : macsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(is_egress.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(smac_inuse.yfilter)
	|| ydk::is_set(dmac_inuse.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(outer_vlan.yfilter)
	|| ydk::is_set(outer_vlan_up.yfilter)
	|| ydk::is_set(outer_vlan_tpid.yfilter)
	|| ydk::is_set(inner_vlan.yfilter)
	|| ydk::is_set(inner_vlan_up.yfilter)
	|| ydk::is_set(inner_vlan_tpid.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(source_port_chk.yfilter)
	|| ydk::is_set(sci_inuse.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(match_pri.yfilter)
	|| ydk::is_set(is_ctrl_pkt.yfilter)
	|| ydk::is_set(ctrl_check.yfilter)
	|| ydk::is_set(match_untagged.yfilter)
	|| ydk::is_set(match_tagged.yfilter)
	|| ydk::is_set(match_bad_tag.yfilter)
	|| ydk::is_set(match_kay_tag.yfilter)
	|| ydk::is_set(tci_v.yfilter)
	|| ydk::is_set(tci_e_xr.yfilter)
	|| ydk::is_set(tci_sc.yfilter)
	|| ydk::is_set(tci_scb.yfilter)
	|| ydk::is_set(tci.yfilter)
	|| ydk::is_set(tci_c.yfilter)
	|| ydk::is_set(tci_an.yfilter)
	|| ydk::is_set(tci_an_chk.yfilter)
	|| ydk::is_set(tci_chk.yfilter)
	|| ydk::is_set(sai.yfilter)
	|| ydk::is_set(macsa.yfilter)
	|| ydk::is_set(macda.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_id.is_set || is_set(flow_id.yfilter)) leaf_name_data.push_back(flow_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (is_egress.is_set || is_set(is_egress.yfilter)) leaf_name_data.push_back(is_egress.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (smac_inuse.is_set || is_set(smac_inuse.yfilter)) leaf_name_data.push_back(smac_inuse.get_name_leafdata());
    if (dmac_inuse.is_set || is_set(dmac_inuse.yfilter)) leaf_name_data.push_back(dmac_inuse.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.yfilter)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (outer_vlan_up.is_set || is_set(outer_vlan_up.yfilter)) leaf_name_data.push_back(outer_vlan_up.get_name_leafdata());
    if (outer_vlan_tpid.is_set || is_set(outer_vlan_tpid.yfilter)) leaf_name_data.push_back(outer_vlan_tpid.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.yfilter)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (inner_vlan_up.is_set || is_set(inner_vlan_up.yfilter)) leaf_name_data.push_back(inner_vlan_up.get_name_leafdata());
    if (inner_vlan_tpid.is_set || is_set(inner_vlan_tpid.yfilter)) leaf_name_data.push_back(inner_vlan_tpid.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (source_port_chk.is_set || is_set(source_port_chk.yfilter)) leaf_name_data.push_back(source_port_chk.get_name_leafdata());
    if (sci_inuse.is_set || is_set(sci_inuse.yfilter)) leaf_name_data.push_back(sci_inuse.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (match_pri.is_set || is_set(match_pri.yfilter)) leaf_name_data.push_back(match_pri.get_name_leafdata());
    if (is_ctrl_pkt.is_set || is_set(is_ctrl_pkt.yfilter)) leaf_name_data.push_back(is_ctrl_pkt.get_name_leafdata());
    if (ctrl_check.is_set || is_set(ctrl_check.yfilter)) leaf_name_data.push_back(ctrl_check.get_name_leafdata());
    if (match_untagged.is_set || is_set(match_untagged.yfilter)) leaf_name_data.push_back(match_untagged.get_name_leafdata());
    if (match_tagged.is_set || is_set(match_tagged.yfilter)) leaf_name_data.push_back(match_tagged.get_name_leafdata());
    if (match_bad_tag.is_set || is_set(match_bad_tag.yfilter)) leaf_name_data.push_back(match_bad_tag.get_name_leafdata());
    if (match_kay_tag.is_set || is_set(match_kay_tag.yfilter)) leaf_name_data.push_back(match_kay_tag.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.yfilter)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.yfilter)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.yfilter)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.yfilter)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci.is_set || is_set(tci.yfilter)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.yfilter)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_an.is_set || is_set(tci_an.yfilter)) leaf_name_data.push_back(tci_an.get_name_leafdata());
    if (tci_an_chk.is_set || is_set(tci_an_chk.yfilter)) leaf_name_data.push_back(tci_an_chk.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.yfilter)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (sai.is_set || is_set(sai.yfilter)) leaf_name_data.push_back(sai.get_name_leafdata());

    auto macsa_name_datas = macsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macsa_name_datas.begin(), macsa_name_datas.end());
    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-id")
    {
        flow_id = value;
        flow_id.value_namespace = name_space;
        flow_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-egress")
    {
        is_egress = value;
        is_egress.value_namespace = name_space;
        is_egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse = value;
        smac_inuse.value_namespace = name_space;
        smac_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse = value;
        dmac_inuse.value_namespace = name_space;
        dmac_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
        outer_vlan.value_namespace = name_space;
        outer_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up = value;
        outer_vlan_up.value_namespace = name_space;
        outer_vlan_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid = value;
        outer_vlan_tpid.value_namespace = name_space;
        outer_vlan_tpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
        inner_vlan.value_namespace = name_space;
        inner_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up = value;
        inner_vlan_up.value_namespace = name_space;
        inner_vlan_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid = value;
        inner_vlan_tpid.value_namespace = name_space;
        inner_vlan_tpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk = value;
        source_port_chk.value_namespace = name_space;
        source_port_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse = value;
        sci_inuse.value_namespace = name_space;
        sci_inuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-pri")
    {
        match_pri = value;
        match_pri.value_namespace = name_space;
        match_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt = value;
        is_ctrl_pkt.value_namespace = name_space;
        is_ctrl_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check = value;
        ctrl_check.value_namespace = name_space;
        ctrl_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-untagged")
    {
        match_untagged = value;
        match_untagged.value_namespace = name_space;
        match_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-tagged")
    {
        match_tagged = value;
        match_tagged.value_namespace = name_space;
        match_tagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag = value;
        match_bad_tag.value_namespace = name_space;
        match_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag = value;
        match_kay_tag.value_namespace = name_space;
        match_kay_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
        tci_v.value_namespace = name_space;
        tci_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
        tci_e_xr.value_namespace = name_space;
        tci_e_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
        tci_sc.value_namespace = name_space;
        tci_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
        tci_scb.value_namespace = name_space;
        tci_scb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci")
    {
        tci = value;
        tci.value_namespace = name_space;
        tci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
        tci_c.value_namespace = name_space;
        tci_c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-an")
    {
        tci_an = value;
        tci_an.value_namespace = name_space;
        tci_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk = value;
        tci_an_chk.value_namespace = name_space;
        tci_an_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
        tci_chk.value_namespace = name_space;
        tci_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sai")
    {
        sai = value;
        sai.value_namespace = name_space;
        sai.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsa")
    {
        macsa.append(value);
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-id")
    {
        flow_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "is-egress")
    {
        is_egress.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "smac-inuse")
    {
        smac_inuse.yfilter = yfilter;
    }
    if(value_path == "dmac-inuse")
    {
        dmac_inuse.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-up")
    {
        outer_vlan_up.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-tpid")
    {
        outer_vlan_tpid.yfilter = yfilter;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-up")
    {
        inner_vlan_up.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-tpid")
    {
        inner_vlan_tpid.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "source-port-chk")
    {
        source_port_chk.yfilter = yfilter;
    }
    if(value_path == "sci-inuse")
    {
        sci_inuse.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "match-pri")
    {
        match_pri.yfilter = yfilter;
    }
    if(value_path == "is-ctrl-pkt")
    {
        is_ctrl_pkt.yfilter = yfilter;
    }
    if(value_path == "ctrl-check")
    {
        ctrl_check.yfilter = yfilter;
    }
    if(value_path == "match-untagged")
    {
        match_untagged.yfilter = yfilter;
    }
    if(value_path == "match-tagged")
    {
        match_tagged.yfilter = yfilter;
    }
    if(value_path == "match-bad-tag")
    {
        match_bad_tag.yfilter = yfilter;
    }
    if(value_path == "match-kay-tag")
    {
        match_kay_tag.yfilter = yfilter;
    }
    if(value_path == "tci-v")
    {
        tci_v.yfilter = yfilter;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr.yfilter = yfilter;
    }
    if(value_path == "tci-sc")
    {
        tci_sc.yfilter = yfilter;
    }
    if(value_path == "tci-scb")
    {
        tci_scb.yfilter = yfilter;
    }
    if(value_path == "tci")
    {
        tci.yfilter = yfilter;
    }
    if(value_path == "tci-c")
    {
        tci_c.yfilter = yfilter;
    }
    if(value_path == "tci-an")
    {
        tci_an.yfilter = yfilter;
    }
    if(value_path == "tci-an-chk")
    {
        tci_an_chk.yfilter = yfilter;
    }
    if(value_path == "tci-chk")
    {
        tci_chk.yfilter = yfilter;
    }
    if(value_path == "sai")
    {
        sai.yfilter = yfilter;
    }
    if(value_path == "macsa")
    {
        macsa.yfilter = yfilter;
    }
    if(value_path == "macda")
    {
        macda.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-id" || name == "valid" || name == "is-egress" || name == "in-use" || name == "action" || name == "smac-inuse" || name == "dmac-inuse" || name == "ethertype" || name == "outer-vlan" || name == "outer-vlan-up" || name == "outer-vlan-tpid" || name == "inner-vlan" || name == "inner-vlan-up" || name == "inner-vlan-tpid" || name == "source-port" || name == "source-port-chk" || name == "sci-inuse" || name == "sci" || name == "match-pri" || name == "is-ctrl-pkt" || name == "ctrl-check" || name == "match-untagged" || name == "match-tagged" || name == "match-bad-tag" || name == "match-kay-tag" || name == "tci-v" || name == "tci-e-xr" || name == "tci-sc" || name == "tci-scb" || name == "tci" || name == "tci-c" || name == "tci-an" || name == "tci-an-chk" || name == "tci-chk" || name == "sai" || name == "macsa" || name == "macda")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::Es200Flow()
    :
    tx_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow>())
    , rx_flow(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow>())
{
    tx_flow->parent = this;
    rx_flow->parent = this;

    yang_name = "es200-flow"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::~Es200Flow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::has_data() const
{
    if (is_presence_container) return true;
    return (tx_flow !=  nullptr && tx_flow->has_data())
	|| (rx_flow !=  nullptr && rx_flow->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::has_operation() const
{
    return is_set(yfilter)
	|| (tx_flow !=  nullptr && tx_flow->has_operation())
	|| (rx_flow !=  nullptr && rx_flow->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-flow")
    {
        if(tx_flow == nullptr)
        {
            tx_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow>();
        }
        return tx_flow;
    }

    if(child_yang_name == "rx-flow")
    {
        if(rx_flow == nullptr)
        {
            rx_flow = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow>();
        }
        return rx_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_flow != nullptr)
    {
        children["tx-flow"] = tx_flow;
    }

    if(rx_flow != nullptr)
    {
        children["rx-flow"] = rx_flow;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-flow" || name == "rx-flow")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::TxFlow()
    :
    flow_no{YType::uint32, "flow-no"},
    is_flow_enabled{YType::boolean, "is-flow-enabled"},
    ethertype{YType::uint16, "ethertype"},
    outer_vlan_id{YType::uint16, "outer-vlan-id"},
    outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
    inner_vlan_id{YType::uint16, "inner-vlan-id"},
    inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
    psci{YType::uint64, "psci"},
    match_priority{YType::uint8, "match-priority"},
    tci_v{YType::uint8, "tci-v"},
    tci_e_xr{YType::uint8, "tci-e-xr"},
    tci_sc{YType::uint8, "tci-sc"},
    tci_scb{YType::uint8, "tci-scb"},
    tci{YType::uint8, "tci"},
    tci_c{YType::uint8, "tci-c"},
    tci_chk{YType::boolean, "tci-chk"},
    pkt_type{YType::str, "pkt-type"},
    tag_num{YType::str, "tag-num"},
    inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
    outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
    pbb_sid{YType::uint32, "pbb-sid"},
    pbb_bvid{YType::uint32, "pbb-bvid"},
    pbb_pcp{YType::uint8, "pbb-pcp"},
    pbb_dei{YType::uint8, "pbb-dei"},
    mpls1_label{YType::uint32, "mpls1-label"},
    mpls1_exp{YType::uint8, "mpls1-exp"},
    mpls1_bos{YType::uint8, "mpls1-bos"},
    mpls2_label{YType::uint32, "mpls2-label"},
    mpls2_exp{YType::uint8, "mpls2-exp"},
    mpls2_bos{YType::uint8, "mpls2-bos"},
    plain_bits{YType::uint64, "plain-bits"},
    plain_bits_size{YType::uint8, "plain-bits-size"},
    force_ctrl{YType::boolean, "force-ctrl"},
    drop{YType::boolean, "drop"},
    mask_da{YType::uint64, "mask-da"},
    mask_ethertype{YType::uint32, "mask-ethertype"},
    mask_plain_bits{YType::uint64, "mask-plain-bits"},
    flow_hits{YType::uint64, "flow-hits"},
    macda{YType::uint8, "macda"}
{

    yang_name = "tx-flow"; yang_parent_name = "es200-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::~TxFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flow_no.is_set
	|| is_flow_enabled.is_set
	|| ethertype.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| psci.is_set
	|| match_priority.is_set
	|| tci_v.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| pkt_type.is_set
	|| tag_num.is_set
	|| inner_vlan_dei.is_set
	|| outer_vlan_dei.is_set
	|| pbb_sid.is_set
	|| pbb_bvid.is_set
	|| pbb_pcp.is_set
	|| pbb_dei.is_set
	|| mpls1_label.is_set
	|| mpls1_exp.is_set
	|| mpls1_bos.is_set
	|| mpls2_label.is_set
	|| mpls2_exp.is_set
	|| mpls2_bos.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| force_ctrl.is_set
	|| drop.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| flow_hits.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_no.yfilter)
	|| ydk::is_set(is_flow_enabled.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(outer_vlan_user_pri.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_user_pri.yfilter)
	|| ydk::is_set(psci.yfilter)
	|| ydk::is_set(match_priority.yfilter)
	|| ydk::is_set(tci_v.yfilter)
	|| ydk::is_set(tci_e_xr.yfilter)
	|| ydk::is_set(tci_sc.yfilter)
	|| ydk::is_set(tci_scb.yfilter)
	|| ydk::is_set(tci.yfilter)
	|| ydk::is_set(tci_c.yfilter)
	|| ydk::is_set(tci_chk.yfilter)
	|| ydk::is_set(pkt_type.yfilter)
	|| ydk::is_set(tag_num.yfilter)
	|| ydk::is_set(inner_vlan_dei.yfilter)
	|| ydk::is_set(outer_vlan_dei.yfilter)
	|| ydk::is_set(pbb_sid.yfilter)
	|| ydk::is_set(pbb_bvid.yfilter)
	|| ydk::is_set(pbb_pcp.yfilter)
	|| ydk::is_set(pbb_dei.yfilter)
	|| ydk::is_set(mpls1_label.yfilter)
	|| ydk::is_set(mpls1_exp.yfilter)
	|| ydk::is_set(mpls1_bos.yfilter)
	|| ydk::is_set(mpls2_label.yfilter)
	|| ydk::is_set(mpls2_exp.yfilter)
	|| ydk::is_set(mpls2_bos.yfilter)
	|| ydk::is_set(plain_bits.yfilter)
	|| ydk::is_set(plain_bits_size.yfilter)
	|| ydk::is_set(force_ctrl.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(mask_da.yfilter)
	|| ydk::is_set(mask_ethertype.yfilter)
	|| ydk::is_set(mask_plain_bits.yfilter)
	|| ydk::is_set(flow_hits.yfilter)
	|| ydk::is_set(macda.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_no.is_set || is_set(flow_no.yfilter)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.yfilter)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.yfilter)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.yfilter)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (psci.is_set || is_set(psci.yfilter)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.yfilter)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.yfilter)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.yfilter)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.yfilter)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.yfilter)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci.is_set || is_set(tci.yfilter)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.yfilter)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.yfilter)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.yfilter)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.yfilter)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.yfilter)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.yfilter)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.yfilter)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.yfilter)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.yfilter)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.yfilter)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.yfilter)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.yfilter)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.yfilter)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.yfilter)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.yfilter)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.yfilter)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.yfilter)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.yfilter)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.yfilter)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.yfilter)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.yfilter)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.yfilter)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (flow_hits.is_set || is_set(flow_hits.yfilter)) leaf_name_data.push_back(flow_hits.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-no")
    {
        flow_no = value;
        flow_no.value_namespace = name_space;
        flow_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
        is_flow_enabled.value_namespace = name_space;
        is_flow_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
        outer_vlan_user_pri.value_namespace = name_space;
        outer_vlan_user_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
        inner_vlan_user_pri.value_namespace = name_space;
        inner_vlan_user_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psci")
    {
        psci = value;
        psci.value_namespace = name_space;
        psci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
        match_priority.value_namespace = name_space;
        match_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
        tci_v.value_namespace = name_space;
        tci_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
        tci_e_xr.value_namespace = name_space;
        tci_e_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
        tci_sc.value_namespace = name_space;
        tci_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
        tci_scb.value_namespace = name_space;
        tci_scb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci")
    {
        tci = value;
        tci.value_namespace = name_space;
        tci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
        tci_c.value_namespace = name_space;
        tci_c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
        tci_chk.value_namespace = name_space;
        tci_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
        pkt_type.value_namespace = name_space;
        pkt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
        tag_num.value_namespace = name_space;
        tag_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
        inner_vlan_dei.value_namespace = name_space;
        inner_vlan_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
        outer_vlan_dei.value_namespace = name_space;
        outer_vlan_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
        pbb_sid.value_namespace = name_space;
        pbb_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
        pbb_bvid.value_namespace = name_space;
        pbb_bvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
        pbb_pcp.value_namespace = name_space;
        pbb_pcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
        pbb_dei.value_namespace = name_space;
        pbb_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
        mpls1_label.value_namespace = name_space;
        mpls1_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
        mpls1_exp.value_namespace = name_space;
        mpls1_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
        mpls1_bos.value_namespace = name_space;
        mpls1_bos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
        mpls2_label.value_namespace = name_space;
        mpls2_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
        mpls2_exp.value_namespace = name_space;
        mpls2_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
        mpls2_bos.value_namespace = name_space;
        mpls2_bos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
        plain_bits.value_namespace = name_space;
        plain_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
        plain_bits_size.value_namespace = name_space;
        plain_bits_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
        force_ctrl.value_namespace = name_space;
        force_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
        mask_da.value_namespace = name_space;
        mask_da.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
        mask_ethertype.value_namespace = name_space;
        mask_ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
        mask_plain_bits.value_namespace = name_space;
        mask_plain_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-hits")
    {
        flow_hits = value;
        flow_hits.value_namespace = name_space;
        flow_hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-no")
    {
        flow_no.yfilter = yfilter;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri.yfilter = yfilter;
    }
    if(value_path == "psci")
    {
        psci.yfilter = yfilter;
    }
    if(value_path == "match-priority")
    {
        match_priority.yfilter = yfilter;
    }
    if(value_path == "tci-v")
    {
        tci_v.yfilter = yfilter;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr.yfilter = yfilter;
    }
    if(value_path == "tci-sc")
    {
        tci_sc.yfilter = yfilter;
    }
    if(value_path == "tci-scb")
    {
        tci_scb.yfilter = yfilter;
    }
    if(value_path == "tci")
    {
        tci.yfilter = yfilter;
    }
    if(value_path == "tci-c")
    {
        tci_c.yfilter = yfilter;
    }
    if(value_path == "tci-chk")
    {
        tci_chk.yfilter = yfilter;
    }
    if(value_path == "pkt-type")
    {
        pkt_type.yfilter = yfilter;
    }
    if(value_path == "tag-num")
    {
        tag_num.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei.yfilter = yfilter;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid.yfilter = yfilter;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid.yfilter = yfilter;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp.yfilter = yfilter;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei.yfilter = yfilter;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label.yfilter = yfilter;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp.yfilter = yfilter;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos.yfilter = yfilter;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label.yfilter = yfilter;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp.yfilter = yfilter;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos.yfilter = yfilter;
    }
    if(value_path == "plain-bits")
    {
        plain_bits.yfilter = yfilter;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size.yfilter = yfilter;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "mask-da")
    {
        mask_da.yfilter = yfilter;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype.yfilter = yfilter;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits.yfilter = yfilter;
    }
    if(value_path == "flow-hits")
    {
        flow_hits.yfilter = yfilter;
    }
    if(value_path == "macda")
    {
        macda.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-no" || name == "is-flow-enabled" || name == "ethertype" || name == "outer-vlan-id" || name == "outer-vlan-user-pri" || name == "inner-vlan-id" || name == "inner-vlan-user-pri" || name == "psci" || name == "match-priority" || name == "tci-v" || name == "tci-e-xr" || name == "tci-sc" || name == "tci-scb" || name == "tci" || name == "tci-c" || name == "tci-chk" || name == "pkt-type" || name == "tag-num" || name == "inner-vlan-dei" || name == "outer-vlan-dei" || name == "pbb-sid" || name == "pbb-bvid" || name == "pbb-pcp" || name == "pbb-dei" || name == "mpls1-label" || name == "mpls1-exp" || name == "mpls1-bos" || name == "mpls2-label" || name == "mpls2-exp" || name == "mpls2-bos" || name == "plain-bits" || name == "plain-bits-size" || name == "force-ctrl" || name == "drop" || name == "mask-da" || name == "mask-ethertype" || name == "mask-plain-bits" || name == "flow-hits" || name == "macda")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::RxFlow()
    :
    flow_no{YType::uint32, "flow-no"},
    is_flow_enabled{YType::boolean, "is-flow-enabled"},
    ethertype{YType::uint16, "ethertype"},
    outer_vlan_id{YType::uint16, "outer-vlan-id"},
    outer_vlan_user_pri{YType::uint8, "outer-vlan-user-pri"},
    inner_vlan_id{YType::uint16, "inner-vlan-id"},
    inner_vlan_user_pri{YType::uint8, "inner-vlan-user-pri"},
    psci{YType::uint64, "psci"},
    match_priority{YType::uint8, "match-priority"},
    tci_v{YType::uint8, "tci-v"},
    tci_e_xr{YType::uint8, "tci-e-xr"},
    tci_sc{YType::uint8, "tci-sc"},
    tci_scb{YType::uint8, "tci-scb"},
    tci{YType::uint8, "tci"},
    tci_c{YType::uint8, "tci-c"},
    tci_chk{YType::boolean, "tci-chk"},
    pkt_type{YType::str, "pkt-type"},
    tag_num{YType::str, "tag-num"},
    inner_vlan_dei{YType::boolean, "inner-vlan-dei"},
    outer_vlan_dei{YType::boolean, "outer-vlan-dei"},
    pbb_sid{YType::uint32, "pbb-sid"},
    pbb_bvid{YType::uint32, "pbb-bvid"},
    pbb_pcp{YType::uint8, "pbb-pcp"},
    pbb_dei{YType::uint8, "pbb-dei"},
    mpls1_label{YType::uint32, "mpls1-label"},
    mpls1_exp{YType::uint8, "mpls1-exp"},
    mpls1_bos{YType::uint8, "mpls1-bos"},
    mpls2_label{YType::uint32, "mpls2-label"},
    mpls2_exp{YType::uint8, "mpls2-exp"},
    mpls2_bos{YType::uint8, "mpls2-bos"},
    plain_bits{YType::uint64, "plain-bits"},
    plain_bits_size{YType::uint8, "plain-bits-size"},
    force_ctrl{YType::boolean, "force-ctrl"},
    drop{YType::boolean, "drop"},
    mask_da{YType::uint64, "mask-da"},
    mask_ethertype{YType::uint32, "mask-ethertype"},
    mask_plain_bits{YType::uint64, "mask-plain-bits"},
    flow_hits{YType::uint64, "flow-hits"},
    macda{YType::uint8, "macda"}
{

    yang_name = "rx-flow"; yang_parent_name = "es200-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::~RxFlow()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : macda.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flow_no.is_set
	|| is_flow_enabled.is_set
	|| ethertype.is_set
	|| outer_vlan_id.is_set
	|| outer_vlan_user_pri.is_set
	|| inner_vlan_id.is_set
	|| inner_vlan_user_pri.is_set
	|| psci.is_set
	|| match_priority.is_set
	|| tci_v.is_set
	|| tci_e_xr.is_set
	|| tci_sc.is_set
	|| tci_scb.is_set
	|| tci.is_set
	|| tci_c.is_set
	|| tci_chk.is_set
	|| pkt_type.is_set
	|| tag_num.is_set
	|| inner_vlan_dei.is_set
	|| outer_vlan_dei.is_set
	|| pbb_sid.is_set
	|| pbb_bvid.is_set
	|| pbb_pcp.is_set
	|| pbb_dei.is_set
	|| mpls1_label.is_set
	|| mpls1_exp.is_set
	|| mpls1_bos.is_set
	|| mpls2_label.is_set
	|| mpls2_exp.is_set
	|| mpls2_bos.is_set
	|| plain_bits.is_set
	|| plain_bits_size.is_set
	|| force_ctrl.is_set
	|| drop.is_set
	|| mask_da.is_set
	|| mask_ethertype.is_set
	|| mask_plain_bits.is_set
	|| flow_hits.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::has_operation() const
{
    for (auto const & leaf : macda.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_no.yfilter)
	|| ydk::is_set(is_flow_enabled.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(outer_vlan_user_pri.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_user_pri.yfilter)
	|| ydk::is_set(psci.yfilter)
	|| ydk::is_set(match_priority.yfilter)
	|| ydk::is_set(tci_v.yfilter)
	|| ydk::is_set(tci_e_xr.yfilter)
	|| ydk::is_set(tci_sc.yfilter)
	|| ydk::is_set(tci_scb.yfilter)
	|| ydk::is_set(tci.yfilter)
	|| ydk::is_set(tci_c.yfilter)
	|| ydk::is_set(tci_chk.yfilter)
	|| ydk::is_set(pkt_type.yfilter)
	|| ydk::is_set(tag_num.yfilter)
	|| ydk::is_set(inner_vlan_dei.yfilter)
	|| ydk::is_set(outer_vlan_dei.yfilter)
	|| ydk::is_set(pbb_sid.yfilter)
	|| ydk::is_set(pbb_bvid.yfilter)
	|| ydk::is_set(pbb_pcp.yfilter)
	|| ydk::is_set(pbb_dei.yfilter)
	|| ydk::is_set(mpls1_label.yfilter)
	|| ydk::is_set(mpls1_exp.yfilter)
	|| ydk::is_set(mpls1_bos.yfilter)
	|| ydk::is_set(mpls2_label.yfilter)
	|| ydk::is_set(mpls2_exp.yfilter)
	|| ydk::is_set(mpls2_bos.yfilter)
	|| ydk::is_set(plain_bits.yfilter)
	|| ydk::is_set(plain_bits_size.yfilter)
	|| ydk::is_set(force_ctrl.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(mask_da.yfilter)
	|| ydk::is_set(mask_ethertype.yfilter)
	|| ydk::is_set(mask_plain_bits.yfilter)
	|| ydk::is_set(flow_hits.yfilter)
	|| ydk::is_set(macda.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_no.is_set || is_set(flow_no.yfilter)) leaf_name_data.push_back(flow_no.get_name_leafdata());
    if (is_flow_enabled.is_set || is_set(is_flow_enabled.yfilter)) leaf_name_data.push_back(is_flow_enabled.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (outer_vlan_user_pri.is_set || is_set(outer_vlan_user_pri.yfilter)) leaf_name_data.push_back(outer_vlan_user_pri.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (inner_vlan_user_pri.is_set || is_set(inner_vlan_user_pri.yfilter)) leaf_name_data.push_back(inner_vlan_user_pri.get_name_leafdata());
    if (psci.is_set || is_set(psci.yfilter)) leaf_name_data.push_back(psci.get_name_leafdata());
    if (match_priority.is_set || is_set(match_priority.yfilter)) leaf_name_data.push_back(match_priority.get_name_leafdata());
    if (tci_v.is_set || is_set(tci_v.yfilter)) leaf_name_data.push_back(tci_v.get_name_leafdata());
    if (tci_e_xr.is_set || is_set(tci_e_xr.yfilter)) leaf_name_data.push_back(tci_e_xr.get_name_leafdata());
    if (tci_sc.is_set || is_set(tci_sc.yfilter)) leaf_name_data.push_back(tci_sc.get_name_leafdata());
    if (tci_scb.is_set || is_set(tci_scb.yfilter)) leaf_name_data.push_back(tci_scb.get_name_leafdata());
    if (tci.is_set || is_set(tci.yfilter)) leaf_name_data.push_back(tci.get_name_leafdata());
    if (tci_c.is_set || is_set(tci_c.yfilter)) leaf_name_data.push_back(tci_c.get_name_leafdata());
    if (tci_chk.is_set || is_set(tci_chk.yfilter)) leaf_name_data.push_back(tci_chk.get_name_leafdata());
    if (pkt_type.is_set || is_set(pkt_type.yfilter)) leaf_name_data.push_back(pkt_type.get_name_leafdata());
    if (tag_num.is_set || is_set(tag_num.yfilter)) leaf_name_data.push_back(tag_num.get_name_leafdata());
    if (inner_vlan_dei.is_set || is_set(inner_vlan_dei.yfilter)) leaf_name_data.push_back(inner_vlan_dei.get_name_leafdata());
    if (outer_vlan_dei.is_set || is_set(outer_vlan_dei.yfilter)) leaf_name_data.push_back(outer_vlan_dei.get_name_leafdata());
    if (pbb_sid.is_set || is_set(pbb_sid.yfilter)) leaf_name_data.push_back(pbb_sid.get_name_leafdata());
    if (pbb_bvid.is_set || is_set(pbb_bvid.yfilter)) leaf_name_data.push_back(pbb_bvid.get_name_leafdata());
    if (pbb_pcp.is_set || is_set(pbb_pcp.yfilter)) leaf_name_data.push_back(pbb_pcp.get_name_leafdata());
    if (pbb_dei.is_set || is_set(pbb_dei.yfilter)) leaf_name_data.push_back(pbb_dei.get_name_leafdata());
    if (mpls1_label.is_set || is_set(mpls1_label.yfilter)) leaf_name_data.push_back(mpls1_label.get_name_leafdata());
    if (mpls1_exp.is_set || is_set(mpls1_exp.yfilter)) leaf_name_data.push_back(mpls1_exp.get_name_leafdata());
    if (mpls1_bos.is_set || is_set(mpls1_bos.yfilter)) leaf_name_data.push_back(mpls1_bos.get_name_leafdata());
    if (mpls2_label.is_set || is_set(mpls2_label.yfilter)) leaf_name_data.push_back(mpls2_label.get_name_leafdata());
    if (mpls2_exp.is_set || is_set(mpls2_exp.yfilter)) leaf_name_data.push_back(mpls2_exp.get_name_leafdata());
    if (mpls2_bos.is_set || is_set(mpls2_bos.yfilter)) leaf_name_data.push_back(mpls2_bos.get_name_leafdata());
    if (plain_bits.is_set || is_set(plain_bits.yfilter)) leaf_name_data.push_back(plain_bits.get_name_leafdata());
    if (plain_bits_size.is_set || is_set(plain_bits_size.yfilter)) leaf_name_data.push_back(plain_bits_size.get_name_leafdata());
    if (force_ctrl.is_set || is_set(force_ctrl.yfilter)) leaf_name_data.push_back(force_ctrl.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (mask_da.is_set || is_set(mask_da.yfilter)) leaf_name_data.push_back(mask_da.get_name_leafdata());
    if (mask_ethertype.is_set || is_set(mask_ethertype.yfilter)) leaf_name_data.push_back(mask_ethertype.get_name_leafdata());
    if (mask_plain_bits.is_set || is_set(mask_plain_bits.yfilter)) leaf_name_data.push_back(mask_plain_bits.get_name_leafdata());
    if (flow_hits.is_set || is_set(flow_hits.yfilter)) leaf_name_data.push_back(flow_hits.get_name_leafdata());

    auto macda_name_datas = macda.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macda_name_datas.begin(), macda_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-no")
    {
        flow_no = value;
        flow_no.value_namespace = name_space;
        flow_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled = value;
        is_flow_enabled.value_namespace = name_space;
        is_flow_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri = value;
        outer_vlan_user_pri.value_namespace = name_space;
        outer_vlan_user_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri = value;
        inner_vlan_user_pri.value_namespace = name_space;
        inner_vlan_user_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psci")
    {
        psci = value;
        psci.value_namespace = name_space;
        psci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-priority")
    {
        match_priority = value;
        match_priority.value_namespace = name_space;
        match_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-v")
    {
        tci_v = value;
        tci_v.value_namespace = name_space;
        tci_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr = value;
        tci_e_xr.value_namespace = name_space;
        tci_e_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-sc")
    {
        tci_sc = value;
        tci_sc.value_namespace = name_space;
        tci_sc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-scb")
    {
        tci_scb = value;
        tci_scb.value_namespace = name_space;
        tci_scb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci")
    {
        tci = value;
        tci.value_namespace = name_space;
        tci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-c")
    {
        tci_c = value;
        tci_c.value_namespace = name_space;
        tci_c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tci-chk")
    {
        tci_chk = value;
        tci_chk.value_namespace = name_space;
        tci_chk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-type")
    {
        pkt_type = value;
        pkt_type.value_namespace = name_space;
        pkt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-num")
    {
        tag_num = value;
        tag_num.value_namespace = name_space;
        tag_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei = value;
        inner_vlan_dei.value_namespace = name_space;
        inner_vlan_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei = value;
        outer_vlan_dei.value_namespace = name_space;
        outer_vlan_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid = value;
        pbb_sid.value_namespace = name_space;
        pbb_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid = value;
        pbb_bvid.value_namespace = name_space;
        pbb_bvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp = value;
        pbb_pcp.value_namespace = name_space;
        pbb_pcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei = value;
        pbb_dei.value_namespace = name_space;
        pbb_dei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label = value;
        mpls1_label.value_namespace = name_space;
        mpls1_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp = value;
        mpls1_exp.value_namespace = name_space;
        mpls1_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos = value;
        mpls1_bos.value_namespace = name_space;
        mpls1_bos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label = value;
        mpls2_label.value_namespace = name_space;
        mpls2_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp = value;
        mpls2_exp.value_namespace = name_space;
        mpls2_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos = value;
        mpls2_bos.value_namespace = name_space;
        mpls2_bos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plain-bits")
    {
        plain_bits = value;
        plain_bits.value_namespace = name_space;
        plain_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size = value;
        plain_bits_size.value_namespace = name_space;
        plain_bits_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl = value;
        force_ctrl.value_namespace = name_space;
        force_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-da")
    {
        mask_da = value;
        mask_da.value_namespace = name_space;
        mask_da.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype = value;
        mask_ethertype.value_namespace = name_space;
        mask_ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits = value;
        mask_plain_bits.value_namespace = name_space;
        mask_plain_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-hits")
    {
        flow_hits = value;
        flow_hits.value_namespace = name_space;
        flow_hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macda")
    {
        macda.append(value);
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-no")
    {
        flow_no.yfilter = yfilter;
    }
    if(value_path == "is-flow-enabled")
    {
        is_flow_enabled.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-user-pri")
    {
        outer_vlan_user_pri.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-user-pri")
    {
        inner_vlan_user_pri.yfilter = yfilter;
    }
    if(value_path == "psci")
    {
        psci.yfilter = yfilter;
    }
    if(value_path == "match-priority")
    {
        match_priority.yfilter = yfilter;
    }
    if(value_path == "tci-v")
    {
        tci_v.yfilter = yfilter;
    }
    if(value_path == "tci-e-xr")
    {
        tci_e_xr.yfilter = yfilter;
    }
    if(value_path == "tci-sc")
    {
        tci_sc.yfilter = yfilter;
    }
    if(value_path == "tci-scb")
    {
        tci_scb.yfilter = yfilter;
    }
    if(value_path == "tci")
    {
        tci.yfilter = yfilter;
    }
    if(value_path == "tci-c")
    {
        tci_c.yfilter = yfilter;
    }
    if(value_path == "tci-chk")
    {
        tci_chk.yfilter = yfilter;
    }
    if(value_path == "pkt-type")
    {
        pkt_type.yfilter = yfilter;
    }
    if(value_path == "tag-num")
    {
        tag_num.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-dei")
    {
        inner_vlan_dei.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-dei")
    {
        outer_vlan_dei.yfilter = yfilter;
    }
    if(value_path == "pbb-sid")
    {
        pbb_sid.yfilter = yfilter;
    }
    if(value_path == "pbb-bvid")
    {
        pbb_bvid.yfilter = yfilter;
    }
    if(value_path == "pbb-pcp")
    {
        pbb_pcp.yfilter = yfilter;
    }
    if(value_path == "pbb-dei")
    {
        pbb_dei.yfilter = yfilter;
    }
    if(value_path == "mpls1-label")
    {
        mpls1_label.yfilter = yfilter;
    }
    if(value_path == "mpls1-exp")
    {
        mpls1_exp.yfilter = yfilter;
    }
    if(value_path == "mpls1-bos")
    {
        mpls1_bos.yfilter = yfilter;
    }
    if(value_path == "mpls2-label")
    {
        mpls2_label.yfilter = yfilter;
    }
    if(value_path == "mpls2-exp")
    {
        mpls2_exp.yfilter = yfilter;
    }
    if(value_path == "mpls2-bos")
    {
        mpls2_bos.yfilter = yfilter;
    }
    if(value_path == "plain-bits")
    {
        plain_bits.yfilter = yfilter;
    }
    if(value_path == "plain-bits-size")
    {
        plain_bits_size.yfilter = yfilter;
    }
    if(value_path == "force-ctrl")
    {
        force_ctrl.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "mask-da")
    {
        mask_da.yfilter = yfilter;
    }
    if(value_path == "mask-ethertype")
    {
        mask_ethertype.yfilter = yfilter;
    }
    if(value_path == "mask-plain-bits")
    {
        mask_plain_bits.yfilter = yfilter;
    }
    if(value_path == "flow-hits")
    {
        flow_hits.yfilter = yfilter;
    }
    if(value_path == "macda")
    {
        macda.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-no" || name == "is-flow-enabled" || name == "ethertype" || name == "outer-vlan-id" || name == "outer-vlan-user-pri" || name == "inner-vlan-id" || name == "inner-vlan-user-pri" || name == "psci" || name == "match-priority" || name == "tci-v" || name == "tci-e-xr" || name == "tci-sc" || name == "tci-scb" || name == "tci" || name == "tci-c" || name == "tci-chk" || name == "pkt-type" || name == "tag-num" || name == "inner-vlan-dei" || name == "outer-vlan-dei" || name == "pbb-sid" || name == "pbb-bvid" || name == "pbb-pcp" || name == "pbb-dei" || name == "mpls1-label" || name == "mpls1-exp" || name == "mpls1-bos" || name == "mpls2-label" || name == "mpls2-exp" || name == "mpls2-bos" || name == "plain-bits" || name == "plain-bits-size" || name == "force-ctrl" || name == "drop" || name == "mask-da" || name == "mask-ethertype" || name == "mask-plain-bits" || name == "flow-hits" || name == "macda")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::SwStatistics()
    :
    ext(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext>())
{
    ext->parent = this;

    yang_name = "sw-statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::~SwStatistics()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (ext !=  nullptr && ext->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext")
    {
        if(ext == nullptr)
        {
            ext = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext>();
        }
        return ext;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ext != nullptr)
    {
        children["ext"] = ext;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Ext()
    :
    type{YType::enumeration, "type"}
        ,
    msfpga_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats>())
    , xlfpga_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats>())
    , es200_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats>())
{
    msfpga_stats->parent = this;
    xlfpga_stats->parent = this;
    es200_stats->parent = this;

    yang_name = "ext"; yang_parent_name = "sw-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::~Ext()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_data())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_data())
	|| (es200_stats !=  nullptr && es200_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (msfpga_stats !=  nullptr && msfpga_stats->has_operation())
	|| (xlfpga_stats !=  nullptr && xlfpga_stats->has_operation())
	|| (es200_stats !=  nullptr && es200_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msfpga-stats")
    {
        if(msfpga_stats == nullptr)
        {
            msfpga_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats>();
        }
        return msfpga_stats;
    }

    if(child_yang_name == "xlfpga-stats")
    {
        if(xlfpga_stats == nullptr)
        {
            xlfpga_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats>();
        }
        return xlfpga_stats;
    }

    if(child_yang_name == "es200-stats")
    {
        if(es200_stats == nullptr)
        {
            es200_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats>();
        }
        return es200_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msfpga_stats != nullptr)
    {
        children["msfpga-stats"] = msfpga_stats;
    }

    if(xlfpga_stats != nullptr)
    {
        children["xlfpga-stats"] = xlfpga_stats;
    }

    if(es200_stats != nullptr)
    {
        children["es200-stats"] = es200_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msfpga-stats" || name == "xlfpga-stats" || name == "es200-stats" || name == "type")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::MsfpgaStats()
    :
    tx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats>())
    , rx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats>())
    , tx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats>())
    , rx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats>())
{
    tx_sa_stats->parent = this;
    rx_sa_stats->parent = this;
    tx_interface_macsec_stats->parent = this;
    rx_interface_macsec_stats->parent = this;

    yang_name = "msfpga-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::~MsfpgaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa_stats !=  nullptr && tx_sa_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msfpga-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats == nullptr)
        {
            tx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats>();
        }
        return tx_sa_stats;
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats == nullptr)
        {
            rx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats>();
        }
        return rx_sa_stats;
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats == nullptr)
        {
            tx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats>();
        }
        return tx_interface_macsec_stats;
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats == nullptr)
        {
            rx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats>();
        }
        return rx_interface_macsec_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa_stats != nullptr)
    {
        children["tx-sa-stats"] = tx_sa_stats;
    }

    if(rx_sa_stats != nullptr)
    {
        children["rx-sa-stats"] = rx_sa_stats;
    }

    if(tx_interface_macsec_stats != nullptr)
    {
        children["tx-interface-macsec-stats"] = tx_interface_macsec_stats;
    }

    if(rx_interface_macsec_stats != nullptr)
    {
        children["rx-interface-macsec-stats"] = rx_interface_macsec_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa-stats" || name == "rx-sa-stats" || name == "tx-interface-macsec-stats" || name == "rx-interface-macsec-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::TxSaStats()
    :
    out_pkts_protected{YType::uint64, "out-pkts-protected"},
    out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"}
{

    yang_name = "tx-sa-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::~TxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_octets_encrypted.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_protected.yfilter)
	|| ydk::is_set(out_pkts_encrypted.yfilter)
	|| ydk::is_set(out_octets_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_protected.is_set || is_set(out_pkts_protected.yfilter)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.yfilter)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.yfilter)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.yfilter)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
        out_pkts_protected.value_namespace = name_space;
        out_pkts_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
        out_pkts_encrypted.value_namespace = name_space;
        out_pkts_encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
        out_octets_protected.value_namespace = name_space;
        out_octets_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
        out_octets_encrypted.value_namespace = name_space;
        out_octets_encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted.yfilter = yfilter;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "out-octets-protected" || name == "out-octets-encrypted")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::RxSaStats()
    :
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"}
{

    yang_name = "rx-sa-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::~RxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_unused_sa.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_unchecked.is_set
	|| in_octets_validated.is_set
	|| in_octets_decrypted.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter)
	|| ydk::is_set(in_octets_decrypted.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.yfilter)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
        in_octets_decrypted.value_namespace = name_space;
        in_octets_decrypted.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unused-sa" || name == "in-pkts-not-using-sa" || name == "in-pkts-not-valid" || name == "in-pkts-invalid" || name == "in-pkts-ok" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-unchecked" || name == "in-octets-validated" || name == "in-octets-decrypted")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    out_pkt_uncontrolled{YType::uint64, "out-pkt-uncontrolled"},
    out_pkt_untagged{YType::uint64, "out-pkt-untagged"},
    out_pkt_too_long{YType::uint64, "out-pkt-too-long"}
{

    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkt_uncontrolled.is_set
	|| out_pkt_untagged.is_set
	|| out_pkt_too_long.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkt_uncontrolled.yfilter)
	|| ydk::is_set(out_pkt_untagged.yfilter)
	|| ydk::is_set(out_pkt_too_long.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkt_uncontrolled.is_set || is_set(out_pkt_uncontrolled.yfilter)) leaf_name_data.push_back(out_pkt_uncontrolled.get_name_leafdata());
    if (out_pkt_untagged.is_set || is_set(out_pkt_untagged.yfilter)) leaf_name_data.push_back(out_pkt_untagged.get_name_leafdata());
    if (out_pkt_too_long.is_set || is_set(out_pkt_too_long.yfilter)) leaf_name_data.push_back(out_pkt_too_long.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled = value;
        out_pkt_uncontrolled.value_namespace = name_space;
        out_pkt_uncontrolled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged = value;
        out_pkt_untagged.value_namespace = name_space;
        out_pkt_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long = value;
        out_pkt_too_long.value_namespace = name_space;
        out_pkt_too_long.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkt-uncontrolled")
    {
        out_pkt_uncontrolled.yfilter = yfilter;
    }
    if(value_path == "out-pkt-untagged")
    {
        out_pkt_untagged.yfilter = yfilter;
    }
    if(value_path == "out-pkt-too-long")
    {
        out_pkt_too_long.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkt-uncontrolled" || name == "out-pkt-untagged" || name == "out-pkt-too-long")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    in_pkt_untagged{YType::uint64, "in-pkt-untagged"},
    in_pkt_notag{YType::uint64, "in-pkt-notag"},
    in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
    in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
    in_pkt_unknown_sci{YType::uint64, "in-pkt-unknown-sci"},
    in_pkt_tagged{YType::uint64, "in-pkt-tagged"},
    in_pkt_overrun{YType::uint64, "in-pkt-overrun"},
    in_pkt_uncontrolled{YType::uint64, "in-pkt-uncontrolled"}
{

    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "msfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkt_untagged.is_set
	|| in_pkt_notag.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkt_unknown_sci.is_set
	|| in_pkt_tagged.is_set
	|| in_pkt_overrun.is_set
	|| in_pkt_uncontrolled.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_untagged.yfilter)
	|| ydk::is_set(in_pkt_notag.yfilter)
	|| ydk::is_set(in_pkt_bad_tag.yfilter)
	|| ydk::is_set(in_pkt_no_sci.yfilter)
	|| ydk::is_set(in_pkt_unknown_sci.yfilter)
	|| ydk::is_set(in_pkt_tagged.yfilter)
	|| ydk::is_set(in_pkt_overrun.yfilter)
	|| ydk::is_set(in_pkt_uncontrolled.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_untagged.is_set || is_set(in_pkt_untagged.yfilter)) leaf_name_data.push_back(in_pkt_untagged.get_name_leafdata());
    if (in_pkt_notag.is_set || is_set(in_pkt_notag.yfilter)) leaf_name_data.push_back(in_pkt_notag.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.yfilter)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.yfilter)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkt_unknown_sci.is_set || is_set(in_pkt_unknown_sci.yfilter)) leaf_name_data.push_back(in_pkt_unknown_sci.get_name_leafdata());
    if (in_pkt_tagged.is_set || is_set(in_pkt_tagged.yfilter)) leaf_name_data.push_back(in_pkt_tagged.get_name_leafdata());
    if (in_pkt_overrun.is_set || is_set(in_pkt_overrun.yfilter)) leaf_name_data.push_back(in_pkt_overrun.get_name_leafdata());
    if (in_pkt_uncontrolled.is_set || is_set(in_pkt_uncontrolled.yfilter)) leaf_name_data.push_back(in_pkt_uncontrolled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged = value;
        in_pkt_untagged.value_namespace = name_space;
        in_pkt_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag = value;
        in_pkt_notag.value_namespace = name_space;
        in_pkt_notag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
        in_pkt_bad_tag.value_namespace = name_space;
        in_pkt_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
        in_pkt_no_sci.value_namespace = name_space;
        in_pkt_no_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci = value;
        in_pkt_unknown_sci.value_namespace = name_space;
        in_pkt_unknown_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged = value;
        in_pkt_tagged.value_namespace = name_space;
        in_pkt_tagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun = value;
        in_pkt_overrun.value_namespace = name_space;
        in_pkt_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled = value;
        in_pkt_uncontrolled.value_namespace = name_space;
        in_pkt_uncontrolled.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-untagged")
    {
        in_pkt_untagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-notag")
    {
        in_pkt_notag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkt-unknown-sci")
    {
        in_pkt_unknown_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkt-tagged")
    {
        in_pkt_tagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-overrun")
    {
        in_pkt_overrun.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uncontrolled")
    {
        in_pkt_uncontrolled.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-untagged" || name == "in-pkt-notag" || name == "in-pkt-bad-tag" || name == "in-pkt-no-sci" || name == "in-pkt-unknown-sci" || name == "in-pkt-tagged" || name == "in-pkt-overrun" || name == "in-pkt-uncontrolled")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::XlfpgaStats()
    :
    macsec_tx_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats>())
    , macsec_rx_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats>())
{
    macsec_tx_stats->parent = this;
    macsec_rx_stats->parent = this;

    yang_name = "xlfpga-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::~XlfpgaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::has_data() const
{
    if (is_presence_container) return true;
    return (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_data())
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_tx_stats !=  nullptr && macsec_tx_stats->has_operation())
	|| (macsec_rx_stats !=  nullptr && macsec_rx_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xlfpga-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-tx-stats")
    {
        if(macsec_tx_stats == nullptr)
        {
            macsec_tx_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats>();
        }
        return macsec_tx_stats;
    }

    if(child_yang_name == "macsec-rx-stats")
    {
        if(macsec_rx_stats == nullptr)
        {
            macsec_rx_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats>();
        }
        return macsec_rx_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(macsec_tx_stats != nullptr)
    {
        children["macsec-tx-stats"] = macsec_tx_stats;
    }

    if(macsec_rx_stats != nullptr)
    {
        children["macsec-rx-stats"] = macsec_rx_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-tx-stats" || name == "macsec-rx-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::MacsecTxStats()
    :
    sc_encrypted_octets{YType::uint64, "sc-encrypted-octets"},
    sc_toolong_pkts{YType::uint64, "sc-toolong-pkts"},
    sc_encrypted_pkts{YType::uint64, "sc-encrypted-pkts"},
    sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
    sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
    sc_bypass_pkts{YType::uint64, "sc-bypass-pkts"},
    sc_eapol_pkts{YType::uint64, "sc-eapol-pkts"},
    sc_dropped_pkts{YType::uint64, "sc-dropped-pkts"},
    current_an{YType::uint64, "current-an"},
    sa_encrypted_pkts{YType::uint64, "sa-encrypted-pkts"}
{

    yang_name = "macsec-tx-stats"; yang_parent_name = "xlfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::~MacsecTxStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_data() const
{
    if (is_presence_container) return true;
    return sc_encrypted_octets.is_set
	|| sc_toolong_pkts.is_set
	|| sc_encrypted_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_bypass_pkts.is_set
	|| sc_eapol_pkts.is_set
	|| sc_dropped_pkts.is_set
	|| current_an.is_set
	|| sa_encrypted_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sc_encrypted_octets.yfilter)
	|| ydk::is_set(sc_toolong_pkts.yfilter)
	|| ydk::is_set(sc_encrypted_pkts.yfilter)
	|| ydk::is_set(sc_untagged_pkts.yfilter)
	|| ydk::is_set(sc_overrun_pkts.yfilter)
	|| ydk::is_set(sc_bypass_pkts.yfilter)
	|| ydk::is_set(sc_eapol_pkts.yfilter)
	|| ydk::is_set(sc_dropped_pkts.yfilter)
	|| ydk::is_set(current_an.yfilter)
	|| ydk::is_set(sa_encrypted_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-tx-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_encrypted_octets.is_set || is_set(sc_encrypted_octets.yfilter)) leaf_name_data.push_back(sc_encrypted_octets.get_name_leafdata());
    if (sc_toolong_pkts.is_set || is_set(sc_toolong_pkts.yfilter)) leaf_name_data.push_back(sc_toolong_pkts.get_name_leafdata());
    if (sc_encrypted_pkts.is_set || is_set(sc_encrypted_pkts.yfilter)) leaf_name_data.push_back(sc_encrypted_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.yfilter)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.yfilter)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_bypass_pkts.is_set || is_set(sc_bypass_pkts.yfilter)) leaf_name_data.push_back(sc_bypass_pkts.get_name_leafdata());
    if (sc_eapol_pkts.is_set || is_set(sc_eapol_pkts.yfilter)) leaf_name_data.push_back(sc_eapol_pkts.get_name_leafdata());
    if (sc_dropped_pkts.is_set || is_set(sc_dropped_pkts.yfilter)) leaf_name_data.push_back(sc_dropped_pkts.get_name_leafdata());
    if (current_an.is_set || is_set(current_an.yfilter)) leaf_name_data.push_back(current_an.get_name_leafdata());
    if (sa_encrypted_pkts.is_set || is_set(sa_encrypted_pkts.yfilter)) leaf_name_data.push_back(sa_encrypted_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets = value;
        sc_encrypted_octets.value_namespace = name_space;
        sc_encrypted_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts = value;
        sc_toolong_pkts.value_namespace = name_space;
        sc_toolong_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts = value;
        sc_encrypted_pkts.value_namespace = name_space;
        sc_encrypted_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
        sc_untagged_pkts.value_namespace = name_space;
        sc_untagged_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
        sc_overrun_pkts.value_namespace = name_space;
        sc_overrun_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts = value;
        sc_bypass_pkts.value_namespace = name_space;
        sc_bypass_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts = value;
        sc_eapol_pkts.value_namespace = name_space;
        sc_eapol_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts = value;
        sc_dropped_pkts.value_namespace = name_space;
        sc_dropped_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-an")
    {
        current_an = value;
        current_an.value_namespace = name_space;
        current_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts = value;
        sa_encrypted_pkts.value_namespace = name_space;
        sa_encrypted_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sc-encrypted-octets")
    {
        sc_encrypted_octets.yfilter = yfilter;
    }
    if(value_path == "sc-toolong-pkts")
    {
        sc_toolong_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-encrypted-pkts")
    {
        sc_encrypted_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts.yfilter = yfilter;
    }
    if(value_path == "current-an")
    {
        current_an.yfilter = yfilter;
    }
    if(value_path == "sa-encrypted-pkts")
    {
        sa_encrypted_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sc-encrypted-octets" || name == "sc-toolong-pkts" || name == "sc-encrypted-pkts" || name == "sc-untagged-pkts" || name == "sc-overrun-pkts" || name == "sc-bypass-pkts" || name == "sc-eapol-pkts" || name == "sc-dropped-pkts" || name == "current-an" || name == "sa-encrypted-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::MacsecRxStats()
    :
    sc_decrypted_octets{YType::uint64, "sc-decrypted-octets"},
    sc_no_tag_pkts{YType::uint64, "sc-no-tag-pkts"},
    sc_untagged_pkts{YType::uint64, "sc-untagged-pkts"},
    sc_bad_tag_pkts{YType::uint64, "sc-bad-tag-pkts"},
    sc_late_pkts{YType::uint64, "sc-late-pkts"},
    sc_delayed_pkts{YType::uint64, "sc-delayed-pkts"},
    sc_unchecked_pkts{YType::uint64, "sc-unchecked-pkts"},
    sc_no_sci_pkts{YType::uint64, "sc-no-sci-pkts"},
    sc_unknown_sci_pkts{YType::uint64, "sc-unknown-sci-pkts"},
    sc_ok_pkts{YType::uint64, "sc-ok-pkts"},
    sc_not_using_pkts{YType::uint64, "sc-not-using-pkts"},
    sc_unused_pkts{YType::uint64, "sc-unused-pkts"},
    sc_not_valid_pkts{YType::uint64, "sc-not-valid-pkts"},
    sc_invalid_pkts{YType::uint64, "sc-invalid-pkts"},
    sc_overrun_pkts{YType::uint64, "sc-overrun-pkts"},
    sc_bypass_pkts{YType::uint64, "sc-bypass-pkts"},
    sc_eapol_pkts{YType::uint64, "sc-eapol-pkts"},
    sc_dropped_pkts{YType::uint64, "sc-dropped-pkts"}
        ,
    rx_sa_stat(this, {})
{

    yang_name = "macsec-rx-stats"; yang_parent_name = "xlfpga-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::~MacsecRxStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx_sa_stat.len(); index++)
    {
        if(rx_sa_stat[index]->has_data())
            return true;
    }
    return sc_decrypted_octets.is_set
	|| sc_no_tag_pkts.is_set
	|| sc_untagged_pkts.is_set
	|| sc_bad_tag_pkts.is_set
	|| sc_late_pkts.is_set
	|| sc_delayed_pkts.is_set
	|| sc_unchecked_pkts.is_set
	|| sc_no_sci_pkts.is_set
	|| sc_unknown_sci_pkts.is_set
	|| sc_ok_pkts.is_set
	|| sc_not_using_pkts.is_set
	|| sc_unused_pkts.is_set
	|| sc_not_valid_pkts.is_set
	|| sc_invalid_pkts.is_set
	|| sc_overrun_pkts.is_set
	|| sc_bypass_pkts.is_set
	|| sc_eapol_pkts.is_set
	|| sc_dropped_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_operation() const
{
    for (std::size_t index=0; index<rx_sa_stat.len(); index++)
    {
        if(rx_sa_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sc_decrypted_octets.yfilter)
	|| ydk::is_set(sc_no_tag_pkts.yfilter)
	|| ydk::is_set(sc_untagged_pkts.yfilter)
	|| ydk::is_set(sc_bad_tag_pkts.yfilter)
	|| ydk::is_set(sc_late_pkts.yfilter)
	|| ydk::is_set(sc_delayed_pkts.yfilter)
	|| ydk::is_set(sc_unchecked_pkts.yfilter)
	|| ydk::is_set(sc_no_sci_pkts.yfilter)
	|| ydk::is_set(sc_unknown_sci_pkts.yfilter)
	|| ydk::is_set(sc_ok_pkts.yfilter)
	|| ydk::is_set(sc_not_using_pkts.yfilter)
	|| ydk::is_set(sc_unused_pkts.yfilter)
	|| ydk::is_set(sc_not_valid_pkts.yfilter)
	|| ydk::is_set(sc_invalid_pkts.yfilter)
	|| ydk::is_set(sc_overrun_pkts.yfilter)
	|| ydk::is_set(sc_bypass_pkts.yfilter)
	|| ydk::is_set(sc_eapol_pkts.yfilter)
	|| ydk::is_set(sc_dropped_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-rx-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sc_decrypted_octets.is_set || is_set(sc_decrypted_octets.yfilter)) leaf_name_data.push_back(sc_decrypted_octets.get_name_leafdata());
    if (sc_no_tag_pkts.is_set || is_set(sc_no_tag_pkts.yfilter)) leaf_name_data.push_back(sc_no_tag_pkts.get_name_leafdata());
    if (sc_untagged_pkts.is_set || is_set(sc_untagged_pkts.yfilter)) leaf_name_data.push_back(sc_untagged_pkts.get_name_leafdata());
    if (sc_bad_tag_pkts.is_set || is_set(sc_bad_tag_pkts.yfilter)) leaf_name_data.push_back(sc_bad_tag_pkts.get_name_leafdata());
    if (sc_late_pkts.is_set || is_set(sc_late_pkts.yfilter)) leaf_name_data.push_back(sc_late_pkts.get_name_leafdata());
    if (sc_delayed_pkts.is_set || is_set(sc_delayed_pkts.yfilter)) leaf_name_data.push_back(sc_delayed_pkts.get_name_leafdata());
    if (sc_unchecked_pkts.is_set || is_set(sc_unchecked_pkts.yfilter)) leaf_name_data.push_back(sc_unchecked_pkts.get_name_leafdata());
    if (sc_no_sci_pkts.is_set || is_set(sc_no_sci_pkts.yfilter)) leaf_name_data.push_back(sc_no_sci_pkts.get_name_leafdata());
    if (sc_unknown_sci_pkts.is_set || is_set(sc_unknown_sci_pkts.yfilter)) leaf_name_data.push_back(sc_unknown_sci_pkts.get_name_leafdata());
    if (sc_ok_pkts.is_set || is_set(sc_ok_pkts.yfilter)) leaf_name_data.push_back(sc_ok_pkts.get_name_leafdata());
    if (sc_not_using_pkts.is_set || is_set(sc_not_using_pkts.yfilter)) leaf_name_data.push_back(sc_not_using_pkts.get_name_leafdata());
    if (sc_unused_pkts.is_set || is_set(sc_unused_pkts.yfilter)) leaf_name_data.push_back(sc_unused_pkts.get_name_leafdata());
    if (sc_not_valid_pkts.is_set || is_set(sc_not_valid_pkts.yfilter)) leaf_name_data.push_back(sc_not_valid_pkts.get_name_leafdata());
    if (sc_invalid_pkts.is_set || is_set(sc_invalid_pkts.yfilter)) leaf_name_data.push_back(sc_invalid_pkts.get_name_leafdata());
    if (sc_overrun_pkts.is_set || is_set(sc_overrun_pkts.yfilter)) leaf_name_data.push_back(sc_overrun_pkts.get_name_leafdata());
    if (sc_bypass_pkts.is_set || is_set(sc_bypass_pkts.yfilter)) leaf_name_data.push_back(sc_bypass_pkts.get_name_leafdata());
    if (sc_eapol_pkts.is_set || is_set(sc_eapol_pkts.yfilter)) leaf_name_data.push_back(sc_eapol_pkts.get_name_leafdata());
    if (sc_dropped_pkts.is_set || is_set(sc_dropped_pkts.yfilter)) leaf_name_data.push_back(sc_dropped_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-sa-stat")
    {
        auto c = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat>();
        c->parent = this;
        rx_sa_stat.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rx_sa_stat.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets = value;
        sc_decrypted_octets.value_namespace = name_space;
        sc_decrypted_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts = value;
        sc_no_tag_pkts.value_namespace = name_space;
        sc_no_tag_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts = value;
        sc_untagged_pkts.value_namespace = name_space;
        sc_untagged_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts = value;
        sc_bad_tag_pkts.value_namespace = name_space;
        sc_bad_tag_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts = value;
        sc_late_pkts.value_namespace = name_space;
        sc_late_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts = value;
        sc_delayed_pkts.value_namespace = name_space;
        sc_delayed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts = value;
        sc_unchecked_pkts.value_namespace = name_space;
        sc_unchecked_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts = value;
        sc_no_sci_pkts.value_namespace = name_space;
        sc_no_sci_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts = value;
        sc_unknown_sci_pkts.value_namespace = name_space;
        sc_unknown_sci_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts = value;
        sc_ok_pkts.value_namespace = name_space;
        sc_ok_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts = value;
        sc_not_using_pkts.value_namespace = name_space;
        sc_not_using_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts = value;
        sc_unused_pkts.value_namespace = name_space;
        sc_unused_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts = value;
        sc_not_valid_pkts.value_namespace = name_space;
        sc_not_valid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts = value;
        sc_invalid_pkts.value_namespace = name_space;
        sc_invalid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts = value;
        sc_overrun_pkts.value_namespace = name_space;
        sc_overrun_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts = value;
        sc_bypass_pkts.value_namespace = name_space;
        sc_bypass_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts = value;
        sc_eapol_pkts.value_namespace = name_space;
        sc_eapol_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts = value;
        sc_dropped_pkts.value_namespace = name_space;
        sc_dropped_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sc-decrypted-octets")
    {
        sc_decrypted_octets.yfilter = yfilter;
    }
    if(value_path == "sc-no-tag-pkts")
    {
        sc_no_tag_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-untagged-pkts")
    {
        sc_untagged_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bad-tag-pkts")
    {
        sc_bad_tag_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-late-pkts")
    {
        sc_late_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-delayed-pkts")
    {
        sc_delayed_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unchecked-pkts")
    {
        sc_unchecked_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-no-sci-pkts")
    {
        sc_no_sci_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unknown-sci-pkts")
    {
        sc_unknown_sci_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-ok-pkts")
    {
        sc_ok_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-not-using-pkts")
    {
        sc_not_using_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-unused-pkts")
    {
        sc_unused_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-not-valid-pkts")
    {
        sc_not_valid_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-invalid-pkts")
    {
        sc_invalid_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-overrun-pkts")
    {
        sc_overrun_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-bypass-pkts")
    {
        sc_bypass_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-eapol-pkts")
    {
        sc_eapol_pkts.yfilter = yfilter;
    }
    if(value_path == "sc-dropped-pkts")
    {
        sc_dropped_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-sa-stat" || name == "sc-decrypted-octets" || name == "sc-no-tag-pkts" || name == "sc-untagged-pkts" || name == "sc-bad-tag-pkts" || name == "sc-late-pkts" || name == "sc-delayed-pkts" || name == "sc-unchecked-pkts" || name == "sc-no-sci-pkts" || name == "sc-unknown-sci-pkts" || name == "sc-ok-pkts" || name == "sc-not-using-pkts" || name == "sc-unused-pkts" || name == "sc-not-valid-pkts" || name == "sc-invalid-pkts" || name == "sc-overrun-pkts" || name == "sc-bypass-pkts" || name == "sc-eapol-pkts" || name == "sc-dropped-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::RxSaStat()
    :
    an{YType::uint64, "an"},
    sa_ok_pkts{YType::uint64, "sa-ok-pkts"},
    sa_not_using_pkts{YType::uint64, "sa-not-using-pkts"},
    sa_unused_pkts{YType::uint64, "sa-unused-pkts"},
    sa_not_valid_pkts{YType::uint64, "sa-not-valid-pkts"},
    sa_invalid_pkts{YType::uint64, "sa-invalid-pkts"}
{

    yang_name = "rx-sa-stat"; yang_parent_name = "macsec-rx-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::~RxSaStat()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_data() const
{
    if (is_presence_container) return true;
    return an.is_set
	|| sa_ok_pkts.is_set
	|| sa_not_using_pkts.is_set
	|| sa_unused_pkts.is_set
	|| sa_not_valid_pkts.is_set
	|| sa_invalid_pkts.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(an.yfilter)
	|| ydk::is_set(sa_ok_pkts.yfilter)
	|| ydk::is_set(sa_not_using_pkts.yfilter)
	|| ydk::is_set(sa_unused_pkts.yfilter)
	|| ydk::is_set(sa_not_valid_pkts.yfilter)
	|| ydk::is_set(sa_invalid_pkts.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (an.is_set || is_set(an.yfilter)) leaf_name_data.push_back(an.get_name_leafdata());
    if (sa_ok_pkts.is_set || is_set(sa_ok_pkts.yfilter)) leaf_name_data.push_back(sa_ok_pkts.get_name_leafdata());
    if (sa_not_using_pkts.is_set || is_set(sa_not_using_pkts.yfilter)) leaf_name_data.push_back(sa_not_using_pkts.get_name_leafdata());
    if (sa_unused_pkts.is_set || is_set(sa_unused_pkts.yfilter)) leaf_name_data.push_back(sa_unused_pkts.get_name_leafdata());
    if (sa_not_valid_pkts.is_set || is_set(sa_not_valid_pkts.yfilter)) leaf_name_data.push_back(sa_not_valid_pkts.get_name_leafdata());
    if (sa_invalid_pkts.is_set || is_set(sa_invalid_pkts.yfilter)) leaf_name_data.push_back(sa_invalid_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "an")
    {
        an = value;
        an.value_namespace = name_space;
        an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts = value;
        sa_ok_pkts.value_namespace = name_space;
        sa_ok_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts = value;
        sa_not_using_pkts.value_namespace = name_space;
        sa_not_using_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts = value;
        sa_unused_pkts.value_namespace = name_space;
        sa_unused_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts = value;
        sa_not_valid_pkts.value_namespace = name_space;
        sa_not_valid_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts = value;
        sa_invalid_pkts.value_namespace = name_space;
        sa_invalid_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "an")
    {
        an.yfilter = yfilter;
    }
    if(value_path == "sa-ok-pkts")
    {
        sa_ok_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-not-using-pkts")
    {
        sa_not_using_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-unused-pkts")
    {
        sa_unused_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-not-valid-pkts")
    {
        sa_not_valid_pkts.yfilter = yfilter;
    }
    if(value_path == "sa-invalid-pkts")
    {
        sa_invalid_pkts.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "an" || name == "sa-ok-pkts" || name == "sa-not-using-pkts" || name == "sa-unused-pkts" || name == "sa-not-valid-pkts" || name == "sa-invalid-pkts")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::Es200Stats()
    :
    tx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats>())
    , rx_sa_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats>())
    , tx_sc_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats>())
    , rx_sc_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats>())
    , tx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats>())
    , rx_interface_macsec_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats>())
    , tx_port_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats>())
    , rx_port_stats(std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats>())
{
    tx_sa_stats->parent = this;
    rx_sa_stats->parent = this;
    tx_sc_macsec_stats->parent = this;
    rx_sc_macsec_stats->parent = this;
    tx_interface_macsec_stats->parent = this;
    rx_interface_macsec_stats->parent = this;
    tx_port_stats->parent = this;
    rx_port_stats->parent = this;

    yang_name = "es200-stats"; yang_parent_name = "ext"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::~Es200Stats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::has_data() const
{
    if (is_presence_container) return true;
    return (tx_sa_stats !=  nullptr && tx_sa_stats->has_data())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_data())
	|| (tx_sc_macsec_stats !=  nullptr && tx_sc_macsec_stats->has_data())
	|| (rx_sc_macsec_stats !=  nullptr && rx_sc_macsec_stats->has_data())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_data())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_data())
	|| (tx_port_stats !=  nullptr && tx_port_stats->has_data())
	|| (rx_port_stats !=  nullptr && rx_port_stats->has_data());
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::has_operation() const
{
    return is_set(yfilter)
	|| (tx_sa_stats !=  nullptr && tx_sa_stats->has_operation())
	|| (rx_sa_stats !=  nullptr && rx_sa_stats->has_operation())
	|| (tx_sc_macsec_stats !=  nullptr && tx_sc_macsec_stats->has_operation())
	|| (rx_sc_macsec_stats !=  nullptr && rx_sc_macsec_stats->has_operation())
	|| (tx_interface_macsec_stats !=  nullptr && tx_interface_macsec_stats->has_operation())
	|| (rx_interface_macsec_stats !=  nullptr && rx_interface_macsec_stats->has_operation())
	|| (tx_port_stats !=  nullptr && tx_port_stats->has_operation())
	|| (rx_port_stats !=  nullptr && rx_port_stats->has_operation());
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es200-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-sa-stats")
    {
        if(tx_sa_stats == nullptr)
        {
            tx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats>();
        }
        return tx_sa_stats;
    }

    if(child_yang_name == "rx-sa-stats")
    {
        if(rx_sa_stats == nullptr)
        {
            rx_sa_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats>();
        }
        return rx_sa_stats;
    }

    if(child_yang_name == "tx-sc-macsec-stats")
    {
        if(tx_sc_macsec_stats == nullptr)
        {
            tx_sc_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats>();
        }
        return tx_sc_macsec_stats;
    }

    if(child_yang_name == "rx-sc-macsec-stats")
    {
        if(rx_sc_macsec_stats == nullptr)
        {
            rx_sc_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats>();
        }
        return rx_sc_macsec_stats;
    }

    if(child_yang_name == "tx-interface-macsec-stats")
    {
        if(tx_interface_macsec_stats == nullptr)
        {
            tx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats>();
        }
        return tx_interface_macsec_stats;
    }

    if(child_yang_name == "rx-interface-macsec-stats")
    {
        if(rx_interface_macsec_stats == nullptr)
        {
            rx_interface_macsec_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats>();
        }
        return rx_interface_macsec_stats;
    }

    if(child_yang_name == "tx-port-stats")
    {
        if(tx_port_stats == nullptr)
        {
            tx_port_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats>();
        }
        return tx_port_stats;
    }

    if(child_yang_name == "rx-port-stats")
    {
        if(rx_port_stats == nullptr)
        {
            rx_port_stats = std::make_shared<MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats>();
        }
        return rx_port_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_sa_stats != nullptr)
    {
        children["tx-sa-stats"] = tx_sa_stats;
    }

    if(rx_sa_stats != nullptr)
    {
        children["rx-sa-stats"] = rx_sa_stats;
    }

    if(tx_sc_macsec_stats != nullptr)
    {
        children["tx-sc-macsec-stats"] = tx_sc_macsec_stats;
    }

    if(rx_sc_macsec_stats != nullptr)
    {
        children["rx-sc-macsec-stats"] = rx_sc_macsec_stats;
    }

    if(tx_interface_macsec_stats != nullptr)
    {
        children["tx-interface-macsec-stats"] = tx_interface_macsec_stats;
    }

    if(rx_interface_macsec_stats != nullptr)
    {
        children["rx-interface-macsec-stats"] = rx_interface_macsec_stats;
    }

    if(tx_port_stats != nullptr)
    {
        children["tx-port-stats"] = tx_port_stats;
    }

    if(rx_port_stats != nullptr)
    {
        children["rx-port-stats"] = rx_port_stats;
    }

    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-sa-stats" || name == "rx-sa-stats" || name == "tx-sc-macsec-stats" || name == "rx-sc-macsec-stats" || name == "tx-interface-macsec-stats" || name == "rx-interface-macsec-stats" || name == "tx-port-stats" || name == "rx-port-stats")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::TxSaStats()
    :
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"},
    out_pkts_encrypted_protected{YType::uint64, "out-pkts-encrypted-protected"},
    out_octets_encrypted_protected1{YType::uint64, "out-octets-encrypted-protected1"}
{

    yang_name = "tx-sa-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::~TxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_too_long.is_set
	|| out_pkts_encrypted_protected.is_set
	|| out_octets_encrypted_protected1.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_too_long.yfilter)
	|| ydk::is_set(out_pkts_encrypted_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted_protected1.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.yfilter)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (out_pkts_encrypted_protected.is_set || is_set(out_pkts_encrypted_protected.yfilter)) leaf_name_data.push_back(out_pkts_encrypted_protected.get_name_leafdata());
    if (out_octets_encrypted_protected1.is_set || is_set(out_octets_encrypted_protected1.yfilter)) leaf_name_data.push_back(out_octets_encrypted_protected1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
        out_pkts_too_long.value_namespace = name_space;
        out_pkts_too_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected = value;
        out_pkts_encrypted_protected.value_namespace = name_space;
        out_pkts_encrypted_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1 = value;
        out_octets_encrypted_protected1.value_namespace = name_space;
        out_octets_encrypted_protected1.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted-protected")
    {
        out_pkts_encrypted_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted-protected1")
    {
        out_octets_encrypted_protected1.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-too-long" || name == "out-pkts-encrypted-protected" || name == "out-octets-encrypted-protected1")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::RxSaStats()
    :
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    in_octets_decrypted_validated1{YType::uint64, "in-octets-decrypted-validated1"},
    in_octets_validated{YType::uint64, "in-octets-validated"}
{

    yang_name = "rx-sa-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::~RxSaStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_unchecked.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_unused_sa.is_set
	|| in_octets_decrypted_validated1.is_set
	|| in_octets_validated.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_octets_decrypted_validated1.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sa-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_octets_decrypted_validated1.is_set || is_set(in_octets_decrypted_validated1.yfilter)) leaf_name_data.push_back(in_octets_decrypted_validated1.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1 = value;
        in_octets_decrypted_validated1.value_namespace = name_space;
        in_octets_decrypted_validated1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted-validated1")
    {
        in_octets_decrypted_validated1.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-octets-decrypted-validated1" || name == "in-octets-validated")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::TxScMacsecStats()
    :
    out_pkts_sa_not_in_use{YType::uint64, "out-pkts-sa-not-in-use"}
{

    yang_name = "tx-sc-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::~TxScMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_sa_not_in_use.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_sa_not_in_use.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sc-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_sa_not_in_use.is_set || is_set(out_pkts_sa_not_in_use.yfilter)) leaf_name_data.push_back(out_pkts_sa_not_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use = value;
        out_pkts_sa_not_in_use.value_namespace = name_space;
        out_pkts_sa_not_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-sa-not-in-use")
    {
        out_pkts_sa_not_in_use.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-sa-not-in-use")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::RxScMacsecStats()
    :
    in_pkts_sa_not_in_use{YType::uint64, "in-pkts-sa-not-in-use"}
{

    yang_name = "rx-sc-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::~RxScMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_sa_not_in_use.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_sa_not_in_use.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sc-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_sa_not_in_use.is_set || is_set(in_pkts_sa_not_in_use.yfilter)) leaf_name_data.push_back(in_pkts_sa_not_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use = value;
        in_pkts_sa_not_in_use.value_namespace = name_space;
        in_pkts_sa_not_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-sa-not-in-use")
    {
        in_pkts_sa_not_in_use.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-sa-not-in-use")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::TxInterfaceMacsecStats()
    :
    transform_error_pkts{YType::uint64, "transform-error-pkts"},
    out_pkt_ctrl{YType::uint64, "out-pkt-ctrl"},
    out_pkts_untagged{YType::uint64, "out-pkts-untagged"},
    out_octets_unctrl{YType::uint64, "out-octets-unctrl"},
    out_octets_ctrl{YType::uint64, "out-octets-ctrl"},
    out_octets_common{YType::uint64, "out-octets-common"},
    out_ucast_pkts_unctrl{YType::uint64, "out-ucast-pkts-unctrl"},
    out_ucast_pkts_ctrl{YType::uint64, "out-ucast-pkts-ctrl"},
    out_mcast_pkts_unctrl{YType::uint64, "out-mcast-pkts-unctrl"},
    out_mcast_pkts_ctrl{YType::uint64, "out-mcast-pkts-ctrl"},
    out_bcast_pkts_unctrl{YType::uint64, "out-bcast-pkts-unctrl"},
    out_bcast_pkts_ctrl{YType::uint64, "out-bcast-pkts-ctrl"},
    out_rx_drop_pkts_unctrl{YType::uint64, "out-rx-drop-pkts-unctrl"},
    out_rx_drop_pkts_ctrl{YType::uint64, "out-rx-drop-pkts-ctrl"},
    out_rx_err_pkts_unctrl{YType::uint64, "out-rx-err-pkts-unctrl"},
    out_rx_err_pkts_ctrl{YType::uint64, "out-rx-err-pkts-ctrl"},
    out_drop_pkts_class{YType::uint64, "out-drop-pkts-class"},
    out_drop_pkts_data{YType::uint64, "out-drop-pkts-data"}
{

    yang_name = "tx-interface-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::~TxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return transform_error_pkts.is_set
	|| out_pkt_ctrl.is_set
	|| out_pkts_untagged.is_set
	|| out_octets_unctrl.is_set
	|| out_octets_ctrl.is_set
	|| out_octets_common.is_set
	|| out_ucast_pkts_unctrl.is_set
	|| out_ucast_pkts_ctrl.is_set
	|| out_mcast_pkts_unctrl.is_set
	|| out_mcast_pkts_ctrl.is_set
	|| out_bcast_pkts_unctrl.is_set
	|| out_bcast_pkts_ctrl.is_set
	|| out_rx_drop_pkts_unctrl.is_set
	|| out_rx_drop_pkts_ctrl.is_set
	|| out_rx_err_pkts_unctrl.is_set
	|| out_rx_err_pkts_ctrl.is_set
	|| out_drop_pkts_class.is_set
	|| out_drop_pkts_data.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transform_error_pkts.yfilter)
	|| ydk::is_set(out_pkt_ctrl.yfilter)
	|| ydk::is_set(out_pkts_untagged.yfilter)
	|| ydk::is_set(out_octets_unctrl.yfilter)
	|| ydk::is_set(out_octets_ctrl.yfilter)
	|| ydk::is_set(out_octets_common.yfilter)
	|| ydk::is_set(out_ucast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_ucast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_mcast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_mcast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_bcast_pkts_unctrl.yfilter)
	|| ydk::is_set(out_bcast_pkts_ctrl.yfilter)
	|| ydk::is_set(out_rx_drop_pkts_unctrl.yfilter)
	|| ydk::is_set(out_rx_drop_pkts_ctrl.yfilter)
	|| ydk::is_set(out_rx_err_pkts_unctrl.yfilter)
	|| ydk::is_set(out_rx_err_pkts_ctrl.yfilter)
	|| ydk::is_set(out_drop_pkts_class.yfilter)
	|| ydk::is_set(out_drop_pkts_data.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transform_error_pkts.is_set || is_set(transform_error_pkts.yfilter)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());
    if (out_pkt_ctrl.is_set || is_set(out_pkt_ctrl.yfilter)) leaf_name_data.push_back(out_pkt_ctrl.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.yfilter)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());
    if (out_octets_unctrl.is_set || is_set(out_octets_unctrl.yfilter)) leaf_name_data.push_back(out_octets_unctrl.get_name_leafdata());
    if (out_octets_ctrl.is_set || is_set(out_octets_ctrl.yfilter)) leaf_name_data.push_back(out_octets_ctrl.get_name_leafdata());
    if (out_octets_common.is_set || is_set(out_octets_common.yfilter)) leaf_name_data.push_back(out_octets_common.get_name_leafdata());
    if (out_ucast_pkts_unctrl.is_set || is_set(out_ucast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_ucast_pkts_unctrl.get_name_leafdata());
    if (out_ucast_pkts_ctrl.is_set || is_set(out_ucast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_ucast_pkts_ctrl.get_name_leafdata());
    if (out_mcast_pkts_unctrl.is_set || is_set(out_mcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_mcast_pkts_unctrl.get_name_leafdata());
    if (out_mcast_pkts_ctrl.is_set || is_set(out_mcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_mcast_pkts_ctrl.get_name_leafdata());
    if (out_bcast_pkts_unctrl.is_set || is_set(out_bcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_bcast_pkts_unctrl.get_name_leafdata());
    if (out_bcast_pkts_ctrl.is_set || is_set(out_bcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_bcast_pkts_ctrl.get_name_leafdata());
    if (out_rx_drop_pkts_unctrl.is_set || is_set(out_rx_drop_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_rx_drop_pkts_unctrl.get_name_leafdata());
    if (out_rx_drop_pkts_ctrl.is_set || is_set(out_rx_drop_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_rx_drop_pkts_ctrl.get_name_leafdata());
    if (out_rx_err_pkts_unctrl.is_set || is_set(out_rx_err_pkts_unctrl.yfilter)) leaf_name_data.push_back(out_rx_err_pkts_unctrl.get_name_leafdata());
    if (out_rx_err_pkts_ctrl.is_set || is_set(out_rx_err_pkts_ctrl.yfilter)) leaf_name_data.push_back(out_rx_err_pkts_ctrl.get_name_leafdata());
    if (out_drop_pkts_class.is_set || is_set(out_drop_pkts_class.yfilter)) leaf_name_data.push_back(out_drop_pkts_class.get_name_leafdata());
    if (out_drop_pkts_data.is_set || is_set(out_drop_pkts_data.yfilter)) leaf_name_data.push_back(out_drop_pkts_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
        transform_error_pkts.value_namespace = name_space;
        transform_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl = value;
        out_pkt_ctrl.value_namespace = name_space;
        out_pkt_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
        out_pkts_untagged.value_namespace = name_space;
        out_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl = value;
        out_octets_unctrl.value_namespace = name_space;
        out_octets_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl = value;
        out_octets_ctrl.value_namespace = name_space;
        out_octets_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common = value;
        out_octets_common.value_namespace = name_space;
        out_octets_common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl = value;
        out_ucast_pkts_unctrl.value_namespace = name_space;
        out_ucast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl = value;
        out_ucast_pkts_ctrl.value_namespace = name_space;
        out_ucast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl = value;
        out_mcast_pkts_unctrl.value_namespace = name_space;
        out_mcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl = value;
        out_mcast_pkts_ctrl.value_namespace = name_space;
        out_mcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl = value;
        out_bcast_pkts_unctrl.value_namespace = name_space;
        out_bcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl = value;
        out_bcast_pkts_ctrl.value_namespace = name_space;
        out_bcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl = value;
        out_rx_drop_pkts_unctrl.value_namespace = name_space;
        out_rx_drop_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl = value;
        out_rx_drop_pkts_ctrl.value_namespace = name_space;
        out_rx_drop_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl = value;
        out_rx_err_pkts_unctrl.value_namespace = name_space;
        out_rx_err_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl = value;
        out_rx_err_pkts_ctrl.value_namespace = name_space;
        out_rx_err_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class = value;
        out_drop_pkts_class.value_namespace = name_space;
        out_drop_pkts_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data = value;
        out_drop_pkts_data.value_namespace = name_space;
        out_drop_pkts_data.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts.yfilter = yfilter;
    }
    if(value_path == "out-pkt-ctrl")
    {
        out_pkt_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "out-octets-unctrl")
    {
        out_octets_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-octets-ctrl")
    {
        out_octets_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-octets-common")
    {
        out_octets_common.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts-unctrl")
    {
        out_ucast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-ucast-pkts-ctrl")
    {
        out_ucast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-mcast-pkts-unctrl")
    {
        out_mcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-mcast-pkts-ctrl")
    {
        out_mcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-bcast-pkts-unctrl")
    {
        out_bcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-bcast-pkts-ctrl")
    {
        out_bcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-drop-pkts-unctrl")
    {
        out_rx_drop_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-drop-pkts-ctrl")
    {
        out_rx_drop_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-err-pkts-unctrl")
    {
        out_rx_err_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "out-rx-err-pkts-ctrl")
    {
        out_rx_err_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "out-drop-pkts-class")
    {
        out_drop_pkts_class.yfilter = yfilter;
    }
    if(value_path == "out-drop-pkts-data")
    {
        out_drop_pkts_data.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transform-error-pkts" || name == "out-pkt-ctrl" || name == "out-pkts-untagged" || name == "out-octets-unctrl" || name == "out-octets-ctrl" || name == "out-octets-common" || name == "out-ucast-pkts-unctrl" || name == "out-ucast-pkts-ctrl" || name == "out-mcast-pkts-unctrl" || name == "out-mcast-pkts-ctrl" || name == "out-bcast-pkts-unctrl" || name == "out-bcast-pkts-ctrl" || name == "out-rx-drop-pkts-unctrl" || name == "out-rx-drop-pkts-ctrl" || name == "out-rx-err-pkts-unctrl" || name == "out-rx-err-pkts-ctrl" || name == "out-drop-pkts-class" || name == "out-drop-pkts-data")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::RxInterfaceMacsecStats()
    :
    transform_error_pkts{YType::uint64, "transform-error-pkts"},
    in_pkt_ctrl{YType::uint64, "in-pkt-ctrl"},
    in_pkt_no_tag{YType::uint64, "in-pkt-no-tag"},
    in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
    in_pkt_bad_tag{YType::uint64, "in-pkt-bad-tag"},
    in_pkt_no_sci{YType::uint64, "in-pkt-no-sci"},
    in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
    in_pkts_tagged_ctrl{YType::uint64, "in-pkts-tagged-ctrl"},
    in_octets_unctrl{YType::uint64, "in-octets-unctrl"},
    in_octets_ctrl{YType::uint64, "in-octets-ctrl"},
    in_ucast_pkts_unctrl{YType::uint64, "in-ucast-pkts-unctrl"},
    in_ucast_pkts_ctrl{YType::uint64, "in-ucast-pkts-ctrl"},
    in_mcast_pkts_unctrl{YType::uint64, "in-mcast-pkts-unctrl"},
    in_mcast_pkts_ctrl{YType::uint64, "in-mcast-pkts-ctrl"},
    in_bcast_pkts_unctrl{YType::uint64, "in-bcast-pkts-unctrl"},
    in_bcast_pkts_ctrl{YType::uint64, "in-bcast-pkts-ctrl"},
    in_rx_drop_pkts_unctrl{YType::uint64, "in-rx-drop-pkts-unctrl"},
    in_rx_drop_pkts_ctrl{YType::uint64, "in-rx-drop-pkts-ctrl"},
    in_rx_error_pkts_unctrl{YType::uint64, "in-rx-error-pkts-unctrl"},
    in_rx_error_pkts_ctrl{YType::uint64, "in-rx-error-pkts-ctrl"},
    in_drop_pkts_class{YType::uint64, "in-drop-pkts-class"},
    in_drop_pkts_data{YType::uint64, "in-drop-pkts-data"}
{

    yang_name = "rx-interface-macsec-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::~RxInterfaceMacsecStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_data() const
{
    if (is_presence_container) return true;
    return transform_error_pkts.is_set
	|| in_pkt_ctrl.is_set
	|| in_pkt_no_tag.is_set
	|| in_pkts_untagged.is_set
	|| in_pkt_bad_tag.is_set
	|| in_pkt_no_sci.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_tagged_ctrl.is_set
	|| in_octets_unctrl.is_set
	|| in_octets_ctrl.is_set
	|| in_ucast_pkts_unctrl.is_set
	|| in_ucast_pkts_ctrl.is_set
	|| in_mcast_pkts_unctrl.is_set
	|| in_mcast_pkts_ctrl.is_set
	|| in_bcast_pkts_unctrl.is_set
	|| in_bcast_pkts_ctrl.is_set
	|| in_rx_drop_pkts_unctrl.is_set
	|| in_rx_drop_pkts_ctrl.is_set
	|| in_rx_error_pkts_unctrl.is_set
	|| in_rx_error_pkts_ctrl.is_set
	|| in_drop_pkts_class.is_set
	|| in_drop_pkts_data.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transform_error_pkts.yfilter)
	|| ydk::is_set(in_pkt_ctrl.yfilter)
	|| ydk::is_set(in_pkt_no_tag.yfilter)
	|| ydk::is_set(in_pkts_untagged.yfilter)
	|| ydk::is_set(in_pkt_bad_tag.yfilter)
	|| ydk::is_set(in_pkt_no_sci.yfilter)
	|| ydk::is_set(in_pkts_unknown_sci.yfilter)
	|| ydk::is_set(in_pkts_tagged_ctrl.yfilter)
	|| ydk::is_set(in_octets_unctrl.yfilter)
	|| ydk::is_set(in_octets_ctrl.yfilter)
	|| ydk::is_set(in_ucast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_ucast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_mcast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_mcast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_bcast_pkts_unctrl.yfilter)
	|| ydk::is_set(in_bcast_pkts_ctrl.yfilter)
	|| ydk::is_set(in_rx_drop_pkts_unctrl.yfilter)
	|| ydk::is_set(in_rx_drop_pkts_ctrl.yfilter)
	|| ydk::is_set(in_rx_error_pkts_unctrl.yfilter)
	|| ydk::is_set(in_rx_error_pkts_ctrl.yfilter)
	|| ydk::is_set(in_drop_pkts_class.yfilter)
	|| ydk::is_set(in_drop_pkts_data.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-interface-macsec-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transform_error_pkts.is_set || is_set(transform_error_pkts.yfilter)) leaf_name_data.push_back(transform_error_pkts.get_name_leafdata());
    if (in_pkt_ctrl.is_set || is_set(in_pkt_ctrl.yfilter)) leaf_name_data.push_back(in_pkt_ctrl.get_name_leafdata());
    if (in_pkt_no_tag.is_set || is_set(in_pkt_no_tag.yfilter)) leaf_name_data.push_back(in_pkt_no_tag.get_name_leafdata());
    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.yfilter)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (in_pkt_bad_tag.is_set || is_set(in_pkt_bad_tag.yfilter)) leaf_name_data.push_back(in_pkt_bad_tag.get_name_leafdata());
    if (in_pkt_no_sci.is_set || is_set(in_pkt_no_sci.yfilter)) leaf_name_data.push_back(in_pkt_no_sci.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.yfilter)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_tagged_ctrl.is_set || is_set(in_pkts_tagged_ctrl.yfilter)) leaf_name_data.push_back(in_pkts_tagged_ctrl.get_name_leafdata());
    if (in_octets_unctrl.is_set || is_set(in_octets_unctrl.yfilter)) leaf_name_data.push_back(in_octets_unctrl.get_name_leafdata());
    if (in_octets_ctrl.is_set || is_set(in_octets_ctrl.yfilter)) leaf_name_data.push_back(in_octets_ctrl.get_name_leafdata());
    if (in_ucast_pkts_unctrl.is_set || is_set(in_ucast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_ucast_pkts_unctrl.get_name_leafdata());
    if (in_ucast_pkts_ctrl.is_set || is_set(in_ucast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_ucast_pkts_ctrl.get_name_leafdata());
    if (in_mcast_pkts_unctrl.is_set || is_set(in_mcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_mcast_pkts_unctrl.get_name_leafdata());
    if (in_mcast_pkts_ctrl.is_set || is_set(in_mcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_mcast_pkts_ctrl.get_name_leafdata());
    if (in_bcast_pkts_unctrl.is_set || is_set(in_bcast_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_bcast_pkts_unctrl.get_name_leafdata());
    if (in_bcast_pkts_ctrl.is_set || is_set(in_bcast_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_bcast_pkts_ctrl.get_name_leafdata());
    if (in_rx_drop_pkts_unctrl.is_set || is_set(in_rx_drop_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_rx_drop_pkts_unctrl.get_name_leafdata());
    if (in_rx_drop_pkts_ctrl.is_set || is_set(in_rx_drop_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_rx_drop_pkts_ctrl.get_name_leafdata());
    if (in_rx_error_pkts_unctrl.is_set || is_set(in_rx_error_pkts_unctrl.yfilter)) leaf_name_data.push_back(in_rx_error_pkts_unctrl.get_name_leafdata());
    if (in_rx_error_pkts_ctrl.is_set || is_set(in_rx_error_pkts_ctrl.yfilter)) leaf_name_data.push_back(in_rx_error_pkts_ctrl.get_name_leafdata());
    if (in_drop_pkts_class.is_set || is_set(in_drop_pkts_class.yfilter)) leaf_name_data.push_back(in_drop_pkts_class.get_name_leafdata());
    if (in_drop_pkts_data.is_set || is_set(in_drop_pkts_data.yfilter)) leaf_name_data.push_back(in_drop_pkts_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts = value;
        transform_error_pkts.value_namespace = name_space;
        transform_error_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl = value;
        in_pkt_ctrl.value_namespace = name_space;
        in_pkt_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag = value;
        in_pkt_no_tag.value_namespace = name_space;
        in_pkt_no_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
        in_pkts_untagged.value_namespace = name_space;
        in_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag = value;
        in_pkt_bad_tag.value_namespace = name_space;
        in_pkt_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci = value;
        in_pkt_no_sci.value_namespace = name_space;
        in_pkt_no_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
        in_pkts_unknown_sci.value_namespace = name_space;
        in_pkts_unknown_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl = value;
        in_pkts_tagged_ctrl.value_namespace = name_space;
        in_pkts_tagged_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl = value;
        in_octets_unctrl.value_namespace = name_space;
        in_octets_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl = value;
        in_octets_ctrl.value_namespace = name_space;
        in_octets_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl = value;
        in_ucast_pkts_unctrl.value_namespace = name_space;
        in_ucast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl = value;
        in_ucast_pkts_ctrl.value_namespace = name_space;
        in_ucast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl = value;
        in_mcast_pkts_unctrl.value_namespace = name_space;
        in_mcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl = value;
        in_mcast_pkts_ctrl.value_namespace = name_space;
        in_mcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl = value;
        in_bcast_pkts_unctrl.value_namespace = name_space;
        in_bcast_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl = value;
        in_bcast_pkts_ctrl.value_namespace = name_space;
        in_bcast_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl = value;
        in_rx_drop_pkts_unctrl.value_namespace = name_space;
        in_rx_drop_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl = value;
        in_rx_drop_pkts_ctrl.value_namespace = name_space;
        in_rx_drop_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl = value;
        in_rx_error_pkts_unctrl.value_namespace = name_space;
        in_rx_error_pkts_unctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl = value;
        in_rx_error_pkts_ctrl.value_namespace = name_space;
        in_rx_error_pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class = value;
        in_drop_pkts_class.value_namespace = name_space;
        in_drop_pkts_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data = value;
        in_drop_pkts_data.value_namespace = name_space;
        in_drop_pkts_data.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transform-error-pkts")
    {
        transform_error_pkts.yfilter = yfilter;
    }
    if(value_path == "in-pkt-ctrl")
    {
        in_pkt_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-tag")
    {
        in_pkt_no_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "in-pkt-bad-tag")
    {
        in_pkt_bad_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkt-no-sci")
    {
        in_pkt_no_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-tagged-ctrl")
    {
        in_pkts_tagged_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-octets-unctrl")
    {
        in_octets_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-octets-ctrl")
    {
        in_octets_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts-unctrl")
    {
        in_ucast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-ucast-pkts-ctrl")
    {
        in_ucast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-mcast-pkts-unctrl")
    {
        in_mcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-mcast-pkts-ctrl")
    {
        in_mcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-bcast-pkts-unctrl")
    {
        in_bcast_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-bcast-pkts-ctrl")
    {
        in_bcast_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-drop-pkts-unctrl")
    {
        in_rx_drop_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-drop-pkts-ctrl")
    {
        in_rx_drop_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-error-pkts-unctrl")
    {
        in_rx_error_pkts_unctrl.yfilter = yfilter;
    }
    if(value_path == "in-rx-error-pkts-ctrl")
    {
        in_rx_error_pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "in-drop-pkts-class")
    {
        in_drop_pkts_class.yfilter = yfilter;
    }
    if(value_path == "in-drop-pkts-data")
    {
        in_drop_pkts_data.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transform-error-pkts" || name == "in-pkt-ctrl" || name == "in-pkt-no-tag" || name == "in-pkts-untagged" || name == "in-pkt-bad-tag" || name == "in-pkt-no-sci" || name == "in-pkts-unknown-sci" || name == "in-pkts-tagged-ctrl" || name == "in-octets-unctrl" || name == "in-octets-ctrl" || name == "in-ucast-pkts-unctrl" || name == "in-ucast-pkts-ctrl" || name == "in-mcast-pkts-unctrl" || name == "in-mcast-pkts-ctrl" || name == "in-bcast-pkts-unctrl" || name == "in-bcast-pkts-ctrl" || name == "in-rx-drop-pkts-unctrl" || name == "in-rx-drop-pkts-ctrl" || name == "in-rx-error-pkts-unctrl" || name == "in-rx-error-pkts-ctrl" || name == "in-drop-pkts-class" || name == "in-drop-pkts-data")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::TxPortStats()
    :
    multi_flow_match{YType::uint64, "multi-flow-match"},
    parser_dropped{YType::uint64, "parser-dropped"},
    flow_miss{YType::uint64, "flow-miss"},
    pkts_ctrl{YType::uint64, "pkts-ctrl"},
    pkts_data{YType::uint64, "pkts-data"},
    pkts_dropped{YType::uint64, "pkts-dropped"},
    pkts_err_in{YType::uint64, "pkts-err-in"}
{

    yang_name = "tx-port-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::~TxPortStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::has_data() const
{
    if (is_presence_container) return true;
    return multi_flow_match.is_set
	|| parser_dropped.is_set
	|| flow_miss.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_flow_match.yfilter)
	|| ydk::is_set(parser_dropped.yfilter)
	|| ydk::is_set(flow_miss.yfilter)
	|| ydk::is_set(pkts_ctrl.yfilter)
	|| ydk::is_set(pkts_data.yfilter)
	|| ydk::is_set(pkts_dropped.yfilter)
	|| ydk::is_set(pkts_err_in.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-port-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_flow_match.is_set || is_set(multi_flow_match.yfilter)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.yfilter)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.yfilter)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.yfilter)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.yfilter)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.yfilter)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.yfilter)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
        multi_flow_match.value_namespace = name_space;
        multi_flow_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
        parser_dropped.value_namespace = name_space;
        parser_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
        flow_miss.value_namespace = name_space;
        flow_miss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
        pkts_ctrl.value_namespace = name_space;
        pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
        pkts_data.value_namespace = name_space;
        pkts_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
        pkts_dropped.value_namespace = name_space;
        pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
        pkts_err_in.value_namespace = name_space;
        pkts_err_in.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match.yfilter = yfilter;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped.yfilter = yfilter;
    }
    if(value_path == "flow-miss")
    {
        flow_miss.yfilter = yfilter;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "pkts-data")
    {
        pkts_data.yfilter = yfilter;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-flow-match" || name == "parser-dropped" || name == "flow-miss" || name == "pkts-ctrl" || name == "pkts-data" || name == "pkts-dropped" || name == "pkts-err-in")
        return true;
    return false;
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::RxPortStats()
    :
    multi_flow_match{YType::uint64, "multi-flow-match"},
    parser_dropped{YType::uint64, "parser-dropped"},
    flow_miss{YType::uint64, "flow-miss"},
    pkts_ctrl{YType::uint64, "pkts-ctrl"},
    pkts_data{YType::uint64, "pkts-data"},
    pkts_dropped{YType::uint64, "pkts-dropped"},
    pkts_err_in{YType::uint64, "pkts-err-in"}
{

    yang_name = "rx-port-stats"; yang_parent_name = "es200-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::~RxPortStats()
{
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::has_data() const
{
    if (is_presence_container) return true;
    return multi_flow_match.is_set
	|| parser_dropped.is_set
	|| flow_miss.is_set
	|| pkts_ctrl.is_set
	|| pkts_data.is_set
	|| pkts_dropped.is_set
	|| pkts_err_in.is_set;
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_flow_match.yfilter)
	|| ydk::is_set(parser_dropped.yfilter)
	|| ydk::is_set(flow_miss.yfilter)
	|| ydk::is_set(pkts_ctrl.yfilter)
	|| ydk::is_set(pkts_data.yfilter)
	|| ydk::is_set(pkts_dropped.yfilter)
	|| ydk::is_set(pkts_err_in.yfilter);
}

std::string MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-port-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_flow_match.is_set || is_set(multi_flow_match.yfilter)) leaf_name_data.push_back(multi_flow_match.get_name_leafdata());
    if (parser_dropped.is_set || is_set(parser_dropped.yfilter)) leaf_name_data.push_back(parser_dropped.get_name_leafdata());
    if (flow_miss.is_set || is_set(flow_miss.yfilter)) leaf_name_data.push_back(flow_miss.get_name_leafdata());
    if (pkts_ctrl.is_set || is_set(pkts_ctrl.yfilter)) leaf_name_data.push_back(pkts_ctrl.get_name_leafdata());
    if (pkts_data.is_set || is_set(pkts_data.yfilter)) leaf_name_data.push_back(pkts_data.get_name_leafdata());
    if (pkts_dropped.is_set || is_set(pkts_dropped.yfilter)) leaf_name_data.push_back(pkts_dropped.get_name_leafdata());
    if (pkts_err_in.is_set || is_set(pkts_err_in.yfilter)) leaf_name_data.push_back(pkts_err_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match = value;
        multi_flow_match.value_namespace = name_space;
        multi_flow_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped = value;
        parser_dropped.value_namespace = name_space;
        parser_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-miss")
    {
        flow_miss = value;
        flow_miss.value_namespace = name_space;
        flow_miss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl = value;
        pkts_ctrl.value_namespace = name_space;
        pkts_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-data")
    {
        pkts_data = value;
        pkts_data.value_namespace = name_space;
        pkts_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped = value;
        pkts_dropped.value_namespace = name_space;
        pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in = value;
        pkts_err_in.value_namespace = name_space;
        pkts_err_in.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-flow-match")
    {
        multi_flow_match.yfilter = yfilter;
    }
    if(value_path == "parser-dropped")
    {
        parser_dropped.yfilter = yfilter;
    }
    if(value_path == "flow-miss")
    {
        flow_miss.yfilter = yfilter;
    }
    if(value_path == "pkts-ctrl")
    {
        pkts_ctrl.yfilter = yfilter;
    }
    if(value_path == "pkts-data")
    {
        pkts_data.yfilter = yfilter;
    }
    if(value_path == "pkts-dropped")
    {
        pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "pkts-err-in")
    {
        pkts_err_in.yfilter = yfilter;
    }
}

bool MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-flow-match" || name == "parser-dropped" || name == "flow-miss" || name == "pkts-ctrl" || name == "pkts-data" || name == "pkts-dropped" || name == "pkts-err-in")
        return true;
    return false;
}

const Enum::YLeaf MacsecPhyVendor::msfpga {0, "msfpga"};
const Enum::YLeaf MacsecPhyVendor::xlmsfpga {1, "xlmsfpga"};
const Enum::YLeaf MacsecPhyVendor::apm_es200 {2, "apm-es200"};
const Enum::YLeaf MacsecPhyVendor::apm_x120 {3, "apm-x120"};
const Enum::YLeaf MacsecPhyVendor::mv88ec808 {4, "mv88ec808"};
const Enum::YLeaf MacsecPhyVendor::max_card_type {5, "max-card-type"};
const Enum::YLeaf MacsecPhyVendor::unknown {6, "unknown"};
const Enum::YLeaf MacsecPhyVendor::invalid {7, "invalid"};


}
}

