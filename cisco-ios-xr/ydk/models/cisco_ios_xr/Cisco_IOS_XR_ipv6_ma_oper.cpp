
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ma_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ma_oper {

Ipv6Network::Ipv6Network()
    :
    nodes(std::make_shared<Ipv6Network::Nodes>())
{
    nodes->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "Cisco-IOS-XR-ipv6-ma-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv6Network::~Ipv6Network()
{
}

bool Ipv6Network::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ipv6Network::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ipv6Network::clone_ptr() const
{
    return std::make_shared<Ipv6Network>();
}

std::string Ipv6Network::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Network::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Network::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Network::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ipv6Network::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Network::Nodes::~Nodes()
{
}

bool Ipv6Network::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Network::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::get_children() const
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

void Ipv6Network::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    interface_data(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData>())
{
    interface_data->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Network::Nodes::Node::~Node()
{
}

bool Ipv6Network::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interface_data !=  nullptr && interface_data->has_data());
}

bool Ipv6Network::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (interface_data !=  nullptr && interface_data->has_operation());
}

std::string Ipv6Network::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Network::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-data")
    {
        if(interface_data == nullptr)
        {
            interface_data = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData>();
        }
        return interface_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_data != nullptr)
    {
        children["interface-data"] = interface_data;
    }

    return children;
}

