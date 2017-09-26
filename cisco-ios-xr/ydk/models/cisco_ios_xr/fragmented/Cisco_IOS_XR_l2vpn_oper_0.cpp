
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

GenericInterfaceListV2::GenericInterfaceListV2()
    :
    active(std::make_shared<GenericInterfaceListV2::Active>())
	,nodes(std::make_shared<GenericInterfaceListV2::Nodes>())
	,standby(std::make_shared<GenericInterfaceListV2::Standby>())
{
    active->parent = this;
    nodes->parent = this;
    standby->parent = this;

    yang_name = "generic-interface-list-v2"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper"; is_top_level_class = true; has_list_ancestor = false;
}

GenericInterfaceListV2::~GenericInterfaceListV2()
{
}

bool GenericInterfaceListV2::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool GenericInterfaceListV2::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string GenericInterfaceListV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<GenericInterfaceListV2::Active>();
        }
        return active;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<GenericInterfaceListV2::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<GenericInterfaceListV2::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void GenericInterfaceListV2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GenericInterfaceListV2::clone_ptr() const
{
    return std::make_shared<GenericInterfaceListV2>();
}

std::string GenericInterfaceListV2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GenericInterfaceListV2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GenericInterfaceListV2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GenericInterfaceListV2::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GenericInterfaceListV2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "nodes" || name == "standby")
        return true;
    return false;
}

GenericInterfaceListV2::Active::Active()
    :
    generic_interfaces(std::make_shared<GenericInterfaceListV2::Active::GenericInterfaces>())
{
    generic_interfaces->parent = this;

    yang_name = "active"; yang_parent_name = "generic-interface-list-v2"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Active::~Active()
{
}

bool GenericInterfaceListV2::Active::has_data() const
{
    return (generic_interfaces !=  nullptr && generic_interfaces->has_data());
}

bool GenericInterfaceListV2::Active::has_operation() const
{
    return is_set(yfilter)
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation());
}

std::string GenericInterfaceListV2::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces == nullptr)
        {
            generic_interfaces = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaces>();
        }
        return generic_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_interfaces != nullptr)
    {
        children["generic-interfaces"] = generic_interfaces;
    }

    return children;
}

void GenericInterfaceListV2::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interfaces")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterfaces()
{

    yang_name = "generic-interfaces"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Active::GenericInterfaces::~GenericInterfaces()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Active::GenericInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/active/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::GenericInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Active::GenericInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface")
    {
        for(auto const & c : generic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Active::GenericInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Active::GenericInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Active::GenericInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Active::GenericInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::GenericInterface()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    is_provisioned{YType::boolean, "is-provisioned"},
    items{YType::uint32, "items"}
{

    yang_name = "generic-interface"; yang_parent_name = "generic-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::~GenericInterface()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_id.is_set
	|| interface_list_name.is_set
	|| is_fib_downloaded.is_set
	|| is_provisioned.is_set
	|| items.is_set;
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(items.yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/active/generic-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[generic-interface-list-name='" <<generic_interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-id" || name == "interface-list-name" || name == "is-fib-downloaded" || name == "is-provisioned" || name == "items")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "generic-interface-list-v2"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Nodes::~Nodes()
{
}

bool GenericInterfaceListV2::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceListV2::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    generic_interfaces(std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaces>())
{
    generic_interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Nodes::Node::~Node()
{
}

bool GenericInterfaceListV2::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_data());
}

bool GenericInterfaceListV2::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation());
}

std::string GenericInterfaceListV2::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces == nullptr)
        {
            generic_interfaces = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaces>();
        }
        return generic_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_interfaces != nullptr)
    {
        children["generic-interfaces"] = generic_interfaces;
    }

    return children;
}

void GenericInterfaceListV2::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interfaces" || name == "node-id")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterfaces()
{

    yang_name = "generic-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::~GenericInterfaces()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface")
    {
        for(auto const & c : generic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::GenericInterface()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    is_provisioned{YType::boolean, "is-provisioned"},
    items{YType::uint32, "items"}
{

    yang_name = "generic-interface"; yang_parent_name = "generic-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::~GenericInterface()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_id.is_set
	|| interface_list_name.is_set
	|| is_fib_downloaded.is_set
	|| is_provisioned.is_set
	|| items.is_set;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(items.yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[generic-interface-list-name='" <<generic_interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-id" || name == "interface-list-name" || name == "is-fib-downloaded" || name == "is-provisioned" || name == "items")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::Standby()
    :
    generic_interfaces(std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaces>())
{
    generic_interfaces->parent = this;

    yang_name = "standby"; yang_parent_name = "generic-interface-list-v2"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Standby::~Standby()
{
}

bool GenericInterfaceListV2::Standby::has_data() const
{
    return (generic_interfaces !=  nullptr && generic_interfaces->has_data());
}

bool GenericInterfaceListV2::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation());
}

std::string GenericInterfaceListV2::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces == nullptr)
        {
            generic_interfaces = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaces>();
        }
        return generic_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_interfaces != nullptr)
    {
        children["generic-interfaces"] = generic_interfaces;
    }

    return children;
}

void GenericInterfaceListV2::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interfaces")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterfaces()
{

    yang_name = "generic-interfaces"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::~GenericInterfaces()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::GenericInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Standby::GenericInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface")
    {
        for(auto const & c : generic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Standby::GenericInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Standby::GenericInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceListV2::Standby::GenericInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::GenericInterface()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    is_provisioned{YType::boolean, "is-provisioned"},
    items{YType::uint32, "items"}
{

    yang_name = "generic-interface"; yang_parent_name = "generic-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::~GenericInterface()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| interface_list_id.is_set
	|| interface_list_name.is_set
	|| is_fib_downloaded.is_set
	|| is_provisioned.is_set
	|| items.is_set;
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(items.yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2/standby/generic-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[generic-interface-list-name='" <<generic_interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-id" || name == "interface-list-name" || name == "is-fib-downloaded" || name == "is-provisioned" || name == "items")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

L2VpnForwarding::L2VpnForwarding()
    :
    nodes(std::make_shared<L2VpnForwarding::Nodes>())
{
    nodes->parent = this;

    yang_name = "l2vpn-forwarding"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper"; is_top_level_class = true; has_list_ancestor = false;
}

L2VpnForwarding::~L2VpnForwarding()
{
}

bool L2VpnForwarding::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool L2VpnForwarding::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string L2VpnForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<L2VpnForwarding::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void L2VpnForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> L2VpnForwarding::clone_ptr() const
{
    return std::make_shared<L2VpnForwarding>();
}

std::string L2VpnForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2VpnForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2VpnForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2VpnForwarding::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2VpnForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "l2vpn-forwarding"; is_top_level_class = false; has_list_ancestor = false;
}

L2VpnForwarding::Nodes::~Nodes()
{
}

bool L2VpnForwarding::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string L2VpnForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    l2fib_bridge_domain_names(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames>())
	,l2fib_bridge_domains(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains>())
	,l2fib_bridge_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts>())
	,l2fib_dhcp_binding_count(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount>())
	,l2fib_dhcp_binding_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails>())
	,l2fib_dhcp_binding_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries>())
	,l2fib_evpn_incl_m_cast_hardware_egresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses>())
	,l2fib_evpn_incl_m_cast_hardware_ingresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses>())
	,l2fib_evpn_incl_m_casts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts>())
	,l2fib_evpn_ip4macs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs>())
	,l2fib_evpn_ip6macs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs>())
	,l2fib_g8032(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032>())
	,l2fib_l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp>())
	,l2fib_mac_learning(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning>())
	,l2fib_main_interfaces(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces>())
	,l2fib_message_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary>())
	,l2fib_mmrp_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries>())
	,l2fib_mmrps(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps>())
	,l2fib_mon_sess_x_cons(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons>())
	,l2fib_mroute_ipv6s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S>())
	,l2fib_mroute_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts>())
	,l2fib_mroute_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries>())
	,l2fib_mroutes(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes>())
	,l2fib_mstp_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails>())
	,l2fib_mstp_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries>())
	,l2fib_nve_peers(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers>())
	,l2fib_p2mp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp>())
	,l2fib_pw_groups(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups>())
	,l2fib_pwhe_main_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts>())
	,l2fib_resource_availability(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability>())
	,l2fib_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary>())
	,l2fibmac_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails>())
	,l2fibmac_hardware_egresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses>())
	,l2fibmac_hardware_ingresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses>())
	,l2fibx_con_l2tpv2s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S>())
	,l2fibx_con_locals(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals>())
	,l2fibx_cons(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons>())
	,pbb_bmac_sa(std::make_shared<L2VpnForwarding::Nodes::Node::PbbBmacSa>())
{
    l2fib_bridge_domain_names->parent = this;
    l2fib_bridge_domains->parent = this;
    l2fib_bridge_ports->parent = this;
    l2fib_dhcp_binding_count->parent = this;
    l2fib_dhcp_binding_details->parent = this;
    l2fib_dhcp_binding_summaries->parent = this;
    l2fib_evpn_incl_m_cast_hardware_egresses->parent = this;
    l2fib_evpn_incl_m_cast_hardware_ingresses->parent = this;
    l2fib_evpn_incl_m_casts->parent = this;
    l2fib_evpn_ip4macs->parent = this;
    l2fib_evpn_ip6macs->parent = this;
    l2fib_g8032->parent = this;
    l2fib_l2tp->parent = this;
    l2fib_mac_learning->parent = this;
    l2fib_main_interfaces->parent = this;
    l2fib_message_summary->parent = this;
    l2fib_mmrp_summaries->parent = this;
    l2fib_mmrps->parent = this;
    l2fib_mon_sess_x_cons->parent = this;
    l2fib_mroute_ipv6s->parent = this;
    l2fib_mroute_ports->parent = this;
    l2fib_mroute_summaries->parent = this;
    l2fib_mroutes->parent = this;
    l2fib_mstp_details->parent = this;
    l2fib_mstp_summaries->parent = this;
    l2fib_nve_peers->parent = this;
    l2fib_p2mp->parent = this;
    l2fib_pw_groups->parent = this;
    l2fib_pwhe_main_ports->parent = this;
    l2fib_resource_availability->parent = this;
    l2fib_summary->parent = this;
    l2fibmac_details->parent = this;
    l2fibmac_hardware_egresses->parent = this;
    l2fibmac_hardware_ingresses->parent = this;
    l2fibx_con_l2tpv2s->parent = this;
    l2fibx_con_locals->parent = this;
    l2fibx_cons->parent = this;
    pbb_bmac_sa->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

L2VpnForwarding::Nodes::Node::~Node()
{
}

bool L2VpnForwarding::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_data())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_data())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_data())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_data())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_data())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_data())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_data())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_data())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_data())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_data())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_data())
	|| (l2fib_mac_learning !=  nullptr && l2fib_mac_learning->has_data())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_data())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_data())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_data())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_data())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_data())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_data())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_data())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_data())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_data())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_data())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_data())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_data())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_data())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_data())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_data())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_data())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_data())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_data())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_data())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_data())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_data())
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_data())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_data())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_data());
}

