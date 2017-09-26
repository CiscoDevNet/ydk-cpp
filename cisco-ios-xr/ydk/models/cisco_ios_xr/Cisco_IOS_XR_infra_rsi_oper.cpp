
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rsi_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rsi_oper {

SelectiveVrfDownload::SelectiveVrfDownload()
    :
    state(std::make_shared<SelectiveVrfDownload::State>())
{
    state->parent = this;

    yang_name = "selective-vrf-download"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false;
}

SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool SelectiveVrfDownload::has_data() const
{
    return (state !=  nullptr && state->has_data());
}

bool SelectiveVrfDownload::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SelectiveVrfDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<SelectiveVrfDownload::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void SelectiveVrfDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SelectiveVrfDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SelectiveVrfDownload::clone_ptr() const
{
    return std::make_shared<SelectiveVrfDownload>();
}

std::string SelectiveVrfDownload::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SelectiveVrfDownload::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SelectiveVrfDownload::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SelectiveVrfDownload::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SelectiveVrfDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

SelectiveVrfDownload::State::State()
    :
    is_svd_enabled{YType::boolean, "is-svd-enabled"},
    is_svd_enabled_cfg{YType::boolean, "is-svd-enabled-cfg"}
{

    yang_name = "state"; yang_parent_name = "selective-vrf-download"; is_top_level_class = false; has_list_ancestor = false;
}

SelectiveVrfDownload::State::~State()
{
}

bool SelectiveVrfDownload::State::has_data() const
{
    return is_svd_enabled.is_set
	|| is_svd_enabled_cfg.is_set;
}

bool SelectiveVrfDownload::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_svd_enabled.yfilter)
	|| ydk::is_set(is_svd_enabled_cfg.yfilter);
}

std::string SelectiveVrfDownload::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download/" << get_segment_path();
    return path_buffer.str();
}

std::string SelectiveVrfDownload::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SelectiveVrfDownload::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_svd_enabled.is_set || is_set(is_svd_enabled.yfilter)) leaf_name_data.push_back(is_svd_enabled.get_name_leafdata());
    if (is_svd_enabled_cfg.is_set || is_set(is_svd_enabled_cfg.yfilter)) leaf_name_data.push_back(is_svd_enabled_cfg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SelectiveVrfDownload::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SelectiveVrfDownload::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SelectiveVrfDownload::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-svd-enabled")
    {
        is_svd_enabled = value;
        is_svd_enabled.value_namespace = name_space;
        is_svd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-svd-enabled-cfg")
    {
        is_svd_enabled_cfg = value;
        is_svd_enabled_cfg.value_namespace = name_space;
        is_svd_enabled_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void SelectiveVrfDownload::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-svd-enabled")
    {
        is_svd_enabled.yfilter = yfilter;
    }
    if(value_path == "is-svd-enabled-cfg")
    {
        is_svd_enabled_cfg.yfilter = yfilter;
    }
}

bool SelectiveVrfDownload::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-svd-enabled" || name == "is-svd-enabled-cfg")
        return true;
    return false;
}

Srlg::Srlg()
    :
    interface_srlg_names(std::make_shared<Srlg::InterfaceSrlgNames>())
	,nodes(std::make_shared<Srlg::Nodes>())
	,srlg_maps(std::make_shared<Srlg::SrlgMaps>())
{
    interface_srlg_names->parent = this;
    nodes->parent = this;
    srlg_maps->parent = this;

    yang_name = "srlg"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Srlg::~Srlg()
{
}

bool Srlg::has_data() const
{
    return (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (srlg_maps !=  nullptr && srlg_maps->has_data());
}

bool Srlg::has_operation() const
{
    return is_set(yfilter)
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation());
}

std::string Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names == nullptr)
        {
            interface_srlg_names = std::make_shared<Srlg::InterfaceSrlgNames>();
        }
        return interface_srlg_names;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Srlg::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps == nullptr)
        {
            srlg_maps = std::make_shared<Srlg::SrlgMaps>();
        }
        return srlg_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_srlg_names != nullptr)
    {
        children["interface-srlg-names"] = interface_srlg_names;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(srlg_maps != nullptr)
    {
        children["srlg-maps"] = srlg_maps;
    }

    return children;
}

void Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Srlg::clone_ptr() const
{
    return std::make_shared<Srlg>();
}