void Ipv6Network::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-data" || name == "node-name")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::InterfaceData()
    :
    vrfs(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs>())
	,summary(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary>())
{
    vrfs->parent = this;
    summary->parent = this;

    yang_name = "interface-data"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::~InterfaceData()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "summary")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::~Vrfs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    briefs(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>())
	,global_details(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails>())
	,global_briefs(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs>())
	,details(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>())
{
    briefs->parent = this;
    global_details->parent = this;
    global_briefs->parent = this;
    details->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (briefs !=  nullptr && briefs->has_data())
	|| (global_details !=  nullptr && global_details->has_data())
	|| (global_briefs !=  nullptr && global_briefs->has_data())
	|| (details !=  nullptr && details->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (briefs !=  nullptr && briefs->has_operation())
	|| (global_details !=  nullptr && global_details->has_operation())
	|| (global_briefs !=  nullptr && global_briefs->has_operation())
	|| (details !=  nullptr && details->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "briefs")
    {
        if(briefs == nullptr)
        {
            briefs = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>();
        }
        return briefs;
    }

    if(child_yang_name == "global-details")
    {
        if(global_details == nullptr)
        {
            global_details = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails>();
        }
        return global_details;
    }

    if(child_yang_name == "global-briefs")
    {
        if(global_briefs == nullptr)
        {
            global_briefs = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs>();
        }
        return global_briefs;
    }

    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(briefs != nullptr)
    {
        children["briefs"] = briefs;
    }

    if(global_details != nullptr)
    {
        children["global-details"] = global_details;
    }

    if(global_briefs != nullptr)
    {
        children["global-briefs"] = global_briefs;
    }

    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "briefs" || name == "global-details" || name == "global-briefs" || name == "details" || name == "vrf-name")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Briefs()
{

    yang_name = "briefs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::~Briefs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_data() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_operation() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief>();
        c->parent = this;
        brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    line_state{YType::enumeration, "line-state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    link_local_address(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress>())
{
    link_local_address->parent = this;

    yang_name = "brief"; yang_parent_name = "briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::~Brief()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| vrf_name.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (link_local_address !=  nullptr && link_local_address->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-address" || name == "address" || name == "interface-name" || name == "line-state" || name == "vrf-name")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "address"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetails()
{

    yang_name = "global-details"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::~GlobalDetails()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::has_data() const
{
    for (std::size_t index=0; index<global_detail.size(); index++)
    {
        if(global_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::has_operation() const
{
    for (std::size_t index=0; index<global_detail.size(); index++)
    {
        if(global_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-detail")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail>();
        c->parent = this;
        global_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : global_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-detail")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::GlobalDetail()
    :
    interface_name{YType::str, "interface-name"},
    line_state{YType::enumeration, "line-state"},
    mtu{YType::uint32, "mtu"},
    operation_state{YType::enumeration, "operation-state"},
    vrf_name{YType::str, "vrf-name"},
    is_icmp_unreach_enabled{YType::boolean, "is-icmp-unreach-enabled"},
    rg_id_exists{YType::boolean, "rg-id-exists"},
    mlacp_active{YType::boolean, "mlacp-active"},
    flow_tag_src{YType::boolean, "flow-tag-src"},
    flow_tag_dst{YType::boolean, "flow-tag-dst"}
    	,
    link_local_address(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress>())
	,access_control_list(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList>())
	,multi_access_control_list(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList>())
	,rpf(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf>())
	,bgp_pa(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa>())
	,utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime>())
	,idb_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime>())
	,caps_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime>())
	,fwd_en_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime>())
	,fwd_dis_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime>())
{
    link_local_address->parent = this;
    access_control_list->parent = this;
    multi_access_control_list->parent = this;
    rpf->parent = this;
    bgp_pa->parent = this;
    utime->parent = this;
    idb_utime->parent = this;
    caps_utime->parent = this;
    fwd_en_utime->parent = this;
    fwd_dis_utime->parent = this;

    yang_name = "global-detail"; yang_parent_name = "global-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::~GlobalDetail()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| operation_state.is_set
	|| vrf_name.is_set
	|| is_icmp_unreach_enabled.is_set
	|| rg_id_exists.is_set
	|| mlacp_active.is_set
	|| flow_tag_src.is_set
	|| flow_tag_dst.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (access_control_list !=  nullptr && access_control_list->has_data())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (utime !=  nullptr && utime->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operation_state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(is_icmp_unreach_enabled.yfilter)
	|| ydk::is_set(rg_id_exists.yfilter)
	|| ydk::is_set(mlacp_active.yfilter)
	|| ydk::is_set(flow_tag_src.yfilter)
	|| ydk::is_set(flow_tag_dst.yfilter)
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (access_control_list !=  nullptr && access_control_list->has_operation())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (utime !=  nullptr && utime->has_operation())
	|| (idb_utime !=  nullptr && idb_utime->has_operation())
	|| (caps_utime !=  nullptr && caps_utime->has_operation())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_operation())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-detail" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operation_state.is_set || is_set(operation_state.yfilter)) leaf_name_data.push_back(operation_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (is_icmp_unreach_enabled.is_set || is_set(is_icmp_unreach_enabled.yfilter)) leaf_name_data.push_back(is_icmp_unreach_enabled.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.yfilter)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.yfilter)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.yfilter)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.yfilter)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "access-control-list")
    {
        if(access_control_list == nullptr)
        {
            access_control_list = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList>();
        }
        return access_control_list;
    }

    if(child_yang_name == "multi-access-control-list")
    {
        if(multi_access_control_list == nullptr)
        {
            multi_access_control_list = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList>();
        }
        return multi_access_control_list;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "utime")
    {
        if(utime == nullptr)
        {
            utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime>();
        }
        return utime;
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime == nullptr)
        {
            idb_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime>();
        }
        return idb_utime;
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime == nullptr)
        {
            caps_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime>();
        }
        return caps_utime;
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime == nullptr)
        {
            fwd_en_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime>();
        }
        return fwd_en_utime;
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime == nullptr)
        {
            fwd_dis_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime>();
        }
        return fwd_dis_utime;
    }

    if(child_yang_name == "multicast-group")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(c);
        return c;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "client-multicast-group")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup>();
        c->parent = this;
        client_multicast_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    if(access_control_list != nullptr)
    {
        children["access-control-list"] = access_control_list;
    }

    if(multi_access_control_list != nullptr)
    {
        children["multi-access-control-list"] = multi_access_control_list;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(utime != nullptr)
    {
        children["utime"] = utime;
    }

    if(idb_utime != nullptr)
    {
        children["idb-utime"] = idb_utime;
    }

    if(caps_utime != nullptr)
    {
        children["caps-utime"] = caps_utime;
    }

    if(fwd_en_utime != nullptr)
    {
        children["fwd-en-utime"] = fwd_en_utime;
    }

    if(fwd_dis_utime != nullptr)
    {
        children["fwd-dis-utime"] = fwd_dis_utime;
    }

    count = 0;
    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : client_multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-state")
    {
        operation_state = value;
        operation_state.value_namespace = name_space;
        operation_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled = value;
        is_icmp_unreach_enabled.value_namespace = name_space;
        is_icmp_unreach_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
        rg_id_exists.value_namespace = name_space;
        rg_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
        mlacp_active.value_namespace = name_space;
        mlacp_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
        flow_tag_src.value_namespace = name_space;
        flow_tag_src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
        flow_tag_dst.value_namespace = name_space;
        flow_tag_dst.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "operation-state")
    {
        operation_state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled.yfilter = yfilter;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists.yfilter = yfilter;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active.yfilter = yfilter;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src.yfilter = yfilter;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-address" || name == "access-control-list" || name == "multi-access-control-list" || name == "rpf" || name == "bgp-pa" || name == "utime" || name == "idb-utime" || name == "caps-utime" || name == "fwd-en-utime" || name == "fwd-dis-utime" || name == "multicast-group" || name == "address" || name == "client-multicast-group" || name == "interface-name" || name == "line-state" || name == "mtu" || name == "operation-state" || name == "vrf-name" || name == "is-icmp-unreach-enabled" || name == "rg-id-exists" || name == "mlacp-active" || name == "flow-tag-src" || name == "flow-tag-dst")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::AccessControlList()
    :
    in_bound{YType::str, "in-bound"},
    out_bound{YType::str, "out-bound"},
    common_in_bound{YType::str, "common-in-bound"},
    common_out_bound{YType::str, "common-out-bound"}
{

    yang_name = "access-control-list"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::~AccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::has_data() const
{
    return in_bound.is_set
	|| out_bound.is_set
	|| common_in_bound.is_set
	|| common_out_bound.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_bound.yfilter)
	|| ydk::is_set(out_bound.yfilter)
	|| ydk::is_set(common_in_bound.yfilter)
	|| ydk::is_set(common_out_bound.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-control-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bound.is_set || is_set(in_bound.yfilter)) leaf_name_data.push_back(in_bound.get_name_leafdata());
    if (out_bound.is_set || is_set(out_bound.yfilter)) leaf_name_data.push_back(out_bound.get_name_leafdata());
    if (common_in_bound.is_set || is_set(common_in_bound.yfilter)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.yfilter)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-bound")
    {
        in_bound = value;
        in_bound.value_namespace = name_space;
        in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bound")
    {
        out_bound = value;
        out_bound.value_namespace = name_space;
        out_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
        common_in_bound.value_namespace = name_space;
        common_in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
        common_out_bound.value_namespace = name_space;
        common_out_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-bound")
    {
        in_bound.yfilter = yfilter;
    }
    if(value_path == "out-bound")
    {
        out_bound.yfilter = yfilter;
    }
    if(value_path == "common-in-bound")
    {
        common_in_bound.yfilter = yfilter;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-bound" || name == "out-bound" || name == "common-in-bound" || name == "common-out-bound")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::MultiAccessControlList()
{

    yang_name = "multi-access-control-list"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::~MultiAccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::has_data() const
{
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::has_operation() const
{
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-access-control-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound>();
        c->parent = this;
        inbound.push_back(c);
        return c;
    }

    if(child_yang_name == "outbound")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound>();
        c->parent = this;
        outbound.push_back(c);
        return c;
    }

    if(child_yang_name == "common")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common>();
        c->parent = this;
        common.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : inbound)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : outbound)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : common)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound" || name == "common")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::Inbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "inbound"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::~Inbound()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::Outbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "outbound"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::~Outbound()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::Common()
    :
    entry{YType::str, "entry"}
{

    yang_name = "common"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::~Common()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::Rpf()
    :
    enable{YType::boolean, "enable"},
    allow_default_route{YType::boolean, "allow-default-route"},
    allow_self_ping{YType::boolean, "allow-self-ping"},
    mode{YType::uint32, "mode"}
{

    yang_name = "rpf"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::~Rpf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::has_data() const
{
    return enable.is_set
	|| allow_default_route.is_set
	|| allow_self_ping.is_set
	|| mode.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(allow_default_route.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (allow_default_route.is_set || is_set(allow_default_route.yfilter)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
        allow_default_route.value_namespace = name_space;
        allow_default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "allow-default-route")
    {
        allow_default_route.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "allow-default-route" || name == "allow-self-ping" || name == "mode")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::BgpPa()
    :
    input(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input>())
	,output(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::~BgpPa()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::Input()
    :
    enable{YType::uint32, "enable"},
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::~Input()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::has_data() const
{
    return enable.is_set
	|| source.is_set
	|| destination.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source" || name == "destination")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::Output()
    :
    enable{YType::uint32, "enable"},
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::~Output()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::has_data() const
{
    return enable.is_set
	|| source.is_set
	|| destination.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source" || name == "destination")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::Utime()
{

    yang_name = "utime"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::~Utime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::IdbUtime()
{

    yang_name = "idb-utime"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::~IdbUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::CapsUtime()
{

    yang_name = "caps-utime"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::~CapsUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::FwdEnUtime()
{

    yang_name = "fwd-en-utime"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::FwdDisUtime()
{

    yang_name = "fwd-dis-utime"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::MulticastGroup()
    :
    address{YType::str, "address"}
{

    yang_name = "multicast-group"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "address"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::ClientMulticastGroup()
    :
    address{YType::str, "address"}
{

    yang_name = "client-multicast-group"; yang_parent_name = "global-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::~ClientMulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBriefs()
{

    yang_name = "global-briefs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::~GlobalBriefs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::has_data() const
{
    for (std::size_t index=0; index<global_brief.size(); index++)
    {
        if(global_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::has_operation() const
{
    for (std::size_t index=0; index<global_brief.size(); index++)
    {
        if(global_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-brief")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief>();
        c->parent = this;
        global_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : global_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-brief")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::GlobalBrief()
    :
    interface_name{YType::str, "interface-name"},
    line_state{YType::enumeration, "line-state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    link_local_address(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress>())
{
    link_local_address->parent = this;

    yang_name = "global-brief"; yang_parent_name = "global-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::~GlobalBrief()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| vrf_name.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (link_local_address !=  nullptr && link_local_address->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-address" || name == "address" || name == "interface-name" || name == "line-state" || name == "vrf-name")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "global-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "address"; yang_parent_name = "global-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Details()
{

    yang_name = "details"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::~Details()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail>();
        c->parent = this;
        detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Detail()
    :
    interface_name{YType::str, "interface-name"},
    line_state{YType::enumeration, "line-state"},
    mtu{YType::uint32, "mtu"},
    operation_state{YType::enumeration, "operation-state"},
    vrf_name{YType::str, "vrf-name"},
    is_icmp_unreach_enabled{YType::boolean, "is-icmp-unreach-enabled"},
    rg_id_exists{YType::boolean, "rg-id-exists"},
    mlacp_active{YType::boolean, "mlacp-active"},
    flow_tag_src{YType::boolean, "flow-tag-src"},
    flow_tag_dst{YType::boolean, "flow-tag-dst"}
    	,
    link_local_address(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress>())
	,access_control_list(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList>())
	,multi_access_control_list(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList>())
	,rpf(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>())
	,bgp_pa(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>())
	,utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime>())
	,idb_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>())
	,caps_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>())
	,fwd_en_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>())
	,fwd_dis_utime(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>())
{
    link_local_address->parent = this;
    access_control_list->parent = this;
    multi_access_control_list->parent = this;
    rpf->parent = this;
    bgp_pa->parent = this;
    utime->parent = this;
    idb_utime->parent = this;
    caps_utime->parent = this;
    fwd_en_utime->parent = this;
    fwd_dis_utime->parent = this;

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::~Detail()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| operation_state.is_set
	|| vrf_name.is_set
	|| is_icmp_unreach_enabled.is_set
	|| rg_id_exists.is_set
	|| mlacp_active.is_set
	|| flow_tag_src.is_set
	|| flow_tag_dst.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (access_control_list !=  nullptr && access_control_list->has_data())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (utime !=  nullptr && utime->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operation_state.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(is_icmp_unreach_enabled.yfilter)
	|| ydk::is_set(rg_id_exists.yfilter)
	|| ydk::is_set(mlacp_active.yfilter)
	|| ydk::is_set(flow_tag_src.yfilter)
	|| ydk::is_set(flow_tag_dst.yfilter)
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (access_control_list !=  nullptr && access_control_list->has_operation())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (utime !=  nullptr && utime->has_operation())
	|| (idb_utime !=  nullptr && idb_utime->has_operation())
	|| (caps_utime !=  nullptr && caps_utime->has_operation())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_operation())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operation_state.is_set || is_set(operation_state.yfilter)) leaf_name_data.push_back(operation_state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (is_icmp_unreach_enabled.is_set || is_set(is_icmp_unreach_enabled.yfilter)) leaf_name_data.push_back(is_icmp_unreach_enabled.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.yfilter)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.yfilter)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.yfilter)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.yfilter)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "access-control-list")
    {
        if(access_control_list == nullptr)
        {
            access_control_list = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList>();
        }
        return access_control_list;
    }

    if(child_yang_name == "multi-access-control-list")
    {
        if(multi_access_control_list == nullptr)
        {
            multi_access_control_list = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList>();
        }
        return multi_access_control_list;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "utime")
    {
        if(utime == nullptr)
        {
            utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime>();
        }
        return utime;
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime == nullptr)
        {
            idb_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>();
        }
        return idb_utime;
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime == nullptr)
        {
            caps_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>();
        }
        return caps_utime;
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime == nullptr)
        {
            fwd_en_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>();
        }
        return fwd_en_utime;
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime == nullptr)
        {
            fwd_dis_utime = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>();
        }
        return fwd_dis_utime;
    }

    if(child_yang_name == "multicast-group")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(c);
        return c;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "client-multicast-group")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup>();
        c->parent = this;
        client_multicast_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    if(access_control_list != nullptr)
    {
        children["access-control-list"] = access_control_list;
    }

    if(multi_access_control_list != nullptr)
    {
        children["multi-access-control-list"] = multi_access_control_list;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(utime != nullptr)
    {
        children["utime"] = utime;
    }

    if(idb_utime != nullptr)
    {
        children["idb-utime"] = idb_utime;
    }

    if(caps_utime != nullptr)
    {
        children["caps-utime"] = caps_utime;
    }

    if(fwd_en_utime != nullptr)
    {
        children["fwd-en-utime"] = fwd_en_utime;
    }

    if(fwd_dis_utime != nullptr)
    {
        children["fwd-dis-utime"] = fwd_dis_utime;
    }

    count = 0;
    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : client_multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-state")
    {
        operation_state = value;
        operation_state.value_namespace = name_space;
        operation_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled = value;
        is_icmp_unreach_enabled.value_namespace = name_space;
        is_icmp_unreach_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
        rg_id_exists.value_namespace = name_space;
        rg_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
        mlacp_active.value_namespace = name_space;
        mlacp_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
        flow_tag_src.value_namespace = name_space;
        flow_tag_src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
        flow_tag_dst.value_namespace = name_space;
        flow_tag_dst.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "operation-state")
    {
        operation_state.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled.yfilter = yfilter;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists.yfilter = yfilter;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active.yfilter = yfilter;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src.yfilter = yfilter;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-local-address" || name == "access-control-list" || name == "multi-access-control-list" || name == "rpf" || name == "bgp-pa" || name == "utime" || name == "idb-utime" || name == "caps-utime" || name == "fwd-en-utime" || name == "fwd-dis-utime" || name == "multicast-group" || name == "address" || name == "client-multicast-group" || name == "interface-name" || name == "line-state" || name == "mtu" || name == "operation-state" || name == "vrf-name" || name == "is-icmp-unreach-enabled" || name == "rg-id-exists" || name == "mlacp-active" || name == "flow-tag-src" || name == "flow-tag-dst")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::AccessControlList()
    :
    in_bound{YType::str, "in-bound"},
    out_bound{YType::str, "out-bound"},
    common_in_bound{YType::str, "common-in-bound"},
    common_out_bound{YType::str, "common-out-bound"}
{

    yang_name = "access-control-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::~AccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::has_data() const
{
    return in_bound.is_set
	|| out_bound.is_set
	|| common_in_bound.is_set
	|| common_out_bound.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_bound.yfilter)
	|| ydk::is_set(out_bound.yfilter)
	|| ydk::is_set(common_in_bound.yfilter)
	|| ydk::is_set(common_out_bound.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-control-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_bound.is_set || is_set(in_bound.yfilter)) leaf_name_data.push_back(in_bound.get_name_leafdata());
    if (out_bound.is_set || is_set(out_bound.yfilter)) leaf_name_data.push_back(out_bound.get_name_leafdata());
    if (common_in_bound.is_set || is_set(common_in_bound.yfilter)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.yfilter)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-bound")
    {
        in_bound = value;
        in_bound.value_namespace = name_space;
        in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bound")
    {
        out_bound = value;
        out_bound.value_namespace = name_space;
        out_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
        common_in_bound.value_namespace = name_space;
        common_in_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
        common_out_bound.value_namespace = name_space;
        common_out_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-bound")
    {
        in_bound.yfilter = yfilter;
    }
    if(value_path == "out-bound")
    {
        out_bound.yfilter = yfilter;
    }
    if(value_path == "common-in-bound")
    {
        common_in_bound.yfilter = yfilter;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-bound" || name == "out-bound" || name == "common-in-bound" || name == "common-out-bound")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::MultiAccessControlList()
{

    yang_name = "multi-access-control-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::~MultiAccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::has_data() const
{
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::has_operation() const
{
    for (std::size_t index=0; index<inbound.size(); index++)
    {
        if(inbound[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<outbound.size(); index++)
    {
        if(outbound[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common.size(); index++)
    {
        if(common[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-access-control-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound>();
        c->parent = this;
        inbound.push_back(c);
        return c;
    }

    if(child_yang_name == "outbound")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound>();
        c->parent = this;
        outbound.push_back(c);
        return c;
    }

    if(child_yang_name == "common")
    {
        auto c = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common>();
        c->parent = this;
        common.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : inbound)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : outbound)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : common)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound" || name == "common")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::Inbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "inbound"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::~Inbound()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::Outbound()
    :
    entry{YType::str, "entry"}
{

    yang_name = "outbound"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::~Outbound()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::Common()
    :
    entry{YType::str, "entry"}
{

    yang_name = "common"; yang_parent_name = "multi-access-control-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::~Common()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::has_data() const
{
    return entry.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::Rpf()
    :
    enable{YType::boolean, "enable"},
    allow_default_route{YType::boolean, "allow-default-route"},
    allow_self_ping{YType::boolean, "allow-self-ping"},
    mode{YType::uint32, "mode"}
{

    yang_name = "rpf"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::~Rpf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_data() const
{
    return enable.is_set
	|| allow_default_route.is_set
	|| allow_self_ping.is_set
	|| mode.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(allow_default_route.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (allow_default_route.is_set || is_set(allow_default_route.yfilter)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
        allow_default_route.value_namespace = name_space;
        allow_default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "allow-default-route")
    {
        allow_default_route.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "allow-default-route" || name == "allow-self-ping" || name == "mode")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::BgpPa()
    :
    input(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>())
	,output(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::~BgpPa()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::Input()
    :
    enable{YType::uint32, "enable"},
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::~Input()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_data() const
{
    return enable.is_set
	|| source.is_set
	|| destination.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source" || name == "destination")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::Output()
    :
    enable{YType::uint32, "enable"},
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::~Output()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_data() const
{
    return enable.is_set
	|| source.is_set
	|| destination.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source" || name == "destination")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::Utime()
{

    yang_name = "utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::~Utime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::IdbUtime()
{

    yang_name = "idb-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::CapsUtime()
{

    yang_name = "caps-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::FwdEnUtime()
{

    yang_name = "fwd-en-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::FwdDisUtime()
{

    yang_name = "fwd-dis-utime"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_operation() const
{
    return is_set(yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::MulticastGroup()
    :
    address{YType::str, "address"}
{

    yang_name = "multicast-group"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    address_state{YType::enumeration, "address-state"},
    is_anycast{YType::boolean, "is-anycast"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "address"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(address_state.yfilter)
	|| ydk::is_set(is_anycast.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.yfilter)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.yfilter)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-state")
    {
        address_state = value;
        address_state.value_namespace = name_space;
        address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
        is_anycast.value_namespace = name_space;
        is_anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "address-state")
    {
        address_state.yfilter = yfilter;
    }
    if(value_path == "is-anycast")
    {
        is_anycast.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "address-state" || name == "is-anycast" || name == "route-tag")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::ClientMulticastGroup()
    :
    address{YType::str, "address"}
{

    yang_name = "client-multicast-group"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::~ClientMulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-multicast-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::Summary()
    :
    if_up_down_basecaps_up{YType::uint32, "if-up-down-basecaps-up"}
    	,
    if_up_up(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp>())
	,if_up_down(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown>())
	,if_down_down(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown>())
	,if_shutdown_down(std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>())
{
    if_up_up->parent = this;
    if_up_down->parent = this;
    if_down_down->parent = this;
    if_shutdown_down->parent = this;

    yang_name = "summary"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::~Summary()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::has_data() const
{
    return if_up_down_basecaps_up.is_set
	|| (if_up_up !=  nullptr && if_up_up->has_data())
	|| (if_up_down !=  nullptr && if_up_down->has_data())
	|| (if_down_down !=  nullptr && if_down_down->has_data())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_up_down_basecaps_up.yfilter)
	|| (if_up_up !=  nullptr && if_up_up->has_operation())
	|| (if_up_down !=  nullptr && if_up_down->has_operation())
	|| (if_down_down !=  nullptr && if_down_down->has_operation())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_operation());
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_up_down_basecaps_up.is_set || is_set(if_up_down_basecaps_up.yfilter)) leaf_name_data.push_back(if_up_down_basecaps_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-up-up")
    {
        if(if_up_up == nullptr)
        {
            if_up_up = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp>();
        }
        return if_up_up;
    }

    if(child_yang_name == "if-up-down")
    {
        if(if_up_down == nullptr)
        {
            if_up_down = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown>();
        }
        return if_up_down;
    }

    if(child_yang_name == "if-down-down")
    {
        if(if_down_down == nullptr)
        {
            if_down_down = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown>();
        }
        return if_down_down;
    }

    if(child_yang_name == "if-shutdown-down")
    {
        if(if_shutdown_down == nullptr)
        {
            if_shutdown_down = std::make_shared<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>();
        }
        return if_shutdown_down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_up_up != nullptr)
    {
        children["if-up-up"] = if_up_up;
    }

    if(if_up_down != nullptr)
    {
        children["if-up-down"] = if_up_down;
    }

    if(if_down_down != nullptr)
    {
        children["if-down-down"] = if_down_down;
    }

    if(if_shutdown_down != nullptr)
    {
        children["if-shutdown-down"] = if_shutdown_down;
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up = value;
        if_up_down_basecaps_up.value_namespace = name_space;
        if_up_down_basecaps_up.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-up-up" || name == "if-up-down" || name == "if-down-down" || name == "if-shutdown-down" || name == "if-up-down-basecaps-up")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::IfUpUp()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"},
    ip_unassigned{YType::uint32, "ip-unassigned"}
{

    yang_name = "if-up-up"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::~IfUpUp()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_data() const
{
    return ip_assigned.is_set
	|| ip_unnumbered.is_set
	|| ip_unassigned.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unnumbered" || name == "ip-unassigned")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::IfUpDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"},
    ip_unassigned{YType::uint32, "ip-unassigned"}
{

    yang_name = "if-up-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::~IfUpDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unnumbered.is_set
	|| ip_unassigned.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unnumbered" || name == "ip-unassigned")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::IfDownDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"},
    ip_unassigned{YType::uint32, "ip-unassigned"}
{

    yang_name = "if-down-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::~IfDownDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unnumbered.is_set
	|| ip_unassigned.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-down-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unnumbered" || name == "ip-unassigned")
        return true;
    return false;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::IfShutdownDown()
    :
    ip_assigned{YType::uint32, "ip-assigned"},
    ip_unnumbered{YType::uint32, "ip-unnumbered"},
    ip_unassigned{YType::uint32, "ip-unassigned"}
{

    yang_name = "if-shutdown-down"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::~IfShutdownDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unnumbered.is_set
	|| ip_unassigned.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_assigned.yfilter)
	|| ydk::is_set(ip_unnumbered.yfilter)
	|| ydk::is_set(ip_unassigned.yfilter);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-shutdown-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_assigned.is_set || is_set(ip_assigned.yfilter)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.yfilter)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.yfilter)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
        ip_assigned.value_namespace = name_space;
        ip_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
        ip_unnumbered.value_namespace = name_space;
        ip_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
        ip_unassigned.value_namespace = name_space;
        ip_unassigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned.yfilter = yfilter;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered.yfilter = yfilter;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned.yfilter = yfilter;
    }
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-assigned" || name == "ip-unnumbered" || name == "ip-unassigned")
        return true;
    return false;
}

const Enum::YLeaf Ipv6MaOperState::oper_up {1, "oper-up"};
const Enum::YLeaf Ipv6MaOperState::oper_down {2, "oper-down"};

const Enum::YLeaf Ipv6MaIfAddrState::active {1, "active"};
const Enum::YLeaf Ipv6MaIfAddrState::deprecated {2, "deprecated"};
const Enum::YLeaf Ipv6MaIfAddrState::duplicate {3, "duplicate"};
const Enum::YLeaf Ipv6MaIfAddrState::inaccessible {4, "inaccessible"};
const Enum::YLeaf Ipv6MaIfAddrState::tentative {5, "tentative"};

const Enum::YLeaf Ipv6MaIfLineState::down {1, "down"};
const Enum::YLeaf Ipv6MaIfLineState::up {2, "up"};
const Enum::YLeaf Ipv6MaIfLineState::unknown {3, "unknown"};
const Enum::YLeaf Ipv6MaIfLineState::error {4, "error"};


}
}

