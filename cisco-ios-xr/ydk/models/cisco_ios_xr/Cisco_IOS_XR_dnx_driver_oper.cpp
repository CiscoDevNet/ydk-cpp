
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dnx_driver_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_driver_oper {

Fia::Fia()
    :
    nodes(std::make_shared<Fia::Nodes>())
{
    nodes->parent = this;

    yang_name = "fia"; yang_parent_name = "Cisco-IOS-XR-dnx-driver-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Fia::~Fia()
{
}

bool Fia::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Fia::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Fia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Fia::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Fia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Fia::clone_ptr() const
{
    return std::make_shared<Fia>();
}

std::string Fia::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fia::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fia::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fia::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Fia::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "fia"; is_top_level_class = false; has_list_ancestor = false;
}

Fia::Nodes::~Nodes()
{
}

bool Fia::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia/" << get_segment_path();
    return path_buffer.str();
}

std::string Fia::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Fia::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Fia::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    rx_link_information(std::make_shared<Fia::Nodes::Node::RxLinkInformation>())
	,driver_information(std::make_shared<Fia::Nodes::Node::DriverInformation>())
	,clear_statistics(std::make_shared<Fia::Nodes::Node::ClearStatistics>())
	,tx_link_information(std::make_shared<Fia::Nodes::Node::TxLinkInformation>())
	,diag_shell(std::make_shared<Fia::Nodes::Node::DiagShell>())
	,oir_history(std::make_shared<Fia::Nodes::Node::OirHistory>())
	,asic_statistics(std::make_shared<Fia::Nodes::Node::AsicStatistics>())
{
    rx_link_information->parent = this;
    driver_information->parent = this;
    clear_statistics->parent = this;
    tx_link_information->parent = this;
    diag_shell->parent = this;
    oir_history->parent = this;
    asic_statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Fia::Nodes::Node::~Node()
{
}

bool Fia::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (rx_link_information !=  nullptr && rx_link_information->has_data())
	|| (driver_information !=  nullptr && driver_information->has_data())
	|| (clear_statistics !=  nullptr && clear_statistics->has_data())
	|| (tx_link_information !=  nullptr && tx_link_information->has_data())
	|| (diag_shell !=  nullptr && diag_shell->has_data())
	|| (oir_history !=  nullptr && oir_history->has_data())
	|| (asic_statistics !=  nullptr && asic_statistics->has_data());
}

bool Fia::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (rx_link_information !=  nullptr && rx_link_information->has_operation())
	|| (driver_information !=  nullptr && driver_information->has_operation())
	|| (clear_statistics !=  nullptr && clear_statistics->has_operation())
	|| (tx_link_information !=  nullptr && tx_link_information->has_operation())
	|| (diag_shell !=  nullptr && diag_shell->has_operation())
	|| (oir_history !=  nullptr && oir_history->has_operation())
	|| (asic_statistics !=  nullptr && asic_statistics->has_operation());
}

std::string Fia::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-driver-oper:fia/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Fia::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-link-information")
    {
        if(rx_link_information == nullptr)
        {
            rx_link_information = std::make_shared<Fia::Nodes::Node::RxLinkInformation>();
        }
        return rx_link_information;
    }

    if(child_yang_name == "driver-information")
    {
        if(driver_information == nullptr)
        {
            driver_information = std::make_shared<Fia::Nodes::Node::DriverInformation>();
        }
        return driver_information;
    }

    if(child_yang_name == "clear-statistics")
    {
        if(clear_statistics == nullptr)
        {
            clear_statistics = std::make_shared<Fia::Nodes::Node::ClearStatistics>();
        }
        return clear_statistics;
    }

    if(child_yang_name == "tx-link-information")
    {
        if(tx_link_information == nullptr)
        {
            tx_link_information = std::make_shared<Fia::Nodes::Node::TxLinkInformation>();
        }
        return tx_link_information;
    }

    if(child_yang_name == "diag-shell")
    {
        if(diag_shell == nullptr)
        {
            diag_shell = std::make_shared<Fia::Nodes::Node::DiagShell>();
        }
        return diag_shell;
    }

    if(child_yang_name == "oir-history")
    {
        if(oir_history == nullptr)
        {
            oir_history = std::make_shared<Fia::Nodes::Node::OirHistory>();
        }
        return oir_history;
    }

    if(child_yang_name == "asic-statistics")
    {
        if(asic_statistics == nullptr)
        {
            asic_statistics = std::make_shared<Fia::Nodes::Node::AsicStatistics>();
        }
        return asic_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rx_link_information != nullptr)
    {
        children["rx-link-information"] = rx_link_information;
    }

    if(driver_information != nullptr)
    {
        children["driver-information"] = driver_information;
    }

    if(clear_statistics != nullptr)
    {
        children["clear-statistics"] = clear_statistics;
    }

    if(tx_link_information != nullptr)
    {
        children["tx-link-information"] = tx_link_information;
    }

    if(diag_shell != nullptr)
    {
        children["diag-shell"] = diag_shell;
    }

    if(oir_history != nullptr)
    {
        children["oir-history"] = oir_history;
    }

    if(asic_statistics != nullptr)
    {
        children["asic-statistics"] = asic_statistics;
    }

    return children;
}