std::string Srlg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srlg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srlg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srlg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-names" || name == "nodes" || name == "srlg-maps")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgNames()
{

    yang_name = "interface-srlg-names"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InterfaceSrlgNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_srlg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::InterfaceSrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InterfaceSrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InterfaceSrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-name")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
    	,
    interfaces(std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/interface-srlg-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Srlg::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Nodes::~Nodes()
{
}

bool Srlg::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Srlg::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Srlg::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    groups(std::make_shared<Srlg::Nodes::Node::Groups>())
	,inherit_nodes(std::make_shared<Srlg::Nodes::Node::InheritNodes>())
	,interface_details(std::make_shared<Srlg::Nodes::Node::InterfaceDetails>())
	,interface_srlg_names(std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames>())
	,interfaces(std::make_shared<Srlg::Nodes::Node::Interfaces>())
	,srlg_maps(std::make_shared<Srlg::Nodes::Node::SrlgMaps>())
	,srlg_values(std::make_shared<Srlg::Nodes::Node::SrlgValues>())
{
    groups->parent = this;
    inherit_nodes->parent = this;
    interface_details->parent = this;
    interface_srlg_names->parent = this;
    interfaces->parent = this;
    srlg_maps->parent = this;
    srlg_values->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::Nodes::Node::~Node()
{
}

bool Srlg::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (interface_details !=  nullptr && interface_details->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (srlg_maps !=  nullptr && srlg_maps->has_data())
	|| (srlg_values !=  nullptr && srlg_values->has_data());
}

bool Srlg::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_operation())
	|| (interface_details !=  nullptr && interface_details->has_operation())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation())
	|| (srlg_values !=  nullptr && srlg_values->has_operation());
}

std::string Srlg::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Srlg::Nodes::Node::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes == nullptr)
        {
            inherit_nodes = std::make_shared<Srlg::Nodes::Node::InheritNodes>();
        }
        return inherit_nodes;
    }

    if(child_yang_name == "interface-details")
    {
        if(interface_details == nullptr)
        {
            interface_details = std::make_shared<Srlg::Nodes::Node::InterfaceDetails>();
        }
        return interface_details;
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names == nullptr)
        {
            interface_srlg_names = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames>();
        }
        return interface_srlg_names;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps == nullptr)
        {
            srlg_maps = std::make_shared<Srlg::Nodes::Node::SrlgMaps>();
        }
        return srlg_maps;
    }

    if(child_yang_name == "srlg-values")
    {
        if(srlg_values == nullptr)
        {
            srlg_values = std::make_shared<Srlg::Nodes::Node::SrlgValues>();
        }
        return srlg_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(inherit_nodes != nullptr)
    {
        children["inherit-nodes"] = inherit_nodes;
    }

    if(interface_details != nullptr)
    {
        children["interface-details"] = interface_details;
    }

    if(interface_srlg_names != nullptr)
    {
        children["interface-srlg-names"] = interface_srlg_names;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(srlg_maps != nullptr)
    {
        children["srlg-maps"] = srlg_maps;
    }

    if(srlg_values != nullptr)
    {
        children["srlg-values"] = srlg_values;
    }

    return children;
}

void Srlg::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "inherit-nodes" || name == "interface-details" || name == "interface-srlg-names" || name == "interfaces" || name == "srlg-maps" || name == "srlg-values" || name == "node-name")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::Groups::~Groups()
{
}

bool Srlg::Nodes::Node::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    group_values{YType::uint32, "group-values"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::Groups::Group::~Group()
{
}

bool Srlg::Nodes::Node::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| group_name_xr.is_set
	|| group_values.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(group_values.yfilter);
}