bool L2VpnForwarding::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_operation())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_operation())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_operation())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_operation())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_operation())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_operation())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_operation())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_operation())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_operation())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_operation())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_operation())
	|| (l2fib_mac_learning !=  nullptr && l2fib_mac_learning->has_operation())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_operation())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_operation())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_operation())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_operation())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_operation())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_operation())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_operation())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_operation())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_operation())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_operation())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_operation())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_operation())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_operation())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_operation())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_operation())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_operation())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_operation())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_operation())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_operation())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_operation())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_operation())
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_operation())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_operation())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2VpnForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain-names")
    {
        if(l2fib_bridge_domain_names == nullptr)
        {
            l2fib_bridge_domain_names = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames>();
        }
        return l2fib_bridge_domain_names;
    }

    if(child_yang_name == "l2fib-bridge-domains")
    {
        if(l2fib_bridge_domains == nullptr)
        {
            l2fib_bridge_domains = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains>();
        }
        return l2fib_bridge_domains;
    }

    if(child_yang_name == "l2fib-bridge-ports")
    {
        if(l2fib_bridge_ports == nullptr)
        {
            l2fib_bridge_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts>();
        }
        return l2fib_bridge_ports;
    }

    if(child_yang_name == "l2fib-dhcp-binding-count")
    {
        if(l2fib_dhcp_binding_count == nullptr)
        {
            l2fib_dhcp_binding_count = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount>();
        }
        return l2fib_dhcp_binding_count;
    }

    if(child_yang_name == "l2fib-dhcp-binding-details")
    {
        if(l2fib_dhcp_binding_details == nullptr)
        {
            l2fib_dhcp_binding_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails>();
        }
        return l2fib_dhcp_binding_details;
    }

    if(child_yang_name == "l2fib-dhcp-binding-summaries")
    {
        if(l2fib_dhcp_binding_summaries == nullptr)
        {
            l2fib_dhcp_binding_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries>();
        }
        return l2fib_dhcp_binding_summaries;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_egresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_egresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-ingresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_ingresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-casts")
    {
        if(l2fib_evpn_incl_m_casts == nullptr)
        {
            l2fib_evpn_incl_m_casts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts>();
        }
        return l2fib_evpn_incl_m_casts;
    }

    if(child_yang_name == "l2fib-evpn-ip4macs")
    {
        if(l2fib_evpn_ip4macs == nullptr)
        {
            l2fib_evpn_ip4macs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs>();
        }
        return l2fib_evpn_ip4macs;
    }

    if(child_yang_name == "l2fib-evpn-ip6macs")
    {
        if(l2fib_evpn_ip6macs == nullptr)
        {
            l2fib_evpn_ip6macs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs>();
        }
        return l2fib_evpn_ip6macs;
    }

    if(child_yang_name == "l2fib-g8032")
    {
        if(l2fib_g8032 == nullptr)
        {
            l2fib_g8032 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032>();
        }
        return l2fib_g8032;
    }

    if(child_yang_name == "l2fib-l2tp")
    {
        if(l2fib_l2tp == nullptr)
        {
            l2fib_l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp>();
        }
        return l2fib_l2tp;
    }

    if(child_yang_name == "l2fib-mac-learning")
    {
        if(l2fib_mac_learning == nullptr)
        {
            l2fib_mac_learning = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning>();
        }
        return l2fib_mac_learning;
    }

    if(child_yang_name == "l2fib-main-interfaces")
    {
        if(l2fib_main_interfaces == nullptr)
        {
            l2fib_main_interfaces = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces>();
        }
        return l2fib_main_interfaces;
    }

    if(child_yang_name == "l2fib-message-summary")
    {
        if(l2fib_message_summary == nullptr)
        {
            l2fib_message_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary>();
        }
        return l2fib_message_summary;
    }

    if(child_yang_name == "l2fib-mmrp-summaries")
    {
        if(l2fib_mmrp_summaries == nullptr)
        {
            l2fib_mmrp_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries>();
        }
        return l2fib_mmrp_summaries;
    }

    if(child_yang_name == "l2fib-mmrps")
    {
        if(l2fib_mmrps == nullptr)
        {
            l2fib_mmrps = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps>();
        }
        return l2fib_mmrps;
    }

    if(child_yang_name == "l2fib-mon-sess-x-cons")
    {
        if(l2fib_mon_sess_x_cons == nullptr)
        {
            l2fib_mon_sess_x_cons = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons>();
        }
        return l2fib_mon_sess_x_cons;
    }

    if(child_yang_name == "l2fib-mroute-ipv6s")
    {
        if(l2fib_mroute_ipv6s == nullptr)
        {
            l2fib_mroute_ipv6s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S>();
        }
        return l2fib_mroute_ipv6s;
    }

    if(child_yang_name == "l2fib-mroute-ports")
    {
        if(l2fib_mroute_ports == nullptr)
        {
            l2fib_mroute_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts>();
        }
        return l2fib_mroute_ports;
    }

    if(child_yang_name == "l2fib-mroute-summaries")
    {
        if(l2fib_mroute_summaries == nullptr)
        {
            l2fib_mroute_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries>();
        }
        return l2fib_mroute_summaries;
    }

    if(child_yang_name == "l2fib-mroutes")
    {
        if(l2fib_mroutes == nullptr)
        {
            l2fib_mroutes = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes>();
        }
        return l2fib_mroutes;
    }

    if(child_yang_name == "l2fib-mstp-details")
    {
        if(l2fib_mstp_details == nullptr)
        {
            l2fib_mstp_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails>();
        }
        return l2fib_mstp_details;
    }

    if(child_yang_name == "l2fib-mstp-summaries")
    {
        if(l2fib_mstp_summaries == nullptr)
        {
            l2fib_mstp_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries>();
        }
        return l2fib_mstp_summaries;
    }

    if(child_yang_name == "l2fib-nve-peers")
    {
        if(l2fib_nve_peers == nullptr)
        {
            l2fib_nve_peers = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers>();
        }
        return l2fib_nve_peers;
    }

    if(child_yang_name == "l2fib-p2mp")
    {
        if(l2fib_p2mp == nullptr)
        {
            l2fib_p2mp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp>();
        }
        return l2fib_p2mp;
    }

    if(child_yang_name == "l2fib-pw-groups")
    {
        if(l2fib_pw_groups == nullptr)
        {
            l2fib_pw_groups = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups>();
        }
        return l2fib_pw_groups;
    }

    if(child_yang_name == "l2fib-pwhe-main-ports")
    {
        if(l2fib_pwhe_main_ports == nullptr)
        {
            l2fib_pwhe_main_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts>();
        }
        return l2fib_pwhe_main_ports;
    }

    if(child_yang_name == "l2fib-resource-availability")
    {
        if(l2fib_resource_availability == nullptr)
        {
            l2fib_resource_availability = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability>();
        }
        return l2fib_resource_availability;
    }

    if(child_yang_name == "l2fib-summary")
    {
        if(l2fib_summary == nullptr)
        {
            l2fib_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary>();
        }
        return l2fib_summary;
    }

    if(child_yang_name == "l2fibmac-details")
    {
        if(l2fibmac_details == nullptr)
        {
            l2fibmac_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails>();
        }
        return l2fibmac_details;
    }

    if(child_yang_name == "l2fibmac-hardware-egresses")
    {
        if(l2fibmac_hardware_egresses == nullptr)
        {
            l2fibmac_hardware_egresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses>();
        }
        return l2fibmac_hardware_egresses;
    }

    if(child_yang_name == "l2fibmac-hardware-ingresses")
    {
        if(l2fibmac_hardware_ingresses == nullptr)
        {
            l2fibmac_hardware_ingresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses>();
        }
        return l2fibmac_hardware_ingresses;
    }

    if(child_yang_name == "l2fibx-con-l2tpv2s")
    {
        if(l2fibx_con_l2tpv2s == nullptr)
        {
            l2fibx_con_l2tpv2s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S>();
        }
        return l2fibx_con_l2tpv2s;
    }

    if(child_yang_name == "l2fibx-con-locals")
    {
        if(l2fibx_con_locals == nullptr)
        {
            l2fibx_con_locals = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals>();
        }
        return l2fibx_con_locals;
    }

    if(child_yang_name == "l2fibx-cons")
    {
        if(l2fibx_cons == nullptr)
        {
            l2fibx_cons = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons>();
        }
        return l2fibx_cons;
    }

    if(child_yang_name == "pbb-bmac-sa")
    {
        if(pbb_bmac_sa == nullptr)
        {
            pbb_bmac_sa = std::make_shared<L2VpnForwarding::Nodes::Node::PbbBmacSa>();
        }
        return pbb_bmac_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_bridge_domain_names != nullptr)
    {
        children["l2fib-bridge-domain-names"] = l2fib_bridge_domain_names;
    }

    if(l2fib_bridge_domains != nullptr)
    {
        children["l2fib-bridge-domains"] = l2fib_bridge_domains;
    }

    if(l2fib_bridge_ports != nullptr)
    {
        children["l2fib-bridge-ports"] = l2fib_bridge_ports;
    }

    if(l2fib_dhcp_binding_count != nullptr)
    {
        children["l2fib-dhcp-binding-count"] = l2fib_dhcp_binding_count;
    }

    if(l2fib_dhcp_binding_details != nullptr)
    {
        children["l2fib-dhcp-binding-details"] = l2fib_dhcp_binding_details;
    }

    if(l2fib_dhcp_binding_summaries != nullptr)
    {
        children["l2fib-dhcp-binding-summaries"] = l2fib_dhcp_binding_summaries;
    }

    if(l2fib_evpn_incl_m_cast_hardware_egresses != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-hardware-egresses"] = l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(l2fib_evpn_incl_m_cast_hardware_ingresses != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-hardware-ingresses"] = l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(l2fib_evpn_incl_m_casts != nullptr)
    {
        children["l2fib-evpn-incl-m-casts"] = l2fib_evpn_incl_m_casts;
    }

    if(l2fib_evpn_ip4macs != nullptr)
    {
        children["l2fib-evpn-ip4macs"] = l2fib_evpn_ip4macs;
    }

    if(l2fib_evpn_ip6macs != nullptr)
    {
        children["l2fib-evpn-ip6macs"] = l2fib_evpn_ip6macs;
    }

    if(l2fib_g8032 != nullptr)
    {
        children["l2fib-g8032"] = l2fib_g8032;
    }

    if(l2fib_l2tp != nullptr)
    {
        children["l2fib-l2tp"] = l2fib_l2tp;
    }

    if(l2fib_mac_learning != nullptr)
    {
        children["l2fib-mac-learning"] = l2fib_mac_learning;
    }

    if(l2fib_main_interfaces != nullptr)
    {
        children["l2fib-main-interfaces"] = l2fib_main_interfaces;
    }

    if(l2fib_message_summary != nullptr)
    {
        children["l2fib-message-summary"] = l2fib_message_summary;
    }

    if(l2fib_mmrp_summaries != nullptr)
    {
        children["l2fib-mmrp-summaries"] = l2fib_mmrp_summaries;
    }

    if(l2fib_mmrps != nullptr)
    {
        children["l2fib-mmrps"] = l2fib_mmrps;
    }

    if(l2fib_mon_sess_x_cons != nullptr)
    {
        children["l2fib-mon-sess-x-cons"] = l2fib_mon_sess_x_cons;
    }

    if(l2fib_mroute_ipv6s != nullptr)
    {
        children["l2fib-mroute-ipv6s"] = l2fib_mroute_ipv6s;
    }

    if(l2fib_mroute_ports != nullptr)
    {
        children["l2fib-mroute-ports"] = l2fib_mroute_ports;
    }

    if(l2fib_mroute_summaries != nullptr)
    {
        children["l2fib-mroute-summaries"] = l2fib_mroute_summaries;
    }

    if(l2fib_mroutes != nullptr)
    {
        children["l2fib-mroutes"] = l2fib_mroutes;
    }

    if(l2fib_mstp_details != nullptr)
    {
        children["l2fib-mstp-details"] = l2fib_mstp_details;
    }

    if(l2fib_mstp_summaries != nullptr)
    {
        children["l2fib-mstp-summaries"] = l2fib_mstp_summaries;
    }

    if(l2fib_nve_peers != nullptr)
    {
        children["l2fib-nve-peers"] = l2fib_nve_peers;
    }

    if(l2fib_p2mp != nullptr)
    {
        children["l2fib-p2mp"] = l2fib_p2mp;
    }

    if(l2fib_pw_groups != nullptr)
    {
        children["l2fib-pw-groups"] = l2fib_pw_groups;
    }

    if(l2fib_pwhe_main_ports != nullptr)
    {
        children["l2fib-pwhe-main-ports"] = l2fib_pwhe_main_ports;
    }

    if(l2fib_resource_availability != nullptr)
    {
        children["l2fib-resource-availability"] = l2fib_resource_availability;
    }

    if(l2fib_summary != nullptr)
    {
        children["l2fib-summary"] = l2fib_summary;
    }

    if(l2fibmac_details != nullptr)
    {
        children["l2fibmac-details"] = l2fibmac_details;
    }

    if(l2fibmac_hardware_egresses != nullptr)
    {
        children["l2fibmac-hardware-egresses"] = l2fibmac_hardware_egresses;
    }

    if(l2fibmac_hardware_ingresses != nullptr)
    {
        children["l2fibmac-hardware-ingresses"] = l2fibmac_hardware_ingresses;
    }

    if(l2fibx_con_l2tpv2s != nullptr)
    {
        children["l2fibx-con-l2tpv2s"] = l2fibx_con_l2tpv2s;
    }

    if(l2fibx_con_locals != nullptr)
    {
        children["l2fibx-con-locals"] = l2fibx_con_locals;
    }

    if(l2fibx_cons != nullptr)
    {
        children["l2fibx-cons"] = l2fibx_cons;
    }

    if(pbb_bmac_sa != nullptr)
    {
        children["pbb-bmac-sa"] = pbb_bmac_sa;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-domain-names" || name == "l2fib-bridge-domains" || name == "l2fib-bridge-ports" || name == "l2fib-dhcp-binding-count" || name == "l2fib-dhcp-binding-details" || name == "l2fib-dhcp-binding-summaries" || name == "l2fib-evpn-incl-m-cast-hardware-egresses" || name == "l2fib-evpn-incl-m-cast-hardware-ingresses" || name == "l2fib-evpn-incl-m-casts" || name == "l2fib-evpn-ip4macs" || name == "l2fib-evpn-ip6macs" || name == "l2fib-g8032" || name == "l2fib-l2tp" || name == "l2fib-mac-learning" || name == "l2fib-main-interfaces" || name == "l2fib-message-summary" || name == "l2fib-mmrp-summaries" || name == "l2fib-mmrps" || name == "l2fib-mon-sess-x-cons" || name == "l2fib-mroute-ipv6s" || name == "l2fib-mroute-ports" || name == "l2fib-mroute-summaries" || name == "l2fib-mroutes" || name == "l2fib-mstp-details" || name == "l2fib-mstp-summaries" || name == "l2fib-nve-peers" || name == "l2fib-p2mp" || name == "l2fib-pw-groups" || name == "l2fib-pwhe-main-ports" || name == "l2fib-resource-availability" || name == "l2fib-summary" || name == "l2fibmac-details" || name == "l2fibmac-hardware-egresses" || name == "l2fibmac-hardware-ingresses" || name == "l2fibx-con-l2tpv2s" || name == "l2fibx-con-locals" || name == "l2fibx-cons" || name == "pbb-bmac-sa" || name == "node-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainNames()
{

    yang_name = "l2fib-bridge-domain-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::~L2FibBridgeDomainNames()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain_name.size(); index++)
    {
        if(l2fib_bridge_domain_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain-name")
    {
        for(auto const & c : l2fib_bridge_domain_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName>();
        c->parent = this;
        l2fib_bridge_domain_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_domain_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-domain-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::L2FibBridgeDomainName()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    aging_time_out{YType::uint32, "aging-time-out"},
    bd_group_name{YType::str, "bd-group-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_name{YType::str, "bridge-name"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    flood_disabled{YType::boolean, "flood-disabled"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_shg{YType::uint32, "number-of-shg"},
    number_of_swmac{YType::uint32, "number-of-swmac"}
{

    yang_name = "l2fib-bridge-domain-name"; yang_parent_name = "l2fib-bridge-domain-names"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::~L2FibBridgeDomainName()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_data() const
{
    return admin_disabled.is_set
	|| aging_time_out.is_set
	|| bd_group_name.is_set
	|| bridge_id.is_set
	|| bridge_name.is_set
	|| bridge_port_count.is_set
	|| flood_disabled.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_port_down_flush_disabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| name.is_set
	|| number_of_hwmac.is_set
	|| number_of_shg.is_set
	|| number_of_swmac.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(aging_time_out.yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_name.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(flood_disabled.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number_of_hwmac.yfilter)
	|| ydk::is_set(number_of_shg.yfilter)
	|| ydk::is_set(number_of_swmac.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (aging_time_out.is_set || is_set(aging_time_out.yfilter)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());
    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.yfilter)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (flood_disabled.is_set || is_set(flood_disabled.yfilter)) leaf_name_data.push_back(flood_disabled.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.yfilter)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_shg.is_set || is_set(number_of_shg.yfilter)) leaf_name_data.push_back(number_of_shg.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.yfilter)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
        aging_time_out.value_namespace = name_space;
        aging_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
        bridge_name.value_namespace = name_space;
        bridge_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-disabled")
    {
        flood_disabled = value;
        flood_disabled.value_namespace = name_space;
        flood_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
        number_of_hwmac.value_namespace = name_space;
        number_of_hwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-shg")
    {
        number_of_shg = value;
        number_of_shg.value_namespace = name_space;
        number_of_shg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
        number_of_swmac.value_namespace = name_space;
        number_of_swmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "aging-time-out")
    {
        aging_time_out.yfilter = yfilter;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-name")
    {
        bridge_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "flood-disabled")
    {
        flood_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac.yfilter = yfilter;
    }
    if(value_path == "number-of-shg")
    {
        number_of_shg.yfilter = yfilter;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-disabled" || name == "aging-time-out" || name == "bd-group-name" || name == "bridge-id" || name == "bridge-name" || name == "bridge-port-count" || name == "flood-disabled" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-port-down-flush-disabled" || name == "msti" || name == "mtu" || name == "name" || name == "number-of-hwmac" || name == "number-of-shg" || name == "number-of-swmac")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomains()
{

    yang_name = "l2fib-bridge-domains"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::~L2FibBridgeDomains()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain.size(); index++)
    {
        if(l2fib_bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain.size(); index++)
    {
        if(l2fib_bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain")
    {
        for(auto const & c : l2fib_bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain>();
        c->parent = this;
        l2fib_bridge_domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-domain")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::L2FibBridgeDomain()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_name{YType::str, "bridge-name"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    bridge_type{YType::enumeration, "bridge-type"},
    learn_key{YType::uint8, "learn-key"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_swmac{YType::uint32, "number-of-swmac"},
    shg_count{YType::uint32, "shg-count"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base>())
	,bd_pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion>())
	,bvi_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo>())
	,oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper>())
	,p2mppw_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo>())
{
    base->parent = this;
    bd_pbb_union->parent = this;
    bvi_info->parent = this;
    oper->parent = this;
    p2mppw_info->parent = this;

    yang_name = "l2fib-bridge-domain"; yang_parent_name = "l2fib-bridge-domains"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::~L2FibBridgeDomain()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| bridge_name.is_set
	|| bridge_port_count.is_set
	|| bridge_type.is_set
	|| learn_key.is_set
	|| number_of_hwmac.is_set
	|| number_of_swmac.is_set
	|| shg_count.is_set
	|| (base !=  nullptr && base->has_data())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_data())
	|| (bvi_info !=  nullptr && bvi_info->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_name.yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(bridge_type.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| ydk::is_set(number_of_hwmac.yfilter)
	|| ydk::is_set(number_of_swmac.yfilter)
	|| ydk::is_set(shg_count.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_operation())
	|| (bvi_info !=  nullptr && bvi_info->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.yfilter)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (bridge_type.is_set || is_set(bridge_type.yfilter)) leaf_name_data.push_back(bridge_type.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.yfilter)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.yfilter)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());
    if (shg_count.is_set || is_set(shg_count.yfilter)) leaf_name_data.push_back(shg_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base>();
        }
        return base;
    }

    if(child_yang_name == "bd-pbb-union")
    {
        if(bd_pbb_union == nullptr)
        {
            bd_pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion>();
        }
        return bd_pbb_union;
    }

    if(child_yang_name == "bvi-info")
    {
        if(bvi_info == nullptr)
        {
            bvi_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo>();
        }
        return bvi_info;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mppw-info")
    {
        if(p2mppw_info == nullptr)
        {
            p2mppw_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo>();
        }
        return p2mppw_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(bd_pbb_union != nullptr)
    {
        children["bd-pbb-union"] = bd_pbb_union;
    }

    if(bvi_info != nullptr)
    {
        children["bvi-info"] = bvi_info;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    if(p2mppw_info != nullptr)
    {
        children["p2mppw-info"] = p2mppw_info;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
        bridge_name.value_namespace = name_space;
        bridge_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-type")
    {
        bridge_type = value;
        bridge_type.value_namespace = name_space;
        bridge_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
        number_of_hwmac.value_namespace = name_space;
        number_of_hwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
        number_of_swmac.value_namespace = name_space;
        number_of_swmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-count")
    {
        shg_count = value;
        shg_count.value_namespace = name_space;
        shg_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-name")
    {
        bridge_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "bridge-type")
    {
        bridge_type.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac.yfilter = yfilter;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac.yfilter = yfilter;
    }
    if(value_path == "shg-count")
    {
        shg_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bd-pbb-union" || name == "bvi-info" || name == "oper" || name == "p2mppw-info" || name == "bd-group-name" || name == "bd-name" || name == "bridge-id" || name == "bridge-name" || name == "bridge-port-count" || name == "bridge-type" || name == "learn-key" || name == "number-of-hwmac" || name == "number-of-swmac" || name == "shg-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::BdPbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge>())
{
    core->parent = this;
    edge->parent = this;

    yang_name = "bd-pbb-union"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::~BdPbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "edge" || name == "pbb-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::Core()
    :
    nber_edge_bd{YType::uint32, "nber-edge-bd"}
{

    yang_name = "core"; yang_parent_name = "bd-pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::has_data() const
{
    return nber_edge_bd.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nber_edge_bd.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nber_edge_bd.is_set || is_set(nber_edge_bd.yfilter)) leaf_name_data.push_back(nber_edge_bd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nber-edge-bd")
    {
        nber_edge_bd = value;
        nber_edge_bd.value_namespace = name_space;
        nber_edge_bd.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nber-edge-bd")
    {
        nber_edge_bd.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nber-edge-bd")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::Edge()
    :
    core_bd_name{YType::str, "core-bd-name"},
    i_sid{YType::uint32, "i-sid"},
    mirp_lite_rx{YType::uint64, "mirp-lite-rx"},
    mirp_lite_tx{YType::uint64, "mirp-lite-tx"}
{

    yang_name = "edge"; yang_parent_name = "bd-pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::has_data() const
{
    return core_bd_name.is_set
	|| i_sid.is_set
	|| mirp_lite_rx.is_set
	|| mirp_lite_tx.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core_bd_name.yfilter)
	|| ydk::is_set(i_sid.yfilter)
	|| ydk::is_set(mirp_lite_rx.yfilter)
	|| ydk::is_set(mirp_lite_tx.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_bd_name.is_set || is_set(core_bd_name.yfilter)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (i_sid.is_set || is_set(i_sid.yfilter)) leaf_name_data.push_back(i_sid.get_name_leafdata());
    if (mirp_lite_rx.is_set || is_set(mirp_lite_rx.yfilter)) leaf_name_data.push_back(mirp_lite_rx.get_name_leafdata());
    if (mirp_lite_tx.is_set || is_set(mirp_lite_tx.yfilter)) leaf_name_data.push_back(mirp_lite_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
        core_bd_name.value_namespace = name_space;
        core_bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "i-sid")
    {
        i_sid = value;
        i_sid.value_namespace = name_space;
        i_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-rx")
    {
        mirp_lite_rx = value;
        mirp_lite_rx.value_namespace = name_space;
        mirp_lite_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirp-lite-tx")
    {
        mirp_lite_tx = value;
        mirp_lite_tx.value_namespace = name_space;
        mirp_lite_tx.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core-bd-name")
    {
        core_bd_name.yfilter = yfilter;
    }
    if(value_path == "i-sid")
    {
        i_sid.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-rx")
    {
        mirp_lite_rx.yfilter = yfilter;
    }
    if(value_path == "mirp-lite-tx")
    {
        mirp_lite_tx.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-bd-name" || name == "i-sid" || name == "mirp-lite-rx" || name == "mirp-lite-tx")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::BviInfo()
    :
    bvi_ifh{YType::str, "bvi-ifh"},
    bvi_name{YType::str, "bvi-name"},
    bvi_shg_id{YType::uint32, "bvi-shg-id"},
    bvi_xid{YType::uint32, "bvi-xid"},
    irb_plat_data{YType::str, "irb-plat-data"},
    irb_plat_data_len{YType::uint32, "irb-plat-data-len"}
{

    yang_name = "bvi-info"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::~BviInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::has_data() const
{
    return bvi_ifh.is_set
	|| bvi_name.is_set
	|| bvi_shg_id.is_set
	|| bvi_xid.is_set
	|| irb_plat_data.is_set
	|| irb_plat_data_len.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvi_ifh.yfilter)
	|| ydk::is_set(bvi_name.yfilter)
	|| ydk::is_set(bvi_shg_id.yfilter)
	|| ydk::is_set(bvi_xid.yfilter)
	|| ydk::is_set(irb_plat_data.yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_ifh.is_set || is_set(bvi_ifh.yfilter)) leaf_name_data.push_back(bvi_ifh.get_name_leafdata());
    if (bvi_name.is_set || is_set(bvi_name.yfilter)) leaf_name_data.push_back(bvi_name.get_name_leafdata());
    if (bvi_shg_id.is_set || is_set(bvi_shg_id.yfilter)) leaf_name_data.push_back(bvi_shg_id.get_name_leafdata());
    if (bvi_xid.is_set || is_set(bvi_xid.yfilter)) leaf_name_data.push_back(bvi_xid.get_name_leafdata());
    if (irb_plat_data.is_set || is_set(irb_plat_data.yfilter)) leaf_name_data.push_back(irb_plat_data.get_name_leafdata());
    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvi-ifh")
    {
        bvi_ifh = value;
        bvi_ifh.value_namespace = name_space;
        bvi_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-name")
    {
        bvi_name = value;
        bvi_name.value_namespace = name_space;
        bvi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-shg-id")
    {
        bvi_shg_id = value;
        bvi_shg_id.value_namespace = name_space;
        bvi_shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-xid")
    {
        bvi_xid = value;
        bvi_xid.value_namespace = name_space;
        bvi_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data = value;
        irb_plat_data.value_namespace = name_space;
        irb_plat_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvi-ifh")
    {
        bvi_ifh.yfilter = yfilter;
    }
    if(value_path == "bvi-name")
    {
        bvi_name.yfilter = yfilter;
    }
    if(value_path == "bvi-shg-id")
    {
        bvi_shg_id.yfilter = yfilter;
    }
    if(value_path == "bvi-xid")
    {
        bvi_xid.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvi-ifh" || name == "bvi-name" || name == "bvi-shg-id" || name == "bvi-xid" || name == "irb-plat-data" || name == "irb-plat-data-len")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "admin-disabled" || name == "bvi-configured" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "flood-unknown-unicast-enabled" || name == "flooding-disabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "is-bvi-up" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-evpn-cw-disable" || name == "is-evpn-enabled" || name == "is-evpn-flow-label" || name == "is-igmp-snoop-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "is-p2mp-pw-enabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-vni-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "mac-aging-time" || name == "mac-aging-type" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification-type" || name == "mac-limit-threshold" || name == "mac-port-down-flush-disabled" || name == "mac-secure-action" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "msti" || name == "mtu" || name == "number-of-macs" || name == "nv-satellite-offload-ipv4-multicast-disabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-enabled" || name == "storm-control-multicast-rate-unit" || name == "storm-control-unicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "stp-participating" || name == "unknown-unicast-flooding-disabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::P2MppwInfo()
    :
    local_label{YType::uint32, "local-label"},
    lsm_id{YType::uint32, "lsm-id"},
    p2mp_te_interface{YType::str, "p2mp-te-interface"},
    parent_nh_bound{YType::boolean, "parent-nh-bound"},
    parent_nh_valid{YType::boolean, "parent-nh-valid"},
    ptree_type{YType::enumeration, "ptree-type"}
    	,
    parent_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop>())
{
    parent_next_hop->parent = this;

    yang_name = "p2mppw-info"; yang_parent_name = "l2fib-bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::~P2MppwInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::has_data() const
{
    return local_label.is_set
	|| lsm_id.is_set
	|| p2mp_te_interface.is_set
	|| parent_nh_bound.is_set
	|| parent_nh_valid.is_set
	|| ptree_type.is_set
	|| (parent_next_hop !=  nullptr && parent_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(p2mp_te_interface.yfilter)
	|| ydk::is_set(parent_nh_bound.yfilter)
	|| ydk::is_set(parent_nh_valid.yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| (parent_next_hop !=  nullptr && parent_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mppw-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_te_interface.is_set || is_set(p2mp_te_interface.yfilter)) leaf_name_data.push_back(p2mp_te_interface.get_name_leafdata());
    if (parent_nh_bound.is_set || is_set(parent_nh_bound.yfilter)) leaf_name_data.push_back(parent_nh_bound.get_name_leafdata());
    if (parent_nh_valid.is_set || is_set(parent_nh_valid.yfilter)) leaf_name_data.push_back(parent_nh_valid.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-next-hop")
    {
        if(parent_next_hop == nullptr)
        {
            parent_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop>();
        }
        return parent_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parent_next_hop != nullptr)
    {
        children["parent-next-hop"] = parent_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-te-interface")
    {
        p2mp_te_interface = value;
        p2mp_te_interface.value_namespace = name_space;
        p2mp_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-nh-bound")
    {
        parent_nh_bound = value;
        parent_nh_bound.value_namespace = name_space;
        parent_nh_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-nh-valid")
    {
        parent_nh_valid = value;
        parent_nh_valid.value_namespace = name_space;
        parent_nh_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-te-interface")
    {
        p2mp_te_interface.yfilter = yfilter;
    }
    if(value_path == "parent-nh-bound")
    {
        parent_nh_bound.yfilter = yfilter;
    }
    if(value_path == "parent-nh-valid")
    {
        parent_nh_valid.yfilter = yfilter;
    }
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-next-hop" || name == "local-label" || name == "lsm-id" || name == "p2mp-te-interface" || name == "parent-nh-bound" || name == "parent-nh-valid" || name == "ptree-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::ParentNextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base>())
{
    base->parent = this;

    yang_name = "parent-next-hop"; yang_parent_name = "p2mppw-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::~ParentNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "parent-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePorts()
{

    yang_name = "l2fib-bridge-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::~L2FibBridgePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_port.size(); index++)
    {
        if(l2fib_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-port")
    {
        for(auto const & c : l2fib_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort>();
        c->parent = this;
        l2fib_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-bridge-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::L2FibBridgePort()
    :
    aging_time_out{YType::uint32, "aging-time-out"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    group_name{YType::str, "group-name"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mtu{YType::uint32, "mtu"},
    number_of_hw_mac{YType::uint32, "number-of-hw-mac"},
    number_of_sw_mac{YType::uint32, "number-of-sw-mac"},
    shg_id{YType::uint32, "shg-id"},
    xc_id{YType::uint32, "xc-id"},
    xc_uint_id{YType::str, "xc-uint-id"}
    	,
    bridge_port_operational_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>())
{
    bridge_port_operational_info->parent = this;
    segment->parent = this;

    yang_name = "l2fib-bridge-port"; yang_parent_name = "l2fib-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::~L2FibBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_data() const
{
    return aging_time_out.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| flooding_disabled.is_set
	|| group_name.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mtu.is_set
	|| number_of_hw_mac.is_set
	|| number_of_sw_mac.is_set
	|| shg_id.is_set
	|| xc_id.is_set
	|| xc_uint_id.is_set
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time_out.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(number_of_hw_mac.yfilter)
	|| ydk::is_set(number_of_sw_mac.yfilter)
	|| ydk::is_set(shg_id.yfilter)
	|| ydk::is_set(xc_id.yfilter)
	|| ydk::is_set(xc_uint_id.yfilter)
	|| (bridge_port_operational_info !=  nullptr && bridge_port_operational_info->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time_out.is_set || is_set(aging_time_out.yfilter)) leaf_name_data.push_back(aging_time_out.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_hw_mac.is_set || is_set(number_of_hw_mac.yfilter)) leaf_name_data.push_back(number_of_hw_mac.get_name_leafdata());
    if (number_of_sw_mac.is_set || is_set(number_of_sw_mac.yfilter)) leaf_name_data.push_back(number_of_sw_mac.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.yfilter)) leaf_name_data.push_back(shg_id.get_name_leafdata());
    if (xc_id.is_set || is_set(xc_id.yfilter)) leaf_name_data.push_back(xc_id.get_name_leafdata());
    if (xc_uint_id.is_set || is_set(xc_uint_id.yfilter)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-port-operational-info")
    {
        if(bridge_port_operational_info == nullptr)
        {
            bridge_port_operational_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo>();
        }
        return bridge_port_operational_info;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_port_operational_info != nullptr)
    {
        children["bridge-port-operational-info"] = bridge_port_operational_info;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time-out")
    {
        aging_time_out = value;
        aging_time_out.value_namespace = name_space;
        aging_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-hw-mac")
    {
        number_of_hw_mac = value;
        number_of_hw_mac.value_namespace = name_space;
        number_of_hw_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sw-mac")
    {
        number_of_sw_mac = value;
        number_of_sw_mac.value_namespace = name_space;
        number_of_sw_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
        shg_id.value_namespace = name_space;
        shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-id")
    {
        xc_id = value;
        xc_id.value_namespace = name_space;
        xc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
        xc_uint_id.value_namespace = name_space;
        xc_uint_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time-out")
    {
        aging_time_out.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "number-of-hw-mac")
    {
        number_of_hw_mac.yfilter = yfilter;
    }
    if(value_path == "number-of-sw-mac")
    {
        number_of_sw_mac.yfilter = yfilter;
    }
    if(value_path == "shg-id")
    {
        shg_id.yfilter = yfilter;
    }
    if(value_path == "xc-id")
    {
        xc_id.yfilter = yfilter;
    }
    if(value_path == "xc-uint-id")
    {
        xc_uint_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-operational-info" || name == "segment" || name == "aging-time-out" || name == "bd-name" || name == "bridge-id" || name == "flooding-disabled" || name == "group-name" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-port-down-flush-disabled" || name == "mtu" || name == "number-of-hw-mac" || name == "number-of-sw-mac" || name == "shg-id" || name == "xc-id" || name == "xc-uint-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::BridgePortOperationalInfo()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "bridge-port-operational-info"; yang_parent_name = "l2fib-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::~BridgePortOperationalInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-operational-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{

    yang_name = "operational-information"; yang_parent_name = "bridge-port-operational-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "admin-disabled" || name == "bvi-configured" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "flood-unknown-unicast-enabled" || name == "flooding-disabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "is-bvi-up" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-evpn-cw-disable" || name == "is-evpn-enabled" || name == "is-evpn-flow-label" || name == "is-igmp-snoop-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "is-p2mp-pw-enabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-vni-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "mac-aging-time" || name == "mac-aging-type" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification-type" || name == "mac-limit-threshold" || name == "mac-port-down-flush-disabled" || name == "mac-secure-action" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "msti" || name == "mtu" || name == "number-of-macs" || name == "nv-satellite-offload-ipv4-multicast-disabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-enabled" || name == "storm-control-multicast-rate-unit" || name == "storm-control-unicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "stp-participating" || name == "unknown-unicast-flooding-disabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fib-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "actype" || name == "adjacency-address" || name == "adjacency-valid" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "bound" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "inter-working-mode" || name == "interface-handle" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "sub-interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        children["pbb-union"] = pbb_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "core-pbb-evpn-enabled" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>())
{
    core->parent = this;
    edge->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "edge" || name == "pbb-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(mac_configured.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-configured")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_address.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudo-wire" || name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "ac-id" || name == "active" || name == "backup-configured" || name == "bound" || name == "context" || name == "forward-class" || name == "global-id" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "next-hop-address" || name == "next-hop-valid" || name == "pseudo-wire-id-type" || name == "pw-flow-label-tx" || name == "pw-id" || name == "pw-load-balance-type" || name == "redundancy-role" || name == "sequence-resync-threshold" || name == "signal-capability-flags")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "active" || name == "backup-next-hop" || name == "backup-pseudo-wire-id" || name == "backup-pseudo-wire-id-type" || name == "bound" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "pw-flow-label-tx" || name == "redundancy-role")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;
    l2tp_ipv6_ts->parent = this;
    l2tpv2->parent = this;
    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp" || name == "l2tp-ipv6-ts" || name == "l2tpv2" || name == "mpls" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "path-mtu" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return local_address.is_set
	|| path_mtu.is_set
	|| remote_address.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "local-address" || name == "path-mtu" || name == "remote-address" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "secondary-cookie-high-value" || name == "secondary-cookie-low-value" || name == "secondary-cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    next_hop_address{YType::str, "next-hop-address"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    pw_flags{YType::uint8, "pw-flags"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    source_address{YType::str, "source-address"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return next_hop_address.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| pw_flags.is_set
	|| rem_udp_port.is_set
	|| source_address.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| xconnect_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "next-hop-address" || name == "path-mtu" || name == "protocol" || name == "pw-flags" || name == "rem-udp-port" || name == "source-address" || name == "tos-val" || name == "ttl" || name == "xconnect-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Vni()
    :
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    bound{YType::boolean, "bound"},
    encap{YType::uint32, "encap"},
    ingress_replication{YType::boolean, "ingress-replication"},
    mcastip{YType::str, "mcastip"},
    parent_if{YType::str, "parent-if"},
    source_vtep_if{YType::str, "source-vtep-if"},
    srcip{YType::str, "srcip"},
    udp_port{YType::uint32, "udp-port"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_data() const
{
    return any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| bound.is_set
	|| encap.is_set
	|| ingress_replication.is_set
	|| mcastip.is_set
	|| parent_if.is_set
	|| source_vtep_if.is_set
	|| srcip.is_set
	|| udp_port.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
        any_cast_ip.value_namespace = name_space;
        any_cast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
        anycast_mcast_ip.value_namespace = name_space;
        anycast_mcast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "bound" || name == "encap" || name == "ingress-replication" || name == "mcastip" || name == "parent-if" || name == "source-vtep-if" || name == "srcip" || name == "udp-port" || name == "vx-lan-mode")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::L2FibDhcpBindingCount()
    :
    bindings{YType::uint32, "bindings"}
{

    yang_name = "l2fib-dhcp-binding-count"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::~L2FibDhcpBindingCount()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::has_data() const
{
    return bindings.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bindings.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bindings.is_set || is_set(bindings.yfilter)) leaf_name_data.push_back(bindings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bindings")
    {
        bindings = value;
        bindings.value_namespace = name_space;
        bindings.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bindings")
    {
        bindings.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindings")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetails()
{

    yang_name = "l2fib-dhcp-binding-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::~L2FibDhcpBindingDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_detail.size(); index++)
    {
        if(l2fib_dhcp_binding_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_detail.size(); index++)
    {
        if(l2fib_dhcp_binding_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-dhcp-binding-detail")
    {
        for(auto const & c : l2fib_dhcp_binding_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail>();
        c->parent = this;
        l2fib_dhcp_binding_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_dhcp_binding_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-dhcp-binding-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::L2FibDhcpBindingDetail()
    :
    address{YType::str, "address"},
    neighbor_address{YType::str, "neighbor-address"},
    xcid{YType::str, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base>())
	,port(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port>())
{
    base->parent = this;
    port->parent = this;

    yang_name = "l2fib-dhcp-binding-detail"; yang_parent_name = "l2fib-dhcp-binding-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::~L2FibDhcpBindingDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::has_data() const
{
    return address.is_set
	|| neighbor_address.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base>();
        }
        return base;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "port" || name == "address" || name == "neighbor-address" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-dhcp-binding-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Port()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw>())
{
    ac->parent = this;
    pw->parent = this;

    yang_name = "port"; yang_parent_name = "l2fib-dhcp-binding-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::~Port()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{

    yang_name = "pw"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "pseudo-wire-id-type" || name == "pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummaries()
{

    yang_name = "l2fib-dhcp-binding-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::~L2FibDhcpBindingSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.size(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.size(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-dhcp-binding-summary")
    {
        for(auto const & c : l2fib_dhcp_binding_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary>();
        c->parent = this;
        l2fib_dhcp_binding_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_dhcp_binding_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-dhcp-binding-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::L2FibDhcpBindingSummary()
    :
    xcid{YType::str, "xcid"},
    bindings{YType::uint32, "bindings"}
    	,
    port(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port>())
{
    port->parent = this;

    yang_name = "l2fib-dhcp-binding-summary"; yang_parent_name = "l2fib-dhcp-binding-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::~L2FibDhcpBindingSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::has_data() const
{
    return xcid.is_set
	|| bindings.is_set
	|| (port !=  nullptr && port->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(bindings.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summary" <<"[xcid='" <<xcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bindings.is_set || is_set(bindings.yfilter)) leaf_name_data.push_back(bindings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bindings")
    {
        bindings = value;
        bindings.value_namespace = name_space;
        bindings.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "bindings")
    {
        bindings.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "xcid" || name == "bindings")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Port()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw>())
{
    ac->parent = this;
    pw->parent = this;

    yang_name = "port"; yang_parent_name = "l2fib-dhcp-binding-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::~Port()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "ac"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{

    yang_name = "pw"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "pseudo-wire-id-type" || name == "pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgresses()
{

    yang_name = "l2fib-evpn-incl-m-cast-hardware-egresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::~L2FibEvpnInclMCastHardwareEgresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egress")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_hardware_egress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_hardware_egress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_hardware_egress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-hardware-egress")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastHardwareEgress()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;
    mcast_replication_list->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-hardware-egress"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::~L2FibEvpnInclMCastHardwareEgress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egress" <<"[bd-name='" <<bd_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    if(mcast_replication_list != nullptr)
    {
        children["mcast-replication-list"] = mcast_replication_list;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-oles" || name == "mcast-replication-list" || name == "bd-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{

    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-ole")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "next-hop" || name == "next-hop-address" || name == "is-bound" || name == "next-hop-valid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-id" || name == "bridge-domain-name" || name == "is-bound" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngresses()
{

    yang_name = "l2fib-evpn-incl-m-cast-hardware-ingresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::~L2FibEvpnInclMCastHardwareIngresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_ingress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_ingress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-ingresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-ingress")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_hardware_ingress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_hardware_ingress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_hardware_ingress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-hardware-ingress")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastHardwareIngress()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;
    mcast_replication_list->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-hardware-ingress"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::~L2FibEvpnInclMCastHardwareIngress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-ingress" <<"[bd-name='" <<bd_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    if(mcast_replication_list != nullptr)
    {
        children["mcast-replication-list"] = mcast_replication_list;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-oles" || name == "mcast-replication-list" || name == "bd-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{

    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-ole")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "next-hop" || name == "next-hop-address" || name == "is-bound" || name == "next-hop-valid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-id" || name == "bridge-domain-name" || name == "is-bound" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCasts()
{

    yang_name = "l2fib-evpn-incl-m-casts"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::~L2FibEvpnInclMCasts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-casts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast>();
        c->parent = this;
        l2fib_evpn_incl_m_cast.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCast()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;
    mcast_replication_list->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast"; yang_parent_name = "l2fib-evpn-incl-m-casts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::~L2FibEvpnInclMCast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast" <<"[bd-name='" <<bd_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    if(mcast_replication_list != nullptr)
    {
        children["mcast-replication-list"] = mcast_replication_list;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-oles" || name == "mcast-replication-list" || name == "bd-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{

    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-ole")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "next-hop" || name == "next-hop-address" || name == "is-bound" || name == "next-hop-valid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{

    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-label" || name == "next-hop-ipv6-addr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"},
    xcid{YType::uint32, "xcid"}
{

    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-id" || name == "bridge-domain-name" || name == "is-bound" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Macs()
{

    yang_name = "l2fib-evpn-ip4macs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::~L2FibEvpnIp4Macs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.size(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.size(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip4mac")
    {
        for(auto const & c : l2fib_evpn_ip4mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac>();
        c->parent = this;
        l2fib_evpn_ip4mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_ip4mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-ip4mac")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::L2FibEvpnIp4Mac()
    :
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    bdid{YType::int32, "bdid"},
    bdid_xr{YType::uint32, "bdid-xr"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    is_local_xr{YType::boolean, "is-local-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"}
    	,
    ip_address_xr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip4mac"; yang_parent_name = "l2fib-evpn-ip4macs"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::~L2FibEvpnIp4Mac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::has_data() const
{
    return arp_nd_delete_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_sync_pending.is_set
	|| bdid.is_set
	|| bdid_xr.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| is_local_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp_nd_delete_pending.yfilter)
	|| ydk::is_set(arp_nd_probe_pending.yfilter)
	|| ydk::is_set(arp_nd_sync_pending.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(bdid_xr.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_local_xr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.yfilter)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.yfilter)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.yfilter)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.yfilter)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.yfilter)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_address_xr != nullptr)
    {
        children["ip-address-xr"] = ip_address_xr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
        arp_nd_delete_pending.value_namespace = name_space;
        arp_nd_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
        arp_nd_probe_pending.value_namespace = name_space;
        arp_nd_probe_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
        arp_nd_sync_pending.value_namespace = name_space;
        arp_nd_sync_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
        bdid_xr.value_namespace = name_space;
        bdid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
        is_local_xr.value_namespace = name_space;
        is_local_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address-xr" || name == "arp-nd-delete-pending" || name == "arp-nd-probe-pending" || name == "arp-nd-sync-pending" || name == "bdid" || name == "bdid-xr" || name == "ip-address" || name == "is-local" || name == "is-local-xr" || name == "mac-address" || name == "mac-address-xr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip4mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::~IpAddressXr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Macs()
{

    yang_name = "l2fib-evpn-ip6macs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::~L2FibEvpnIp6Macs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.size(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.size(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip6mac")
    {
        for(auto const & c : l2fib_evpn_ip6mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac>();
        c->parent = this;
        l2fib_evpn_ip6mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_ip6mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-ip6mac")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::L2FibEvpnIp6Mac()
    :
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    bdid{YType::int32, "bdid"},
    bdid_xr{YType::uint32, "bdid-xr"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    is_local_xr{YType::boolean, "is-local-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"}
    	,
    ip_address_xr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip6mac"; yang_parent_name = "l2fib-evpn-ip6macs"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::~L2FibEvpnIp6Mac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::has_data() const
{
    return arp_nd_delete_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_sync_pending.is_set
	|| bdid.is_set
	|| bdid_xr.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| is_local_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp_nd_delete_pending.yfilter)
	|| ydk::is_set(arp_nd_probe_pending.yfilter)
	|| ydk::is_set(arp_nd_sync_pending.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(bdid_xr.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_local_xr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.yfilter)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.yfilter)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.yfilter)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.yfilter)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.yfilter)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_address_xr != nullptr)
    {
        children["ip-address-xr"] = ip_address_xr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
        arp_nd_delete_pending.value_namespace = name_space;
        arp_nd_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
        arp_nd_probe_pending.value_namespace = name_space;
        arp_nd_probe_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
        arp_nd_sync_pending.value_namespace = name_space;
        arp_nd_sync_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
        bdid_xr.value_namespace = name_space;
        bdid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
        is_local_xr.value_namespace = name_space;
        is_local_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address-xr" || name == "arp-nd-delete-pending" || name == "arp-nd-probe-pending" || name == "arp-nd-sync-pending" || name == "bdid" || name == "bdid-xr" || name == "ip-address" || name == "is-local" || name == "is-local-xr" || name == "mac-address" || name == "mac-address-xr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip6mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::~IpAddressXr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032()
    :
    l2fib_g8032_rings(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>())
{
    l2fib_g8032_rings->parent = this;

    yang_name = "l2fib-g8032"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::~L2FibG8032()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_data() const
{
    return (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_operation() const
{
    return is_set(yfilter)
	|| (l2fib_g8032_rings !=  nullptr && l2fib_g8032_rings->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-rings")
    {
        if(l2fib_g8032_rings == nullptr)
        {
            l2fib_g8032_rings = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings>();
        }
        return l2fib_g8032_rings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_g8032_rings != nullptr)
    {
        children["l2fib-g8032-rings"] = l2fib_g8032_rings;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-rings")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Rings()
{

    yang_name = "l2fib-g8032-rings"; yang_parent_name = "l2fib-g8032"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::~L2FibG8032Rings()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring.size(); index++)
    {
        if(l2fib_g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring")
    {
        for(auto const & c : l2fib_g8032_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring>();
        c->parent = this;
        l2fib_g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032Ring()
    :
    ring_name{YType::str, "ring-name"}
    	,
    l2fib_g8032_ring_detail(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>())
	,l2fib_g8032_ring_instance_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>())
	,l2fib_g8032_ring_instance_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>())
	,l2fib_g8032_ring_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>())
{
    l2fib_g8032_ring_detail->parent = this;
    l2fib_g8032_ring_instance_details->parent = this;
    l2fib_g8032_ring_instance_summaries->parent = this;
    l2fib_g8032_ring_summary->parent = this;

    yang_name = "l2fib-g8032-ring"; yang_parent_name = "l2fib-g8032-rings"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::~L2FibG8032Ring()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_data() const
{
    return ring_name.is_set
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_data())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_data())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_data())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| (l2fib_g8032_ring_detail !=  nullptr && l2fib_g8032_ring_detail->has_operation())
	|| (l2fib_g8032_ring_instance_details !=  nullptr && l2fib_g8032_ring_instance_details->has_operation())
	|| (l2fib_g8032_ring_instance_summaries !=  nullptr && l2fib_g8032_ring_instance_summaries->has_operation())
	|| (l2fib_g8032_ring_summary !=  nullptr && l2fib_g8032_ring_summary->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring" <<"[ring-name='" <<ring_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-detail")
    {
        if(l2fib_g8032_ring_detail == nullptr)
        {
            l2fib_g8032_ring_detail = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail>();
        }
        return l2fib_g8032_ring_detail;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-details")
    {
        if(l2fib_g8032_ring_instance_details == nullptr)
        {
            l2fib_g8032_ring_instance_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails>();
        }
        return l2fib_g8032_ring_instance_details;
    }

    if(child_yang_name == "l2fib-g8032-ring-instance-summaries")
    {
        if(l2fib_g8032_ring_instance_summaries == nullptr)
        {
            l2fib_g8032_ring_instance_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries>();
        }
        return l2fib_g8032_ring_instance_summaries;
    }

    if(child_yang_name == "l2fib-g8032-ring-summary")
    {
        if(l2fib_g8032_ring_summary == nullptr)
        {
            l2fib_g8032_ring_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary>();
        }
        return l2fib_g8032_ring_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_g8032_ring_detail != nullptr)
    {
        children["l2fib-g8032-ring-detail"] = l2fib_g8032_ring_detail;
    }

    if(l2fib_g8032_ring_instance_details != nullptr)
    {
        children["l2fib-g8032-ring-instance-details"] = l2fib_g8032_ring_instance_details;
    }

    if(l2fib_g8032_ring_instance_summaries != nullptr)
    {
        children["l2fib-g8032-ring-instance-summaries"] = l2fib_g8032_ring_instance_summaries;
    }

    if(l2fib_g8032_ring_summary != nullptr)
    {
        children["l2fib-g8032-ring-summary"] = l2fib_g8032_ring_summary;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-detail" || name == "l2fib-g8032-ring-instance-details" || name == "l2fib-g8032-ring-instance-summaries" || name == "l2fib-g8032-ring-summary" || name == "ring-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::L2FibG8032RingDetail()
    :
    is_open_ring{YType::boolean, "is-open-ring"},
    monitor0{YType::str, "monitor0"},
    monitor1{YType::str, "monitor1"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"}
{

    yang_name = "l2fib-g8032-ring-detail"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::~L2FibG8032RingDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_data() const
{
    return is_open_ring.is_set
	|| monitor0.is_set
	|| monitor1.is_set
	|| port0.is_set
	|| port1.is_set
	|| ring_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_open_ring.yfilter)
	|| ydk::is_set(monitor0.yfilter)
	|| ydk::is_set(monitor1.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(ring_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_open_ring.is_set || is_set(is_open_ring.yfilter)) leaf_name_data.push_back(is_open_ring.get_name_leafdata());
    if (monitor0.is_set || is_set(monitor0.yfilter)) leaf_name_data.push_back(monitor0.get_name_leafdata());
    if (monitor1.is_set || is_set(monitor1.yfilter)) leaf_name_data.push_back(monitor1.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-open-ring")
    {
        is_open_ring = value;
        is_open_ring.value_namespace = name_space;
        is_open_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor0")
    {
        monitor0 = value;
        monitor0.value_namespace = name_space;
        monitor0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor1")
    {
        monitor1 = value;
        monitor1.value_namespace = name_space;
        monitor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-open-ring")
    {
        is_open_ring.yfilter = yfilter;
    }
    if(value_path == "monitor0")
    {
        monitor0.yfilter = yfilter;
    }
    if(value_path == "monitor1")
    {
        monitor1.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-open-ring" || name == "monitor0" || name == "monitor1" || name == "port0" || name == "port1" || name == "ring-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetails()
{

    yang_name = "l2fib-g8032-ring-instance-details"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::~L2FibG8032RingInstanceDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_detail.size(); index++)
    {
        if(l2fib_g8032_ring_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-detail")
    {
        for(auto const & c : l2fib_g8032_ring_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail>();
        c->parent = this;
        l2fib_g8032_ring_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring_instance_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-instance-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::L2FibG8032RingInstanceDetail()
    :
    instance{YType::int32, "instance"},
    aps_channel_level{YType::uint32, "aps-channel-level"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    aps_port_status0{YType::enumeration, "aps-port-status0"},
    aps_port_status1{YType::enumeration, "aps-port-status1"},
    ring_instance{YType::uint32, "ring-instance"},
    ring_profile{YType::str, "ring-profile"},
    rpl{YType::enumeration, "rpl"},
    vlan_ids{YType::str, "vlan-ids"}
{

    yang_name = "l2fib-g8032-ring-instance-detail"; yang_parent_name = "l2fib-g8032-ring-instance-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::~L2FibG8032RingInstanceDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_data() const
{
    return instance.is_set
	|| aps_channel_level.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| aps_port_status0.is_set
	|| aps_port_status1.is_set
	|| ring_instance.is_set
	|| ring_profile.is_set
	|| rpl.is_set
	|| vlan_ids.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(aps_channel_level.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(aps_port_status0.yfilter)
	|| ydk::is_set(aps_port_status1.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(ring_profile.yfilter)
	|| ydk::is_set(rpl.yfilter)
	|| ydk::is_set(vlan_ids.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-detail" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_channel_level.is_set || is_set(aps_channel_level.yfilter)) leaf_name_data.push_back(aps_channel_level.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (aps_port_status0.is_set || is_set(aps_port_status0.yfilter)) leaf_name_data.push_back(aps_port_status0.get_name_leafdata());
    if (aps_port_status1.is_set || is_set(aps_port_status1.yfilter)) leaf_name_data.push_back(aps_port_status1.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (ring_profile.is_set || is_set(ring_profile.yfilter)) leaf_name_data.push_back(ring_profile.get_name_leafdata());
    if (rpl.is_set || is_set(rpl.yfilter)) leaf_name_data.push_back(rpl.get_name_leafdata());
    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level = value;
        aps_channel_level.value_namespace = name_space;
        aps_channel_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port-status0")
    {
        aps_port_status0 = value;
        aps_port_status0.value_namespace = name_space;
        aps_port_status0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port-status1")
    {
        aps_port_status1 = value;
        aps_port_status1.value_namespace = name_space;
        aps_port_status1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-profile")
    {
        ring_profile = value;
        ring_profile.value_namespace = name_space;
        ring_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl")
    {
        rpl = value;
        rpl.value_namespace = name_space;
        rpl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
    if(value_path == "aps-port-status0")
    {
        aps_port_status0.yfilter = yfilter;
    }
    if(value_path == "aps-port-status1")
    {
        aps_port_status1.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
    if(value_path == "ring-profile")
    {
        ring_profile.yfilter = yfilter;
    }
    if(value_path == "rpl")
    {
        rpl.yfilter = yfilter;
    }
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "aps-channel-level" || name == "aps-port0" || name == "aps-port1" || name == "aps-port-status0" || name == "aps-port-status1" || name == "ring-instance" || name == "ring-profile" || name == "rpl" || name == "vlan-ids")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummaries()
{

    yang_name = "l2fib-g8032-ring-instance-summaries"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::~L2FibG8032RingInstanceSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_g8032_ring_instance_summary.size(); index++)
    {
        if(l2fib_g8032_ring_instance_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-g8032-ring-instance-summary")
    {
        for(auto const & c : l2fib_g8032_ring_instance_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary>();
        c->parent = this;
        l2fib_g8032_ring_instance_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_g8032_ring_instance_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-g8032-ring-instance-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::L2FibG8032RingInstanceSummary()
    :
    instance{YType::int32, "instance"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    ring_instance{YType::uint32, "ring-instance"}
{

    yang_name = "l2fib-g8032-ring-instance-summary"; yang_parent_name = "l2fib-g8032-ring-instance-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::~L2FibG8032RingInstanceSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_data() const
{
    return instance.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| ring_instance.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(ring_instance.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-instance-summary" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "aps-port0" || name == "aps-port1" || name == "ring-instance")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::L2FibG8032RingSummary()
    :
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"}
{

    yang_name = "l2fib-g8032-ring-summary"; yang_parent_name = "l2fib-g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::~L2FibG8032RingSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_data() const
{
    return port0.is_set
	|| port1.is_set
	|| ring_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(ring_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-g8032-ring-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port0" || name == "port1" || name == "ring-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2FibL2Tp()
    :
    l2tpv2_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>())
	,l2tpv3_sessions(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>())
{
    l2tpv2_sessions->parent = this;
    l2tpv3_sessions->parent = this;

    yang_name = "l2fib-l2tp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::~L2FibL2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_data() const
{
    return (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_data())
	|| (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_operation() const
{
    return is_set(yfilter)
	|| (l2tpv2_sessions !=  nullptr && l2tpv2_sessions->has_operation())
	|| (l2tpv3_sessions !=  nullptr && l2tpv3_sessions->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv2-sessions")
    {
        if(l2tpv2_sessions == nullptr)
        {
            l2tpv2_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions>();
        }
        return l2tpv2_sessions;
    }

    if(child_yang_name == "l2tpv3-sessions")
    {
        if(l2tpv3_sessions == nullptr)
        {
            l2tpv3_sessions = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions>();
        }
        return l2tpv3_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tpv2_sessions != nullptr)
    {
        children["l2tpv2-sessions"] = l2tpv2_sessions;
    }

    if(l2tpv3_sessions != nullptr)
    {
        children["l2tpv3-sessions"] = l2tpv3_sessions;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv2-sessions" || name == "l2tpv3-sessions")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Sessions()
{

    yang_name = "l2tpv2-sessions"; yang_parent_name = "l2fib-l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::~L2Tpv2Sessions()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_data() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_operation() const
{
    for (std::size_t index=0; index<l2tpv2_session.size(); index++)
    {
        if(l2tpv2_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv2-session")
    {
        for(auto const & c : l2tpv2_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session>();
        c->parent = this;
        l2tpv2_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2tpv2_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv2-session")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::L2Tpv2Session()
    :
    bound{YType::boolean, "bound"},
    interface_handle{YType::str, "interface-handle"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_id{YType::int32, "session-id"},
    session_id_xr{YType::uint32, "session-id-xr"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    sub_interface_name{YType::str, "sub-interface-name"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv2-session"; yang_parent_name = "l2tpv2-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::~L2Tpv2Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_data() const
{
    return bound.is_set
	|| interface_handle.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_id.is_set
	|| session_id_xr.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_interface_name.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ipv4_table_id.yfilter)
	|| ydk::is_set(ipv6_table_id.yfilter)
	|| ydk::is_set(nhop_ip_addr.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_id_xr.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(sub_interface_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.yfilter)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.yfilter)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.yfilter)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.yfilter)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.yfilter)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
        ipv4_table_id.value_namespace = name_space;
        ipv4_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
        ipv6_table_id.value_namespace = name_space;
        ipv6_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
        nhop_ip_addr.value_namespace = name_space;
        nhop_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
        session_id_xr.value_namespace = name_space;
        session_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
        sub_interface_name.value_namespace = name_space;
        sub_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id.yfilter = yfilter;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "interface-handle" || name == "ipv4-table-id" || name == "ipv6-table-id" || name == "nhop-ip-addr" || name == "session-id" || name == "session-id-xr" || name == "session-type" || name == "source-address" || name == "sub-interface-name" || name == "tunnel-id" || name == "tunnel-id-xr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2tpv2-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Sessions()
{

    yang_name = "l2tpv3-sessions"; yang_parent_name = "l2fib-l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::~L2Tpv3Sessions()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_data() const
{
    for (std::size_t index=0; index<l2tpv3_session.size(); index++)
    {
        if(l2tpv3_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_operation() const
{
    for (std::size_t index=0; index<l2tpv3_session.size(); index++)
    {
        if(l2tpv3_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3-session")
    {
        for(auto const & c : l2tpv3_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session>();
        c->parent = this;
        l2tpv3_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2tpv3_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3-session")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::L2Tpv3Session()
    :
    session_id{YType::int32, "session-id"},
    bound{YType::boolean, "bound"},
    interface_handle{YType::str, "interface-handle"},
    ipv4_table_id{YType::uint32, "ipv4-table-id"},
    ipv6_table_id{YType::uint32, "ipv6-table-id"},
    nhop_ip_addr{YType::str, "nhop-ip-addr"},
    session_id_xr{YType::uint32, "session-id-xr"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    sub_interface_name{YType::str, "sub-interface-name"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>())
{
    base->parent = this;

    yang_name = "l2tpv3-session"; yang_parent_name = "l2tpv3-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::~L2Tpv3Session()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_data() const
{
    return session_id.is_set
	|| bound.is_set
	|| interface_handle.is_set
	|| ipv4_table_id.is_set
	|| ipv6_table_id.is_set
	|| nhop_ip_addr.is_set
	|| session_id_xr.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_interface_name.is_set
	|| tunnel_id_xr.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ipv4_table_id.yfilter)
	|| ydk::is_set(ipv6_table_id.yfilter)
	|| ydk::is_set(nhop_ip_addr.yfilter)
	|| ydk::is_set(session_id_xr.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(sub_interface_name.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-session" <<"[session-id='" <<session_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ipv4_table_id.is_set || is_set(ipv4_table_id.yfilter)) leaf_name_data.push_back(ipv4_table_id.get_name_leafdata());
    if (ipv6_table_id.is_set || is_set(ipv6_table_id.yfilter)) leaf_name_data.push_back(ipv6_table_id.get_name_leafdata());
    if (nhop_ip_addr.is_set || is_set(nhop_ip_addr.yfilter)) leaf_name_data.push_back(nhop_ip_addr.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.yfilter)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_interface_name.is_set || is_set(sub_interface_name.yfilter)) leaf_name_data.push_back(sub_interface_name.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id = value;
        ipv4_table_id.value_namespace = name_space;
        ipv4_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id = value;
        ipv6_table_id.value_namespace = name_space;
        ipv6_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr = value;
        nhop_ip_addr.value_namespace = name_space;
        nhop_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
        session_id_xr.value_namespace = name_space;
        session_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name = value;
        sub_interface_name.value_namespace = name_space;
        sub_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ipv4-table-id")
    {
        ipv4_table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-table-id")
    {
        ipv6_table_id.yfilter = yfilter;
    }
    if(value_path == "nhop-ip-addr")
    {
        nhop_ip_addr.yfilter = yfilter;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "sub-interface-name")
    {
        sub_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "session-id" || name == "bound" || name == "interface-handle" || name == "ipv4-table-id" || name == "ipv6-table-id" || name == "nhop-ip-addr" || name == "session-id-xr" || name == "session-type" || name == "source-address" || name == "sub-interface-name" || name == "tunnel-id-xr")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2tpv3-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearning()
    :
    l2fib_mac_learning_mac_ipv4s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S>())
	,l2fib_mac_learning_mac_ipv6s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S>())
	,l2fib_mac_learning_macs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs>())
{
    l2fib_mac_learning_mac_ipv4s->parent = this;
    l2fib_mac_learning_mac_ipv6s->parent = this;
    l2fib_mac_learning_macs->parent = this;

    yang_name = "l2fib-mac-learning"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::~L2FibMacLearning()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::has_data() const
{
    return (l2fib_mac_learning_mac_ipv4s !=  nullptr && l2fib_mac_learning_mac_ipv4s->has_data())
	|| (l2fib_mac_learning_mac_ipv6s !=  nullptr && l2fib_mac_learning_mac_ipv6s->has_data())
	|| (l2fib_mac_learning_macs !=  nullptr && l2fib_mac_learning_macs->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::has_operation() const
{
    return is_set(yfilter)
	|| (l2fib_mac_learning_mac_ipv4s !=  nullptr && l2fib_mac_learning_mac_ipv4s->has_operation())
	|| (l2fib_mac_learning_mac_ipv6s !=  nullptr && l2fib_mac_learning_mac_ipv6s->has_operation())
	|| (l2fib_mac_learning_macs !=  nullptr && l2fib_mac_learning_macs->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac-ipv4s")
    {
        if(l2fib_mac_learning_mac_ipv4s == nullptr)
        {
            l2fib_mac_learning_mac_ipv4s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S>();
        }
        return l2fib_mac_learning_mac_ipv4s;
    }

    if(child_yang_name == "l2fib-mac-learning-mac-ipv6s")
    {
        if(l2fib_mac_learning_mac_ipv6s == nullptr)
        {
            l2fib_mac_learning_mac_ipv6s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S>();
        }
        return l2fib_mac_learning_mac_ipv6s;
    }

    if(child_yang_name == "l2fib-mac-learning-macs")
    {
        if(l2fib_mac_learning_macs == nullptr)
        {
            l2fib_mac_learning_macs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs>();
        }
        return l2fib_mac_learning_macs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_mac_learning_mac_ipv4s != nullptr)
    {
        children["l2fib-mac-learning-mac-ipv4s"] = l2fib_mac_learning_mac_ipv4s;
    }

    if(l2fib_mac_learning_mac_ipv6s != nullptr)
    {
        children["l2fib-mac-learning-mac-ipv6s"] = l2fib_mac_learning_mac_ipv6s;
    }

    if(l2fib_mac_learning_macs != nullptr)
    {
        children["l2fib-mac-learning-macs"] = l2fib_mac_learning_macs;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac-ipv4s" || name == "l2fib-mac-learning-mac-ipv6s" || name == "l2fib-mac-learning-macs")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4S()
{

    yang_name = "l2fib-mac-learning-mac-ipv4s"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::~L2FibMacLearningMacIpv4S()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::has_data() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv4.size(); index++)
    {
        if(l2fib_mac_learning_mac_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv4.size(); index++)
    {
        if(l2fib_mac_learning_mac_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac-ipv4")
    {
        for(auto const & c : l2fib_mac_learning_mac_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4>();
        c->parent = this;
        l2fib_mac_learning_mac_ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mac_learning_mac_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac-ipv4")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::L2FibMacLearningMacIpv4()
    :
    address{YType::str, "address"},
    bdid{YType::int32, "bdid"},
    element_type{YType::uint8, "element-type"},
    generation{YType::uint8, "generation"},
    interface_handle{YType::str, "interface-handle"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    xcid{YType::uint32, "xcid"}
    	,
    addr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr>())
	,nhaddr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac-ipv4"; yang_parent_name = "l2fib-mac-learning-mac-ipv4s"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::~L2FibMacLearningMacIpv4()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::has_data() const
{
    return address.is_set
	|| bdid.is_set
	|| element_type.is_set
	|| generation.is_set
	|| interface_handle.is_set
	|| interface_handle_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| xcid.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        children["nhaddr"] = nhaddr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "address" || name == "bdid" || name == "element-type" || name == "generation" || name == "interface-handle" || name == "interface-handle-xr" || name == "mac-address" || name == "mac-address-xr" || name == "node-id" || name == "topology-id" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::~Addr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::~Nhaddr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6S()
{

    yang_name = "l2fib-mac-learning-mac-ipv6s"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::~L2FibMacLearningMacIpv6S()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::has_data() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv6.size(); index++)
    {
        if(l2fib_mac_learning_mac_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv6.size(); index++)
    {
        if(l2fib_mac_learning_mac_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac-ipv6")
    {
        for(auto const & c : l2fib_mac_learning_mac_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6>();
        c->parent = this;
        l2fib_mac_learning_mac_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mac_learning_mac_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac-ipv6")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::L2FibMacLearningMacIpv6()
    :
    address{YType::str, "address"},
    bdid{YType::int32, "bdid"},
    element_type{YType::uint8, "element-type"},
    generation{YType::uint8, "generation"},
    interface_handle{YType::str, "interface-handle"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    xcid{YType::uint32, "xcid"}
    	,
    addr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr>())
	,nhaddr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac-ipv6"; yang_parent_name = "l2fib-mac-learning-mac-ipv6s"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::~L2FibMacLearningMacIpv6()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::has_data() const
{
    return address.is_set
	|| bdid.is_set
	|| element_type.is_set
	|| generation.is_set
	|| interface_handle.is_set
	|| interface_handle_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| xcid.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        children["nhaddr"] = nhaddr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "address" || name == "bdid" || name == "element-type" || name == "generation" || name == "interface-handle" || name == "interface-handle-xr" || name == "mac-address" || name == "mac-address-xr" || name == "node-id" || name == "topology-id" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::~Addr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::~Nhaddr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMacs()
{

    yang_name = "l2fib-mac-learning-macs"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::~L2FibMacLearningMacs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::has_data() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac.size(); index++)
    {
        if(l2fib_mac_learning_mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac.size(); index++)
    {
        if(l2fib_mac_learning_mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac")
    {
        for(auto const & c : l2fib_mac_learning_mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac>();
        c->parent = this;
        l2fib_mac_learning_mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mac_learning_mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::L2FibMacLearningMac()
    :
    address{YType::str, "address"},
    bdid{YType::int32, "bdid"},
    element_type{YType::uint8, "element-type"},
    generation{YType::uint8, "generation"},
    interface_handle{YType::str, "interface-handle"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    xcid{YType::uint32, "xcid"}
    	,
    addr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr>())
	,nhaddr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac"; yang_parent_name = "l2fib-mac-learning-macs"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::~L2FibMacLearningMac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::has_data() const
{
    return address.is_set
	|| bdid.is_set
	|| element_type.is_set
	|| generation.is_set
	|| interface_handle.is_set
	|| interface_handle_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| xcid.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        children["nhaddr"] = nhaddr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "address" || name == "bdid" || name == "element-type" || name == "generation" || name == "interface-handle" || name == "interface-handle-xr" || name == "mac-address" || name == "mac-address-xr" || name == "node-id" || name == "topology-id" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::~Addr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::~Nhaddr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterfaces()
{

    yang_name = "l2fib-main-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::~L2FibMainInterfaces()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::has_data() const
{
    for (std::size_t index=0; index<l2fib_main_interface.size(); index++)
    {
        if(l2fib_main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<l2fib_main_interface.size(); index++)
    {
        if(l2fib_main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface")
    {
        for(auto const & c : l2fib_main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface>();
        c->parent = this;
        l2fib_main_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_main_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterface()
    :
    main_interface_id{YType::int32, "main-interface-id"},
    main_interface_type{YType::enumeration, "main-interface-type"}
    	,
    l2fib_main_interface_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo>())
	,l2fib_main_interface_hardware_egress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo>())
	,l2fib_main_interface_hardware_egress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo>())
	,l2fib_main_interface_hardware_ingress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo>())
	,l2fib_main_interface_hardware_ingress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo>())
	,l2fib_main_interface_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo>())
	,l2fib_main_interface_instances(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances>())
{
    l2fib_main_interface_detail_info->parent = this;
    l2fib_main_interface_hardware_egress_detail_info->parent = this;
    l2fib_main_interface_hardware_egress_info->parent = this;
    l2fib_main_interface_hardware_ingress_detail_info->parent = this;
    l2fib_main_interface_hardware_ingress_info->parent = this;
    l2fib_main_interface_info->parent = this;
    l2fib_main_interface_instances->parent = this;

    yang_name = "l2fib-main-interface"; yang_parent_name = "l2fib-main-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::~L2FibMainInterface()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::has_data() const
{
    return main_interface_id.is_set
	|| main_interface_type.is_set
	|| (l2fib_main_interface_detail_info !=  nullptr && l2fib_main_interface_detail_info->has_data())
	|| (l2fib_main_interface_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_hardware_egress_detail_info->has_data())
	|| (l2fib_main_interface_hardware_egress_info !=  nullptr && l2fib_main_interface_hardware_egress_info->has_data())
	|| (l2fib_main_interface_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_hardware_ingress_detail_info->has_data())
	|| (l2fib_main_interface_hardware_ingress_info !=  nullptr && l2fib_main_interface_hardware_ingress_info->has_data())
	|| (l2fib_main_interface_info !=  nullptr && l2fib_main_interface_info->has_data())
	|| (l2fib_main_interface_instances !=  nullptr && l2fib_main_interface_instances->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface_id.yfilter)
	|| ydk::is_set(main_interface_type.yfilter)
	|| (l2fib_main_interface_detail_info !=  nullptr && l2fib_main_interface_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_hardware_egress_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_egress_info !=  nullptr && l2fib_main_interface_hardware_egress_info->has_operation())
	|| (l2fib_main_interface_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_hardware_ingress_detail_info->has_operation())
	|| (l2fib_main_interface_hardware_ingress_info !=  nullptr && l2fib_main_interface_hardware_ingress_info->has_operation())
	|| (l2fib_main_interface_info !=  nullptr && l2fib_main_interface_info->has_operation())
	|| (l2fib_main_interface_instances !=  nullptr && l2fib_main_interface_instances->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface_id.is_set || is_set(main_interface_id.yfilter)) leaf_name_data.push_back(main_interface_id.get_name_leafdata());
    if (main_interface_type.is_set || is_set(main_interface_type.yfilter)) leaf_name_data.push_back(main_interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface-detail-info")
    {
        if(l2fib_main_interface_detail_info == nullptr)
        {
            l2fib_main_interface_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo>();
        }
        return l2fib_main_interface_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-hardware-egress-detail-info")
    {
        if(l2fib_main_interface_hardware_egress_detail_info == nullptr)
        {
            l2fib_main_interface_hardware_egress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo>();
        }
        return l2fib_main_interface_hardware_egress_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-hardware-egress-info")
    {
        if(l2fib_main_interface_hardware_egress_info == nullptr)
        {
            l2fib_main_interface_hardware_egress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo>();
        }
        return l2fib_main_interface_hardware_egress_info;
    }

    if(child_yang_name == "l2fib-main-interface-hardware-ingress-detail-info")
    {
        if(l2fib_main_interface_hardware_ingress_detail_info == nullptr)
        {
            l2fib_main_interface_hardware_ingress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo>();
        }
        return l2fib_main_interface_hardware_ingress_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-hardware-ingress-info")
    {
        if(l2fib_main_interface_hardware_ingress_info == nullptr)
        {
            l2fib_main_interface_hardware_ingress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo>();
        }
        return l2fib_main_interface_hardware_ingress_info;
    }

    if(child_yang_name == "l2fib-main-interface-info")
    {
        if(l2fib_main_interface_info == nullptr)
        {
            l2fib_main_interface_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo>();
        }
        return l2fib_main_interface_info;
    }

    if(child_yang_name == "l2fib-main-interface-instances")
    {
        if(l2fib_main_interface_instances == nullptr)
        {
            l2fib_main_interface_instances = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances>();
        }
        return l2fib_main_interface_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_main_interface_detail_info != nullptr)
    {
        children["l2fib-main-interface-detail-info"] = l2fib_main_interface_detail_info;
    }

    if(l2fib_main_interface_hardware_egress_detail_info != nullptr)
    {
        children["l2fib-main-interface-hardware-egress-detail-info"] = l2fib_main_interface_hardware_egress_detail_info;
    }

    if(l2fib_main_interface_hardware_egress_info != nullptr)
    {
        children["l2fib-main-interface-hardware-egress-info"] = l2fib_main_interface_hardware_egress_info;
    }

    if(l2fib_main_interface_hardware_ingress_detail_info != nullptr)
    {
        children["l2fib-main-interface-hardware-ingress-detail-info"] = l2fib_main_interface_hardware_ingress_detail_info;
    }

    if(l2fib_main_interface_hardware_ingress_info != nullptr)
    {
        children["l2fib-main-interface-hardware-ingress-info"] = l2fib_main_interface_hardware_ingress_info;
    }

    if(l2fib_main_interface_info != nullptr)
    {
        children["l2fib-main-interface-info"] = l2fib_main_interface_info;
    }

    if(l2fib_main_interface_instances != nullptr)
    {
        children["l2fib-main-interface-instances"] = l2fib_main_interface_instances;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface-id")
    {
        main_interface_id = value;
        main_interface_id.value_namespace = name_space;
        main_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface-type")
    {
        main_interface_type = value;
        main_interface_type.value_namespace = name_space;
        main_interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface-id")
    {
        main_interface_id.yfilter = yfilter;
    }
    if(value_path == "main-interface-type")
    {
        main_interface_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface-detail-info" || name == "l2fib-main-interface-hardware-egress-detail-info" || name == "l2fib-main-interface-hardware-egress-info" || name == "l2fib-main-interface-hardware-ingress-detail-info" || name == "l2fib-main-interface-hardware-ingress-info" || name == "l2fib-main-interface-info" || name == "l2fib-main-interface-instances" || name == "main-interface-id" || name == "main-interface-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::L2FibMainInterfaceDetailInfo()
    :
    esi_id{YType::uint16, "esi-id"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-detail-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::~L2FibMainInterfaceDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_data() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return esi_id.is_set
	|| evpn_shg_local_label.is_set
	|| mac.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(evpn_shg_local_label.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.yfilter)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-port-count-instance")
    {
        for(auto const & c : bridge_port_count_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance>();
        c->parent = this;
        bridge_port_count_instance.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        for(auto const & c : ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_port_count_instance)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_shg_remote_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
        evpn_shg_local_label.value_namespace = name_space;
        evpn_shg_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count-instance" || name == "ethernet-segment-identifier" || name == "evpn-shg-remote-info" || name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "esi-id" || name == "evpn-shg-local-label" || name == "mac" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::BridgePortCountInstance()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bridge-port-count-instance"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::~BridgePortCountInstance()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-count-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_none {0, "mgmt-l2fib-bridge-mac-evpn-ctx-none"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_esi_id {1, "mgmt-l2fib-bridge-mac-evpn-ctx-esi-id"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_local_label {2, "mgmt-l2fib-bridge-mac-evpn-ctx-local-label"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_moi {3, "mgmt-l2fib-bridge-mac-evpn-ctx-moi"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh {4, "mgmt-l2fib-bridge-mac-evpn-ctx-bp-ifh"};

const Enum::YLeaf PreferredPathOption::te_tunnel {2, "te-tunnel"};
const Enum::YLeaf PreferredPathOption::ip_tunnel {3, "ip-tunnel"};
const Enum::YLeaf PreferredPathOption::tp_tunnel {4, "tp-tunnel"};
const Enum::YLeaf PreferredPathOption::sr_te_policy {5, "sr-te-policy"};
const Enum::YLeaf PreferredPathOption::mldp_tunnel {6, "mldp-tunnel"};
const Enum::YLeaf PreferredPathOption::mte_tunnel {7, "mte-tunnel"};

const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_unknown {0, "l2fib-aps-port-state-unknown"};
const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_unbound {1, "l2fib-aps-port-state-unbound"};
const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_bound {2, "l2fib-aps-port-state-bound"};

const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac {1, "evpn-main-interface-ac"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_nve {2, "evpn-main-interface-nve"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac_vfi {3, "evpn-main-interface-ac-vfi"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac_pw {4, "evpn-main-interface-ac-pw"};

const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_unknown {0, "mgmt-l2fib-switching-type-unknown"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_ac_ac {1, "mgmt-l2fib-switching-type-ac-ac"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_ac_atom {2, "mgmt-l2fib-switching-type-ac-atom"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_ac_vfi {3, "mgmt-l2fib-switching-type-ac-vfi"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_ac_l2tp {4, "mgmt-l2fib-switching-type-ac-l2tp"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_atom_atom {5, "mgmt-l2fib-switching-type-atom-atom"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_vfi_atom {6, "mgmt-l2fib-switching-type-vfi-atom"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_vfi_l2tp {7, "mgmt-l2fib-switching-type-vfi-l2tp"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_l2tp_atom {8, "mgmt-l2fib-switching-type-l2tp-atom"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_l2tp_l2tp {9, "mgmt-l2fib-switching-type-l2tp-l2tp"};
const Enum::YLeaf MgmtL2FibSwitching::mgmt_l2fib_switching_type_max {10, "mgmt-l2fib-switching-type-max"};

const Enum::YLeaf MgmtL2FibStatsData::mgmt_l2fib_stats_type_unknown {0, "mgmt-l2fib-stats-type-unknown"};
const Enum::YLeaf MgmtL2FibStatsData::mgmt_l2fib_stats_type_mcast {1, "mgmt-l2fib-stats-type-mcast"};

const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_unresolved {0, "l2vpn-segment-state-unresolved"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_up {1, "l2vpn-segment-state-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_down {2, "l2vpn-segment-state-down"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_admin_down {3, "l2vpn-segment-state-admin-down"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_local_up {4, "l2vpn-segment-state-local-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_remote_up {5, "l2vpn-segment-state-remote-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_connected {6, "l2vpn-segment-state-connected"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_standby {7, "l2vpn-segment-state-standby"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_standby_ready {8, "l2vpn-segment-state-standby-ready"};

const Enum::YLeaf L2vpnBagMacLimitAction::limit_none {0, "limit-none"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_flood {1, "limit-flood"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_no_flood {2, "limit-no-flood"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_shutdown {3, "limit-shutdown"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_no_config {4, "limit-no-config"};

const Enum::YLeaf L2fibStormControlRateUnit::pps {0, "pps"};
const Enum::YLeaf L2fibStormControlRateUnit::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2vpnBridgeCoupledState::disabled {0, "disabled"};
const Enum::YLeaf L2vpnBridgeCoupledState::down {2, "down"};
const Enum::YLeaf L2vpnBridgeCoupledState::up {3, "up"};

const Enum::YLeaf L2vpnG8032Rpl::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2vpnG8032Rpl::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2vpnG8032Rpl::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2vpnG8032Rpl::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_none {0, "l2vpn-ad-rd-none"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_auto {1, "l2vpn-ad-rd-auto"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_as {2, "l2vpn-ad-rd-as"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_4byte_as {3, "l2vpn-ad-rd-4byte-as"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_v4_addr {4, "l2vpn-ad-rd-v4-addr"};

const Enum::YLeaf L2vpnPeer::none {0, "none"};
const Enum::YLeaf L2vpnPeer::ipv4 {1, "ipv4"};
const Enum::YLeaf L2vpnPeer::ipv6 {2, "ipv6"};
const Enum::YLeaf L2vpnPeer::internal_label {3, "internal-label"};

const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_not_specified {0, "l2vpn-bag-ad-encap-not-specified"};
const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_ether_vlan {1, "l2vpn-bag-ad-encap-ether-vlan"};
const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_ether {2, "l2vpn-bag-ad-encap-ether"};

const Enum::YLeaf L2vpnPwClassControlWord::unset {0, "unset"};
const Enum::YLeaf L2vpnPwClassControlWord::enable {1, "enable"};
const Enum::YLeaf L2vpnPwClassControlWord::disable {2, "disable"};

const Enum::YLeaf L2vpnTdmMode::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTdmMode::ce_so_psn {1, "ce-so-psn"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_e1 {2, "sa-to-p-e1"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_t1 {3, "sa-to-p-t1"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_e3 {4, "sa-to-p-e3"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_t3 {5, "sa-to-p-t3"};

const Enum::YLeaf L2vpnLoadBal::not_supported {0, "not-supported"};
const Enum::YLeaf L2vpnLoadBal::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf L2vpnLoadBal::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf L2vpnLoadBal::undefined {3, "undefined"};
const Enum::YLeaf L2vpnLoadBal::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_none {0, "l2vpn-ad-lsd-err-type-none"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_abort_lbl_alloc {1, "l2vpn-ad-lsd-err-type-rw-create-abort-lbl-alloc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_abort_rw_create {2, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-rw-create"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_abort_lbl_alloc {3, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-lbl-alloc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_lbl_ctx_mismatch {4, "l2vpn-ad-lsd-err-type-lbl-alloc-lbl-ctx-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_fpi_size_mismatch {5, "l2vpn-ad-lsd-err-type-rw-create-fpi-size-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_fpi_version_mismatch {6, "l2vpn-ad-lsd-err-type-rw-create-fpi-version-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_enospc {7, "l2vpn-ad-lsd-err-type-enospc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_enomem {8, "l2vpn-ad-lsd-err-type-enomem"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_undefined {9, "l2vpn-ad-lsd-err-type-undefined"};

const Enum::YLeaf L2fibL2TpSession::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf L2fibL2TpSession::l2tpv2 {1, "l2tpv2"};

const Enum::YLeaf L2vpnG8032UncfgReason::reason_none {0, "reason-none"};
const Enum::YLeaf L2vpnG8032UncfgReason::ring_mp0_missing {1, "ring-mp0-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::ring_mp1_missing {2, "ring-mp1-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::inclusion_list_empty {3, "inclusion-list-empty"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_missing {4, "aps0-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0bp_notfound {5, "aps0bp-notfound"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_no_ac_ctx {6, "aps0-no-ac-ctx"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_not_in_inclusion_list {7, "aps0-not-in-inclusion-list"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_mismatched {8, "aps0-mismatched"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_missing {9, "aps1-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1bp_notfound {10, "aps1bp-notfound"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_no_ac_ctx {11, "aps1-no-ac-ctx"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_not_in_inclusion_list {12, "aps1-not-in-inclusion-list"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_mismatched {13, "aps1-mismatched"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps_unprovisioned {14, "aps-unprovisioned"};

const Enum::YLeaf L2fibG8032Rpl::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2fibG8032Rpl::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2fibG8032Rpl::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2fibG8032Rpl::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2vpnVfiP2MpTransport::none {0, "none"};
const Enum::YLeaf L2vpnVfiP2MpTransport::rsvp_te {1, "rsvp-te"};

const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_not_specified {0, "l2vpn-pw-mpls-pref-path-not-specified"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_next_hop_ip {1, "l2vpn-pw-mpls-pref-path-next-hop-ip"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_te_tunnel {2, "l2vpn-pw-mpls-pref-path-te-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_ip_tunnel {3, "l2vpn-pw-mpls-pref-path-ip-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_tp_tunnel {4, "l2vpn-pw-mpls-pref-path-tp-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_sr_te {5, "l2vpn-pw-mpls-pref-path-sr-te"};

const Enum::YLeaf L2vpnVfiState::unknown {0, "unknown"};
const Enum::YLeaf L2vpnVfiState::up {1, "up"};
const Enum::YLeaf L2vpnVfiState::down {2, "down"};
const Enum::YLeaf L2vpnVfiState::admin_down {3, "admin-down"};

const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_unresolved {0, "l2vpn-xc-state-unresolved"};
const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_down {1, "l2vpn-xc-state-down"};
const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_up {2, "l2vpn-xc-state-up"};

const Enum::YLeaf L2vpnProtectionRole::l2vpn_protection_primary {0, "l2vpn-protection-primary"};
const Enum::YLeaf L2vpnProtectionRole::l2vpn_protection_backup {1, "l2vpn-protection-backup"};

const Enum::YLeaf L2vpnBagMacSecureAction::not_set {0, "not-set"};
const Enum::YLeaf L2vpnBagMacSecureAction::restrict {1, "restrict"};
const Enum::YLeaf L2vpnBagMacSecureAction::none {2, "none"};
const Enum::YLeaf L2vpnBagMacSecureAction::shutdown {3, "shutdown"};

const Enum::YLeaf L2vpnMainIfInstanceState::forwarding {0, "forwarding"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked {1, "blocked"};
const Enum::YLeaf L2vpnMainIfInstanceState::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2vpnMainIfInstanceState::nack {3, "nack"};
const Enum::YLeaf L2vpnMainIfInstanceState::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2vpnMainIfInstanceState::mcast_pe2_ce_blocked {8, "mcast-pe2-ce-blocked"};
const Enum::YLeaf L2vpnMainIfInstanceState::port_state_unknown {9, "port-state-unknown"};

const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_port_mode {0, "l2vpn-atm-port-mode"};
const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_vp_mode {1, "l2vpn-atm-vp-mode"};
const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_vc_mode {2, "l2vpn-atm-vc-mode"};

const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_not_specified {0, "l2vpn-pw-sig-not-specified"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_none {1, "l2vpn-pw-sig-none"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_l2tpv3 {2, "l2vpn-pw-sig-l2tpv3"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_l2tpv2 {3, "l2vpn-pw-sig-l2tpv2"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_ldp {4, "l2vpn-pw-sig-ldp"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_bgp {5, "l2vpn-pw-sig-bgp"};

const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_min {0, "mgmt-l2fib-data-type-min"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_xcon {1, "mgmt-l2fib-data-type-xcon"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_ac {2, "mgmt-l2fib-data-type-ac"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_span {3, "mgmt-l2fib-data-type-span"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_atom {4, "mgmt-l2fib-data-type-atom"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_pbb {5, "mgmt-l2fib-data-type-pbb"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_vni {6, "mgmt-l2fib-data-type-vni"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_n_hop {7, "mgmt-l2fib-data-type-n-hop"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_l2tp {8, "mgmt-l2fib-data-type-l2tp"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_l2tpv2 {9, "mgmt-l2fib-data-type-l2tpv2"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_bridge {10, "mgmt-l2fib-data-type-bridge"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_bridge_shg {11, "mgmt-l2fib-data-type-bridge-shg"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_bridge_port {12, "mgmt-l2fib-data-type-bridge-port"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_bridge_mac {13, "mgmt-l2fib-data-type-bridge-mac"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_mcast_table {14, "mgmt-l2fib-data-type-mcast-table"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_mcast_leaf {15, "mgmt-l2fib-data-type-mcast-leaf"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_mcast_xid {16, "mgmt-l2fib-data-type-mcast-xid"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_dhcp {17, "mgmt-l2fib-data-type-dhcp"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_l2tp_ipv6_ts {18, "mgmt-l2fib-data-type-l2tp-ipv6-ts"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_pwhe_mp {19, "mgmt-l2fib-data-type-pwhe-mp"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_evpn {20, "mgmt-l2fib-data-type-evpn"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_fxs {21, "mgmt-l2fib-data-type-fxs"};
const Enum::YLeaf MgmtL2FibData::mgmt_l2fib_data_type_max {22, "mgmt-l2fib-data-type-max"};

const Enum::YLeaf L2vpnPwFlowLabel::off {0, "off"};
const Enum::YLeaf L2vpnPwFlowLabel::receive {1, "receive"};
const Enum::YLeaf L2vpnPwFlowLabel::transmit {2, "transmit"};
const Enum::YLeaf L2vpnPwFlowLabel::both {3, "both"};

const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_virtual_ac {0, "l2vpn-id-mgr-app-type-virtual-ac"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_ac {1, "l2vpn-id-mgr-app-type-ac"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_pw {2, "l2vpn-id-mgr-app-type-pw"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_bd {3, "l2vpn-id-mgr-app-type-bd"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_fxc {4, "l2vpn-id-mgr-app-type-fxc"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_mp2mp {5, "l2vpn-id-mgr-app-type-mp2mp"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_rd {6, "l2vpn-id-mgr-app-type-rd"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_pbb {7, "l2vpn-id-mgr-app-type-pbb"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_if_list {8, "l2vpn-id-mgr-app-type-if-list"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_atom {9, "l2vpn-id-mgr-app-type-atom"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_global {10, "l2vpn-id-mgr-app-type-global"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_p_tree {11, "l2vpn-id-mgr-app-type-p-tree"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_pw_group {12, "l2vpn-id-mgr-app-type-pw-group"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_evpn {13, "l2vpn-id-mgr-app-type-evpn"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_evpn_lbl {14, "l2vpn-id-mgr-app-type-evpn-lbl"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_evpn_rd {15, "l2vpn-id-mgr-app-type-evpn-rd"};
const Enum::YLeaf L2vpnIdMgrApp::l2vpn_id_mgr_app_type_count {16, "l2vpn-id-mgr-app-type-count"};

const Enum::YLeaf L2vpnMirpLiteProtocolInfo::vlan0 {0, "vlan0"};
const Enum::YLeaf L2vpnMirpLiteProtocolInfo::none {1, "none"};

const Enum::YLeaf L2vpnBriefPsn::ls {0, "ls"};
const Enum::YLeaf L2vpnBriefPsn::atom {1, "atom"};
const Enum::YLeaf L2vpnBriefPsn::l2tpv3 {2, "l2tpv3"};
const Enum::YLeaf L2vpnBriefPsn::unknown_psn {3, "unknown-psn"};

const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_unknown {0, "l2vpn-intf-type-unknown"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_ethernet {1, "l2vpn-intf-type-ethernet"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_vlan {2, "l2vpn-intf-type-vlan"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_atm {3, "l2vpn-intf-type-atm"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_frame_relay {4, "l2vpn-intf-type-frame-relay"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_hdlc {5, "l2vpn-intf-type-hdlc"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_ppp {6, "l2vpn-intf-type-ppp"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_span {7, "l2vpn-intf-type-span"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_bvi {8, "l2vpn-intf-type-bvi"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_cem {9, "l2vpn-intf-type-cem"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_pw_ether {10, "l2vpn-intf-type-pw-ether"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_pw_iw {11, "l2vpn-intf-type-pw-iw"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_vni {12, "l2vpn-intf-type-vni"};

const Enum::YLeaf L2vpnVfiP2MpSignaling::none {0, "none"};
const Enum::YLeaf L2vpnVfiP2MpSignaling::bgp {1, "bgp"};

const Enum::YLeaf MgmtL2FibBridge::mgmt_l2fib_bridge_type_default {0, "mgmt-l2fib-bridge-type-default"};
const Enum::YLeaf MgmtL2FibBridge::mgmt_l2fib_bridge_type_pbb_edge {1, "mgmt-l2fib-bridge-type-pbb-edge"};
const Enum::YLeaf MgmtL2FibBridge::mgmt_l2fib_bridge_type_pbb_core {2, "mgmt-l2fib-bridge-type-pbb-core"};

const Enum::YLeaf L2vpnFrMode::l2vpn_fr_port_mode {0, "l2vpn-fr-port-mode"};
const Enum::YLeaf L2vpnFrMode::l2vpn_fr_dlci_mode {1, "l2vpn-fr-dlci-mode"};

const Enum::YLeaf L2vpnPreferred::te_tunnel {0, "te-tunnel"};
const Enum::YLeaf L2vpnPreferred::ip_tunnel {1, "ip-tunnel"};
const Enum::YLeaf L2vpnPreferred::tp_tunnel {2, "tp-tunnel"};
const Enum::YLeaf L2vpnPreferred::mte_tunnel {3, "mte-tunnel"};
const Enum::YLeaf L2vpnPreferred::mldp_tunnel {4, "mldp-tunnel"};
const Enum::YLeaf L2vpnPreferred::sr_te_policy {5, "sr-te-policy"};

const Enum::YLeaf L2fibFeature::l2fib_feature_dhcp_snooping {0, "l2fib-feature-dhcp-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_igmp_snooping {1, "l2fib-feature-igmp-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_mld_snooping {2, "l2fib-feature-mld-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_max {3, "l2fib-feature-max"};

const Enum::YLeaf L2vpnTosMode::l2vpn_pw_ip_tos_none {0, "l2vpn-pw-ip-tos-none"};
const Enum::YLeaf L2vpnTosMode::l2vpn_pw_ip_tos_reflect {1, "l2vpn-pw-ip-tos-reflect"};

const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_unresolved {0, "l2vpn-pw-state-unresolved"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_idle {1, "l2vpn-pw-state-idle"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_provisioned {2, "l2vpn-pw-state-provisioned"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_remote_standby {3, "l2vpn-pw-state-remote-standby"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_local_ready {4, "l2vpn-pw-state-local-ready"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_all_ready {5, "l2vpn-pw-state-all-ready"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_established {6, "l2vpn-pw-state-established"};

const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_state_up {0, "mac-withdraw-option-state-up"};
const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_state_down {1, "mac-withdraw-option-state-down"};
const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_optimize {2, "mac-withdraw-option-optimize"};

const Enum::YLeaf L2vpnRgState::unknown {0, "unknown"};
const Enum::YLeaf L2vpnRgState::active {1, "active"};
const Enum::YLeaf L2vpnRgState::standby {2, "standby"};

const Enum::YLeaf L2vpnp2mpPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnp2mpPtree::mldp {2, "mldp"};

const Enum::YLeaf MgmtL2FibMacLimitNotify::mgmt_l2fib_mac_limit_notify_none {0, "mgmt-l2fib-mac-limit-notify-none"};
const Enum::YLeaf MgmtL2FibMacLimitNotify::mgmt_l2fib_mac_limit_notify_syslog {1, "mgmt-l2fib-mac-limit-notify-syslog"};
const Enum::YLeaf MgmtL2FibMacLimitNotify::mgmt_l2fib_mac_limit_notify_trap {2, "mgmt-l2fib-mac-limit-notify-trap"};
const Enum::YLeaf MgmtL2FibMacLimitNotify::mgmt_l2fib_mac_limit_notify_both {3, "mgmt-l2fib-mac-limit-notify-both"};

const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_none {0, "l2vpn-ad-vpls-id-none"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_auto {1, "l2vpn-ad-vpls-id-auto"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_as {10, "l2vpn-ad-vpls-id-as"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_v4_addr {266, "l2vpn-ad-vpls-id-v4-addr"};

const Enum::YLeaf L2vpnPtree::none {0, "none"};
const Enum::YLeaf L2vpnPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnPtree::mldp {2, "mldp"};

const Enum::YLeaf L2vpnP2MpPwPtree::none {0, "none"};
const Enum::YLeaf L2vpnP2MpPwPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnP2MpPwPtree::mldp {2, "mldp"};

const Enum::YLeaf L2vpnPw::l2vpn_pw_type_unknown {0, "l2vpn-pw-type-unknown"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_frame_relay_dlci {1, "l2vpn-pw-type-frame-relay-dlci"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_aal5_sdu {2, "l2vpn-pw-type-atm-aal5-sdu"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_trans_cell {3, "l2vpn-pw-type-atm-trans-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ether_vlan {4, "l2vpn-pw-type-ether-vlan"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ether {5, "l2vpn-pw-type-ether"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_hdlc {6, "l2vpn-pw-type-hdlc"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ppp {7, "l2vpn-pw-type-ppp"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_sonet_over_mpls {8, "l2vpn-pw-type-sonet-over-mpls"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_n_vcc_cell {9, "l2vpn-pw-type-atm-n-vcc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_n_vpc_cell {10, "l2vpn-pw-type-atm-n-vpc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ip {11, "l2vpn-pw-type-ip"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_vcc_cell {12, "l2vpn-pw-type-atm-vcc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_vpc_cell {13, "l2vpn-pw-type-atm-vpc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_aal5_pdu {14, "l2vpn-pw-type-atm-aal5-pdu"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_frame_relay {15, "l2vpn-pw-type-frame-relay"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_sonet {16, "l2vpn-pw-type-sonet"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_vpls {17, "l2vpn-pw-type-vpls"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_e1 {18, "l2vpn-pw-type-tdm-sa-to-p-e1"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_t1 {19, "l2vpn-pw-type-tdm-sa-to-p-t1"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_e3 {20, "l2vpn-pw-type-tdm-sa-to-p-e3"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_t3 {21, "l2vpn-pw-type-tdm-sa-to-p-t3"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_ce_so_psn {22, "l2vpn-pw-type-tdm-ce-so-psn"};

const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_unknown {0, "l2vpn-pw-control-word-unknown"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_clear {1, "l2vpn-pw-control-word-clear"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_set {2, "l2vpn-pw-control-word-set"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_mandatory {3, "l2vpn-pw-control-word-mandatory"};

const Enum::YLeaf L2vpnMemoryState::memory_state_unknown {0, "memory-state-unknown"};
const Enum::YLeaf L2vpnMemoryState::memory_state_normal {1, "memory-state-normal"};
const Enum::YLeaf L2vpnMemoryState::memory_state_minor {2, "memory-state-minor"};
const Enum::YLeaf L2vpnMemoryState::memory_state_severe {3, "memory-state-severe"};
const Enum::YLeaf L2vpnMemoryState::memory_state_critical {4, "memory-state-critical"};
const Enum::YLeaf L2vpnMemoryState::memory_state_invalid {5, "memory-state-invalid"};

const Enum::YLeaf L2vpnSrcAddressSet::unset {0, "unset"};
const Enum::YLeaf L2vpnSrcAddressSet::set {1, "set"};

const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l2_dp {0, "l2vpn-vni-mode-l2-dp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l3_dp {1, "l2vpn-vni-mode-l3-dp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l2_cp {2, "l2vpn-vni-mode-l2-cp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l3_cp {3, "l2vpn-vni-mode-l3-cp"};

const Enum::YLeaf IccpSmPortState::unknown {0, "unknown"};
const Enum::YLeaf IccpSmPortState::unconfigured {1, "unconfigured"};
const Enum::YLeaf IccpSmPortState::unsynchronized {2, "unsynchronized"};
const Enum::YLeaf IccpSmPortState::operational {3, "operational"};
const Enum::YLeaf IccpSmPortState::failed {4, "failed"};
const Enum::YLeaf IccpSmPortState::reverting {5, "reverting"};

const Enum::YLeaf L2vpnMainIfProtectected::erp_protected {0, "erp-protected"};
const Enum::YLeaf L2vpnMainIfProtectected::mstp_protected {1, "mstp-protected"};
const Enum::YLeaf L2vpnMainIfProtectected::no_protected {2, "no-protected"};

const Enum::YLeaf L2vpnAcEncap::unknown_encap {0, "unknown-encap"};
const Enum::YLeaf L2vpnAcEncap::vlan {1, "vlan"};
const Enum::YLeaf L2vpnAcEncap::qinq {2, "qinq"};
const Enum::YLeaf L2vpnAcEncap::qin_any {3, "qin-any"};
const Enum::YLeaf L2vpnAcEncap::ethernet {4, "ethernet"};
const Enum::YLeaf L2vpnAcEncap::atm_aal0 {5, "atm-aal0"};
const Enum::YLeaf L2vpnAcEncap::atm_aal5 {6, "atm-aal5"};
const Enum::YLeaf L2vpnAcEncap::atm_vp {7, "atm-vp"};
const Enum::YLeaf L2vpnAcEncap::atm_port {8, "atm-port"};
const Enum::YLeaf L2vpnAcEncap::hdlc {9, "hdlc"};
const Enum::YLeaf L2vpnAcEncap::fr_dlci {10, "fr-dlci"};
const Enum::YLeaf L2vpnAcEncap::fr_dlci_local {11, "fr-dlci-local"};
const Enum::YLeaf L2vpnAcEncap::ppp {12, "ppp"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_e1 {13, "tdm-sa-to-p-e1"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_t1 {14, "tdm-sa-to-p-t1"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_e3 {15, "tdm-sa-to-p-e3"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_t3 {16, "tdm-sa-to-p-t3"};
const Enum::YLeaf L2vpnAcEncap::tdm_ce_so_psn {17, "tdm-ce-so-psn"};
const Enum::YLeaf L2vpnAcEncap::ip {18, "ip"};
const Enum::YLeaf L2vpnAcEncap::vlan_encap {19, "vlan-encap"};
const Enum::YLeaf L2vpnAcEncap::dot1ad {20, "dot1ad"};
const Enum::YLeaf L2vpnAcEncap::efp {21, "efp"};
const Enum::YLeaf L2vpnAcEncap::bvi {22, "bvi"};
const Enum::YLeaf L2vpnAcEncap::monitor_session {23, "monitor-session"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_ether {24, "pseudowire-ether"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_iw {25, "pseudowire-iw"};
const Enum::YLeaf L2vpnAcEncap::multi_segment_pseudowire {26, "multi-segment-pseudowire"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_l2_subinterface {27, "pseudowire-l2-subinterface"};
const Enum::YLeaf L2vpnAcEncap::virtual_network_interface {28, "virtual-network-interface"};
const Enum::YLeaf L2vpnAcEncap::encap_types_max {29, "encap-types-max"};

const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_idle {0, "l2vpn-l2tp-idle"};
const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_wait_for_connecting {1, "l2vpn-l2tp-wait-for-connecting"};
const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_wait_for_connected {2, "l2vpn-l2tp-wait-for-connected"};
const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_in_coming_call {3, "l2vpn-l2tp-in-coming-call"};
const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_connected {4, "l2vpn-l2tp-connected"};
const Enum::YLeaf L2vpnL2TpTunnelState::l2vpn_l2tp_disconnected {5, "l2vpn-l2tp-disconnected"};

const Enum::YLeaf L2vpnpw::manual {1, "manual"};
const Enum::YLeaf L2vpnpw::vpls_autodiscovered {2, "vpls-autodiscovered"};
const Enum::YLeaf L2vpnpw::vpws_autodiscovered {3, "vpws-autodiscovered"};
const Enum::YLeaf L2vpnpw::vpls_autodiscovered_ldp {4, "vpls-autodiscovered-ldp"};

const Enum::YLeaf L2fibPwRedundancyRole::primary {0, "primary"};
const Enum::YLeaf L2fibPwRedundancyRole::backup {1, "backup"};

const Enum::YLeaf MgmtL2FibMacLimitAction::mgmt_l2fib_mac_limit_action_type_none {0, "mgmt-l2fib-mac-limit-action-type-none"};
const Enum::YLeaf MgmtL2FibMacLimitAction::mgmt_l2fib_mac_limit_action_type_flood {1, "mgmt-l2fib-mac-limit-action-type-flood"};
const Enum::YLeaf MgmtL2FibMacLimitAction::mgmt_l2fib_mac_limit_action_type_no_flood {2, "mgmt-l2fib-mac-limit-action-type-no-flood"};
const Enum::YLeaf MgmtL2FibMacLimitAction::mgmt_l2fib_mac_limit_action_type_shutdown {3, "mgmt-l2fib-mac-limit-action-type-shutdown"};

const Enum::YLeaf L2vpnVniEncaps::l2vpn_vni_encap_vxlan {0, "l2vpn-vni-encap-vxlan"};
const Enum::YLeaf L2vpnVniEncaps::l2vpn_vni_encap_softgre {1, "l2vpn-vni-encap-softgre"};

const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_unresolved {0, "l2vpn-segment-type-unresolved"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_ac {1, "l2vpn-segment-type-ac"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_pw {2, "l2vpn-segment-type-pw"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_ac {3, "l2vpn-segment-type-bd-ac"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_vfi {4, "l2vpn-segment-type-vfi"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_pw {5, "l2vpn-segment-type-bd-pw"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_pbb {6, "l2vpn-segment-type-bd-pbb"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_evpn {7, "l2vpn-segment-type-bd-evpn"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_vni {8, "l2vpn-segment-type-vni"};

const Enum::YLeaf IflistRepStatus::invalid {0, "invalid"};
const Enum::YLeaf IflistRepStatus::pending {1, "pending"};
const Enum::YLeaf IflistRepStatus::done {2, "done"};
const Enum::YLeaf IflistRepStatus::not_supported {3, "not-supported"};
const Enum::YLeaf IflistRepStatus::failed {4, "failed"};

const Enum::YLeaf L2vpnProtection::l2vpn_protection_unknown {0, "l2vpn-protection-unknown"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_interface {1, "l2vpn-protection-interface"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_pseudowire {2, "l2vpn-protection-pseudowire"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_group {3, "l2vpn-protection-group"};

const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_forwarding {0, "msti-bag-stp-port-state-forwarding"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_blocked {1, "msti-bag-stp-port-state-blocked"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_mac_learning {2, "msti-bag-stp-port-state-mac-learning"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_nack {3, "msti-bag-stp-port-state-nack"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_forwarding_not_useful {4, "msti-bag-stp-port-state-forwarding-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_blocked_not_useful {5, "msti-bag-stp-port-state-blocked-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_mac_learning_not_useful {6, "msti-bag-stp-port-state-mac-learning-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_blocked_data_only {7, "msti-bag-erp-port-state-blocked-data-only"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_evpn_mcast_pe2ce_blocked {8, "msti-bag-erp-port-state-evpn-mcast-pe2ce-blocked"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_evpn_port_state_mcast_blocked {9, "msti-bag-erp-port-state-evpn-port-state-mcast-blocked"};

const Enum::YLeaf L2vpnSyncStatus::not_ready {0, "not-ready"};
const Enum::YLeaf L2vpnSyncStatus::ready {1, "ready"};

const Enum::YLeaf L2fibMainIfInstanceState::forwarding {0, "forwarding"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked {1, "blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2fibMainIfInstanceState::nack {3, "nack"};
const Enum::YLeaf L2fibMainIfInstanceState::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2fibMainIfInstanceState::multicast_pe2ce_blocked {8, "multicast-pe2ce-blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::multicast_blocked {9, "multicast-blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::port_state_unknown {10, "port-state-unknown"};

const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_none {0, "l2vpn-iw-type-none"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ethernet {1, "l2vpn-iw-type-ethernet"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ppp {2, "l2vpn-iw-type-ppp"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ipv4 {3, "l2vpn-iw-type-ipv4"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_voluntary {4, "l2vpn-iw-type-voluntary"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_frf8 {5, "l2vpn-iw-type-frf8"};

const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_manual {1, "l2vpn-pw-id-type-manual"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpls {2, "l2vpn-pw-id-type-ad-vpls"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpws {3, "l2vpn-pw-id-type-ad-vpws"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpls_ldp {4, "l2vpn-pw-id-type-ad-vpls-ldp"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_pwr {5, "l2vpn-pw-id-type-pwr"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_evpn {6, "l2vpn-pw-id-type-evpn"};

const Enum::YLeaf L2fibPwId::default_ {0, "default"};
const Enum::YLeaf L2fibPwId::manual {1, "manual"};
const Enum::YLeaf L2fibPwId::vpls {2, "vpls"};
const Enum::YLeaf L2fibPwId::vpws {3, "vpws"};
const Enum::YLeaf L2fibPwId::vpls_ldp {4, "vpls-ldp"};
const Enum::YLeaf L2fibPwId::l2fib_pw_id_type_pwr {5, "l2fib-pw-id-type-pwr"};
const Enum::YLeaf L2fibPwId::l2fib_pw_id_type_evpn {6, "l2fib-pw-id-type-evpn"};

const Enum::YLeaf L2vpnProcRole::unknown {0, "unknown"};
const Enum::YLeaf L2vpnProcRole::v1_active {1, "v1-active"};
const Enum::YLeaf L2vpnProcRole::v1_standby {2, "v1-standby"};
const Enum::YLeaf L2vpnProcRole::v2_active {3, "v2-active"};
const Enum::YLeaf L2vpnProcRole::v2_standby {4, "v2-standby"};
const Enum::YLeaf L2vpnProcRole::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf L2vpnProcRole::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf L2vpnProcRole::count {7, "count"};

const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_not_specified {0, "l2vpn-transport-mode-not-specified"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_ethernet {1, "l2vpn-transport-mode-ethernet"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_vlan {2, "l2vpn-transport-mode-vlan"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_vlan_passthrough {3, "l2vpn-transport-mode-vlan-passthrough"};

const Enum::YLeaf L2vpnMirpLiteStatus::enabled {0, "enabled"};
const Enum::YLeaf L2vpnMirpLiteStatus::not_supported {1, "not-supported"};

const Enum::YLeaf L2vpnTimeStampMode::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTimeStampMode::differential {1, "differential"};
const Enum::YLeaf L2vpnTimeStampMode::absolute {2, "absolute"};
const Enum::YLeaf L2vpnTimeStampMode::none {3, "none"};

const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_none {0, "l2vpn-ad-sig-method-none"};
const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_bgp {1, "l2vpn-ad-sig-method-bgp"};
const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_ldp {2, "l2vpn-ad-sig-method-ldp"};

const Enum::YLeaf L2vpnIpcTransportMode::unicast {0, "unicast"};
const Enum::YLeaf L2vpnIpcTransportMode::broadcast {1, "broadcast"};
const Enum::YLeaf L2vpnIpcTransportMode::unknown {2, "unknown"};

const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_none {0, "l2vpn-ad-rt-none"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_as {1, "l2vpn-ad-rt-as"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_4byte_as {2, "l2vpn-ad-rt-4byte-as"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_v4_addr {3, "l2vpn-ad-rt-v4-addr"};
const Enum::YLeaf L2vpnAdRt::es_import {1538, "es-import"};

const Enum::YLeaf L2vpnTdmRtpOption::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTdmRtpOption::present {1, "present"};
const Enum::YLeaf L2vpnTdmRtpOption::absent {2, "absent"};

const Enum::YLeaf L2vpnBridgeState::bridge_init {0, "bridge-init"};
const Enum::YLeaf L2vpnBridgeState::bridge_up {1, "bridge-up"};
const Enum::YLeaf L2vpnBridgeState::bridge_down {2, "bridge-down"};
const Enum::YLeaf L2vpnBridgeState::bridge_admin_down {3, "bridge-admin-down"};

const Enum::YLeaf L2vpnProcNsrNotReadyReason::collab_time_out {0, "collab-time-out"};
const Enum::YLeaf L2vpnProcNsrNotReadyReason::collab_conntection_idt {1, "collab-conntection-idt"};
const Enum::YLeaf L2vpnProcNsrNotReadyReason::nsr_peer_not_connected {2, "nsr-peer-not-connected"};
const Enum::YLeaf L2vpnProcNsrNotReadyReason::nsr_peer_not_in_sync {3, "nsr-peer-not-in-sync"};

const Enum::YLeaf L2fibGroupState::up {0, "up"};
const Enum::YLeaf L2fibGroupState::down {1, "down"};

const Enum::YLeaf IccpSmState::unresolved {0, "unresolved"};
const Enum::YLeaf IccpSmState::provisioned {1, "provisioned"};
const Enum::YLeaf IccpSmState::connecting {2, "connecting"};
const Enum::YLeaf IccpSmState::connected {3, "connected"};
const Enum::YLeaf IccpSmState::synchronizing {4, "synchronizing"};
const Enum::YLeaf IccpSmState::synchronized {5, "synchronized"};

const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_undefined {0, "l2vpn-vp-state-undefined"};
const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_up {1, "l2vpn-vp-state-up"};
const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_down {2, "l2vpn-vp-state-down"};

const Enum::YLeaf L2fibLoadBal::flow_undef {0, "flow-undef"};
const Enum::YLeaf L2fibLoadBal::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf L2fibLoadBal::src_dst_ip {2, "src-dst-ip"};
const Enum::YLeaf L2fibLoadBal::vc {3, "vc"};

const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_off {0, "l2vpn-pw-sequence-off"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_xmit {1, "l2vpn-pw-sequence-xmit"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_recv {2, "l2vpn-pw-sequence-recv"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_trans {3, "l2vpn-pw-sequence-trans"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_both {4, "l2vpn-pw-sequence-both"};

const Enum::YLeaf P2mpTransportState::none {0, "none"};
const Enum::YLeaf P2mpTransportState::ok {1, "ok"};
const Enum::YLeaf P2mpTransportState::error {2, "error"};
const Enum::YLeaf P2mpTransportState::tunnel_down {3, "tunnel-down"};
const Enum::YLeaf P2mpTransportState::max_tunnels_reached {4, "max-tunnels-reached"};

const Enum::YLeaf L2vpnBagMacAgingMode::aging_none {0, "aging-none"};
const Enum::YLeaf L2vpnBagMacAgingMode::aging_absolute {1, "aging-absolute"};
const Enum::YLeaf L2vpnBagMacAgingMode::aging_inactivity {2, "aging-inactivity"};

const Enum::YLeaf MgmtL2FibMacSecAction::not_set {0, "not-set"};
const Enum::YLeaf MgmtL2FibMacSecAction::restrict {1, "restrict"};
const Enum::YLeaf MgmtL2FibMacSecAction::none {2, "none"};
const Enum::YLeaf MgmtL2FibMacSecAction::shutdown {3, "shutdown"};

const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_128 {0, "l2vpn-pw-fec-128"};
const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_129 {1, "l2vpn-pw-fec-129"};
const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_not_applicable {268435455, "l2vpn-pw-fec-not-applicable"};

const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_none {0, "mac-limit-notify-none"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_syslog {1, "mac-limit-notify-syslog"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_trap {2, "mac-limit-notify-trap"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_syslog_trap {3, "mac-limit-notify-syslog-trap"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_no_config {4, "mac-limit-notify-no-config"};

const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_not_specified {0, "l2vpn-pw-encaps-not-specified"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_l2tpv3 {1, "l2vpn-pw-encaps-l2tpv3"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_l2tpv2 {2, "l2vpn-pw-encaps-l2tpv2"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_mpls {3, "l2vpn-pw-encaps-mpls"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_unknown {4, "l2vpn-pw-encaps-unknown"};

const Enum::YLeaf L2vpnBagStormControlRateUnit::pps {0, "pps"};
const Enum::YLeaf L2vpnBagStormControlRateUnit::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2fibIpAddr::ip_none {0, "ip-none"};
const Enum::YLeaf L2fibIpAddr::v4 {4, "v4"};
const Enum::YLeaf L2fibIpAddr::v6 {6, "v6"};

const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_default {0, "l2vpn-bridge-type-default"};
const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_pbb_edge {1, "l2vpn-bridge-type-pbb-edge"};
const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_pbb_core {2, "l2vpn-bridge-type-pbb-core"};

const Enum::YLeaf L2vpnService::vpws {0, "vpws"};
const Enum::YLeaf L2vpnService::vpls {1, "vpls"};


}
}