void Fia::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-link-information" || name == "driver-information" || name == "clear-statistics" || name == "tx-link-information" || name == "diag-shell" || name == "oir-history" || name == "asic-statistics" || name == "node-name")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::RxLinkInformation()
    :
    link_options(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions>())
{
    link_options->parent = this;

    yang_name = "rx-link-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::~RxLinkInformation()
{
}

bool Fia::Nodes::Node::RxLinkInformation::has_data() const
{
    return (link_options !=  nullptr && link_options->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (link_options !=  nullptr && link_options->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-options")
    {
        if(link_options == nullptr)
        {
            link_options = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions>();
        }
        return link_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_options != nullptr)
    {
        children["link-options"] = link_options;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::RxLinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::RxLinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-options")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOptions()
{

    yang_name = "link-options"; yang_parent_name = "rx-link-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::~LinkOptions()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::has_data() const
{
    for (std::size_t index=0; index<link_option.size(); index++)
    {
        if(link_option[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::has_operation() const
{
    for (std::size_t index=0; index<link_option.size(); index++)
    {
        if(link_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-option")
    {
        auto c = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption>();
        c->parent = this;
        link_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-option")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::LinkOption()
    :
    option{YType::str, "option"}
    	,
    rx_asic_instances(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances>())
{
    rx_asic_instances->parent = this;

    yang_name = "link-option"; yang_parent_name = "link-options"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::~LinkOption()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::has_data() const
{
    return option.is_set
	|| (rx_asic_instances !=  nullptr && rx_asic_instances->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| (rx_asic_instances !=  nullptr && rx_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-option" <<"[option='" <<option <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-asic-instances")
    {
        if(rx_asic_instances == nullptr)
        {
            rx_asic_instances = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances>();
        }
        return rx_asic_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rx_asic_instances != nullptr)
    {
        children["rx-asic-instances"] = rx_asic_instances;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-asic-instances" || name == "option")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstances()
{

    yang_name = "rx-asic-instances"; yang_parent_name = "link-option"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::~RxAsicInstances()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::has_data() const
{
    for (std::size_t index=0; index<rx_asic_instance.size(); index++)
    {
        if(rx_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<rx_asic_instance.size(); index++)
    {
        if(rx_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-asic-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-asic-instance")
    {
        auto c = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance>();
        c->parent = this;
        rx_asic_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rx_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxAsicInstance()
    :
    instance{YType::uint32, "instance"}
    	,
    rx_links(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks>())
{
    rx_links->parent = this;

    yang_name = "rx-asic-instance"; yang_parent_name = "rx-asic-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::~RxAsicInstance()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::has_data() const
{
    return instance.is_set
	|| (rx_links !=  nullptr && rx_links->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (rx_links !=  nullptr && rx_links->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-asic-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-links")
    {
        if(rx_links == nullptr)
        {
            rx_links = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks>();
        }
        return rx_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rx_links != nullptr)
    {
        children["rx-links"] = rx_links;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-links" || name == "instance")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLinks()
{

    yang_name = "rx-links"; yang_parent_name = "rx-asic-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::~RxLinks()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::has_data() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::has_operation() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-link")
    {
        auto c = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink>();
        c->parent = this;
        rx_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-link")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink()
    :
    start_number{YType::uint32, "start-number"},
    end_number{YType::uint32, "end-number"},
    status_option{YType::str, "status-option"}
{

    yang_name = "rx-link"; yang_parent_name = "rx-links"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::~RxLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::has_data() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_data())
            return true;
    }
    return start_number.is_set
	|| end_number.is_set
	|| status_option.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::has_operation() const
{
    for (std::size_t index=0; index<rx_link.size(); index++)
    {
        if(rx_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_number.yfilter)
	|| ydk::is_set(end_number.yfilter)
	|| ydk::is_set(status_option.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_number.is_set || is_set(start_number.yfilter)) leaf_name_data.push_back(start_number.get_name_leafdata());
    if (end_number.is_set || is_set(end_number.yfilter)) leaf_name_data.push_back(end_number.get_name_leafdata());
    if (status_option.is_set || is_set(status_option.yfilter)) leaf_name_data.push_back(status_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-link")
    {
        auto c = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_>();
        c->parent = this;
        rx_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-number")
    {
        start_number = value;
        start_number.value_namespace = name_space;
        start_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-number")
    {
        end_number = value;
        end_number.value_namespace = name_space;
        end_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-option")
    {
        status_option = value;
        status_option.value_namespace = name_space;
        status_option.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-number")
    {
        start_number.yfilter = yfilter;
    }
    if(value_path == "end-number")
    {
        end_number.yfilter = yfilter;
    }
    if(value_path == "status-option")
    {
        status_option.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-link" || name == "start-number" || name == "end-number" || name == "status-option")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::RxLink_()
    :
    link{YType::int32, "link"},
    speed{YType::uint32, "speed"},
    stage{YType::enumeration, "stage"},
    is_link_valid{YType::boolean, "is-link-valid"},
    is_conf_pending{YType::boolean, "is-conf-pending"},
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    error_state{YType::enumeration, "error-state"},
    flags{YType::str, "flags"},
    flap_cnt{YType::uint32, "flap-cnt"},
    num_admin_shuts{YType::uint32, "num-admin-shuts"},
    correctable_errors{YType::uint64, "correctable-errors"},
    uncorrectable_errors{YType::uint64, "uncorrectable-errors"}
    	,
    this_link(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink>())
	,far_end_link(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink>())
	,far_end_link_in_hw(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw>())
	,history(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History>())
{
    this_link->parent = this;
    far_end_link->parent = this;
    far_end_link_in_hw->parent = this;
    history->parent = this;

    yang_name = "rx-link"; yang_parent_name = "rx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::~RxLink_()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::has_data() const
{
    return link.is_set
	|| speed.is_set
	|| stage.is_set
	|| is_link_valid.is_set
	|| is_conf_pending.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| flags.is_set
	|| flap_cnt.is_set
	|| num_admin_shuts.is_set
	|| correctable_errors.is_set
	|| uncorrectable_errors.is_set
	|| (this_link !=  nullptr && this_link->has_data())
	|| (far_end_link !=  nullptr && far_end_link->has_data())
	|| (far_end_link_in_hw !=  nullptr && far_end_link_in_hw->has_data())
	|| (history !=  nullptr && history->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(is_link_valid.yfilter)
	|| ydk::is_set(is_conf_pending.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flap_cnt.yfilter)
	|| ydk::is_set(num_admin_shuts.yfilter)
	|| ydk::is_set(correctable_errors.yfilter)
	|| ydk::is_set(uncorrectable_errors.yfilter)
	|| (this_link !=  nullptr && this_link->has_operation())
	|| (far_end_link !=  nullptr && far_end_link->has_operation())
	|| (far_end_link_in_hw !=  nullptr && far_end_link_in_hw->has_operation())
	|| (history !=  nullptr && history->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-link" <<"[link='" <<link <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (is_link_valid.is_set || is_set(is_link_valid.yfilter)) leaf_name_data.push_back(is_link_valid.get_name_leafdata());
    if (is_conf_pending.is_set || is_set(is_conf_pending.yfilter)) leaf_name_data.push_back(is_conf_pending.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flap_cnt.is_set || is_set(flap_cnt.yfilter)) leaf_name_data.push_back(flap_cnt.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.yfilter)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());
    if (correctable_errors.is_set || is_set(correctable_errors.yfilter)) leaf_name_data.push_back(correctable_errors.get_name_leafdata());
    if (uncorrectable_errors.is_set || is_set(uncorrectable_errors.yfilter)) leaf_name_data.push_back(uncorrectable_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "this-link")
    {
        if(this_link == nullptr)
        {
            this_link = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink>();
        }
        return this_link;
    }

    if(child_yang_name == "far-end-link")
    {
        if(far_end_link == nullptr)
        {
            far_end_link = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink>();
        }
        return far_end_link;
    }

    if(child_yang_name == "far-end-link-in-hw")
    {
        if(far_end_link_in_hw == nullptr)
        {
            far_end_link_in_hw = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw>();
        }
        return far_end_link_in_hw;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(this_link != nullptr)
    {
        children["this-link"] = this_link;
    }

    if(far_end_link != nullptr)
    {
        children["far-end-link"] = far_end_link;
    }

    if(far_end_link_in_hw != nullptr)
    {
        children["far-end-link-in-hw"] = far_end_link_in_hw;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid = value;
        is_link_valid.value_namespace = name_space;
        is_link_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending = value;
        is_conf_pending.value_namespace = name_space;
        is_conf_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flap-cnt")
    {
        flap_cnt = value;
        flap_cnt.value_namespace = name_space;
        flap_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts = value;
        num_admin_shuts.value_namespace = name_space;
        num_admin_shuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correctable-errors")
    {
        correctable_errors = value;
        correctable_errors.value_namespace = name_space;
        correctable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrectable-errors")
    {
        uncorrectable_errors = value;
        uncorrectable_errors.value_namespace = name_space;
        uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid.yfilter = yfilter;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error-state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flap-cnt")
    {
        flap_cnt.yfilter = yfilter;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts.yfilter = yfilter;
    }
    if(value_path == "correctable-errors")
    {
        correctable_errors.yfilter = yfilter;
    }
    if(value_path == "uncorrectable-errors")
    {
        uncorrectable_errors.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "this-link" || name == "far-end-link" || name == "far-end-link-in-hw" || name == "history" || name == "link" || name == "speed" || name == "stage" || name == "is-link-valid" || name == "is-conf-pending" || name == "admin-state" || name == "oper-state" || name == "error-state" || name == "flags" || name == "flap-cnt" || name == "num-admin-shuts" || name == "correctable-errors" || name == "uncorrectable-errors")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::ThisLink()
    :
    link_type{YType::enumeration, "link-type"},
    link_stage{YType::enumeration, "link-stage"},
    link_num{YType::uint32, "link-num"},
    phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId>())
{
    asic_id->parent = this;

    yang_name = "this-link"; yang_parent_name = "rx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::~ThisLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::has_data() const
{
    return link_type.is_set
	|| link_stage.is_set
	|| link_num.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_stage.yfilter)
	|| ydk::is_set(link_num.yfilter)
	|| ydk::is_set(phy_link_num.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "this-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.yfilter)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_num.is_set || is_set(link_num.yfilter)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.yfilter)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
        link_stage.value_namespace = name_space;
        link_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-num")
    {
        link_num = value;
        link_num.value_namespace = name_space;
        link_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
        phy_link_num.value_namespace = name_space;
        phy_link_num.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-stage")
    {
        link_stage.yfilter = yfilter;
    }
    if(value_path == "link-num")
    {
        link_num.yfilter = yfilter;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "link-type" || name == "link-stage" || name == "link-num" || name == "phy-link-num")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "this-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::FarEndLink()
    :
    link_type{YType::enumeration, "link-type"},
    link_stage{YType::enumeration, "link-stage"},
    link_num{YType::uint32, "link-num"},
    phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId>())
{
    asic_id->parent = this;

    yang_name = "far-end-link"; yang_parent_name = "rx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::~FarEndLink()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::has_data() const
{
    return link_type.is_set
	|| link_stage.is_set
	|| link_num.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_stage.yfilter)
	|| ydk::is_set(link_num.yfilter)
	|| ydk::is_set(phy_link_num.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.yfilter)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_num.is_set || is_set(link_num.yfilter)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.yfilter)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
        link_stage.value_namespace = name_space;
        link_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-num")
    {
        link_num = value;
        link_num.value_namespace = name_space;
        link_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
        phy_link_num.value_namespace = name_space;
        phy_link_num.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-stage")
    {
        link_stage.yfilter = yfilter;
    }
    if(value_path == "link-num")
    {
        link_num.yfilter = yfilter;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "link-type" || name == "link-stage" || name == "link-num" || name == "phy-link-num")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "far-end-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::FarEndLinkInHw()
    :
    link_type{YType::enumeration, "link-type"},
    link_stage{YType::enumeration, "link-stage"},
    link_num{YType::uint32, "link-num"},
    phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId>())
{
    asic_id->parent = this;

    yang_name = "far-end-link-in-hw"; yang_parent_name = "rx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::~FarEndLinkInHw()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::has_data() const
{
    return link_type.is_set
	|| link_stage.is_set
	|| link_num.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_stage.yfilter)
	|| ydk::is_set(link_num.yfilter)
	|| ydk::is_set(phy_link_num.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link-in-hw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.yfilter)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_num.is_set || is_set(link_num.yfilter)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.yfilter)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
        link_stage.value_namespace = name_space;
        link_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-num")
    {
        link_num = value;
        link_num.value_namespace = name_space;
        link_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
        phy_link_num.value_namespace = name_space;
        phy_link_num.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-stage")
    {
        link_stage.yfilter = yfilter;
    }
    if(value_path == "link-num")
    {
        link_num.yfilter = yfilter;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "link-type" || name == "link-stage" || name == "link-num" || name == "phy-link-num")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "far-end-link-in-hw"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::History()
    :
    histnum{YType::uint8, "histnum"},
    start_index{YType::uint8, "start-index"}
{

    yang_name = "history"; yang_parent_name = "rx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::~History()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::has_data() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_data())
            return true;
    }
    return histnum.is_set
	|| start_index.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::has_operation() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(histnum.yfilter)
	|| ydk::is_set(start_index.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histnum.is_set || is_set(histnum.yfilter)) leaf_name_data.push_back(histnum.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.yfilter)) leaf_name_data.push_back(start_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hist")
    {
        auto c = std::make_shared<Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist>();
        c->parent = this;
        hist.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : hist)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histnum")
    {
        histnum = value;
        histnum.value_namespace = name_space;
        histnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-index")
    {
        start_index = value;
        start_index.value_namespace = name_space;
        start_index.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histnum")
    {
        histnum.yfilter = yfilter;
    }
    if(value_path == "start-index")
    {
        start_index.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hist" || name == "histnum" || name == "start-index")
        return true;
    return false;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::Hist()
    :
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    error_state{YType::enumeration, "error-state"},
    timestamp{YType::uint64, "timestamp"},
    reasons{YType::str, "reasons"}
{

    yang_name = "hist"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::~Hist()
{
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::has_data() const
{
    return admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| timestamp.is_set
	|| reasons.is_set;
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reasons.yfilter);
}

std::string Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reasons.is_set || is_set(reasons.yfilter)) leaf_name_data.push_back(reasons.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasons")
    {
        reasons = value;
        reasons.value_namespace = name_space;
        reasons.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error-state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reasons")
    {
        reasons.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-state" || name == "oper-state" || name == "error-state" || name == "timestamp" || name == "reasons")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::DriverInformation()
    :
    drv_version{YType::uint32, "drv-version"},
    coeff_major_rev{YType::uint32, "coeff-major-rev"},
    coeff_minor_rev{YType::uint32, "coeff-minor-rev"},
    functional_role{YType::uint8, "functional-role"},
    issu_role{YType::uint8, "issu-role"},
    node_id{YType::str, "node-id"},
    rack_type{YType::int32, "rack-type"},
    rack_num{YType::uint8, "rack-num"},
    is_driver_ready{YType::boolean, "is-driver-ready"},
    card_avail_mask{YType::uint32, "card-avail-mask"},
    asic_avail_mask{YType::uint64, "asic-avail-mask"},
    exp_asic_avail_mask{YType::uint64, "exp-asic-avail-mask"},
    ucmc_ratio{YType::uint32, "ucmc-ratio"},
    asic_oper_notify_to_fsdb_pending_bmap{YType::uint64, "asic-oper-notify-to-fsdb-pending-bmap"},
    is_full_fgid_download_req{YType::boolean, "is-full-fgid-download-req"},
    is_fgid_download_in_progress{YType::boolean, "is-fgid-download-in-progress"},
    is_fgid_download_completed{YType::boolean, "is-fgid-download-completed"},
    fsdb_conn_active{YType::boolean, "fsdb-conn-active"},
    fgid_conn_active{YType::boolean, "fgid-conn-active"},
    issu_mgr_conn_active{YType::boolean, "issu-mgr-conn-active"},
    fsdb_reg_active{YType::boolean, "fsdb-reg-active"},
    fgid_reg_active{YType::boolean, "fgid-reg-active"},
    issu_mgr_reg_active{YType::boolean, "issu-mgr-reg-active"},
    num_pm_conn_reqs{YType::uint8, "num-pm-conn-reqs"},
    num_fsdb_conn_reqs{YType::uint8, "num-fsdb-conn-reqs"},
    num_fgid_conn_reqs{YType::uint8, "num-fgid-conn-reqs"},
    num_fstats_conn_reqs{YType::uint8, "num-fstats-conn-reqs"},
    num_cm_conn_reqs{YType::uint8, "num-cm-conn-reqs"},
    num_issu_mgr_conn_reqs{YType::uint8, "num-issu-mgr-conn-reqs"},
    num_peer_fia_conn_reqs{YType::uint8, "num-peer-fia-conn-reqs"},
    is_gaspp_registered{YType::boolean, "is-gaspp-registered"},
    is_cih_registered{YType::boolean, "is-cih-registered"},
    drvr_initial_startup_timestamp{YType::str, "drvr-initial-startup-timestamp"},
    drvr_current_startup_timestamp{YType::str, "drvr-current-startup-timestamp"},
    num_intf_ports{YType::uint32, "num-intf-ports"},
    uc_weight{YType::uint8, "uc-weight"},
    respawn_count{YType::uint8, "respawn-count"},
    total_asics{YType::uint8, "total-asics"},
    issu_ready_ntfy_pending{YType::boolean, "issu-ready-ntfy-pending"},
    issu_abort_sent{YType::boolean, "issu-abort-sent"},
    issu_abort_rcvd{YType::boolean, "issu-abort-rcvd"},
    fabric_mode{YType::uint8, "fabric-mode"},
    fc_mode{YType::enumeration, "fc-mode"},
    board_rev_id{YType::uint32, "board-rev-id"}
{

    yang_name = "driver-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::~DriverInformation()
{
}

bool Fia::Nodes::Node::DriverInformation::has_data() const
{
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_data())
            return true;
    }
    return drv_version.is_set
	|| coeff_major_rev.is_set
	|| coeff_minor_rev.is_set
	|| functional_role.is_set
	|| issu_role.is_set
	|| node_id.is_set
	|| rack_type.is_set
	|| rack_num.is_set
	|| is_driver_ready.is_set
	|| card_avail_mask.is_set
	|| asic_avail_mask.is_set
	|| exp_asic_avail_mask.is_set
	|| ucmc_ratio.is_set
	|| asic_oper_notify_to_fsdb_pending_bmap.is_set
	|| is_full_fgid_download_req.is_set
	|| is_fgid_download_in_progress.is_set
	|| is_fgid_download_completed.is_set
	|| fsdb_conn_active.is_set
	|| fgid_conn_active.is_set
	|| issu_mgr_conn_active.is_set
	|| fsdb_reg_active.is_set
	|| fgid_reg_active.is_set
	|| issu_mgr_reg_active.is_set
	|| num_pm_conn_reqs.is_set
	|| num_fsdb_conn_reqs.is_set
	|| num_fgid_conn_reqs.is_set
	|| num_fstats_conn_reqs.is_set
	|| num_cm_conn_reqs.is_set
	|| num_issu_mgr_conn_reqs.is_set
	|| num_peer_fia_conn_reqs.is_set
	|| is_gaspp_registered.is_set
	|| is_cih_registered.is_set
	|| drvr_initial_startup_timestamp.is_set
	|| drvr_current_startup_timestamp.is_set
	|| num_intf_ports.is_set
	|| uc_weight.is_set
	|| respawn_count.is_set
	|| total_asics.is_set
	|| issu_ready_ntfy_pending.is_set
	|| issu_abort_sent.is_set
	|| issu_abort_rcvd.is_set
	|| fabric_mode.is_set
	|| fc_mode.is_set
	|| board_rev_id.is_set;
}

bool Fia::Nodes::Node::DriverInformation::has_operation() const
{
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(drv_version.yfilter)
	|| ydk::is_set(coeff_major_rev.yfilter)
	|| ydk::is_set(coeff_minor_rev.yfilter)
	|| ydk::is_set(functional_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(is_driver_ready.yfilter)
	|| ydk::is_set(card_avail_mask.yfilter)
	|| ydk::is_set(asic_avail_mask.yfilter)
	|| ydk::is_set(exp_asic_avail_mask.yfilter)
	|| ydk::is_set(ucmc_ratio.yfilter)
	|| ydk::is_set(asic_oper_notify_to_fsdb_pending_bmap.yfilter)
	|| ydk::is_set(is_full_fgid_download_req.yfilter)
	|| ydk::is_set(is_fgid_download_in_progress.yfilter)
	|| ydk::is_set(is_fgid_download_completed.yfilter)
	|| ydk::is_set(fsdb_conn_active.yfilter)
	|| ydk::is_set(fgid_conn_active.yfilter)
	|| ydk::is_set(issu_mgr_conn_active.yfilter)
	|| ydk::is_set(fsdb_reg_active.yfilter)
	|| ydk::is_set(fgid_reg_active.yfilter)
	|| ydk::is_set(issu_mgr_reg_active.yfilter)
	|| ydk::is_set(num_pm_conn_reqs.yfilter)
	|| ydk::is_set(num_fsdb_conn_reqs.yfilter)
	|| ydk::is_set(num_fgid_conn_reqs.yfilter)
	|| ydk::is_set(num_fstats_conn_reqs.yfilter)
	|| ydk::is_set(num_cm_conn_reqs.yfilter)
	|| ydk::is_set(num_issu_mgr_conn_reqs.yfilter)
	|| ydk::is_set(num_peer_fia_conn_reqs.yfilter)
	|| ydk::is_set(is_gaspp_registered.yfilter)
	|| ydk::is_set(is_cih_registered.yfilter)
	|| ydk::is_set(drvr_initial_startup_timestamp.yfilter)
	|| ydk::is_set(drvr_current_startup_timestamp.yfilter)
	|| ydk::is_set(num_intf_ports.yfilter)
	|| ydk::is_set(uc_weight.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(total_asics.yfilter)
	|| ydk::is_set(issu_ready_ntfy_pending.yfilter)
	|| ydk::is_set(issu_abort_sent.yfilter)
	|| ydk::is_set(issu_abort_rcvd.yfilter)
	|| ydk::is_set(fabric_mode.yfilter)
	|| ydk::is_set(fc_mode.yfilter)
	|| ydk::is_set(board_rev_id.yfilter);
}

std::string Fia::Nodes::Node::DriverInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "driver-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drv_version.is_set || is_set(drv_version.yfilter)) leaf_name_data.push_back(drv_version.get_name_leafdata());
    if (coeff_major_rev.is_set || is_set(coeff_major_rev.yfilter)) leaf_name_data.push_back(coeff_major_rev.get_name_leafdata());
    if (coeff_minor_rev.is_set || is_set(coeff_minor_rev.yfilter)) leaf_name_data.push_back(coeff_minor_rev.get_name_leafdata());
    if (functional_role.is_set || is_set(functional_role.yfilter)) leaf_name_data.push_back(functional_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (is_driver_ready.is_set || is_set(is_driver_ready.yfilter)) leaf_name_data.push_back(is_driver_ready.get_name_leafdata());
    if (card_avail_mask.is_set || is_set(card_avail_mask.yfilter)) leaf_name_data.push_back(card_avail_mask.get_name_leafdata());
    if (asic_avail_mask.is_set || is_set(asic_avail_mask.yfilter)) leaf_name_data.push_back(asic_avail_mask.get_name_leafdata());
    if (exp_asic_avail_mask.is_set || is_set(exp_asic_avail_mask.yfilter)) leaf_name_data.push_back(exp_asic_avail_mask.get_name_leafdata());
    if (ucmc_ratio.is_set || is_set(ucmc_ratio.yfilter)) leaf_name_data.push_back(ucmc_ratio.get_name_leafdata());
    if (asic_oper_notify_to_fsdb_pending_bmap.is_set || is_set(asic_oper_notify_to_fsdb_pending_bmap.yfilter)) leaf_name_data.push_back(asic_oper_notify_to_fsdb_pending_bmap.get_name_leafdata());
    if (is_full_fgid_download_req.is_set || is_set(is_full_fgid_download_req.yfilter)) leaf_name_data.push_back(is_full_fgid_download_req.get_name_leafdata());
    if (is_fgid_download_in_progress.is_set || is_set(is_fgid_download_in_progress.yfilter)) leaf_name_data.push_back(is_fgid_download_in_progress.get_name_leafdata());
    if (is_fgid_download_completed.is_set || is_set(is_fgid_download_completed.yfilter)) leaf_name_data.push_back(is_fgid_download_completed.get_name_leafdata());
    if (fsdb_conn_active.is_set || is_set(fsdb_conn_active.yfilter)) leaf_name_data.push_back(fsdb_conn_active.get_name_leafdata());
    if (fgid_conn_active.is_set || is_set(fgid_conn_active.yfilter)) leaf_name_data.push_back(fgid_conn_active.get_name_leafdata());
    if (issu_mgr_conn_active.is_set || is_set(issu_mgr_conn_active.yfilter)) leaf_name_data.push_back(issu_mgr_conn_active.get_name_leafdata());
    if (fsdb_reg_active.is_set || is_set(fsdb_reg_active.yfilter)) leaf_name_data.push_back(fsdb_reg_active.get_name_leafdata());
    if (fgid_reg_active.is_set || is_set(fgid_reg_active.yfilter)) leaf_name_data.push_back(fgid_reg_active.get_name_leafdata());
    if (issu_mgr_reg_active.is_set || is_set(issu_mgr_reg_active.yfilter)) leaf_name_data.push_back(issu_mgr_reg_active.get_name_leafdata());
    if (num_pm_conn_reqs.is_set || is_set(num_pm_conn_reqs.yfilter)) leaf_name_data.push_back(num_pm_conn_reqs.get_name_leafdata());
    if (num_fsdb_conn_reqs.is_set || is_set(num_fsdb_conn_reqs.yfilter)) leaf_name_data.push_back(num_fsdb_conn_reqs.get_name_leafdata());
    if (num_fgid_conn_reqs.is_set || is_set(num_fgid_conn_reqs.yfilter)) leaf_name_data.push_back(num_fgid_conn_reqs.get_name_leafdata());
    if (num_fstats_conn_reqs.is_set || is_set(num_fstats_conn_reqs.yfilter)) leaf_name_data.push_back(num_fstats_conn_reqs.get_name_leafdata());
    if (num_cm_conn_reqs.is_set || is_set(num_cm_conn_reqs.yfilter)) leaf_name_data.push_back(num_cm_conn_reqs.get_name_leafdata());
    if (num_issu_mgr_conn_reqs.is_set || is_set(num_issu_mgr_conn_reqs.yfilter)) leaf_name_data.push_back(num_issu_mgr_conn_reqs.get_name_leafdata());
    if (num_peer_fia_conn_reqs.is_set || is_set(num_peer_fia_conn_reqs.yfilter)) leaf_name_data.push_back(num_peer_fia_conn_reqs.get_name_leafdata());
    if (is_gaspp_registered.is_set || is_set(is_gaspp_registered.yfilter)) leaf_name_data.push_back(is_gaspp_registered.get_name_leafdata());
    if (is_cih_registered.is_set || is_set(is_cih_registered.yfilter)) leaf_name_data.push_back(is_cih_registered.get_name_leafdata());
    if (drvr_initial_startup_timestamp.is_set || is_set(drvr_initial_startup_timestamp.yfilter)) leaf_name_data.push_back(drvr_initial_startup_timestamp.get_name_leafdata());
    if (drvr_current_startup_timestamp.is_set || is_set(drvr_current_startup_timestamp.yfilter)) leaf_name_data.push_back(drvr_current_startup_timestamp.get_name_leafdata());
    if (num_intf_ports.is_set || is_set(num_intf_ports.yfilter)) leaf_name_data.push_back(num_intf_ports.get_name_leafdata());
    if (uc_weight.is_set || is_set(uc_weight.yfilter)) leaf_name_data.push_back(uc_weight.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (total_asics.is_set || is_set(total_asics.yfilter)) leaf_name_data.push_back(total_asics.get_name_leafdata());
    if (issu_ready_ntfy_pending.is_set || is_set(issu_ready_ntfy_pending.yfilter)) leaf_name_data.push_back(issu_ready_ntfy_pending.get_name_leafdata());
    if (issu_abort_sent.is_set || is_set(issu_abort_sent.yfilter)) leaf_name_data.push_back(issu_abort_sent.get_name_leafdata());
    if (issu_abort_rcvd.is_set || is_set(issu_abort_rcvd.yfilter)) leaf_name_data.push_back(issu_abort_rcvd.get_name_leafdata());
    if (fabric_mode.is_set || is_set(fabric_mode.yfilter)) leaf_name_data.push_back(fabric_mode.get_name_leafdata());
    if (fc_mode.is_set || is_set(fc_mode.yfilter)) leaf_name_data.push_back(fc_mode.get_name_leafdata());
    if (board_rev_id.is_set || is_set(board_rev_id.yfilter)) leaf_name_data.push_back(board_rev_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DriverInformation::DeviceInfo>();
        c->parent = this;
        device_info.push_back(c);
        return c;
    }

    if(child_yang_name == "card-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DriverInformation::CardInfo>();
        c->parent = this;
        card_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : device_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : card_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drv-version")
    {
        drv_version = value;
        drv_version.value_namespace = name_space;
        drv_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev = value;
        coeff_major_rev.value_namespace = name_space;
        coeff_major_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev = value;
        coeff_minor_rev.value_namespace = name_space;
        coeff_minor_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "functional-role")
    {
        functional_role = value;
        functional_role.value_namespace = name_space;
        functional_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready = value;
        is_driver_ready.value_namespace = name_space;
        is_driver_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask = value;
        card_avail_mask.value_namespace = name_space;
        card_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask = value;
        asic_avail_mask.value_namespace = name_space;
        asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask = value;
        exp_asic_avail_mask.value_namespace = name_space;
        exp_asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio = value;
        ucmc_ratio.value_namespace = name_space;
        ucmc_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap = value;
        asic_oper_notify_to_fsdb_pending_bmap.value_namespace = name_space;
        asic_oper_notify_to_fsdb_pending_bmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req = value;
        is_full_fgid_download_req.value_namespace = name_space;
        is_full_fgid_download_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress = value;
        is_fgid_download_in_progress.value_namespace = name_space;
        is_fgid_download_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed = value;
        is_fgid_download_completed.value_namespace = name_space;
        is_fgid_download_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active = value;
        fsdb_conn_active.value_namespace = name_space;
        fsdb_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active = value;
        fgid_conn_active.value_namespace = name_space;
        fgid_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active = value;
        issu_mgr_conn_active.value_namespace = name_space;
        issu_mgr_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active = value;
        fsdb_reg_active.value_namespace = name_space;
        fsdb_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active = value;
        fgid_reg_active.value_namespace = name_space;
        fgid_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active = value;
        issu_mgr_reg_active.value_namespace = name_space;
        issu_mgr_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs = value;
        num_pm_conn_reqs.value_namespace = name_space;
        num_pm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs = value;
        num_fsdb_conn_reqs.value_namespace = name_space;
        num_fsdb_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs = value;
        num_fgid_conn_reqs.value_namespace = name_space;
        num_fgid_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs = value;
        num_fstats_conn_reqs.value_namespace = name_space;
        num_fstats_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs = value;
        num_cm_conn_reqs.value_namespace = name_space;
        num_cm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs = value;
        num_issu_mgr_conn_reqs.value_namespace = name_space;
        num_issu_mgr_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs = value;
        num_peer_fia_conn_reqs.value_namespace = name_space;
        num_peer_fia_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered = value;
        is_gaspp_registered.value_namespace = name_space;
        is_gaspp_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered = value;
        is_cih_registered.value_namespace = name_space;
        is_cih_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp = value;
        drvr_initial_startup_timestamp.value_namespace = name_space;
        drvr_initial_startup_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp = value;
        drvr_current_startup_timestamp.value_namespace = name_space;
        drvr_current_startup_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports = value;
        num_intf_ports.value_namespace = name_space;
        num_intf_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc-weight")
    {
        uc_weight = value;
        uc_weight.value_namespace = name_space;
        uc_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-asics")
    {
        total_asics = value;
        total_asics.value_namespace = name_space;
        total_asics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending = value;
        issu_ready_ntfy_pending.value_namespace = name_space;
        issu_ready_ntfy_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent = value;
        issu_abort_sent.value_namespace = name_space;
        issu_abort_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd = value;
        issu_abort_rcvd.value_namespace = name_space;
        issu_abort_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-mode")
    {
        fabric_mode = value;
        fabric_mode.value_namespace = name_space;
        fabric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-mode")
    {
        fc_mode = value;
        fc_mode.value_namespace = name_space;
        fc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id = value;
        board_rev_id.value_namespace = name_space;
        board_rev_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DriverInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drv-version")
    {
        drv_version.yfilter = yfilter;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev.yfilter = yfilter;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev.yfilter = yfilter;
    }
    if(value_path == "functional-role")
    {
        functional_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready.yfilter = yfilter;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask.yfilter = yfilter;
    }
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio.yfilter = yfilter;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap.yfilter = yfilter;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req.yfilter = yfilter;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed.yfilter = yfilter;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active.yfilter = yfilter;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active.yfilter = yfilter;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active.yfilter = yfilter;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active.yfilter = yfilter;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active.yfilter = yfilter;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active.yfilter = yfilter;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered.yfilter = yfilter;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered.yfilter = yfilter;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp.yfilter = yfilter;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports.yfilter = yfilter;
    }
    if(value_path == "uc-weight")
    {
        uc_weight.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "total-asics")
    {
        total_asics.yfilter = yfilter;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending.yfilter = yfilter;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent.yfilter = yfilter;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd.yfilter = yfilter;
    }
    if(value_path == "fabric-mode")
    {
        fabric_mode.yfilter = yfilter;
    }
    if(value_path == "fc-mode")
    {
        fc_mode.yfilter = yfilter;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-info" || name == "card-info" || name == "drv-version" || name == "coeff-major-rev" || name == "coeff-minor-rev" || name == "functional-role" || name == "issu-role" || name == "node-id" || name == "rack-type" || name == "rack-num" || name == "is-driver-ready" || name == "card-avail-mask" || name == "asic-avail-mask" || name == "exp-asic-avail-mask" || name == "ucmc-ratio" || name == "asic-oper-notify-to-fsdb-pending-bmap" || name == "is-full-fgid-download-req" || name == "is-fgid-download-in-progress" || name == "is-fgid-download-completed" || name == "fsdb-conn-active" || name == "fgid-conn-active" || name == "issu-mgr-conn-active" || name == "fsdb-reg-active" || name == "fgid-reg-active" || name == "issu-mgr-reg-active" || name == "num-pm-conn-reqs" || name == "num-fsdb-conn-reqs" || name == "num-fgid-conn-reqs" || name == "num-fstats-conn-reqs" || name == "num-cm-conn-reqs" || name == "num-issu-mgr-conn-reqs" || name == "num-peer-fia-conn-reqs" || name == "is-gaspp-registered" || name == "is-cih-registered" || name == "drvr-initial-startup-timestamp" || name == "drvr-current-startup-timestamp" || name == "num-intf-ports" || name == "uc-weight" || name == "respawn-count" || name == "total-asics" || name == "issu-ready-ntfy-pending" || name == "issu-abort-sent" || name == "issu-abort-rcvd" || name == "fabric-mode" || name == "fc-mode" || name == "board-rev-id")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::DeviceInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    fapid{YType::uint32, "fapid"},
    hotplug_event{YType::uint32, "hotplug-event"},
    slice_state{YType::enumeration, "slice-state"},
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    asic_state{YType::enumeration, "asic-state"},
    last_init_cause{YType::enumeration, "last-init-cause"},
    num_pon_resets{YType::uint32, "num-pon-resets"},
    num_hard_resets{YType::uint32, "num-hard-resets"},
    local_switch_state{YType::boolean, "local-switch-state"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId>())
{
    asic_id->parent = this;

    yang_name = "device-info"; yang_parent_name = "driver-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::~DeviceInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::has_data() const
{
    return is_valid.is_set
	|| fapid.is_set
	|| hotplug_event.is_set
	|| slice_state.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| asic_state.is_set
	|| last_init_cause.is_set
	|| num_pon_resets.is_set
	|| num_hard_resets.is_set
	|| local_switch_state.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(fapid.yfilter)
	|| ydk::is_set(hotplug_event.yfilter)
	|| ydk::is_set(slice_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(asic_state.yfilter)
	|| ydk::is_set(last_init_cause.yfilter)
	|| ydk::is_set(num_pon_resets.yfilter)
	|| ydk::is_set(num_hard_resets.yfilter)
	|| ydk::is_set(local_switch_state.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::DriverInformation::DeviceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::DeviceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (fapid.is_set || is_set(fapid.yfilter)) leaf_name_data.push_back(fapid.get_name_leafdata());
    if (hotplug_event.is_set || is_set(hotplug_event.yfilter)) leaf_name_data.push_back(hotplug_event.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.yfilter)) leaf_name_data.push_back(slice_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (asic_state.is_set || is_set(asic_state.yfilter)) leaf_name_data.push_back(asic_state.get_name_leafdata());
    if (last_init_cause.is_set || is_set(last_init_cause.yfilter)) leaf_name_data.push_back(last_init_cause.get_name_leafdata());
    if (num_pon_resets.is_set || is_set(num_pon_resets.yfilter)) leaf_name_data.push_back(num_pon_resets.get_name_leafdata());
    if (num_hard_resets.is_set || is_set(num_hard_resets.yfilter)) leaf_name_data.push_back(num_hard_resets.get_name_leafdata());
    if (local_switch_state.is_set || is_set(local_switch_state.yfilter)) leaf_name_data.push_back(local_switch_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::DeviceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::DeviceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fapid")
    {
        fapid = value;
        fapid.value_namespace = name_space;
        fapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event = value;
        hotplug_event.value_namespace = name_space;
        hotplug_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
        slice_state.value_namespace = name_space;
        slice_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-state")
    {
        asic_state = value;
        asic_state.value_namespace = name_space;
        asic_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause = value;
        last_init_cause.value_namespace = name_space;
        last_init_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets = value;
        num_pon_resets.value_namespace = name_space;
        num_pon_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets = value;
        num_hard_resets.value_namespace = name_space;
        num_hard_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state = value;
        local_switch_state.value_namespace = name_space;
        local_switch_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "fapid")
    {
        fapid.yfilter = yfilter;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event.yfilter = yfilter;
    }
    if(value_path == "slice-state")
    {
        slice_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "asic-state")
    {
        asic_state.yfilter = yfilter;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause.yfilter = yfilter;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets.yfilter = yfilter;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets.yfilter = yfilter;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "is-valid" || name == "fapid" || name == "hotplug-event" || name == "slice-state" || name == "admin-state" || name == "oper-state" || name == "asic-state" || name == "last-init-cause" || name == "num-pon-resets" || name == "num-hard-resets" || name == "local-switch-state")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "device-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::CardInfo::CardInfo()
    :
    card_type{YType::int32, "card-type"},
    card_name{YType::str, "card-name"},
    slot_no{YType::int32, "slot-no"},
    card_flag{YType::int32, "card-flag"},
    evt_flag{YType::int32, "evt-flag"},
    reg_flag{YType::int32, "reg-flag"},
    instance{YType::int32, "instance"},
    card_state{YType::uint8, "card-state"},
    exp_num_asics{YType::uint32, "exp-num-asics"},
    exp_num_asics_per_fsdb{YType::uint32, "exp-num-asics-per-fsdb"},
    is_powered{YType::boolean, "is-powered"},
    cxp_avail_bitmap{YType::uint64, "cxp-avail-bitmap"},
    num_ilkns_per_asic{YType::uint32, "num-ilkns-per-asic"},
    num_local_ports_per_ilkn{YType::uint32, "num-local-ports-per-ilkn"},
    num_cos_per_port{YType::uint8, "num-cos-per-port"}
    	,
    oir_circular_buffer(std::make_shared<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer>())
{
    oir_circular_buffer->parent = this;

    yang_name = "card-info"; yang_parent_name = "driver-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::CardInfo::~CardInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::has_data() const
{
    return card_type.is_set
	|| card_name.is_set
	|| slot_no.is_set
	|| card_flag.is_set
	|| evt_flag.is_set
	|| reg_flag.is_set
	|| instance.is_set
	|| card_state.is_set
	|| exp_num_asics.is_set
	|| exp_num_asics_per_fsdb.is_set
	|| is_powered.is_set
	|| cxp_avail_bitmap.is_set
	|| num_ilkns_per_asic.is_set
	|| num_local_ports_per_ilkn.is_set
	|| num_cos_per_port.is_set
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_data());
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(slot_no.yfilter)
	|| ydk::is_set(card_flag.yfilter)
	|| ydk::is_set(evt_flag.yfilter)
	|| ydk::is_set(reg_flag.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(card_state.yfilter)
	|| ydk::is_set(exp_num_asics.yfilter)
	|| ydk::is_set(exp_num_asics_per_fsdb.yfilter)
	|| ydk::is_set(is_powered.yfilter)
	|| ydk::is_set(cxp_avail_bitmap.yfilter)
	|| ydk::is_set(num_ilkns_per_asic.yfilter)
	|| ydk::is_set(num_local_ports_per_ilkn.yfilter)
	|| ydk::is_set(num_cos_per_port.yfilter)
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_operation());
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::CardInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.yfilter)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (card_flag.is_set || is_set(card_flag.yfilter)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.yfilter)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.yfilter)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.yfilter)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (exp_num_asics.is_set || is_set(exp_num_asics.yfilter)) leaf_name_data.push_back(exp_num_asics.get_name_leafdata());
    if (exp_num_asics_per_fsdb.is_set || is_set(exp_num_asics_per_fsdb.yfilter)) leaf_name_data.push_back(exp_num_asics_per_fsdb.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.yfilter)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (cxp_avail_bitmap.is_set || is_set(cxp_avail_bitmap.yfilter)) leaf_name_data.push_back(cxp_avail_bitmap.get_name_leafdata());
    if (num_ilkns_per_asic.is_set || is_set(num_ilkns_per_asic.yfilter)) leaf_name_data.push_back(num_ilkns_per_asic.get_name_leafdata());
    if (num_local_ports_per_ilkn.is_set || is_set(num_local_ports_per_ilkn.yfilter)) leaf_name_data.push_back(num_local_ports_per_ilkn.get_name_leafdata());
    if (num_cos_per_port.is_set || is_set(num_cos_per_port.yfilter)) leaf_name_data.push_back(num_cos_per_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::CardInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oir-circular-buffer")
    {
        if(oir_circular_buffer == nullptr)
        {
            oir_circular_buffer = std::make_shared<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer>();
        }
        return oir_circular_buffer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::CardInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oir_circular_buffer != nullptr)
    {
        children["oir-circular-buffer"] = oir_circular_buffer;
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
        slot_no.value_namespace = name_space;
        slot_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-flag")
    {
        card_flag = value;
        card_flag.value_namespace = name_space;
        card_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
        evt_flag.value_namespace = name_space;
        evt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
        reg_flag.value_namespace = name_space;
        reg_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-state")
    {
        card_state = value;
        card_state.value_namespace = name_space;
        card_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics = value;
        exp_num_asics.value_namespace = name_space;
        exp_num_asics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb = value;
        exp_num_asics_per_fsdb.value_namespace = name_space;
        exp_num_asics_per_fsdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
        is_powered.value_namespace = name_space;
        is_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap = value;
        cxp_avail_bitmap.value_namespace = name_space;
        cxp_avail_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic = value;
        num_ilkns_per_asic.value_namespace = name_space;
        num_ilkns_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn = value;
        num_local_ports_per_ilkn.value_namespace = name_space;
        num_local_ports_per_ilkn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port = value;
        num_cos_per_port.value_namespace = name_space;
        num_cos_per_port.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DriverInformation::CardInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "slot-no")
    {
        slot_no.yfilter = yfilter;
    }
    if(value_path == "card-flag")
    {
        card_flag.yfilter = yfilter;
    }
    if(value_path == "evt-flag")
    {
        evt_flag.yfilter = yfilter;
    }
    if(value_path == "reg-flag")
    {
        reg_flag.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "card-state")
    {
        card_state.yfilter = yfilter;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics.yfilter = yfilter;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb.yfilter = yfilter;
    }
    if(value_path == "is-powered")
    {
        is_powered.yfilter = yfilter;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap.yfilter = yfilter;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic.yfilter = yfilter;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn.yfilter = yfilter;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oir-circular-buffer" || name == "card-type" || name == "card-name" || name == "slot-no" || name == "card-flag" || name == "evt-flag" || name == "reg-flag" || name == "instance" || name == "card-state" || name == "exp-num-asics" || name == "exp-num-asics-per-fsdb" || name == "is-powered" || name == "cxp-avail-bitmap" || name == "num-ilkns-per-asic" || name == "num-local-ports-per-ilkn" || name == "num-cos-per-port")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::OirCircularBuffer()
    :
    count{YType::int32, "count"},
    start{YType::int32, "start"},
    end{YType::int32, "end"}
{

    yang_name = "oir-circular-buffer"; yang_parent_name = "card-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::~OirCircularBuffer()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::has_data() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_data())
            return true;
    }
    return count.is_set
	|| start.is_set
	|| end.is_set;
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::has_operation() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-circular-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fia-oir-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo>();
        c->parent = this;
        fia_oir_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fia_oir_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
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
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fia-oir-info" || name == "count" || name == "start" || name == "end")
        return true;
    return false;
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::FiaOirInfo()
    :
    card_flag{YType::int32, "card-flag"},
    card_type{YType::int32, "card-type"},
    reg_flag{YType::int32, "reg-flag"},
    evt_flag{YType::int32, "evt-flag"},
    rack_num{YType::int32, "rack-num"},
    instance{YType::int32, "instance"},
    cur_card_state{YType::int32, "cur-card-state"}
{

    yang_name = "fia-oir-info"; yang_parent_name = "oir-circular-buffer"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::~FiaOirInfo()
{
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::has_data() const
{
    return card_flag.is_set
	|| card_type.is_set
	|| reg_flag.is_set
	|| evt_flag.is_set
	|| rack_num.is_set
	|| instance.is_set
	|| cur_card_state.is_set;
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_flag.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(reg_flag.yfilter)
	|| ydk::is_set(evt_flag.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cur_card_state.yfilter);
}

std::string Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fia-oir-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_flag.is_set || is_set(card_flag.yfilter)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.yfilter)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.yfilter)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cur_card_state.is_set || is_set(cur_card_state.yfilter)) leaf_name_data.push_back(cur_card_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
        card_flag.value_namespace = name_space;
        card_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
        reg_flag.value_namespace = name_space;
        reg_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
        evt_flag.value_namespace = name_space;
        evt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state = value;
        cur_card_state.value_namespace = name_space;
        cur_card_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-flag")
    {
        card_flag.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "reg-flag")
    {
        reg_flag.yfilter = yfilter;
    }
    if(value_path == "evt-flag")
    {
        evt_flag.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-flag" || name == "card-type" || name == "reg-flag" || name == "evt-flag" || name == "rack-num" || name == "instance" || name == "cur-card-state")
        return true;
    return false;
}

Fia::Nodes::Node::ClearStatistics::ClearStatistics()
    :
    asic_instances(std::make_shared<Fia::Nodes::Node::ClearStatistics::AsicInstances>())
{
    asic_instances->parent = this;

    yang_name = "clear-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::ClearStatistics::~ClearStatistics()
{
}

bool Fia::Nodes::Node::ClearStatistics::has_data() const
{
    return (asic_instances !=  nullptr && asic_instances->has_data());
}

bool Fia::Nodes::Node::ClearStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (asic_instances !=  nullptr && asic_instances->has_operation());
}

std::string Fia::Nodes::Node::ClearStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::ClearStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::ClearStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-instances")
    {
        if(asic_instances == nullptr)
        {
            asic_instances = std::make_shared<Fia::Nodes::Node::ClearStatistics::AsicInstances>();
        }
        return asic_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::ClearStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_instances != nullptr)
    {
        children["asic-instances"] = asic_instances;
    }

    return children;
}

void Fia::Nodes::Node::ClearStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::ClearStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::ClearStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-instances")
        return true;
    return false;
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstances()
{

    yang_name = "asic-instances"; yang_parent_name = "clear-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::~AsicInstances()
{
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::has_data() const
{
    for (std::size_t index=0; index<asic_instance.size(); index++)
    {
        if(asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::has_operation() const
{
    for (std::size_t index=0; index<asic_instance.size(); index++)
    {
        if(asic_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::ClearStatistics::AsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::ClearStatistics::AsicInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::ClearStatistics::AsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-instance")
    {
        auto c = std::make_shared<Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance>();
        c->parent = this;
        asic_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::ClearStatistics::AsicInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::AsicInstance()
    :
    asic_instance{YType::uint32, "asic-instance"},
    instance{YType::int32, "instance"}
{

    yang_name = "asic-instance"; yang_parent_name = "asic-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::~AsicInstance()
{
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::has_data() const
{
    return asic_instance.is_set
	|| instance.is_set;
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-instance" <<"[asic-instance='" <<asic_instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-instance" || name == "instance")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxLinkInformation()
    :
    tx_status_option_table(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable>())
{
    tx_status_option_table->parent = this;

    yang_name = "tx-link-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::~TxLinkInformation()
{
}

bool Fia::Nodes::Node::TxLinkInformation::has_data() const
{
    return (tx_status_option_table !=  nullptr && tx_status_option_table->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (tx_status_option_table !=  nullptr && tx_status_option_table->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-status-option-table")
    {
        if(tx_status_option_table == nullptr)
        {
            tx_status_option_table = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable>();
        }
        return tx_status_option_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_status_option_table != nullptr)
    {
        children["tx-status-option-table"] = tx_status_option_table;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::TxLinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::TxLinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-status-option-table")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOptionTable()
    :
    tx_status_option(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption>())
{
    tx_status_option->parent = this;

    yang_name = "tx-status-option-table"; yang_parent_name = "tx-link-information"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::~TxStatusOptionTable()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::has_data() const
{
    return (tx_status_option !=  nullptr && tx_status_option->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::has_operation() const
{
    return is_set(yfilter)
	|| (tx_status_option !=  nullptr && tx_status_option->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-status-option-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-status-option")
    {
        if(tx_status_option == nullptr)
        {
            tx_status_option = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption>();
        }
        return tx_status_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_status_option != nullptr)
    {
        children["tx-status-option"] = tx_status_option;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-status-option")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxStatusOption()
    :
    tx_asic_instances(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances>())
{
    tx_asic_instances->parent = this;

    yang_name = "tx-status-option"; yang_parent_name = "tx-status-option-table"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::~TxStatusOption()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::has_data() const
{
    return (tx_asic_instances !=  nullptr && tx_asic_instances->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::has_operation() const
{
    return is_set(yfilter)
	|| (tx_asic_instances !=  nullptr && tx_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-status-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-asic-instances")
    {
        if(tx_asic_instances == nullptr)
        {
            tx_asic_instances = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances>();
        }
        return tx_asic_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_asic_instances != nullptr)
    {
        children["tx-asic-instances"] = tx_asic_instances;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-asic-instances")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstances()
{

    yang_name = "tx-asic-instances"; yang_parent_name = "tx-status-option"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::~TxAsicInstances()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::has_data() const
{
    for (std::size_t index=0; index<tx_asic_instance.size(); index++)
    {
        if(tx_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<tx_asic_instance.size(); index++)
    {
        if(tx_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-asic-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-asic-instance")
    {
        auto c = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance>();
        c->parent = this;
        tx_asic_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tx_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxAsicInstance()
    :
    instance{YType::uint32, "instance"}
    	,
    tx_links(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks>())
{
    tx_links->parent = this;

    yang_name = "tx-asic-instance"; yang_parent_name = "tx-asic-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::~TxAsicInstance()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::has_data() const
{
    return instance.is_set
	|| (tx_links !=  nullptr && tx_links->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (tx_links !=  nullptr && tx_links->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-asic-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-links")
    {
        if(tx_links == nullptr)
        {
            tx_links = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks>();
        }
        return tx_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tx_links != nullptr)
    {
        children["tx-links"] = tx_links;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-links" || name == "instance")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLinks()
{

    yang_name = "tx-links"; yang_parent_name = "tx-asic-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::~TxLinks()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::has_data() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::has_operation() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-link")
    {
        auto c = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink>();
        c->parent = this;
        tx_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-link")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink()
    :
    start_number{YType::uint32, "start-number"},
    end_number{YType::uint32, "end-number"}
{

    yang_name = "tx-link"; yang_parent_name = "tx-links"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::~TxLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::has_data() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_data())
            return true;
    }
    return start_number.is_set
	|| end_number.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::has_operation() const
{
    for (std::size_t index=0; index<tx_link.size(); index++)
    {
        if(tx_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_number.yfilter)
	|| ydk::is_set(end_number.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_number.is_set || is_set(start_number.yfilter)) leaf_name_data.push_back(start_number.get_name_leafdata());
    if (end_number.is_set || is_set(end_number.yfilter)) leaf_name_data.push_back(end_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-link")
    {
        auto c = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_>();
        c->parent = this;
        tx_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tx_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-number")
    {
        start_number = value;
        start_number.value_namespace = name_space;
        start_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-number")
    {
        end_number = value;
        end_number.value_namespace = name_space;
        end_number.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-number")
    {
        start_number.yfilter = yfilter;
    }
    if(value_path == "end-number")
    {
        end_number.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-link" || name == "start-number" || name == "end-number")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::TxLink_()
    :
    link{YType::int32, "link"},
    speed{YType::uint32, "speed"},
    stage{YType::uint8, "stage"},
    is_link_valid{YType::boolean, "is-link-valid"},
    is_conf_pending{YType::boolean, "is-conf-pending"},
    is_power_enabled{YType::boolean, "is-power-enabled"},
    coeff1{YType::uint32, "coeff1"},
    coeff2{YType::uint32, "coeff2"},
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    error_state{YType::enumeration, "error-state"},
    num_admin_shuts{YType::uint32, "num-admin-shuts"}
    	,
    this_link(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink>())
	,far_end_link(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink>())
	,stats(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats>())
	,history(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History>())
{
    this_link->parent = this;
    far_end_link->parent = this;
    stats->parent = this;
    history->parent = this;

    yang_name = "tx-link"; yang_parent_name = "tx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::~TxLink_()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::has_data() const
{
    return link.is_set
	|| speed.is_set
	|| stage.is_set
	|| is_link_valid.is_set
	|| is_conf_pending.is_set
	|| is_power_enabled.is_set
	|| coeff1.is_set
	|| coeff2.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| num_admin_shuts.is_set
	|| (this_link !=  nullptr && this_link->has_data())
	|| (far_end_link !=  nullptr && far_end_link->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (history !=  nullptr && history->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(is_link_valid.yfilter)
	|| ydk::is_set(is_conf_pending.yfilter)
	|| ydk::is_set(is_power_enabled.yfilter)
	|| ydk::is_set(coeff1.yfilter)
	|| ydk::is_set(coeff2.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(num_admin_shuts.yfilter)
	|| (this_link !=  nullptr && this_link->has_operation())
	|| (far_end_link !=  nullptr && far_end_link->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (history !=  nullptr && history->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-link" <<"[link='" <<link <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (is_link_valid.is_set || is_set(is_link_valid.yfilter)) leaf_name_data.push_back(is_link_valid.get_name_leafdata());
    if (is_conf_pending.is_set || is_set(is_conf_pending.yfilter)) leaf_name_data.push_back(is_conf_pending.get_name_leafdata());
    if (is_power_enabled.is_set || is_set(is_power_enabled.yfilter)) leaf_name_data.push_back(is_power_enabled.get_name_leafdata());
    if (coeff1.is_set || is_set(coeff1.yfilter)) leaf_name_data.push_back(coeff1.get_name_leafdata());
    if (coeff2.is_set || is_set(coeff2.yfilter)) leaf_name_data.push_back(coeff2.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (num_admin_shuts.is_set || is_set(num_admin_shuts.yfilter)) leaf_name_data.push_back(num_admin_shuts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "this-link")
    {
        if(this_link == nullptr)
        {
            this_link = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink>();
        }
        return this_link;
    }

    if(child_yang_name == "far-end-link")
    {
        if(far_end_link == nullptr)
        {
            far_end_link = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink>();
        }
        return far_end_link;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(this_link != nullptr)
    {
        children["this-link"] = this_link;
    }

    if(far_end_link != nullptr)
    {
        children["far-end-link"] = far_end_link;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid = value;
        is_link_valid.value_namespace = name_space;
        is_link_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending = value;
        is_conf_pending.value_namespace = name_space;
        is_conf_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-power-enabled")
    {
        is_power_enabled = value;
        is_power_enabled.value_namespace = name_space;
        is_power_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff1")
    {
        coeff1 = value;
        coeff1.value_namespace = name_space;
        coeff1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff2")
    {
        coeff2 = value;
        coeff2.value_namespace = name_space;
        coeff2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts = value;
        num_admin_shuts.value_namespace = name_space;
        num_admin_shuts.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "is-link-valid")
    {
        is_link_valid.yfilter = yfilter;
    }
    if(value_path == "is-conf-pending")
    {
        is_conf_pending.yfilter = yfilter;
    }
    if(value_path == "is-power-enabled")
    {
        is_power_enabled.yfilter = yfilter;
    }
    if(value_path == "coeff1")
    {
        coeff1.yfilter = yfilter;
    }
    if(value_path == "coeff2")
    {
        coeff2.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error-state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "num-admin-shuts")
    {
        num_admin_shuts.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "this-link" || name == "far-end-link" || name == "stats" || name == "history" || name == "link" || name == "speed" || name == "stage" || name == "is-link-valid" || name == "is-conf-pending" || name == "is-power-enabled" || name == "coeff1" || name == "coeff2" || name == "admin-state" || name == "oper-state" || name == "error-state" || name == "num-admin-shuts")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::ThisLink()
    :
    link_type{YType::enumeration, "link-type"},
    link_stage{YType::enumeration, "link-stage"},
    link_num{YType::uint32, "link-num"},
    phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId>())
{
    asic_id->parent = this;

    yang_name = "this-link"; yang_parent_name = "tx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::~ThisLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::has_data() const
{
    return link_type.is_set
	|| link_stage.is_set
	|| link_num.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_stage.yfilter)
	|| ydk::is_set(link_num.yfilter)
	|| ydk::is_set(phy_link_num.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "this-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.yfilter)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_num.is_set || is_set(link_num.yfilter)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.yfilter)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
        link_stage.value_namespace = name_space;
        link_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-num")
    {
        link_num = value;
        link_num.value_namespace = name_space;
        link_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
        phy_link_num.value_namespace = name_space;
        phy_link_num.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-stage")
    {
        link_stage.yfilter = yfilter;
    }
    if(value_path == "link-num")
    {
        link_num.yfilter = yfilter;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "link-type" || name == "link-stage" || name == "link-num" || name == "phy-link-num")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "this-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::FarEndLink()
    :
    link_type{YType::enumeration, "link-type"},
    link_stage{YType::enumeration, "link-stage"},
    link_num{YType::uint32, "link-num"},
    phy_link_num{YType::uint32, "phy-link-num"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId>())
{
    asic_id->parent = this;

    yang_name = "far-end-link"; yang_parent_name = "tx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::~FarEndLink()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::has_data() const
{
    return link_type.is_set
	|| link_stage.is_set
	|| link_num.is_set
	|| phy_link_num.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_stage.yfilter)
	|| ydk::is_set(link_num.yfilter)
	|| ydk::is_set(phy_link_num.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_stage.is_set || is_set(link_stage.yfilter)) leaf_name_data.push_back(link_stage.get_name_leafdata());
    if (link_num.is_set || is_set(link_num.yfilter)) leaf_name_data.push_back(link_num.get_name_leafdata());
    if (phy_link_num.is_set || is_set(phy_link_num.yfilter)) leaf_name_data.push_back(phy_link_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-stage")
    {
        link_stage = value;
        link_stage.value_namespace = name_space;
        link_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-num")
    {
        link_num = value;
        link_num.value_namespace = name_space;
        link_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num = value;
        phy_link_num.value_namespace = name_space;
        phy_link_num.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-stage")
    {
        link_stage.yfilter = yfilter;
    }
    if(value_path == "link-num")
    {
        link_num.yfilter = yfilter;
    }
    if(value_path == "phy-link-num")
    {
        phy_link_num.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "link-type" || name == "link-stage" || name == "link-num" || name == "phy-link-num")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "far-end-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::Stats()
    :
    dummy{YType::uint32, "dummy"}
{

    yang_name = "stats"; yang_parent_name = "tx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::~Stats()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::has_data() const
{
    return dummy.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dummy.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::History()
    :
    histnum{YType::uint8, "histnum"},
    start_index{YType::uint8, "start-index"}
{

    yang_name = "history"; yang_parent_name = "tx-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::~History()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::has_data() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_data())
            return true;
    }
    return histnum.is_set
	|| start_index.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::has_operation() const
{
    for (std::size_t index=0; index<hist.size(); index++)
    {
        if(hist[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(histnum.yfilter)
	|| ydk::is_set(start_index.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histnum.is_set || is_set(histnum.yfilter)) leaf_name_data.push_back(histnum.get_name_leafdata());
    if (start_index.is_set || is_set(start_index.yfilter)) leaf_name_data.push_back(start_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hist")
    {
        auto c = std::make_shared<Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist>();
        c->parent = this;
        hist.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : hist)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histnum")
    {
        histnum = value;
        histnum.value_namespace = name_space;
        histnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-index")
    {
        start_index = value;
        start_index.value_namespace = name_space;
        start_index.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histnum")
    {
        histnum.yfilter = yfilter;
    }
    if(value_path == "start-index")
    {
        start_index.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hist" || name == "histnum" || name == "start-index")
        return true;
    return false;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::Hist()
    :
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    error_state{YType::enumeration, "error-state"},
    timestamp{YType::uint64, "timestamp"},
    reasons{YType::str, "reasons"}
{

    yang_name = "hist"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::~Hist()
{
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::has_data() const
{
    return admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| timestamp.is_set
	|| reasons.is_set;
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(reasons.yfilter);
}

std::string Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (reasons.is_set || is_set(reasons.yfilter)) leaf_name_data.push_back(reasons.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-state")
    {
        error_state = value;
        error_state.value_namespace = name_space;
        error_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasons")
    {
        reasons = value;
        reasons.value_namespace = name_space;
        reasons.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "error-state")
    {
        error_state.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "reasons")
    {
        reasons.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-state" || name == "oper-state" || name == "error-state" || name == "timestamp" || name == "reasons")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShell()
    :
    diag_shell_units(std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits>())
{
    diag_shell_units->parent = this;

    yang_name = "diag-shell"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::~DiagShell()
{
}

bool Fia::Nodes::Node::DiagShell::has_data() const
{
    return (diag_shell_units !=  nullptr && diag_shell_units->has_data());
}

bool Fia::Nodes::Node::DiagShell::has_operation() const
{
    return is_set(yfilter)
	|| (diag_shell_units !=  nullptr && diag_shell_units->has_operation());
}

std::string Fia::Nodes::Node::DiagShell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diag-shell-units")
    {
        if(diag_shell_units == nullptr)
        {
            diag_shell_units = std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits>();
        }
        return diag_shell_units;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(diag_shell_units != nullptr)
    {
        children["diag-shell-units"] = diag_shell_units;
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::DiagShell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::DiagShell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diag-shell-units")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnits()
{

    yang_name = "diag-shell-units"; yang_parent_name = "diag-shell"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::~DiagShellUnits()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::has_data() const
{
    for (std::size_t index=0; index<diag_shell_unit.size(); index++)
    {
        if(diag_shell_unit[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::has_operation() const
{
    for (std::size_t index=0; index<diag_shell_unit.size(); index++)
    {
        if(diag_shell_unit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell-units";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::DiagShellUnits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::DiagShellUnits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diag-shell-unit")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit>();
        c->parent = this;
        diag_shell_unit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::DiagShellUnits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : diag_shell_unit)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diag-shell-unit")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::DiagShellUnit()
    :
    unit{YType::uint32, "unit"}
    	,
    commands(std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands>())
{
    commands->parent = this;

    yang_name = "diag-shell-unit"; yang_parent_name = "diag-shell-units"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::~DiagShellUnit()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::has_data() const
{
    return unit.is_set
	|| (commands !=  nullptr && commands->has_data());
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| (commands !=  nullptr && commands->has_operation());
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-shell-unit" <<"[unit='" <<unit <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commands")
    {
        if(commands == nullptr)
        {
            commands = std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands>();
        }
        return commands;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(commands != nullptr)
    {
        children["commands"] = commands;
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commands" || name == "unit")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Commands()
{

    yang_name = "commands"; yang_parent_name = "diag-shell-unit"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::~Commands()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::has_data() const
{
    for (std::size_t index=0; index<command.size(); index++)
    {
        if(command[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::has_operation() const
{
    for (std::size_t index=0; index<command.size(); index++)
    {
        if(command[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command>();
        c->parent = this;
        command.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : command)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Command()
    :
    cmd{YType::str, "cmd"}
{

    yang_name = "command"; yang_parent_name = "commands"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::~Command()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::has_data() const
{
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return cmd.is_set;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::has_operation() const
{
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cmd.yfilter);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command" <<"[cmd='" <<cmd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmd.is_set || is_set(cmd.yfilter)) leaf_name_data.push_back(cmd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        auto c = std::make_shared<Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : output)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmd")
    {
        cmd = value;
        cmd.value_namespace = name_space;
        cmd.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmd")
    {
        cmd.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "cmd")
        return true;
    return false;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::Output()
    :
    output{YType::str, "output"},
    output_xr{YType::str, "output-xr"}
{

    yang_name = "output"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::~Output()
{
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::has_data() const
{
    return output.is_set
	|| output_xr.is_set;
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(output_xr.yfilter);
}

std::string Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[output='" <<output <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (output_xr.is_set || is_set(output_xr.yfilter)) leaf_name_data.push_back(output_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-xr")
    {
        output_xr = value;
        output_xr.value_namespace = name_space;
        output_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "output-xr")
    {
        output_xr.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "output-xr")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::OirHistory()
    :
    flags(std::make_shared<Fia::Nodes::Node::OirHistory::Flags>())
{
    flags->parent = this;

    yang_name = "oir-history"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::~OirHistory()
{
}

bool Fia::Nodes::Node::OirHistory::has_data() const
{
    return (flags !=  nullptr && flags->has_data());
}

bool Fia::Nodes::Node::OirHistory::has_operation() const
{
    return is_set(yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Fia::Nodes::Node::OirHistory::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flags()
{

    yang_name = "flags"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::~Flags()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::has_data() const
{
    for (std::size_t index=0; index<flag.size(); index++)
    {
        if(flag[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::OirHistory::Flags::has_operation() const
{
    for (std::size_t index=0; index<flag.size(); index++)
    {
        if(flag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flag")
    {
        auto c = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag>();
        c->parent = this;
        flag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flag)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::OirHistory::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::OirHistory::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flag")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Flag()
    :
    flag{YType::int32, "flag"}
    	,
    slots(std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots>())
{
    slots->parent = this;

    yang_name = "flag"; yang_parent_name = "flags"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::~Flag()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::has_data() const
{
    return flag.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flag.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag" <<"[flag='" <<flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "flag")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "flag"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::~Slots()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto c = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::Slot()
    :
    slot{YType::int32, "slot"},
    drv_version{YType::uint32, "drv-version"},
    coeff_major_rev{YType::uint32, "coeff-major-rev"},
    coeff_minor_rev{YType::uint32, "coeff-minor-rev"},
    functional_role{YType::uint8, "functional-role"},
    issu_role{YType::uint8, "issu-role"},
    node_id{YType::str, "node-id"},
    rack_type{YType::int32, "rack-type"},
    rack_num{YType::uint8, "rack-num"},
    is_driver_ready{YType::boolean, "is-driver-ready"},
    card_avail_mask{YType::uint32, "card-avail-mask"},
    asic_avail_mask{YType::uint64, "asic-avail-mask"},
    exp_asic_avail_mask{YType::uint64, "exp-asic-avail-mask"},
    ucmc_ratio{YType::uint32, "ucmc-ratio"},
    asic_oper_notify_to_fsdb_pending_bmap{YType::uint64, "asic-oper-notify-to-fsdb-pending-bmap"},
    is_full_fgid_download_req{YType::boolean, "is-full-fgid-download-req"},
    is_fgid_download_in_progress{YType::boolean, "is-fgid-download-in-progress"},
    is_fgid_download_completed{YType::boolean, "is-fgid-download-completed"},
    fsdb_conn_active{YType::boolean, "fsdb-conn-active"},
    fgid_conn_active{YType::boolean, "fgid-conn-active"},
    issu_mgr_conn_active{YType::boolean, "issu-mgr-conn-active"},
    fsdb_reg_active{YType::boolean, "fsdb-reg-active"},
    fgid_reg_active{YType::boolean, "fgid-reg-active"},
    issu_mgr_reg_active{YType::boolean, "issu-mgr-reg-active"},
    num_pm_conn_reqs{YType::uint8, "num-pm-conn-reqs"},
    num_fsdb_conn_reqs{YType::uint8, "num-fsdb-conn-reqs"},
    num_fgid_conn_reqs{YType::uint8, "num-fgid-conn-reqs"},
    num_fstats_conn_reqs{YType::uint8, "num-fstats-conn-reqs"},
    num_cm_conn_reqs{YType::uint8, "num-cm-conn-reqs"},
    num_issu_mgr_conn_reqs{YType::uint8, "num-issu-mgr-conn-reqs"},
    num_peer_fia_conn_reqs{YType::uint8, "num-peer-fia-conn-reqs"},
    is_gaspp_registered{YType::boolean, "is-gaspp-registered"},
    is_cih_registered{YType::boolean, "is-cih-registered"},
    drvr_initial_startup_timestamp{YType::str, "drvr-initial-startup-timestamp"},
    drvr_current_startup_timestamp{YType::str, "drvr-current-startup-timestamp"},
    num_intf_ports{YType::uint32, "num-intf-ports"},
    uc_weight{YType::uint8, "uc-weight"},
    respawn_count{YType::uint8, "respawn-count"},
    total_asics{YType::uint8, "total-asics"},
    issu_ready_ntfy_pending{YType::boolean, "issu-ready-ntfy-pending"},
    issu_abort_sent{YType::boolean, "issu-abort-sent"},
    issu_abort_rcvd{YType::boolean, "issu-abort-rcvd"},
    fabric_mode{YType::uint8, "fabric-mode"},
    fc_mode{YType::enumeration, "fc-mode"},
    board_rev_id{YType::uint32, "board-rev-id"}
{

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::~Slot()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::has_data() const
{
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_data())
            return true;
    }
    return slot.is_set
	|| drv_version.is_set
	|| coeff_major_rev.is_set
	|| coeff_minor_rev.is_set
	|| functional_role.is_set
	|| issu_role.is_set
	|| node_id.is_set
	|| rack_type.is_set
	|| rack_num.is_set
	|| is_driver_ready.is_set
	|| card_avail_mask.is_set
	|| asic_avail_mask.is_set
	|| exp_asic_avail_mask.is_set
	|| ucmc_ratio.is_set
	|| asic_oper_notify_to_fsdb_pending_bmap.is_set
	|| is_full_fgid_download_req.is_set
	|| is_fgid_download_in_progress.is_set
	|| is_fgid_download_completed.is_set
	|| fsdb_conn_active.is_set
	|| fgid_conn_active.is_set
	|| issu_mgr_conn_active.is_set
	|| fsdb_reg_active.is_set
	|| fgid_reg_active.is_set
	|| issu_mgr_reg_active.is_set
	|| num_pm_conn_reqs.is_set
	|| num_fsdb_conn_reqs.is_set
	|| num_fgid_conn_reqs.is_set
	|| num_fstats_conn_reqs.is_set
	|| num_cm_conn_reqs.is_set
	|| num_issu_mgr_conn_reqs.is_set
	|| num_peer_fia_conn_reqs.is_set
	|| is_gaspp_registered.is_set
	|| is_cih_registered.is_set
	|| drvr_initial_startup_timestamp.is_set
	|| drvr_current_startup_timestamp.is_set
	|| num_intf_ports.is_set
	|| uc_weight.is_set
	|| respawn_count.is_set
	|| total_asics.is_set
	|| issu_ready_ntfy_pending.is_set
	|| issu_abort_sent.is_set
	|| issu_abort_rcvd.is_set
	|| fabric_mode.is_set
	|| fc_mode.is_set
	|| board_rev_id.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::has_operation() const
{
    for (std::size_t index=0; index<device_info.size(); index++)
    {
        if(device_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<card_info.size(); index++)
    {
        if(card_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(drv_version.yfilter)
	|| ydk::is_set(coeff_major_rev.yfilter)
	|| ydk::is_set(coeff_minor_rev.yfilter)
	|| ydk::is_set(functional_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(is_driver_ready.yfilter)
	|| ydk::is_set(card_avail_mask.yfilter)
	|| ydk::is_set(asic_avail_mask.yfilter)
	|| ydk::is_set(exp_asic_avail_mask.yfilter)
	|| ydk::is_set(ucmc_ratio.yfilter)
	|| ydk::is_set(asic_oper_notify_to_fsdb_pending_bmap.yfilter)
	|| ydk::is_set(is_full_fgid_download_req.yfilter)
	|| ydk::is_set(is_fgid_download_in_progress.yfilter)
	|| ydk::is_set(is_fgid_download_completed.yfilter)
	|| ydk::is_set(fsdb_conn_active.yfilter)
	|| ydk::is_set(fgid_conn_active.yfilter)
	|| ydk::is_set(issu_mgr_conn_active.yfilter)
	|| ydk::is_set(fsdb_reg_active.yfilter)
	|| ydk::is_set(fgid_reg_active.yfilter)
	|| ydk::is_set(issu_mgr_reg_active.yfilter)
	|| ydk::is_set(num_pm_conn_reqs.yfilter)
	|| ydk::is_set(num_fsdb_conn_reqs.yfilter)
	|| ydk::is_set(num_fgid_conn_reqs.yfilter)
	|| ydk::is_set(num_fstats_conn_reqs.yfilter)
	|| ydk::is_set(num_cm_conn_reqs.yfilter)
	|| ydk::is_set(num_issu_mgr_conn_reqs.yfilter)
	|| ydk::is_set(num_peer_fia_conn_reqs.yfilter)
	|| ydk::is_set(is_gaspp_registered.yfilter)
	|| ydk::is_set(is_cih_registered.yfilter)
	|| ydk::is_set(drvr_initial_startup_timestamp.yfilter)
	|| ydk::is_set(drvr_current_startup_timestamp.yfilter)
	|| ydk::is_set(num_intf_ports.yfilter)
	|| ydk::is_set(uc_weight.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(total_asics.yfilter)
	|| ydk::is_set(issu_ready_ntfy_pending.yfilter)
	|| ydk::is_set(issu_abort_sent.yfilter)
	|| ydk::is_set(issu_abort_rcvd.yfilter)
	|| ydk::is_set(fabric_mode.yfilter)
	|| ydk::is_set(fc_mode.yfilter)
	|| ydk::is_set(board_rev_id.yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (drv_version.is_set || is_set(drv_version.yfilter)) leaf_name_data.push_back(drv_version.get_name_leafdata());
    if (coeff_major_rev.is_set || is_set(coeff_major_rev.yfilter)) leaf_name_data.push_back(coeff_major_rev.get_name_leafdata());
    if (coeff_minor_rev.is_set || is_set(coeff_minor_rev.yfilter)) leaf_name_data.push_back(coeff_minor_rev.get_name_leafdata());
    if (functional_role.is_set || is_set(functional_role.yfilter)) leaf_name_data.push_back(functional_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (is_driver_ready.is_set || is_set(is_driver_ready.yfilter)) leaf_name_data.push_back(is_driver_ready.get_name_leafdata());
    if (card_avail_mask.is_set || is_set(card_avail_mask.yfilter)) leaf_name_data.push_back(card_avail_mask.get_name_leafdata());
    if (asic_avail_mask.is_set || is_set(asic_avail_mask.yfilter)) leaf_name_data.push_back(asic_avail_mask.get_name_leafdata());
    if (exp_asic_avail_mask.is_set || is_set(exp_asic_avail_mask.yfilter)) leaf_name_data.push_back(exp_asic_avail_mask.get_name_leafdata());
    if (ucmc_ratio.is_set || is_set(ucmc_ratio.yfilter)) leaf_name_data.push_back(ucmc_ratio.get_name_leafdata());
    if (asic_oper_notify_to_fsdb_pending_bmap.is_set || is_set(asic_oper_notify_to_fsdb_pending_bmap.yfilter)) leaf_name_data.push_back(asic_oper_notify_to_fsdb_pending_bmap.get_name_leafdata());
    if (is_full_fgid_download_req.is_set || is_set(is_full_fgid_download_req.yfilter)) leaf_name_data.push_back(is_full_fgid_download_req.get_name_leafdata());
    if (is_fgid_download_in_progress.is_set || is_set(is_fgid_download_in_progress.yfilter)) leaf_name_data.push_back(is_fgid_download_in_progress.get_name_leafdata());
    if (is_fgid_download_completed.is_set || is_set(is_fgid_download_completed.yfilter)) leaf_name_data.push_back(is_fgid_download_completed.get_name_leafdata());
    if (fsdb_conn_active.is_set || is_set(fsdb_conn_active.yfilter)) leaf_name_data.push_back(fsdb_conn_active.get_name_leafdata());
    if (fgid_conn_active.is_set || is_set(fgid_conn_active.yfilter)) leaf_name_data.push_back(fgid_conn_active.get_name_leafdata());
    if (issu_mgr_conn_active.is_set || is_set(issu_mgr_conn_active.yfilter)) leaf_name_data.push_back(issu_mgr_conn_active.get_name_leafdata());
    if (fsdb_reg_active.is_set || is_set(fsdb_reg_active.yfilter)) leaf_name_data.push_back(fsdb_reg_active.get_name_leafdata());
    if (fgid_reg_active.is_set || is_set(fgid_reg_active.yfilter)) leaf_name_data.push_back(fgid_reg_active.get_name_leafdata());
    if (issu_mgr_reg_active.is_set || is_set(issu_mgr_reg_active.yfilter)) leaf_name_data.push_back(issu_mgr_reg_active.get_name_leafdata());
    if (num_pm_conn_reqs.is_set || is_set(num_pm_conn_reqs.yfilter)) leaf_name_data.push_back(num_pm_conn_reqs.get_name_leafdata());
    if (num_fsdb_conn_reqs.is_set || is_set(num_fsdb_conn_reqs.yfilter)) leaf_name_data.push_back(num_fsdb_conn_reqs.get_name_leafdata());
    if (num_fgid_conn_reqs.is_set || is_set(num_fgid_conn_reqs.yfilter)) leaf_name_data.push_back(num_fgid_conn_reqs.get_name_leafdata());
    if (num_fstats_conn_reqs.is_set || is_set(num_fstats_conn_reqs.yfilter)) leaf_name_data.push_back(num_fstats_conn_reqs.get_name_leafdata());
    if (num_cm_conn_reqs.is_set || is_set(num_cm_conn_reqs.yfilter)) leaf_name_data.push_back(num_cm_conn_reqs.get_name_leafdata());
    if (num_issu_mgr_conn_reqs.is_set || is_set(num_issu_mgr_conn_reqs.yfilter)) leaf_name_data.push_back(num_issu_mgr_conn_reqs.get_name_leafdata());
    if (num_peer_fia_conn_reqs.is_set || is_set(num_peer_fia_conn_reqs.yfilter)) leaf_name_data.push_back(num_peer_fia_conn_reqs.get_name_leafdata());
    if (is_gaspp_registered.is_set || is_set(is_gaspp_registered.yfilter)) leaf_name_data.push_back(is_gaspp_registered.get_name_leafdata());
    if (is_cih_registered.is_set || is_set(is_cih_registered.yfilter)) leaf_name_data.push_back(is_cih_registered.get_name_leafdata());
    if (drvr_initial_startup_timestamp.is_set || is_set(drvr_initial_startup_timestamp.yfilter)) leaf_name_data.push_back(drvr_initial_startup_timestamp.get_name_leafdata());
    if (drvr_current_startup_timestamp.is_set || is_set(drvr_current_startup_timestamp.yfilter)) leaf_name_data.push_back(drvr_current_startup_timestamp.get_name_leafdata());
    if (num_intf_ports.is_set || is_set(num_intf_ports.yfilter)) leaf_name_data.push_back(num_intf_ports.get_name_leafdata());
    if (uc_weight.is_set || is_set(uc_weight.yfilter)) leaf_name_data.push_back(uc_weight.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (total_asics.is_set || is_set(total_asics.yfilter)) leaf_name_data.push_back(total_asics.get_name_leafdata());
    if (issu_ready_ntfy_pending.is_set || is_set(issu_ready_ntfy_pending.yfilter)) leaf_name_data.push_back(issu_ready_ntfy_pending.get_name_leafdata());
    if (issu_abort_sent.is_set || is_set(issu_abort_sent.yfilter)) leaf_name_data.push_back(issu_abort_sent.get_name_leafdata());
    if (issu_abort_rcvd.is_set || is_set(issu_abort_rcvd.yfilter)) leaf_name_data.push_back(issu_abort_rcvd.get_name_leafdata());
    if (fabric_mode.is_set || is_set(fabric_mode.yfilter)) leaf_name_data.push_back(fabric_mode.get_name_leafdata());
    if (fc_mode.is_set || is_set(fc_mode.yfilter)) leaf_name_data.push_back(fc_mode.get_name_leafdata());
    if (board_rev_id.is_set || is_set(board_rev_id.yfilter)) leaf_name_data.push_back(board_rev_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo>();
        c->parent = this;
        device_info.push_back(c);
        return c;
    }

    if(child_yang_name == "card-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo>();
        c->parent = this;
        card_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : device_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : card_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drv-version")
    {
        drv_version = value;
        drv_version.value_namespace = name_space;
        drv_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev = value;
        coeff_major_rev.value_namespace = name_space;
        coeff_major_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev = value;
        coeff_minor_rev.value_namespace = name_space;
        coeff_minor_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "functional-role")
    {
        functional_role = value;
        functional_role.value_namespace = name_space;
        functional_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready = value;
        is_driver_ready.value_namespace = name_space;
        is_driver_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask = value;
        card_avail_mask.value_namespace = name_space;
        card_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask = value;
        asic_avail_mask.value_namespace = name_space;
        asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask = value;
        exp_asic_avail_mask.value_namespace = name_space;
        exp_asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio = value;
        ucmc_ratio.value_namespace = name_space;
        ucmc_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap = value;
        asic_oper_notify_to_fsdb_pending_bmap.value_namespace = name_space;
        asic_oper_notify_to_fsdb_pending_bmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req = value;
        is_full_fgid_download_req.value_namespace = name_space;
        is_full_fgid_download_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress = value;
        is_fgid_download_in_progress.value_namespace = name_space;
        is_fgid_download_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed = value;
        is_fgid_download_completed.value_namespace = name_space;
        is_fgid_download_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active = value;
        fsdb_conn_active.value_namespace = name_space;
        fsdb_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active = value;
        fgid_conn_active.value_namespace = name_space;
        fgid_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active = value;
        issu_mgr_conn_active.value_namespace = name_space;
        issu_mgr_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active = value;
        fsdb_reg_active.value_namespace = name_space;
        fsdb_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active = value;
        fgid_reg_active.value_namespace = name_space;
        fgid_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active = value;
        issu_mgr_reg_active.value_namespace = name_space;
        issu_mgr_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs = value;
        num_pm_conn_reqs.value_namespace = name_space;
        num_pm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs = value;
        num_fsdb_conn_reqs.value_namespace = name_space;
        num_fsdb_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs = value;
        num_fgid_conn_reqs.value_namespace = name_space;
        num_fgid_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs = value;
        num_fstats_conn_reqs.value_namespace = name_space;
        num_fstats_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs = value;
        num_cm_conn_reqs.value_namespace = name_space;
        num_cm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs = value;
        num_issu_mgr_conn_reqs.value_namespace = name_space;
        num_issu_mgr_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs = value;
        num_peer_fia_conn_reqs.value_namespace = name_space;
        num_peer_fia_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered = value;
        is_gaspp_registered.value_namespace = name_space;
        is_gaspp_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered = value;
        is_cih_registered.value_namespace = name_space;
        is_cih_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp = value;
        drvr_initial_startup_timestamp.value_namespace = name_space;
        drvr_initial_startup_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp = value;
        drvr_current_startup_timestamp.value_namespace = name_space;
        drvr_current_startup_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports = value;
        num_intf_ports.value_namespace = name_space;
        num_intf_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc-weight")
    {
        uc_weight = value;
        uc_weight.value_namespace = name_space;
        uc_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-asics")
    {
        total_asics = value;
        total_asics.value_namespace = name_space;
        total_asics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending = value;
        issu_ready_ntfy_pending.value_namespace = name_space;
        issu_ready_ntfy_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent = value;
        issu_abort_sent.value_namespace = name_space;
        issu_abort_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd = value;
        issu_abort_rcvd.value_namespace = name_space;
        issu_abort_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-mode")
    {
        fabric_mode = value;
        fabric_mode.value_namespace = name_space;
        fabric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-mode")
    {
        fc_mode = value;
        fc_mode.value_namespace = name_space;
        fc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id = value;
        board_rev_id.value_namespace = name_space;
        board_rev_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "drv-version")
    {
        drv_version.yfilter = yfilter;
    }
    if(value_path == "coeff-major-rev")
    {
        coeff_major_rev.yfilter = yfilter;
    }
    if(value_path == "coeff-minor-rev")
    {
        coeff_minor_rev.yfilter = yfilter;
    }
    if(value_path == "functional-role")
    {
        functional_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "is-driver-ready")
    {
        is_driver_ready.yfilter = yfilter;
    }
    if(value_path == "card-avail-mask")
    {
        card_avail_mask.yfilter = yfilter;
    }
    if(value_path == "asic-avail-mask")
    {
        asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "exp-asic-avail-mask")
    {
        exp_asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "ucmc-ratio")
    {
        ucmc_ratio.yfilter = yfilter;
    }
    if(value_path == "asic-oper-notify-to-fsdb-pending-bmap")
    {
        asic_oper_notify_to_fsdb_pending_bmap.yfilter = yfilter;
    }
    if(value_path == "is-full-fgid-download-req")
    {
        is_full_fgid_download_req.yfilter = yfilter;
    }
    if(value_path == "is-fgid-download-in-progress")
    {
        is_fgid_download_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-fgid-download-completed")
    {
        is_fgid_download_completed.yfilter = yfilter;
    }
    if(value_path == "fsdb-conn-active")
    {
        fsdb_conn_active.yfilter = yfilter;
    }
    if(value_path == "fgid-conn-active")
    {
        fgid_conn_active.yfilter = yfilter;
    }
    if(value_path == "issu-mgr-conn-active")
    {
        issu_mgr_conn_active.yfilter = yfilter;
    }
    if(value_path == "fsdb-reg-active")
    {
        fsdb_reg_active.yfilter = yfilter;
    }
    if(value_path == "fgid-reg-active")
    {
        fgid_reg_active.yfilter = yfilter;
    }
    if(value_path == "issu-mgr-reg-active")
    {
        issu_mgr_reg_active.yfilter = yfilter;
    }
    if(value_path == "num-pm-conn-reqs")
    {
        num_pm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fsdb-conn-reqs")
    {
        num_fsdb_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fgid-conn-reqs")
    {
        num_fgid_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-fstats-conn-reqs")
    {
        num_fstats_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-cm-conn-reqs")
    {
        num_cm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-issu-mgr-conn-reqs")
    {
        num_issu_mgr_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num-peer-fia-conn-reqs")
    {
        num_peer_fia_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "is-gaspp-registered")
    {
        is_gaspp_registered.yfilter = yfilter;
    }
    if(value_path == "is-cih-registered")
    {
        is_cih_registered.yfilter = yfilter;
    }
    if(value_path == "drvr-initial-startup-timestamp")
    {
        drvr_initial_startup_timestamp.yfilter = yfilter;
    }
    if(value_path == "drvr-current-startup-timestamp")
    {
        drvr_current_startup_timestamp.yfilter = yfilter;
    }
    if(value_path == "num-intf-ports")
    {
        num_intf_ports.yfilter = yfilter;
    }
    if(value_path == "uc-weight")
    {
        uc_weight.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "total-asics")
    {
        total_asics.yfilter = yfilter;
    }
    if(value_path == "issu-ready-ntfy-pending")
    {
        issu_ready_ntfy_pending.yfilter = yfilter;
    }
    if(value_path == "issu-abort-sent")
    {
        issu_abort_sent.yfilter = yfilter;
    }
    if(value_path == "issu-abort-rcvd")
    {
        issu_abort_rcvd.yfilter = yfilter;
    }
    if(value_path == "fabric-mode")
    {
        fabric_mode.yfilter = yfilter;
    }
    if(value_path == "fc-mode")
    {
        fc_mode.yfilter = yfilter;
    }
    if(value_path == "board-rev-id")
    {
        board_rev_id.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-info" || name == "card-info" || name == "slot" || name == "drv-version" || name == "coeff-major-rev" || name == "coeff-minor-rev" || name == "functional-role" || name == "issu-role" || name == "node-id" || name == "rack-type" || name == "rack-num" || name == "is-driver-ready" || name == "card-avail-mask" || name == "asic-avail-mask" || name == "exp-asic-avail-mask" || name == "ucmc-ratio" || name == "asic-oper-notify-to-fsdb-pending-bmap" || name == "is-full-fgid-download-req" || name == "is-fgid-download-in-progress" || name == "is-fgid-download-completed" || name == "fsdb-conn-active" || name == "fgid-conn-active" || name == "issu-mgr-conn-active" || name == "fsdb-reg-active" || name == "fgid-reg-active" || name == "issu-mgr-reg-active" || name == "num-pm-conn-reqs" || name == "num-fsdb-conn-reqs" || name == "num-fgid-conn-reqs" || name == "num-fstats-conn-reqs" || name == "num-cm-conn-reqs" || name == "num-issu-mgr-conn-reqs" || name == "num-peer-fia-conn-reqs" || name == "is-gaspp-registered" || name == "is-cih-registered" || name == "drvr-initial-startup-timestamp" || name == "drvr-current-startup-timestamp" || name == "num-intf-ports" || name == "uc-weight" || name == "respawn-count" || name == "total-asics" || name == "issu-ready-ntfy-pending" || name == "issu-abort-sent" || name == "issu-abort-rcvd" || name == "fabric-mode" || name == "fc-mode" || name == "board-rev-id")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::DeviceInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    fapid{YType::uint32, "fapid"},
    hotplug_event{YType::uint32, "hotplug-event"},
    slice_state{YType::enumeration, "slice-state"},
    admin_state{YType::enumeration, "admin-state"},
    oper_state{YType::enumeration, "oper-state"},
    asic_state{YType::enumeration, "asic-state"},
    last_init_cause{YType::enumeration, "last-init-cause"},
    num_pon_resets{YType::uint32, "num-pon-resets"},
    num_hard_resets{YType::uint32, "num-hard-resets"},
    local_switch_state{YType::boolean, "local-switch-state"}
    	,
    asic_id(std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId>())
{
    asic_id->parent = this;

    yang_name = "device-info"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::~DeviceInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::has_data() const
{
    return is_valid.is_set
	|| fapid.is_set
	|| hotplug_event.is_set
	|| slice_state.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| asic_state.is_set
	|| last_init_cause.is_set
	|| num_pon_resets.is_set
	|| num_hard_resets.is_set
	|| local_switch_state.is_set
	|| (asic_id !=  nullptr && asic_id->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(fapid.yfilter)
	|| ydk::is_set(hotplug_event.yfilter)
	|| ydk::is_set(slice_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(asic_state.yfilter)
	|| ydk::is_set(last_init_cause.yfilter)
	|| ydk::is_set(num_pon_resets.yfilter)
	|| ydk::is_set(num_hard_resets.yfilter)
	|| ydk::is_set(local_switch_state.yfilter)
	|| (asic_id !=  nullptr && asic_id->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (fapid.is_set || is_set(fapid.yfilter)) leaf_name_data.push_back(fapid.get_name_leafdata());
    if (hotplug_event.is_set || is_set(hotplug_event.yfilter)) leaf_name_data.push_back(hotplug_event.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.yfilter)) leaf_name_data.push_back(slice_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (asic_state.is_set || is_set(asic_state.yfilter)) leaf_name_data.push_back(asic_state.get_name_leafdata());
    if (last_init_cause.is_set || is_set(last_init_cause.yfilter)) leaf_name_data.push_back(last_init_cause.get_name_leafdata());
    if (num_pon_resets.is_set || is_set(num_pon_resets.yfilter)) leaf_name_data.push_back(num_pon_resets.get_name_leafdata());
    if (num_hard_resets.is_set || is_set(num_hard_resets.yfilter)) leaf_name_data.push_back(num_hard_resets.get_name_leafdata());
    if (local_switch_state.is_set || is_set(local_switch_state.yfilter)) leaf_name_data.push_back(local_switch_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-id")
    {
        if(asic_id == nullptr)
        {
            asic_id = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId>();
        }
        return asic_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(asic_id != nullptr)
    {
        children["asic-id"] = asic_id;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fapid")
    {
        fapid = value;
        fapid.value_namespace = name_space;
        fapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event = value;
        hotplug_event.value_namespace = name_space;
        hotplug_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
        slice_state.value_namespace = name_space;
        slice_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-state")
    {
        asic_state = value;
        asic_state.value_namespace = name_space;
        asic_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause = value;
        last_init_cause.value_namespace = name_space;
        last_init_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets = value;
        num_pon_resets.value_namespace = name_space;
        num_pon_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets = value;
        num_hard_resets.value_namespace = name_space;
        num_hard_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state = value;
        local_switch_state.value_namespace = name_space;
        local_switch_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "fapid")
    {
        fapid.yfilter = yfilter;
    }
    if(value_path == "hotplug-event")
    {
        hotplug_event.yfilter = yfilter;
    }
    if(value_path == "slice-state")
    {
        slice_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "asic-state")
    {
        asic_state.yfilter = yfilter;
    }
    if(value_path == "last-init-cause")
    {
        last_init_cause.yfilter = yfilter;
    }
    if(value_path == "num-pon-resets")
    {
        num_pon_resets.yfilter = yfilter;
    }
    if(value_path == "num-hard-resets")
    {
        num_hard_resets.yfilter = yfilter;
    }
    if(value_path == "local-switch-state")
    {
        local_switch_state.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "is-valid" || name == "fapid" || name == "hotplug-event" || name == "slice-state" || name == "admin-state" || name == "oper-state" || name == "asic-state" || name == "last-init-cause" || name == "num-pon-resets" || name == "num-hard-resets" || name == "local-switch-state")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::AsicId()
    :
    rack_type{YType::enumeration, "rack-type"},
    asic_type{YType::enumeration, "asic-type"},
    rack_num{YType::uint32, "rack-num"},
    slot_num{YType::uint32, "slot-num"},
    asic_instance{YType::uint32, "asic-instance"}
{

    yang_name = "asic-id"; yang_parent_name = "device-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::~AsicId()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::has_data() const
{
    return rack_type.is_set
	|| asic_type.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| asic_instance.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(asic_instance.yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "asic-type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack-type" || name == "asic-type" || name == "rack-num" || name == "slot-num" || name == "asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::CardInfo()
    :
    card_type{YType::int32, "card-type"},
    card_name{YType::str, "card-name"},
    slot_no{YType::int32, "slot-no"},
    card_flag{YType::int32, "card-flag"},
    evt_flag{YType::int32, "evt-flag"},
    reg_flag{YType::int32, "reg-flag"},
    instance{YType::int32, "instance"},
    card_state{YType::uint8, "card-state"},
    exp_num_asics{YType::uint32, "exp-num-asics"},
    exp_num_asics_per_fsdb{YType::uint32, "exp-num-asics-per-fsdb"},
    is_powered{YType::boolean, "is-powered"},
    cxp_avail_bitmap{YType::uint64, "cxp-avail-bitmap"},
    num_ilkns_per_asic{YType::uint32, "num-ilkns-per-asic"},
    num_local_ports_per_ilkn{YType::uint32, "num-local-ports-per-ilkn"},
    num_cos_per_port{YType::uint8, "num-cos-per-port"}
    	,
    oir_circular_buffer(std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer>())
{
    oir_circular_buffer->parent = this;

    yang_name = "card-info"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::~CardInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::has_data() const
{
    return card_type.is_set
	|| card_name.is_set
	|| slot_no.is_set
	|| card_flag.is_set
	|| evt_flag.is_set
	|| reg_flag.is_set
	|| instance.is_set
	|| card_state.is_set
	|| exp_num_asics.is_set
	|| exp_num_asics_per_fsdb.is_set
	|| is_powered.is_set
	|| cxp_avail_bitmap.is_set
	|| num_ilkns_per_asic.is_set
	|| num_local_ports_per_ilkn.is_set
	|| num_cos_per_port.is_set
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_data());
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(slot_no.yfilter)
	|| ydk::is_set(card_flag.yfilter)
	|| ydk::is_set(evt_flag.yfilter)
	|| ydk::is_set(reg_flag.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(card_state.yfilter)
	|| ydk::is_set(exp_num_asics.yfilter)
	|| ydk::is_set(exp_num_asics_per_fsdb.yfilter)
	|| ydk::is_set(is_powered.yfilter)
	|| ydk::is_set(cxp_avail_bitmap.yfilter)
	|| ydk::is_set(num_ilkns_per_asic.yfilter)
	|| ydk::is_set(num_local_ports_per_ilkn.yfilter)
	|| ydk::is_set(num_cos_per_port.yfilter)
	|| (oir_circular_buffer !=  nullptr && oir_circular_buffer->has_operation());
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.yfilter)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (card_flag.is_set || is_set(card_flag.yfilter)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.yfilter)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.yfilter)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.yfilter)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (exp_num_asics.is_set || is_set(exp_num_asics.yfilter)) leaf_name_data.push_back(exp_num_asics.get_name_leafdata());
    if (exp_num_asics_per_fsdb.is_set || is_set(exp_num_asics_per_fsdb.yfilter)) leaf_name_data.push_back(exp_num_asics_per_fsdb.get_name_leafdata());
    if (is_powered.is_set || is_set(is_powered.yfilter)) leaf_name_data.push_back(is_powered.get_name_leafdata());
    if (cxp_avail_bitmap.is_set || is_set(cxp_avail_bitmap.yfilter)) leaf_name_data.push_back(cxp_avail_bitmap.get_name_leafdata());
    if (num_ilkns_per_asic.is_set || is_set(num_ilkns_per_asic.yfilter)) leaf_name_data.push_back(num_ilkns_per_asic.get_name_leafdata());
    if (num_local_ports_per_ilkn.is_set || is_set(num_local_ports_per_ilkn.yfilter)) leaf_name_data.push_back(num_local_ports_per_ilkn.get_name_leafdata());
    if (num_cos_per_port.is_set || is_set(num_cos_per_port.yfilter)) leaf_name_data.push_back(num_cos_per_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oir-circular-buffer")
    {
        if(oir_circular_buffer == nullptr)
        {
            oir_circular_buffer = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer>();
        }
        return oir_circular_buffer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oir_circular_buffer != nullptr)
    {
        children["oir-circular-buffer"] = oir_circular_buffer;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
        slot_no.value_namespace = name_space;
        slot_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-flag")
    {
        card_flag = value;
        card_flag.value_namespace = name_space;
        card_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
        evt_flag.value_namespace = name_space;
        evt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
        reg_flag.value_namespace = name_space;
        reg_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-state")
    {
        card_state = value;
        card_state.value_namespace = name_space;
        card_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics = value;
        exp_num_asics.value_namespace = name_space;
        exp_num_asics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb = value;
        exp_num_asics_per_fsdb.value_namespace = name_space;
        exp_num_asics_per_fsdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-powered")
    {
        is_powered = value;
        is_powered.value_namespace = name_space;
        is_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap = value;
        cxp_avail_bitmap.value_namespace = name_space;
        cxp_avail_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic = value;
        num_ilkns_per_asic.value_namespace = name_space;
        num_ilkns_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn = value;
        num_local_ports_per_ilkn.value_namespace = name_space;
        num_local_ports_per_ilkn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port = value;
        num_cos_per_port.value_namespace = name_space;
        num_cos_per_port.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "slot-no")
    {
        slot_no.yfilter = yfilter;
    }
    if(value_path == "card-flag")
    {
        card_flag.yfilter = yfilter;
    }
    if(value_path == "evt-flag")
    {
        evt_flag.yfilter = yfilter;
    }
    if(value_path == "reg-flag")
    {
        reg_flag.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "card-state")
    {
        card_state.yfilter = yfilter;
    }
    if(value_path == "exp-num-asics")
    {
        exp_num_asics.yfilter = yfilter;
    }
    if(value_path == "exp-num-asics-per-fsdb")
    {
        exp_num_asics_per_fsdb.yfilter = yfilter;
    }
    if(value_path == "is-powered")
    {
        is_powered.yfilter = yfilter;
    }
    if(value_path == "cxp-avail-bitmap")
    {
        cxp_avail_bitmap.yfilter = yfilter;
    }
    if(value_path == "num-ilkns-per-asic")
    {
        num_ilkns_per_asic.yfilter = yfilter;
    }
    if(value_path == "num-local-ports-per-ilkn")
    {
        num_local_ports_per_ilkn.yfilter = yfilter;
    }
    if(value_path == "num-cos-per-port")
    {
        num_cos_per_port.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oir-circular-buffer" || name == "card-type" || name == "card-name" || name == "slot-no" || name == "card-flag" || name == "evt-flag" || name == "reg-flag" || name == "instance" || name == "card-state" || name == "exp-num-asics" || name == "exp-num-asics-per-fsdb" || name == "is-powered" || name == "cxp-avail-bitmap" || name == "num-ilkns-per-asic" || name == "num-local-ports-per-ilkn" || name == "num-cos-per-port")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::OirCircularBuffer()
    :
    count{YType::int32, "count"},
    start{YType::int32, "start"},
    end{YType::int32, "end"}
{

    yang_name = "oir-circular-buffer"; yang_parent_name = "card-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::~OirCircularBuffer()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::has_data() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_data())
            return true;
    }
    return count.is_set
	|| start.is_set
	|| end.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::has_operation() const
{
    for (std::size_t index=0; index<fia_oir_info.size(); index++)
    {
        if(fia_oir_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-circular-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fia-oir-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo>();
        c->parent = this;
        fia_oir_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fia_oir_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
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
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fia-oir-info" || name == "count" || name == "start" || name == "end")
        return true;
    return false;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::FiaOirInfo()
    :
    card_flag{YType::int32, "card-flag"},
    card_type{YType::int32, "card-type"},
    reg_flag{YType::int32, "reg-flag"},
    evt_flag{YType::int32, "evt-flag"},
    rack_num{YType::int32, "rack-num"},
    instance{YType::int32, "instance"},
    cur_card_state{YType::int32, "cur-card-state"}
{

    yang_name = "fia-oir-info"; yang_parent_name = "oir-circular-buffer"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::~FiaOirInfo()
{
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::has_data() const
{
    return card_flag.is_set
	|| card_type.is_set
	|| reg_flag.is_set
	|| evt_flag.is_set
	|| rack_num.is_set
	|| instance.is_set
	|| cur_card_state.is_set;
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_flag.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(reg_flag.yfilter)
	|| ydk::is_set(evt_flag.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cur_card_state.yfilter);
}

std::string Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fia-oir-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_flag.is_set || is_set(card_flag.yfilter)) leaf_name_data.push_back(card_flag.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (reg_flag.is_set || is_set(reg_flag.yfilter)) leaf_name_data.push_back(reg_flag.get_name_leafdata());
    if (evt_flag.is_set || is_set(evt_flag.yfilter)) leaf_name_data.push_back(evt_flag.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cur_card_state.is_set || is_set(cur_card_state.yfilter)) leaf_name_data.push_back(cur_card_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-flag")
    {
        card_flag = value;
        card_flag.value_namespace = name_space;
        card_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-flag")
    {
        reg_flag = value;
        reg_flag.value_namespace = name_space;
        reg_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evt-flag")
    {
        evt_flag = value;
        evt_flag.value_namespace = name_space;
        evt_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state = value;
        cur_card_state.value_namespace = name_space;
        cur_card_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-flag")
    {
        card_flag.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "reg-flag")
    {
        reg_flag.yfilter = yfilter;
    }
    if(value_path == "evt-flag")
    {
        evt_flag.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cur-card-state")
    {
        cur_card_state.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-flag" || name == "card-type" || name == "reg-flag" || name == "evt-flag" || name == "rack-num" || name == "instance" || name == "cur-card-state")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::AsicStatistics()
    :
    statistics_asic_instances(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances>())
{
    statistics_asic_instances->parent = this;

    yang_name = "asic-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::~AsicStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::has_data() const
{
    return (statistics_asic_instances !=  nullptr && statistics_asic_instances->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (statistics_asic_instances !=  nullptr && statistics_asic_instances->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-asic-instances")
    {
        if(statistics_asic_instances == nullptr)
        {
            statistics_asic_instances = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances>();
        }
        return statistics_asic_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics_asic_instances != nullptr)
    {
        children["statistics-asic-instances"] = statistics_asic_instances;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-asic-instances")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstances()
{

    yang_name = "statistics-asic-instances"; yang_parent_name = "asic-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::~StatisticsAsicInstances()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::has_data() const
{
    for (std::size_t index=0; index<statistics_asic_instance.size(); index++)
    {
        if(statistics_asic_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::has_operation() const
{
    for (std::size_t index=0; index<statistics_asic_instance.size(); index++)
    {
        if(statistics_asic_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-asic-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-asic-instance")
    {
        auto c = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance>();
        c->parent = this;
        statistics_asic_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : statistics_asic_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-asic-instance")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::StatisticsAsicInstance()
    :
    instance{YType::uint32, "instance"}
    	,
    pbc_statistics(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics>())
	,fmac_statistics(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics>())
{
    pbc_statistics->parent = this;
    fmac_statistics->parent = this;

    yang_name = "statistics-asic-instance"; yang_parent_name = "statistics-asic-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::~StatisticsAsicInstance()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::has_data() const
{
    return instance.is_set
	|| (pbc_statistics !=  nullptr && pbc_statistics->has_data())
	|| (fmac_statistics !=  nullptr && fmac_statistics->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (pbc_statistics !=  nullptr && pbc_statistics->has_operation())
	|| (fmac_statistics !=  nullptr && fmac_statistics->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-asic-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbc-statistics")
    {
        if(pbc_statistics == nullptr)
        {
            pbc_statistics = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics>();
        }
        return pbc_statistics;
    }

    if(child_yang_name == "fmac-statistics")
    {
        if(fmac_statistics == nullptr)
        {
            fmac_statistics = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics>();
        }
        return fmac_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbc_statistics != nullptr)
    {
        children["pbc-statistics"] = pbc_statistics;
    }

    if(fmac_statistics != nullptr)
    {
        children["fmac-statistics"] = fmac_statistics;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbc-statistics" || name == "fmac-statistics" || name == "instance")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStatistics()
    :
    pbc_stats(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats>())
{
    pbc_stats->parent = this;

    yang_name = "pbc-statistics"; yang_parent_name = "statistics-asic-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::~PbcStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::has_data() const
{
    return (pbc_stats !=  nullptr && pbc_stats->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (pbc_stats !=  nullptr && pbc_stats->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbc-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbc-stats")
    {
        if(pbc_stats == nullptr)
        {
            pbc_stats = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats>();
        }
        return pbc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbc_stats != nullptr)
    {
        children["pbc-stats"] = pbc_stats;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbc-stats")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::PbcStats()
    :
    valid{YType::boolean, "valid"},
    rack_no{YType::uint32, "rack-no"},
    slot_no{YType::uint32, "slot-no"},
    asic_instance{YType::uint32, "asic-instance"},
    chip_ver{YType::uint16, "chip-ver"}
    	,
    stats_info(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo>())
{
    stats_info->parent = this;

    yang_name = "pbc-stats"; yang_parent_name = "pbc-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::~PbcStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::has_data() const
{
    return valid.is_set
	|| rack_no.is_set
	|| slot_no.is_set
	|| asic_instance.is_set
	|| chip_ver.is_set
	|| (stats_info !=  nullptr && stats_info->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_no.yfilter)
	|| ydk::is_set(slot_no.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(chip_ver.yfilter)
	|| (stats_info !=  nullptr && stats_info->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_no.is_set || is_set(rack_no.yfilter)) leaf_name_data.push_back(rack_no.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.yfilter)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_ver.is_set || is_set(chip_ver.yfilter)) leaf_name_data.push_back(chip_ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-info")
    {
        if(stats_info == nullptr)
        {
            stats_info = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo>();
        }
        return stats_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats_info != nullptr)
    {
        children["stats-info"] = stats_info;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-no")
    {
        rack_no = value;
        rack_no.value_namespace = name_space;
        rack_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
        slot_no.value_namespace = name_space;
        slot_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-ver")
    {
        chip_ver = value;
        chip_ver.value_namespace = name_space;
        chip_ver.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-no")
    {
        rack_no.yfilter = yfilter;
    }
    if(value_path == "slot-no")
    {
        slot_no.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "chip-ver")
    {
        chip_ver.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-info" || name == "valid" || name == "rack-no" || name == "slot-no" || name == "asic-instance" || name == "chip-ver")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::StatsInfo()
    :
    num_blocks{YType::uint8, "num-blocks"}
{

    yang_name = "stats-info"; yang_parent_name = "pbc-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::~StatsInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::has_data() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_data())
            return true;
    }
    return num_blocks.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::has_operation() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_blocks.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_blocks.is_set || is_set(num_blocks.yfilter)) leaf_name_data.push_back(num_blocks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo>();
        c->parent = this;
        block_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : block_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-blocks")
    {
        num_blocks = value;
        num_blocks.value_namespace = name_space;
        num_blocks.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-blocks")
    {
        num_blocks.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-info" || name == "num-blocks")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::BlockInfo()
    :
    block_name{YType::str, "block-name"},
    num_fields{YType::uint8, "num-fields"}
{

    yang_name = "block-info"; yang_parent_name = "stats-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::~BlockInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::has_data() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_data())
            return true;
    }
    return block_name.is_set
	|| num_fields.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::has_operation() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| ydk::is_set(num_fields.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());
    if (num_fields.is_set || is_set(num_fields.yfilter)) leaf_name_data.push_back(num_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "field-info")
    {
        auto c = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo>();
        c->parent = this;
        field_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : field_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fields")
    {
        num_fields = value;
        num_fields.value_namespace = name_space;
        num_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
    if(value_path == "num-fields")
    {
        num_fields.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-info" || name == "block-name" || name == "num-fields")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::FieldInfo()
    :
    field_name{YType::str, "field-name"},
    field_value{YType::uint64, "field-value"},
    is_ovf{YType::boolean, "is-ovf"}
{

    yang_name = "field-info"; yang_parent_name = "block-info"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::~FieldInfo()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::has_data() const
{
    return field_name.is_set
	|| field_value.is_set
	|| is_ovf.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_name.yfilter)
	|| ydk::is_set(field_value.yfilter)
	|| ydk::is_set(is_ovf.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_name.is_set || is_set(field_name.yfilter)) leaf_name_data.push_back(field_name.get_name_leafdata());
    if (field_value.is_set || is_set(field_value.yfilter)) leaf_name_data.push_back(field_value.get_name_leafdata());
    if (is_ovf.is_set || is_set(is_ovf.yfilter)) leaf_name_data.push_back(is_ovf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-name")
    {
        field_name = value;
        field_name.value_namespace = name_space;
        field_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field-value")
    {
        field_value = value;
        field_value.value_namespace = name_space;
        field_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ovf")
    {
        is_ovf = value;
        is_ovf.value_namespace = name_space;
        is_ovf.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-name")
    {
        field_name.yfilter = yfilter;
    }
    if(value_path == "field-value")
    {
        field_value.yfilter = yfilter;
    }
    if(value_path == "is-ovf")
    {
        is_ovf.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-name" || name == "field-value" || name == "is-ovf")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacStatistics()
    :
    fmac_links(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks>())
{
    fmac_links->parent = this;

    yang_name = "fmac-statistics"; yang_parent_name = "statistics-asic-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::~FmacStatistics()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::has_data() const
{
    return (fmac_links !=  nullptr && fmac_links->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (fmac_links !=  nullptr && fmac_links->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fmac-links")
    {
        if(fmac_links == nullptr)
        {
            fmac_links = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks>();
        }
        return fmac_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fmac_links != nullptr)
    {
        children["fmac-links"] = fmac_links;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmac-links")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLinks()
{

    yang_name = "fmac-links"; yang_parent_name = "fmac-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::~FmacLinks()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::has_data() const
{
    for (std::size_t index=0; index<fmac_link.size(); index++)
    {
        if(fmac_link[index]->has_data())
            return true;
    }
    return false;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::has_operation() const
{
    for (std::size_t index=0; index<fmac_link.size(); index++)
    {
        if(fmac_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fmac-link")
    {
        auto c = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink>();
        c->parent = this;
        fmac_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fmac_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmac-link")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacLink()
    :
    link{YType::int32, "link"}
{

    yang_name = "fmac-link"; yang_parent_name = "fmac-links"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::~FmacLink()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::has_data() const
{
    for (std::size_t index=0; index<fmac_asic.size(); index++)
    {
        if(fmac_asic[index]->has_data())
            return true;
    }
    return link.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::has_operation() const
{
    for (std::size_t index=0; index<fmac_asic.size(); index++)
    {
        if(fmac_asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-link" <<"[link='" <<link <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fmac-asic")
    {
        auto c = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic>();
        c->parent = this;
        fmac_asic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fmac_asic)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmac-asic" || name == "link")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::FmacAsic()
    :
    asic{YType::int32, "asic"},
    valid{YType::boolean, "valid"},
    rack_no{YType::uint32, "rack-no"},
    slot_no{YType::uint32, "slot-no"},
    asic_instance{YType::uint32, "asic-instance"},
    link_no{YType::uint32, "link-no"},
    link_valid{YType::boolean, "link-valid"}
    	,
    aggr_stats(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats>())
	,incr_stats(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats>())
{
    aggr_stats->parent = this;
    incr_stats->parent = this;

    yang_name = "fmac-asic"; yang_parent_name = "fmac-link"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::~FmacAsic()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::has_data() const
{
    return asic.is_set
	|| valid.is_set
	|| rack_no.is_set
	|| slot_no.is_set
	|| asic_instance.is_set
	|| link_no.is_set
	|| link_valid.is_set
	|| (aggr_stats !=  nullptr && aggr_stats->has_data())
	|| (incr_stats !=  nullptr && incr_stats->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_no.yfilter)
	|| ydk::is_set(slot_no.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(link_no.yfilter)
	|| ydk::is_set(link_valid.yfilter)
	|| (aggr_stats !=  nullptr && aggr_stats->has_operation())
	|| (incr_stats !=  nullptr && incr_stats->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmac-asic" <<"[asic='" <<asic <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic.is_set || is_set(asic.yfilter)) leaf_name_data.push_back(asic.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_no.is_set || is_set(rack_no.yfilter)) leaf_name_data.push_back(rack_no.get_name_leafdata());
    if (slot_no.is_set || is_set(slot_no.yfilter)) leaf_name_data.push_back(slot_no.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (link_no.is_set || is_set(link_no.yfilter)) leaf_name_data.push_back(link_no.get_name_leafdata());
    if (link_valid.is_set || is_set(link_valid.yfilter)) leaf_name_data.push_back(link_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggr-stats")
    {
        if(aggr_stats == nullptr)
        {
            aggr_stats = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats>();
        }
        return aggr_stats;
    }

    if(child_yang_name == "incr-stats")
    {
        if(incr_stats == nullptr)
        {
            incr_stats = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats>();
        }
        return incr_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aggr_stats != nullptr)
    {
        children["aggr-stats"] = aggr_stats;
    }

    if(incr_stats != nullptr)
    {
        children["incr-stats"] = incr_stats;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic")
    {
        asic = value;
        asic.value_namespace = name_space;
        asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-no")
    {
        rack_no = value;
        rack_no.value_namespace = name_space;
        rack_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-no")
    {
        slot_no = value;
        slot_no.value_namespace = name_space;
        slot_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-no")
    {
        link_no = value;
        link_no.value_namespace = name_space;
        link_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-valid")
    {
        link_valid = value;
        link_valid.value_namespace = name_space;
        link_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic")
    {
        asic.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-no")
    {
        rack_no.yfilter = yfilter;
    }
    if(value_path == "slot-no")
    {
        slot_no.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "link-no")
    {
        link_no.yfilter = yfilter;
    }
    if(value_path == "link-valid")
    {
        link_valid.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggr-stats" || name == "incr-stats" || name == "asic" || name == "valid" || name == "rack-no" || name == "slot-no" || name == "asic-instance" || name == "link-no" || name == "link-valid")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::AggrStats()
    :
    link_error_status(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus>())
	,link_counters(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters>())
	,ovf_status(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus>())
{
    link_error_status->parent = this;
    link_counters->parent = this;
    ovf_status->parent = this;

    yang_name = "aggr-stats"; yang_parent_name = "fmac-asic"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::~AggrStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::has_data() const
{
    return (link_error_status !=  nullptr && link_error_status->has_data())
	|| (link_counters !=  nullptr && link_counters->has_data())
	|| (ovf_status !=  nullptr && ovf_status->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::has_operation() const
{
    return is_set(yfilter)
	|| (link_error_status !=  nullptr && link_error_status->has_operation())
	|| (link_counters !=  nullptr && link_counters->has_operation())
	|| (ovf_status !=  nullptr && ovf_status->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-error-status")
    {
        if(link_error_status == nullptr)
        {
            link_error_status = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus>();
        }
        return link_error_status;
    }

    if(child_yang_name == "link-counters")
    {
        if(link_counters == nullptr)
        {
            link_counters = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters>();
        }
        return link_counters;
    }

    if(child_yang_name == "ovf-status")
    {
        if(ovf_status == nullptr)
        {
            ovf_status = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus>();
        }
        return ovf_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_error_status != nullptr)
    {
        children["link-error-status"] = link_error_status;
    }

    if(link_counters != nullptr)
    {
        children["link-counters"] = link_counters;
    }

    if(ovf_status != nullptr)
    {
        children["ovf-status"] = ovf_status;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-error-status" || name == "link-counters" || name == "ovf-status")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::LinkErrorStatus()
    :
    link_crc_error{YType::uint32, "link-crc-error"},
    link_size_error{YType::uint32, "link-size-error"},
    link_mis_align_error{YType::uint32, "link-mis-align-error"},
    link_code_group_error{YType::uint32, "link-code-group-error"},
    link_no_sig_lock_error{YType::uint32, "link-no-sig-lock-error"},
    link_no_sig_accept_error{YType::uint32, "link-no-sig-accept-error"},
    link_tokens_error{YType::uint32, "link-tokens-error"},
    error_token_count{YType::uint32, "error-token-count"}
{

    yang_name = "link-error-status"; yang_parent_name = "aggr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::~LinkErrorStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::has_data() const
{
    return link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-error-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-crc-error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-size-error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-token-count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-crc-error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link-size-error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error-token-count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-crc-error" || name == "link-size-error" || name == "link-mis-align-error" || name == "link-code-group-error" || name == "link-no-sig-lock-error" || name == "link-no-sig-accept-error" || name == "link-tokens-error" || name == "error-token-count")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::LinkCounters()
    :
    tx_control_cells_counter{YType::uint64, "tx-control-cells-counter"},
    tx_data_cell_counter{YType::uint64, "tx-data-cell-counter"},
    tx_data_byte_counter{YType::uint64, "tx-data-byte-counter"},
    rx_crc_errors_counter{YType::uint64, "rx-crc-errors-counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "rx-lfec-fec-correctable-error"},
    rx_8b_10b_disparity_errors{YType::uint64, "rx-8b-10b-disparity-errors"},
    rx_control_cells_counter{YType::uint64, "rx-control-cells-counter"},
    rx_data_cell_counter{YType::uint64, "rx-data-cell-counter"},
    rx_data_byte_counter{YType::uint64, "rx-data-byte-counter"},
    rx_dropped_retransmitted_control{YType::uint64, "rx-dropped-retransmitted-control"},
    tx_asyn_fifo_rate{YType::uint64, "tx-asyn-fifo-rate"},
    rx_asyn_fifo_rate{YType::uint64, "rx-asyn-fifo-rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "rx-lfec-fec-uncorrectable-errors"},
    rx_8b_10b_code_errors{YType::uint64, "rx-8b-10b-code-errors"}
{

    yang_name = "link-counters"; yang_parent_name = "aggr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::~LinkCounters()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::has_data() const
{
    return tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-control-cells-counter" || name == "tx-data-cell-counter" || name == "tx-data-byte-counter" || name == "rx-crc-errors-counter" || name == "rx-lfec-fec-correctable-error" || name == "rx-8b-10b-disparity-errors" || name == "rx-control-cells-counter" || name == "rx-data-cell-counter" || name == "rx-data-byte-counter" || name == "rx-dropped-retransmitted-control" || name == "tx-asyn-fifo-rate" || name == "rx-asyn-fifo-rate" || name == "rx-lfec-fec-uncorrectable-errors" || name == "rx-8b-10b-code-errors")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::OvfStatus()
    :
    tx_control_cells_counter{YType::str, "tx-control-cells-counter"},
    tx_data_cell_counter{YType::str, "tx-data-cell-counter"},
    tx_data_byte_counter{YType::str, "tx-data-byte-counter"},
    rx_crc_errors_counter{YType::str, "rx-crc-errors-counter"},
    rx_lfec_fec_correctable_error{YType::str, "rx-lfec-fec-correctable-error"},
    rx_8b_10b_disparity_errors{YType::str, "rx-8b-10b-disparity-errors"},
    rx_control_cells_counter{YType::str, "rx-control-cells-counter"},
    rx_data_cell_counter{YType::str, "rx-data-cell-counter"},
    rx_data_byte_counter{YType::str, "rx-data-byte-counter"},
    rx_dropped_retransmitted_control{YType::str, "rx-dropped-retransmitted-control"},
    tx_asyn_fifo_rate{YType::str, "tx-asyn-fifo-rate"},
    rx_asyn_fifo_rate{YType::str, "rx-asyn-fifo-rate"},
    rx_lfec_fec_uncorrectable_errors{YType::str, "rx-lfec-fec-uncorrectable-errors"},
    rx_8b_10b_code_errors{YType::str, "rx-8b-10b-code-errors"}
{

    yang_name = "ovf-status"; yang_parent_name = "aggr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::~OvfStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::has_data() const
{
    return tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ovf-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-control-cells-counter" || name == "tx-data-cell-counter" || name == "tx-data-byte-counter" || name == "rx-crc-errors-counter" || name == "rx-lfec-fec-correctable-error" || name == "rx-8b-10b-disparity-errors" || name == "rx-control-cells-counter" || name == "rx-data-cell-counter" || name == "rx-data-byte-counter" || name == "rx-dropped-retransmitted-control" || name == "tx-asyn-fifo-rate" || name == "rx-asyn-fifo-rate" || name == "rx-lfec-fec-uncorrectable-errors" || name == "rx-8b-10b-code-errors")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::IncrStats()
    :
    link_error_status(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus>())
	,link_counters(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters>())
	,ovf_status(std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus>())
{
    link_error_status->parent = this;
    link_counters->parent = this;
    ovf_status->parent = this;

    yang_name = "incr-stats"; yang_parent_name = "fmac-asic"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::~IncrStats()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::has_data() const
{
    return (link_error_status !=  nullptr && link_error_status->has_data())
	|| (link_counters !=  nullptr && link_counters->has_data())
	|| (ovf_status !=  nullptr && ovf_status->has_data());
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::has_operation() const
{
    return is_set(yfilter)
	|| (link_error_status !=  nullptr && link_error_status->has_operation())
	|| (link_counters !=  nullptr && link_counters->has_operation())
	|| (ovf_status !=  nullptr && ovf_status->has_operation());
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-error-status")
    {
        if(link_error_status == nullptr)
        {
            link_error_status = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus>();
        }
        return link_error_status;
    }

    if(child_yang_name == "link-counters")
    {
        if(link_counters == nullptr)
        {
            link_counters = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters>();
        }
        return link_counters;
    }

    if(child_yang_name == "ovf-status")
    {
        if(ovf_status == nullptr)
        {
            ovf_status = std::make_shared<Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus>();
        }
        return ovf_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_error_status != nullptr)
    {
        children["link-error-status"] = link_error_status;
    }

    if(link_counters != nullptr)
    {
        children["link-counters"] = link_counters;
    }

    if(ovf_status != nullptr)
    {
        children["ovf-status"] = ovf_status;
    }

    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-error-status" || name == "link-counters" || name == "ovf-status")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::LinkErrorStatus()
    :
    link_crc_error{YType::uint32, "link-crc-error"},
    link_size_error{YType::uint32, "link-size-error"},
    link_mis_align_error{YType::uint32, "link-mis-align-error"},
    link_code_group_error{YType::uint32, "link-code-group-error"},
    link_no_sig_lock_error{YType::uint32, "link-no-sig-lock-error"},
    link_no_sig_accept_error{YType::uint32, "link-no-sig-accept-error"},
    link_tokens_error{YType::uint32, "link-tokens-error"},
    error_token_count{YType::uint32, "error-token-count"}
{

    yang_name = "link-error-status"; yang_parent_name = "incr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::~LinkErrorStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::has_data() const
{
    return link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-error-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-crc-error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-size-error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-token-count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-crc-error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link-size-error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link-mis-align-error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link-code-group-error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link-no-sig-lock-error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link-no-sig-accept-error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link-tokens-error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error-token-count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-crc-error" || name == "link-size-error" || name == "link-mis-align-error" || name == "link-code-group-error" || name == "link-no-sig-lock-error" || name == "link-no-sig-accept-error" || name == "link-tokens-error" || name == "error-token-count")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::LinkCounters()
    :
    tx_control_cells_counter{YType::uint64, "tx-control-cells-counter"},
    tx_data_cell_counter{YType::uint64, "tx-data-cell-counter"},
    tx_data_byte_counter{YType::uint64, "tx-data-byte-counter"},
    rx_crc_errors_counter{YType::uint64, "rx-crc-errors-counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "rx-lfec-fec-correctable-error"},
    rx_8b_10b_disparity_errors{YType::uint64, "rx-8b-10b-disparity-errors"},
    rx_control_cells_counter{YType::uint64, "rx-control-cells-counter"},
    rx_data_cell_counter{YType::uint64, "rx-data-cell-counter"},
    rx_data_byte_counter{YType::uint64, "rx-data-byte-counter"},
    rx_dropped_retransmitted_control{YType::uint64, "rx-dropped-retransmitted-control"},
    tx_asyn_fifo_rate{YType::uint64, "tx-asyn-fifo-rate"},
    rx_asyn_fifo_rate{YType::uint64, "rx-asyn-fifo-rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "rx-lfec-fec-uncorrectable-errors"},
    rx_8b_10b_code_errors{YType::uint64, "rx-8b-10b-code-errors"}
{

    yang_name = "link-counters"; yang_parent_name = "incr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::~LinkCounters()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::has_data() const
{
    return tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-control-cells-counter" || name == "tx-data-cell-counter" || name == "tx-data-byte-counter" || name == "rx-crc-errors-counter" || name == "rx-lfec-fec-correctable-error" || name == "rx-8b-10b-disparity-errors" || name == "rx-control-cells-counter" || name == "rx-data-cell-counter" || name == "rx-data-byte-counter" || name == "rx-dropped-retransmitted-control" || name == "tx-asyn-fifo-rate" || name == "rx-asyn-fifo-rate" || name == "rx-lfec-fec-uncorrectable-errors" || name == "rx-8b-10b-code-errors")
        return true;
    return false;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::OvfStatus()
    :
    tx_control_cells_counter{YType::str, "tx-control-cells-counter"},
    tx_data_cell_counter{YType::str, "tx-data-cell-counter"},
    tx_data_byte_counter{YType::str, "tx-data-byte-counter"},
    rx_crc_errors_counter{YType::str, "rx-crc-errors-counter"},
    rx_lfec_fec_correctable_error{YType::str, "rx-lfec-fec-correctable-error"},
    rx_8b_10b_disparity_errors{YType::str, "rx-8b-10b-disparity-errors"},
    rx_control_cells_counter{YType::str, "rx-control-cells-counter"},
    rx_data_cell_counter{YType::str, "rx-data-cell-counter"},
    rx_data_byte_counter{YType::str, "rx-data-byte-counter"},
    rx_dropped_retransmitted_control{YType::str, "rx-dropped-retransmitted-control"},
    tx_asyn_fifo_rate{YType::str, "tx-asyn-fifo-rate"},
    rx_asyn_fifo_rate{YType::str, "rx-asyn-fifo-rate"},
    rx_lfec_fec_uncorrectable_errors{YType::str, "rx-lfec-fec-uncorrectable-errors"},
    rx_8b_10b_code_errors{YType::str, "rx-8b-10b-code-errors"}
{

    yang_name = "ovf-status"; yang_parent_name = "incr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::~OvfStatus()
{
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::has_data() const
{
    return tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set;
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter);
}

std::string Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ovf-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter = value;
        tx_control_cells_counter.value_namespace = name_space;
        tx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter = value;
        tx_data_cell_counter.value_namespace = name_space;
        tx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter = value;
        tx_data_byte_counter.value_namespace = name_space;
        tx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter = value;
        rx_crc_errors_counter.value_namespace = name_space;
        rx_crc_errors_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error = value;
        rx_lfec_fec_correctable_error.value_namespace = name_space;
        rx_lfec_fec_correctable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter = value;
        rx_control_cells_counter.value_namespace = name_space;
        rx_control_cells_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter = value;
        rx_data_cell_counter.value_namespace = name_space;
        rx_data_cell_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter = value;
        rx_data_byte_counter.value_namespace = name_space;
        rx_data_byte_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-control-cells-counter")
    {
        tx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-cell-counter")
    {
        tx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "tx-data-byte-counter")
    {
        tx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-crc-errors-counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-correctable-error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-disparity-errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
    }
    if(value_path == "rx-control-cells-counter")
    {
        rx_control_cells_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-cell-counter")
    {
        rx_data_cell_counter.yfilter = yfilter;
    }
    if(value_path == "rx-data-byte-counter")
    {
        rx_data_byte_counter.yfilter = yfilter;
    }
    if(value_path == "rx-dropped-retransmitted-control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "tx-asyn-fifo-rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-asyn-fifo-rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "rx-lfec-fec-uncorrectable-errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "rx-8b-10b-code-errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
}

bool Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-control-cells-counter" || name == "tx-data-cell-counter" || name == "tx-data-byte-counter" || name == "rx-crc-errors-counter" || name == "rx-lfec-fec-correctable-error" || name == "rx-8b-10b-disparity-errors" || name == "rx-control-cells-counter" || name == "rx-data-cell-counter" || name == "rx-data-byte-counter" || name == "rx-dropped-retransmitted-control" || name == "tx-asyn-fifo-rate" || name == "rx-asyn-fifo-rate" || name == "rx-lfec-fec-uncorrectable-errors" || name == "rx-8b-10b-code-errors")
        return true;
    return false;
}

const Enum::YLeaf AsicInitMethod::asic_init_method_unset {-1, "asic-init-method-unset"};
const Enum::YLeaf AsicInitMethod::asic_init_method_no_reset {0, "asic-init-method-no-reset"};
const Enum::YLeaf AsicInitMethod::asic_init_method_pon_reset {1, "asic-init-method-pon-reset"};
const Enum::YLeaf AsicInitMethod::asic_init_method_pon_reset_on_intr {2, "asic-init-method-pon-reset-on-intr"};
const Enum::YLeaf AsicInitMethod::asic_init_method_hard_reset {3, "asic-init-method-hard-reset"};
const Enum::YLeaf AsicInitMethod::asic_init_method_warmboot {4, "asic-init-method-warmboot"};
const Enum::YLeaf AsicInitMethod::asic_init_method_issu_wb {5, "asic-init-method-issu-wb"};
const Enum::YLeaf AsicInitMethod::asic_init_method_pci_shutdown {6, "asic-init-method-pci-shutdown"};
const Enum::YLeaf AsicInitMethod::asic_init_method_quiesce {7, "asic-init-method-quiesce"};
const Enum::YLeaf AsicInitMethod::asic_init_method_issu_started {8, "asic-init-method-issu-started"};
const Enum::YLeaf AsicInitMethod::asic_init_method_issu_rollback {9, "asic-init-method-issu-rollback"};
const Enum::YLeaf AsicInitMethod::asic_init_method_issu_abort {10, "asic-init-method-issu-abort"};
const Enum::YLeaf AsicInitMethod::asic_init_method_slice_cleanup {11, "asic-init-method-slice-cleanup"};
const Enum::YLeaf AsicInitMethod::asic_init_method_lc_remove {12, "asic-init-method-lc-remove"};
const Enum::YLeaf AsicInitMethod::asic_init_method_node_down {13, "asic-init-method-node-down"};
const Enum::YLeaf AsicInitMethod::asic_init_method_intr {14, "asic-init-method-intr"};
const Enum::YLeaf AsicInitMethod::asic_init_method_board_reload {15, "asic-init-method-board-reload"};
const Enum::YLeaf AsicInitMethod::asic_init_method_max {16, "asic-init-method-max"};

const Enum::YLeaf AsicAccessState::asic_state_unset {-1, "asic-state-unset"};
const Enum::YLeaf AsicAccessState::asic_state_none {0, "asic-state-none"};
const Enum::YLeaf AsicAccessState::asic_state_device_off_line {1, "asic-state-device-off-line"};
const Enum::YLeaf AsicAccessState::asic_state_device_created {2, "asic-state-device-created"};
const Enum::YLeaf AsicAccessState::asic_state_device_online {3, "asic-state-device-online"};
const Enum::YLeaf AsicAccessState::asic_state_warmboot {4, "asic-state-warmboot"};
const Enum::YLeaf AsicAccessState::asic_state_de_init_start {5, "asic-state-de-init-start"};
const Enum::YLeaf AsicAccessState::asic_state_intr_de_init {6, "asic-state-intr-de-init"};
const Enum::YLeaf AsicAccessState::asic_state_bcm_detach {7, "asic-state-bcm-detach"};
const Enum::YLeaf AsicAccessState::asic_state_soc_de_init {8, "asic-state-soc-de-init"};
const Enum::YLeaf AsicAccessState::asic_state_de_init_done {9, "asic-state-de-init-done"};
const Enum::YLeaf AsicAccessState::asic_state_soc_init {10, "asic-state-soc-init"};
const Enum::YLeaf AsicAccessState::asic_state_bcm_init {11, "asic-state-bcm-init"};
const Enum::YLeaf AsicAccessState::asic_state_intr_init {12, "asic-state-intr-init"};
const Enum::YLeaf AsicAccessState::asic_state_soc_init_start {13, "asic-state-soc-init-start"};
const Enum::YLeaf AsicAccessState::asic_state_bcm_init_start {14, "asic-state-bcm-init-start"};
const Enum::YLeaf AsicAccessState::asic_state_intr_init_start {15, "asic-state-intr-init-start"};
const Enum::YLeaf AsicAccessState::asic_state_hard_reset {16, "asic-state-hard-reset"};
const Enum::YLeaf AsicAccessState::asic_state_normal {17, "asic-state-normal"};
const Enum::YLeaf AsicAccessState::asic_state_exception {18, "asic-state-exception"};
const Enum::YLeaf AsicAccessState::asic_state_hp_attached {19, "asic-state-hp-attached"};
const Enum::YLeaf AsicAccessState::asic_state_quiesce {20, "asic-state-quiesce"};
const Enum::YLeaf AsicAccessState::asic_state_issu_started {21, "asic-state-issu-started"};
const Enum::YLeaf AsicAccessState::asic_state_issu_started_nn {22, "asic-state-issu-started-nn"};
const Enum::YLeaf AsicAccessState::asic_state_issu_abort {23, "asic-state-issu-abort"};
const Enum::YLeaf AsicAccessState::asic_state_max {24, "asic-state-max"};

const Enum::YLeaf AsicOperState::asic_oper_unset {-1, "asic-oper-unset"};
const Enum::YLeaf AsicOperState::asic_oper_unknown {0, "asic-oper-unknown"};
const Enum::YLeaf AsicOperState::asic_oper_up {1, "asic-oper-up"};
const Enum::YLeaf AsicOperState::asic_oper_down {2, "asic-oper-down"};
const Enum::YLeaf AsicOperState::asic_card_down {3, "asic-card-down"};

const Enum::YLeaf SliceState::slice_oper_unset {-1, "slice-oper-unset"};
const Enum::YLeaf SliceState::slice_oper_down {0, "slice-oper-down"};
const Enum::YLeaf SliceState::slice_oper_up {1, "slice-oper-up"};
const Enum::YLeaf SliceState::slice_oper_na {2, "slice-oper-na"};

const Enum::YLeaf FcMode::fc_mode_unset {-1, "fc-mode-unset"};
const Enum::YLeaf FcMode::fc_mode_unavail {0, "fc-mode-unavail"};
const Enum::YLeaf FcMode::fc_mode_inband {1, "fc-mode-inband"};
const Enum::YLeaf FcMode::fc_mode_oob {2, "fc-mode-oob"};

const Enum::YLeaf LinkErrorState::link_error_unset {-1, "link-error-unset"};
const Enum::YLeaf LinkErrorState::link_error_none {0, "link-error-none"};
const Enum::YLeaf LinkErrorState::link_error_shut {1, "link-error-shut"};
const Enum::YLeaf LinkErrorState::link_error_max {2, "link-error-max"};

const Enum::YLeaf OperState::oper_unset {-1, "oper-unset"};
const Enum::YLeaf OperState::oper_unknown {0, "oper-unknown"};
const Enum::YLeaf OperState::oper_up {1, "oper-up"};
const Enum::YLeaf OperState::oper_down {2, "oper-down"};
const Enum::YLeaf OperState::card_down {3, "card-down"};

const Enum::YLeaf AdminState::admin_unset {-1, "admin-unset"};
const Enum::YLeaf AdminState::admin_up {0, "admin-up"};
const Enum::YLeaf AdminState::admin_down {1, "admin-down"};

const Enum::YLeaf LinkStage::link_stage_unset {-1, "link-stage-unset"};
const Enum::YLeaf LinkStage::link_stage_unused {0, "link-stage-unused"};
const Enum::YLeaf LinkStage::link_stage_fia {1, "link-stage-fia"};
const Enum::YLeaf LinkStage::link_stage_s1 {2, "link-stage-s1"};
const Enum::YLeaf LinkStage::link_stage_s2 {3, "link-stage-s2"};
const Enum::YLeaf LinkStage::link_stage_s3 {4, "link-stage-s3"};
const Enum::YLeaf LinkStage::link_stage_unknown {5, "link-stage-unknown"};

const Enum::YLeaf Link::link_type_unset {-1, "link-type-unset"};
const Enum::YLeaf Link::link_type_unavail {0, "link-type-unavail"};
const Enum::YLeaf Link::link_type_tx {1, "link-type-tx"};
const Enum::YLeaf Link::link_type_rx {2, "link-type-rx"};

const Enum::YLeaf Asic::asic_unset {-1, "asic-unset"};
const Enum::YLeaf Asic::asic_unavail {0, "asic-unavail"};
const Enum::YLeaf Asic::asic_fia {1, "asic-fia"};
const Enum::YLeaf Asic::asic_s123 {2, "asic-s123"};
const Enum::YLeaf Asic::asic_s13 {3, "asic-s13"};
const Enum::YLeaf Asic::asic_s2 {4, "asic-s2"};
const Enum::YLeaf Asic::asic_b2b {5, "asic-b2b"};
const Enum::YLeaf Asic::asic_type_unknown {6, "asic-type-unknown"};

const Enum::YLeaf Rack::rack_type_unset {-1, "rack-type-unset"};
const Enum::YLeaf Rack::rack_type_lcc {0, "rack-type-lcc"};
const Enum::YLeaf Rack::rack_type_fcc {1, "rack-type-fcc"};


}
}