std::string Srlg::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (group_values.is_set || is_set(group_values.yfilter)) leaf_name_data.push_back(group_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::Groups::Group::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-values")
    {
        group_values = value;
        group_values.value_namespace = name_space;
        group_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-values")
    {
        group_values.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "group-name" || name == "group-name-xr" || name == "group-values")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::SrlgAttribute()
    :
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::Groups::Group::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::Groups::Group::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "srlg-index" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNodes()
{

    yang_name = "inherit-nodes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InheritNodes::~InheritNodes()
{
}

bool Srlg::Nodes::Node::InheritNodes::has_data() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node")
    {
        for(auto const & c : inherit_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inherit_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InheritNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InheritNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::InheritNode()
    :
    inherit_node_name{YType::str, "inherit-node-name"},
    node_name{YType::str, "node-name"},
    node_values{YType::uint32, "node-values"}
{

    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return inherit_node_name.is_set
	|| node_name.is_set
	|| node_values.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inherit_node_name.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(node_values.yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node" <<"[inherit-node-name='" <<inherit_node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::InheritNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit_node_name.is_set || is_set(inherit_node_name.yfilter)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_values.is_set || is_set(node_values.yfilter)) leaf_name_data.push_back(node_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::InheritNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
        inherit_node_name.value_namespace = name_space;
        inherit_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-values")
    {
        node_values = value;
        node_values.value_namespace = name_space;
        node_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "node-values")
    {
        node_values.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "inherit-node-name" || name == "node-name" || name == "node-values")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::SrlgAttribute()
    :
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "inherit-node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "srlg-index" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetails()
{

    yang_name = "interface-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceDetails::~InterfaceDetails()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::has_data() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.size(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        for(auto const & c : interface_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InterfaceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InterfaceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    groups{YType::uint32, "groups"},
    nodes{YType::uint32, "nodes"}
{

    yang_name = "interface-detail"; yang_parent_name = "interface-details"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_data() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| groups.is_set
	|| nodes.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.size(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(nodes.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        for(auto const & c : srlg_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "interface-name" || name == "groups" || name == "nodes")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::SrlgAttribute()
    :
    priority{YType::enumeration, "priority"},
    source{YType::enumeration, "source"},
    source_name{YType::str, "source-name"},
    srlg_index{YType::uint16, "srlg-index"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "interface-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_data() const
{
    return priority.is_set
	|| source.is_set
	|| source_name.is_set
	|| srlg_index.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(source_name.yfilter)
	|| ydk::is_set(srlg_index.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.yfilter)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-name")
    {
        source_name = value;
        source_name.value_namespace = name_space;
        source_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "source-name")
    {
        source_name.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "source" || name == "source-name" || name == "srlg-index" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgNames()
{

    yang_name = "interface-srlg-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_srlg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InterfaceSrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-name")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
    	,
    interfaces(std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Srlg::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Srlg::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    registrations{YType::uint32, "registrations"},
    srlg_value{YType::uint32, "srlg-value"},
    value_count{YType::uint32, "value-count"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_data() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| registrations.is_set
	|| value_count.is_set;
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(registrations.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(value_count.yfilter);
}

std::string Srlg::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (registrations.is_set || is_set(registrations.yfilter)) leaf_name_data.push_back(registrations.get_name_leafdata());
    if (value_count.is_set || is_set(value_count.yfilter)) leaf_name_data.push_back(value_count.get_name_leafdata());

    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registrations")
    {
        registrations = value;
        registrations.value_namespace = name_space;
        registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
    if(value_path == "value-count")
    {
        value_count = value;
        value_count.value_namespace = name_space;
        value_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "registrations")
    {
        registrations.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "value-count")
    {
        value_count.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "registrations" || name == "srlg-value" || name == "value-count")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgMaps::SrlgMaps()
{

    yang_name = "srlg-maps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::Nodes::Node::SrlgMaps::has_data() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-map")
    {
        for(auto const & c : srlg_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::SrlgMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::SrlgMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::SrlgMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-map")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::SrlgMap()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-map"; yang_parent_name = "srlg-maps"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set;
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::SrlgMaps::SrlgMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::SrlgMaps::SrlgMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgValues::SrlgValues()
{

    yang_name = "srlg-values"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::SrlgValues::~SrlgValues()
{
}

bool Srlg::Nodes::Node::SrlgValues::has_data() const
{
    for (std::size_t index=0; index<srlg_value.size(); index++)
    {
        if(srlg_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgValues::has_operation() const
{
    for (std::size_t index=0; index<srlg_value.size(); index++)
    {
        if(srlg_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::SrlgValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-value")
    {
        for(auto const & c : srlg_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::Nodes::Node::SrlgValues::SrlgValue>();
        c->parent = this;
        srlg_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::Nodes::Node::SrlgValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::SrlgValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::SrlgValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::SrlgValue()
    :
    value_{YType::int32, "value"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "srlg-value"; yang_parent_name = "srlg-values"; is_top_level_class = false; has_list_ancestor = true;
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::~SrlgValue()
{
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set;
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::Nodes::Node::SrlgValues::SrlgValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-value" <<"[value='" <<value_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgValues::SrlgValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgValues::SrlgValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgValues::SrlgValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::Nodes::Node::SrlgValues::SrlgValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::Nodes::Node::SrlgValues::SrlgValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "interface-name")
        return true;
    return false;
}

Srlg::SrlgMaps::SrlgMaps()
{

    yang_name = "srlg-maps"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::SrlgMaps::has_data() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.size(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::SrlgMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-map")
    {
        for(auto const & c : srlg_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Srlg::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Srlg::SrlgMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::SrlgMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::SrlgMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-map")
        return true;
    return false;
}

Srlg::SrlgMaps::SrlgMap::SrlgMap()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "srlg-map"; yang_parent_name = "srlg-maps"; is_top_level_class = false; has_list_ancestor = false;
}

Srlg::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::SrlgMaps::SrlgMap::has_data() const
{
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set;
}

bool Srlg::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::SrlgMaps::SrlgMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/srlg-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgMaps::SrlgMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgMaps::SrlgMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Srlg::SrlgMaps::SrlgMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::SrlgMaps::SrlgMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::SrlgMaps::SrlgMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

VrfGroup::VrfGroup()
    :
    nodes(std::make_shared<VrfGroup::Nodes>())
{
    nodes->parent = this;

    yang_name = "vrf-group"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false;
}

VrfGroup::~VrfGroup()
{
}

bool VrfGroup::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool VrfGroup::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string VrfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<VrfGroup::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void VrfGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VrfGroup::clone_ptr() const
{
    return std::make_shared<VrfGroup>();
}

std::string VrfGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VrfGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VrfGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VrfGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VrfGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

VrfGroup::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "vrf-group"; is_top_level_class = false; has_list_ancestor = false;
}

VrfGroup::Nodes::~Nodes()
{
}

bool VrfGroup::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroup::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfGroup::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<VrfGroup::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfGroup::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VrfGroup::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    groups(std::make_shared<VrfGroup::Nodes::Node::Groups>())
{
    groups->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

VrfGroup::Nodes::Node::~Node()
{
}

bool VrfGroup::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool VrfGroup::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string VrfGroup::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfGroup::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<VrfGroup::Nodes::Node::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void VrfGroup::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "node-name")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

VrfGroup::Nodes::Node::Groups::~Groups()
{
}

bool VrfGroup::Nodes::Node::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfGroup::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::Nodes::Node::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VrfGroup::Nodes::Node::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    forward_reference{YType::boolean, "forward-reference"},
    vr_fs{YType::uint32, "vr-fs"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

VrfGroup::Nodes::Node::Groups::Group::~Group()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| forward_reference.is_set
	|| vr_fs.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(forward_reference.yfilter)
	|| ydk::is_set(vr_fs.yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (forward_reference.is_set || is_set(forward_reference.yfilter)) leaf_name_data.push_back(forward_reference.get_name_leafdata());
    if (vr_fs.is_set || is_set(vr_fs.yfilter)) leaf_name_data.push_back(vr_fs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfGroup::Nodes::Node::Groups::Group::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-reference")
    {
        forward_reference = value;
        forward_reference.value_namespace = name_space;
        forward_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-fs")
    {
        vr_fs = value;
        vr_fs.value_namespace = name_space;
        vr_fs.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "forward-reference")
    {
        forward_reference.yfilter = yfilter;
    }
    if(value_path == "vr-fs")
    {
        vr_fs.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "group-name" || name == "forward-reference" || name == "vr-fs")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Group::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

VrfGroup::Nodes::Node::Groups::Group::Vrf::~Vrf()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_data() const
{
    return vrf_name.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::Group::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::Group::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::Group::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::Group::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::Groups::Group::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

const Enum::YLeaf Priority::critical {0, "critical"};
const Enum::YLeaf Priority::high {1, "high"};
const Enum::YLeaf Priority::medium {2, "medium"};
const Enum::YLeaf Priority::low {3, "low"};
const Enum::YLeaf Priority::very_low {4, "very-low"};

const Enum::YLeaf Source::configured {1, "configured"};
const Enum::YLeaf Source::from_group {2, "from-group"};
const Enum::YLeaf Source::inherited {4, "inherited"};
const Enum::YLeaf Source::from_optical {8, "from-optical"};
const Enum::YLeaf Source::configured_and_notified {17, "configured-and-notified"};
const Enum::YLeaf Source::from_group_and_notified {18, "from-group-and-notified"};
const Enum::YLeaf Source::inherited_and_notified {20, "inherited-and-notified"};
const Enum::YLeaf Source::from_optical_and_notified {24, "from-optical-and-notified"};


}
}

