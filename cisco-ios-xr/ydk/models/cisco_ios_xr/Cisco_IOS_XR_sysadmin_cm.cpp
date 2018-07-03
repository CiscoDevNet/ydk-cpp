
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_cm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_cm {

NodeInventory::NodeInventory()
    :
    summary(std::make_shared<NodeInventory::Summary>())
    , detail(std::make_shared<NodeInventory::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "node-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

NodeInventory::~NodeInventory()
{
}

bool NodeInventory::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool NodeInventory::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string NodeInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:node-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<NodeInventory::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<NodeInventory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void NodeInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NodeInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NodeInventory::clone_ptr() const
{
    return std::make_shared<NodeInventory>();
}

std::string NodeInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NodeInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NodeInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NodeInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NodeInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail")
        return true;
    return false;
}

NodeInventory::Summary::Summary()
    :
    node_locations(this, {"node_location"})
{

    yang_name = "summary"; yang_parent_name = "node-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

NodeInventory::Summary::~Summary()
{
}

bool NodeInventory::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_locations.len(); index++)
    {
        if(node_locations[index]->has_data())
            return true;
    }
    return false;
}

bool NodeInventory::Summary::has_operation() const
{
    for (std::size_t index=0; index<node_locations.len(); index++)
    {
        if(node_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NodeInventory::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:node-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string NodeInventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node_locations")
    {
        auto c = std::make_shared<NodeInventory::Summary::NodeLocations>();
        c->parent = this;
        node_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NodeInventory::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NodeInventory::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NodeInventory::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node_locations")
        return true;
    return false;
}

NodeInventory::Summary::NodeLocations::NodeLocations()
    :
    node_location{YType::str, "node_location"}
        ,
    nodei(this, {"ip_address"})
{

    yang_name = "node_locations"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

NodeInventory::Summary::NodeLocations::~NodeLocations()
{
}

bool NodeInventory::Summary::NodeLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodei.len(); index++)
    {
        if(nodei[index]->has_data())
            return true;
    }
    return node_location.is_set;
}

bool NodeInventory::Summary::NodeLocations::has_operation() const
{
    for (std::size_t index=0; index<nodei.len(); index++)
    {
        if(nodei[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter);
}

std::string NodeInventory::Summary::NodeLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:node-inventory/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string NodeInventory::Summary::NodeLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node_locations";
    ADD_KEY_TOKEN(node_location, "node_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Summary::NodeLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Summary::NodeLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodei")
    {
        auto c = std::make_shared<NodeInventory::Summary::NodeLocations::Nodei>();
        c->parent = this;
        nodei.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Summary::NodeLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodei.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NodeInventory::Summary::NodeLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node_location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
}

void NodeInventory::Summary::NodeLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node_location")
    {
        node_location.yfilter = yfilter;
    }
}

bool NodeInventory::Summary::NodeLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodei" || name == "node_location")
        return true;
    return false;
}

NodeInventory::Summary::NodeLocations::Nodei::Nodei()
    :
    ip_address{YType::str, "ip_address"},
    type{YType::str, "type"},
    mac_address{YType::str, "mac_address"},
    card_serial{YType::str, "card_serial"},
    nti{YType::uint32, "nti"}
{

    yang_name = "nodei"; yang_parent_name = "node_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

NodeInventory::Summary::NodeLocations::Nodei::~Nodei()
{
}

bool NodeInventory::Summary::NodeLocations::Nodei::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| type.is_set
	|| mac_address.is_set
	|| card_serial.is_set
	|| nti.is_set;
}

bool NodeInventory::Summary::NodeLocations::Nodei::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(card_serial.yfilter)
	|| ydk::is_set(nti.yfilter);
}

std::string NodeInventory::Summary::NodeLocations::Nodei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodei";
    ADD_KEY_TOKEN(ip_address, "ip_address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Summary::NodeLocations::Nodei::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (card_serial.is_set || is_set(card_serial.yfilter)) leaf_name_data.push_back(card_serial.get_name_leafdata());
    if (nti.is_set || is_set(nti.yfilter)) leaf_name_data.push_back(nti.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Summary::NodeLocations::Nodei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Summary::NodeLocations::Nodei::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NodeInventory::Summary::NodeLocations::Nodei::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip_address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac_address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_serial")
    {
        card_serial = value;
        card_serial.value_namespace = name_space;
        card_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nti")
    {
        nti = value;
        nti.value_namespace = name_space;
        nti.value_namespace_prefix = name_space_prefix;
    }
}

void NodeInventory::Summary::NodeLocations::Nodei::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip_address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mac_address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "card_serial")
    {
        card_serial.yfilter = yfilter;
    }
    if(value_path == "nti")
    {
        nti.yfilter = yfilter;
    }
}

bool NodeInventory::Summary::NodeLocations::Nodei::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip_address" || name == "type" || name == "mac_address" || name == "card_serial" || name == "nti")
        return true;
    return false;
}

NodeInventory::Detail::Detail()
    :
    node_locations(this, {"node_location"})
{

    yang_name = "detail"; yang_parent_name = "node-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

NodeInventory::Detail::~Detail()
{
}

bool NodeInventory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_locations.len(); index++)
    {
        if(node_locations[index]->has_data())
            return true;
    }
    return false;
}

bool NodeInventory::Detail::has_operation() const
{
    for (std::size_t index=0; index<node_locations.len(); index++)
    {
        if(node_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NodeInventory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:node-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string NodeInventory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node_locations")
    {
        auto c = std::make_shared<NodeInventory::Detail::NodeLocations>();
        c->parent = this;
        node_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NodeInventory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NodeInventory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NodeInventory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node_locations")
        return true;
    return false;
}

NodeInventory::Detail::NodeLocations::NodeLocations()
    :
    node_location{YType::str, "node_location"}
        ,
    nodei(this, {"ip_address"})
{

    yang_name = "node_locations"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

NodeInventory::Detail::NodeLocations::~NodeLocations()
{
}

bool NodeInventory::Detail::NodeLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodei.len(); index++)
    {
        if(nodei[index]->has_data())
            return true;
    }
    return node_location.is_set;
}

bool NodeInventory::Detail::NodeLocations::has_operation() const
{
    for (std::size_t index=0; index<nodei.len(); index++)
    {
        if(nodei[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter);
}

std::string NodeInventory::Detail::NodeLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:node-inventory/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string NodeInventory::Detail::NodeLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node_locations";
    ADD_KEY_TOKEN(node_location, "node_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Detail::NodeLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Detail::NodeLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodei")
    {
        auto c = std::make_shared<NodeInventory::Detail::NodeLocations::Nodei>();
        c->parent = this;
        nodei.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Detail::NodeLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodei.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NodeInventory::Detail::NodeLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node_location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
}

void NodeInventory::Detail::NodeLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node_location")
    {
        node_location.yfilter = yfilter;
    }
}

bool NodeInventory::Detail::NodeLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodei" || name == "node_location")
        return true;
    return false;
}

NodeInventory::Detail::NodeLocations::Nodei::Nodei()
    :
    ip_address{YType::str, "ip_address"},
    type{YType::str, "type"},
    mac_address{YType::str, "mac_address"},
    card_serial{YType::str, "card_serial"},
    nti{YType::uint32, "nti"},
    restart{YType::boolean, "restart"},
    data{YType::str, "data"},
    sdr{YType::str, "sdr"}
{

    yang_name = "nodei"; yang_parent_name = "node_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

NodeInventory::Detail::NodeLocations::Nodei::~Nodei()
{
}

bool NodeInventory::Detail::NodeLocations::Nodei::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| type.is_set
	|| mac_address.is_set
	|| card_serial.is_set
	|| nti.is_set
	|| restart.is_set
	|| data.is_set
	|| sdr.is_set;
}

bool NodeInventory::Detail::NodeLocations::Nodei::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(card_serial.yfilter)
	|| ydk::is_set(nti.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(sdr.yfilter);
}

std::string NodeInventory::Detail::NodeLocations::Nodei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodei";
    ADD_KEY_TOKEN(ip_address, "ip_address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodeInventory::Detail::NodeLocations::Nodei::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (card_serial.is_set || is_set(card_serial.yfilter)) leaf_name_data.push_back(card_serial.get_name_leafdata());
    if (nti.is_set || is_set(nti.yfilter)) leaf_name_data.push_back(nti.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodeInventory::Detail::NodeLocations::Nodei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodeInventory::Detail::NodeLocations::Nodei::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NodeInventory::Detail::NodeLocations::Nodei::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip_address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac_address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_serial")
    {
        card_serial = value;
        card_serial.value_namespace = name_space;
        card_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nti")
    {
        nti = value;
        nti.value_namespace = name_space;
        nti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
}

void NodeInventory::Detail::NodeLocations::Nodei::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip_address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mac_address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "card_serial")
    {
        card_serial.yfilter = yfilter;
    }
    if(value_path == "nti")
    {
        nti.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
}

bool NodeInventory::Detail::NodeLocations::Nodei::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip_address" || name == "type" || name == "mac_address" || name == "card_serial" || name == "nti" || name == "restart" || name == "data" || name == "sdr")
        return true;
    return false;
}

CardInventory::CardInventory()
    :
    card_locations(this, {"card_location"})
{

    yang_name = "card-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

CardInventory::~CardInventory()
{
}

bool CardInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_locations.len(); index++)
    {
        if(card_locations[index]->has_data())
            return true;
    }
    return false;
}

bool CardInventory::has_operation() const
{
    for (std::size_t index=0; index<card_locations.len(); index++)
    {
        if(card_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CardInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:card-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CardInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CardInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_locations")
    {
        auto c = std::make_shared<CardInventory::CardLocations>();
        c->parent = this;
        card_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CardInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : card_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CardInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CardInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CardInventory::clone_ptr() const
{
    return std::make_shared<CardInventory>();
}

std::string CardInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CardInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CardInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CardInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CardInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_locations")
        return true;
    return false;
}

CardInventory::CardLocations::CardLocations()
    :
    card_location{YType::str, "card_location"}
        ,
    cardi(this, {"card_serial"})
{

    yang_name = "card_locations"; yang_parent_name = "card-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

CardInventory::CardLocations::~CardLocations()
{
}

bool CardInventory::CardLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cardi.len(); index++)
    {
        if(cardi[index]->has_data())
            return true;
    }
    return card_location.is_set;
}

bool CardInventory::CardLocations::has_operation() const
{
    for (std::size_t index=0; index<cardi.len(); index++)
    {
        if(cardi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_location.yfilter);
}

std::string CardInventory::CardLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:card-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string CardInventory::CardLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_locations";
    ADD_KEY_TOKEN(card_location, "card_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CardInventory::CardLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_location.is_set || is_set(card_location.yfilter)) leaf_name_data.push_back(card_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CardInventory::CardLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cardi")
    {
        auto c = std::make_shared<CardInventory::CardLocations::Cardi>();
        c->parent = this;
        cardi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CardInventory::CardLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cardi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CardInventory::CardLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_location")
    {
        card_location = value;
        card_location.value_namespace = name_space;
        card_location.value_namespace_prefix = name_space_prefix;
    }
}

void CardInventory::CardLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_location")
    {
        card_location.yfilter = yfilter;
    }
}

bool CardInventory::CardLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cardi" || name == "card_location")
        return true;
    return false;
}

CardInventory::CardLocations::Cardi::Cardi()
    :
    card_serial{YType::str, "card_serial"},
    node_id{YType::str, "node_id"},
    card_type{YType::str, "card_type"},
    hw_state{YType::str, "hw_state"},
    sw_state{YType::str, "sw_state"},
    slot{YType::uint32, "slot"},
    cti{YType::uint32, "cti"}
{

    yang_name = "cardi"; yang_parent_name = "card_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

CardInventory::CardLocations::Cardi::~Cardi()
{
}

bool CardInventory::CardLocations::Cardi::has_data() const
{
    if (is_presence_container) return true;
    return card_serial.is_set
	|| node_id.is_set
	|| card_type.is_set
	|| hw_state.is_set
	|| sw_state.is_set
	|| slot.is_set
	|| cti.is_set;
}

bool CardInventory::CardLocations::Cardi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_serial.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(hw_state.yfilter)
	|| ydk::is_set(sw_state.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(cti.yfilter);
}

std::string CardInventory::CardLocations::Cardi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cardi";
    ADD_KEY_TOKEN(card_serial, "card_serial");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CardInventory::CardLocations::Cardi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_serial.is_set || is_set(card_serial.yfilter)) leaf_name_data.push_back(card_serial.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (hw_state.is_set || is_set(hw_state.yfilter)) leaf_name_data.push_back(hw_state.get_name_leafdata());
    if (sw_state.is_set || is_set(sw_state.yfilter)) leaf_name_data.push_back(sw_state.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (cti.is_set || is_set(cti.yfilter)) leaf_name_data.push_back(cti.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CardInventory::CardLocations::Cardi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CardInventory::CardLocations::Cardi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CardInventory::CardLocations::Cardi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_serial")
    {
        card_serial = value;
        card_serial.value_namespace = name_space;
        card_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node_id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw_state")
    {
        hw_state = value;
        hw_state.value_namespace = name_space;
        hw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw_state")
    {
        sw_state = value;
        sw_state.value_namespace = name_space;
        sw_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cti")
    {
        cti = value;
        cti.value_namespace = name_space;
        cti.value_namespace_prefix = name_space_prefix;
    }
}

void CardInventory::CardLocations::Cardi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_serial")
    {
        card_serial.yfilter = yfilter;
    }
    if(value_path == "node_id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "card_type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "hw_state")
    {
        hw_state.yfilter = yfilter;
    }
    if(value_path == "sw_state")
    {
        sw_state.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "cti")
    {
        cti.yfilter = yfilter;
    }
}

bool CardInventory::CardLocations::Cardi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_serial" || name == "node_id" || name == "card_type" || name == "hw_state" || name == "sw_state" || name == "slot" || name == "cti")
        return true;
    return false;
}

RackInventory::RackInventory()
    :
    rack_locations(this, {"rack_location"})
{

    yang_name = "rack-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

RackInventory::~RackInventory()
{
}

bool RackInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack_locations.len(); index++)
    {
        if(rack_locations[index]->has_data())
            return true;
    }
    return false;
}

bool RackInventory::has_operation() const
{
    for (std::size_t index=0; index<rack_locations.len(); index++)
    {
        if(rack_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RackInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:rack-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RackInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack_locations")
    {
        auto c = std::make_shared<RackInventory::RackLocations>();
        c->parent = this;
        rack_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RackInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RackInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RackInventory::clone_ptr() const
{
    return std::make_shared<RackInventory>();
}

std::string RackInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RackInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RackInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RackInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RackInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_locations")
        return true;
    return false;
}

RackInventory::RackLocations::RackLocations()
    :
    rack_location{YType::str, "rack_location"}
        ,
    racki(this, {"rack_serial"})
{

    yang_name = "rack_locations"; yang_parent_name = "rack-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

RackInventory::RackLocations::~RackLocations()
{
}

bool RackInventory::RackLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<racki.len(); index++)
    {
        if(racki[index]->has_data())
            return true;
    }
    return rack_location.is_set;
}

bool RackInventory::RackLocations::has_operation() const
{
    for (std::size_t index=0; index<racki.len(); index++)
    {
        if(racki[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_location.yfilter);
}

std::string RackInventory::RackLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:rack-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string RackInventory::RackLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack_locations";
    ADD_KEY_TOKEN(rack_location, "rack_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackInventory::RackLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_location.is_set || is_set(rack_location.yfilter)) leaf_name_data.push_back(rack_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RackInventory::RackLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racki")
    {
        auto c = std::make_shared<RackInventory::RackLocations::Racki>();
        c->parent = this;
        racki.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackInventory::RackLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : racki.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RackInventory::RackLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_location")
    {
        rack_location = value;
        rack_location.value_namespace = name_space;
        rack_location.value_namespace_prefix = name_space_prefix;
    }
}

void RackInventory::RackLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_location")
    {
        rack_location.yfilter = yfilter;
    }
}

bool RackInventory::RackLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racki" || name == "rack_location")
        return true;
    return false;
}

RackInventory::RackLocations::Racki::Racki()
    :
    rack_serial{YType::str, "rack_serial"},
    rack_number{YType::int32, "rack_number"},
    rack_state{YType::int32, "rack_state"}
{

    yang_name = "racki"; yang_parent_name = "rack_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

RackInventory::RackLocations::Racki::~Racki()
{
}

bool RackInventory::RackLocations::Racki::has_data() const
{
    if (is_presence_container) return true;
    return rack_serial.is_set
	|| rack_number.is_set
	|| rack_state.is_set;
}

bool RackInventory::RackLocations::Racki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_serial.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(rack_state.yfilter);
}

std::string RackInventory::RackLocations::Racki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racki";
    ADD_KEY_TOKEN(rack_serial, "rack_serial");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackInventory::RackLocations::Racki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_serial.is_set || is_set(rack_serial.yfilter)) leaf_name_data.push_back(rack_serial.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (rack_state.is_set || is_set(rack_state.yfilter)) leaf_name_data.push_back(rack_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RackInventory::RackLocations::Racki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackInventory::RackLocations::Racki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RackInventory::RackLocations::Racki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_serial")
    {
        rack_serial = value;
        rack_serial.value_namespace = name_space;
        rack_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_state")
    {
        rack_state = value;
        rack_state.value_namespace = name_space;
        rack_state.value_namespace_prefix = name_space_prefix;
    }
}

void RackInventory::RackLocations::Racki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_serial")
    {
        rack_serial.yfilter = yfilter;
    }
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "rack_state")
    {
        rack_state.yfilter = yfilter;
    }
}

bool RackInventory::RackLocations::Racki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_serial" || name == "rack_number" || name == "rack_state")
        return true;
    return false;
}

SystemServiceInventory::SystemServiceInventory()
    :
    ssvc_locations(this, {"ssvc_location"})
{

    yang_name = "system-service-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

SystemServiceInventory::~SystemServiceInventory()
{
}

bool SystemServiceInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ssvc_locations.len(); index++)
    {
        if(ssvc_locations[index]->has_data())
            return true;
    }
    return false;
}

bool SystemServiceInventory::has_operation() const
{
    for (std::size_t index=0; index<ssvc_locations.len(); index++)
    {
        if(ssvc_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemServiceInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:system-service-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemServiceInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SystemServiceInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssvc_locations")
    {
        auto c = std::make_shared<SystemServiceInventory::SsvcLocations>();
        c->parent = this;
        ssvc_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemServiceInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ssvc_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SystemServiceInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemServiceInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SystemServiceInventory::clone_ptr() const
{
    return std::make_shared<SystemServiceInventory>();
}

std::string SystemServiceInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SystemServiceInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SystemServiceInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SystemServiceInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SystemServiceInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssvc_locations")
        return true;
    return false;
}

SystemServiceInventory::SsvcLocations::SsvcLocations()
    :
    ssvc_location{YType::str, "ssvc_location"}
        ,
    ssvci(this, {"svc_name"})
{

    yang_name = "ssvc_locations"; yang_parent_name = "system-service-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

SystemServiceInventory::SsvcLocations::~SsvcLocations()
{
}

bool SystemServiceInventory::SsvcLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ssvci.len(); index++)
    {
        if(ssvci[index]->has_data())
            return true;
    }
    return ssvc_location.is_set;
}

bool SystemServiceInventory::SsvcLocations::has_operation() const
{
    for (std::size_t index=0; index<ssvci.len(); index++)
    {
        if(ssvci[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ssvc_location.yfilter);
}

std::string SystemServiceInventory::SsvcLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:system-service-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemServiceInventory::SsvcLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssvc_locations";
    ADD_KEY_TOKEN(ssvc_location, "ssvc_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemServiceInventory::SsvcLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssvc_location.is_set || is_set(ssvc_location.yfilter)) leaf_name_data.push_back(ssvc_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemServiceInventory::SsvcLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssvci")
    {
        auto c = std::make_shared<SystemServiceInventory::SsvcLocations::Ssvci>();
        c->parent = this;
        ssvci.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemServiceInventory::SsvcLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ssvci.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SystemServiceInventory::SsvcLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssvc_location")
    {
        ssvc_location = value;
        ssvc_location.value_namespace = name_space;
        ssvc_location.value_namespace_prefix = name_space_prefix;
    }
}

void SystemServiceInventory::SsvcLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssvc_location")
    {
        ssvc_location.yfilter = yfilter;
    }
}

bool SystemServiceInventory::SsvcLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssvci" || name == "ssvc_location")
        return true;
    return false;
}

SystemServiceInventory::SsvcLocations::Ssvci::Ssvci()
    :
    svc_name{YType::str, "svc_name"},
    placement_first{YType::str, "placement_first"},
    nodeid_first{YType::str, "nodeid_first"},
    placement_second{YType::str, "placement_second"},
    nodeid_second{YType::str, "nodeid_second"},
    svc_load{YType::uint8, "svc_load"}
{

    yang_name = "ssvci"; yang_parent_name = "ssvc_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

SystemServiceInventory::SsvcLocations::Ssvci::~Ssvci()
{
}

bool SystemServiceInventory::SsvcLocations::Ssvci::has_data() const
{
    if (is_presence_container) return true;
    return svc_name.is_set
	|| placement_first.is_set
	|| nodeid_first.is_set
	|| placement_second.is_set
	|| nodeid_second.is_set
	|| svc_load.is_set;
}

bool SystemServiceInventory::SsvcLocations::Ssvci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(svc_name.yfilter)
	|| ydk::is_set(placement_first.yfilter)
	|| ydk::is_set(nodeid_first.yfilter)
	|| ydk::is_set(placement_second.yfilter)
	|| ydk::is_set(nodeid_second.yfilter)
	|| ydk::is_set(svc_load.yfilter);
}

std::string SystemServiceInventory::SsvcLocations::Ssvci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssvci";
    ADD_KEY_TOKEN(svc_name, "svc_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemServiceInventory::SsvcLocations::Ssvci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (svc_name.is_set || is_set(svc_name.yfilter)) leaf_name_data.push_back(svc_name.get_name_leafdata());
    if (placement_first.is_set || is_set(placement_first.yfilter)) leaf_name_data.push_back(placement_first.get_name_leafdata());
    if (nodeid_first.is_set || is_set(nodeid_first.yfilter)) leaf_name_data.push_back(nodeid_first.get_name_leafdata());
    if (placement_second.is_set || is_set(placement_second.yfilter)) leaf_name_data.push_back(placement_second.get_name_leafdata());
    if (nodeid_second.is_set || is_set(nodeid_second.yfilter)) leaf_name_data.push_back(nodeid_second.get_name_leafdata());
    if (svc_load.is_set || is_set(svc_load.yfilter)) leaf_name_data.push_back(svc_load.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemServiceInventory::SsvcLocations::Ssvci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemServiceInventory::SsvcLocations::Ssvci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SystemServiceInventory::SsvcLocations::Ssvci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "svc_name")
    {
        svc_name = value;
        svc_name.value_namespace = name_space;
        svc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement_first")
    {
        placement_first = value;
        placement_first.value_namespace = name_space;
        placement_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_first")
    {
        nodeid_first = value;
        nodeid_first.value_namespace = name_space;
        nodeid_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement_second")
    {
        placement_second = value;
        placement_second.value_namespace = name_space;
        placement_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_second")
    {
        nodeid_second = value;
        nodeid_second.value_namespace = name_space;
        nodeid_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svc_load")
    {
        svc_load = value;
        svc_load.value_namespace = name_space;
        svc_load.value_namespace_prefix = name_space_prefix;
    }
}

void SystemServiceInventory::SsvcLocations::Ssvci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "svc_name")
    {
        svc_name.yfilter = yfilter;
    }
    if(value_path == "placement_first")
    {
        placement_first.yfilter = yfilter;
    }
    if(value_path == "nodeid_first")
    {
        nodeid_first.yfilter = yfilter;
    }
    if(value_path == "placement_second")
    {
        placement_second.yfilter = yfilter;
    }
    if(value_path == "nodeid_second")
    {
        nodeid_second.yfilter = yfilter;
    }
    if(value_path == "svc_load")
    {
        svc_load.yfilter = yfilter;
    }
}

bool SystemServiceInventory::SsvcLocations::Ssvci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "svc_name" || name == "placement_first" || name == "nodeid_first" || name == "placement_second" || name == "nodeid_second" || name == "svc_load")
        return true;
    return false;
}

RackServiceInventory::RackServiceInventory()
    :
    rsvc_locations(this, {"rsvc_location"})
{

    yang_name = "rack-service-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

RackServiceInventory::~RackServiceInventory()
{
}

bool RackServiceInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvc_locations.len(); index++)
    {
        if(rsvc_locations[index]->has_data())
            return true;
    }
    return false;
}

bool RackServiceInventory::has_operation() const
{
    for (std::size_t index=0; index<rsvc_locations.len(); index++)
    {
        if(rsvc_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RackServiceInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:rack-service-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackServiceInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RackServiceInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvc_locations")
    {
        auto c = std::make_shared<RackServiceInventory::RsvcLocations>();
        c->parent = this;
        rsvc_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackServiceInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvc_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RackServiceInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RackServiceInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RackServiceInventory::clone_ptr() const
{
    return std::make_shared<RackServiceInventory>();
}

std::string RackServiceInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RackServiceInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RackServiceInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RackServiceInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RackServiceInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvc_locations")
        return true;
    return false;
}

RackServiceInventory::RsvcLocations::RsvcLocations()
    :
    rsvc_location{YType::str, "rsvc_location"}
        ,
    rsvci(this, {"svc_name"})
{

    yang_name = "rsvc_locations"; yang_parent_name = "rack-service-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

RackServiceInventory::RsvcLocations::~RsvcLocations()
{
}

bool RackServiceInventory::RsvcLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvci.len(); index++)
    {
        if(rsvci[index]->has_data())
            return true;
    }
    return rsvc_location.is_set;
}

bool RackServiceInventory::RsvcLocations::has_operation() const
{
    for (std::size_t index=0; index<rsvci.len(); index++)
    {
        if(rsvci[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsvc_location.yfilter);
}

std::string RackServiceInventory::RsvcLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:rack-service-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string RackServiceInventory::RsvcLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvc_locations";
    ADD_KEY_TOKEN(rsvc_location, "rsvc_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackServiceInventory::RsvcLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvc_location.is_set || is_set(rsvc_location.yfilter)) leaf_name_data.push_back(rsvc_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RackServiceInventory::RsvcLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvci")
    {
        auto c = std::make_shared<RackServiceInventory::RsvcLocations::Rsvci>();
        c->parent = this;
        rsvci.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackServiceInventory::RsvcLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvci.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RackServiceInventory::RsvcLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvc_location")
    {
        rsvc_location = value;
        rsvc_location.value_namespace = name_space;
        rsvc_location.value_namespace_prefix = name_space_prefix;
    }
}

void RackServiceInventory::RsvcLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvc_location")
    {
        rsvc_location.yfilter = yfilter;
    }
}

bool RackServiceInventory::RsvcLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvci" || name == "rsvc_location")
        return true;
    return false;
}

RackServiceInventory::RsvcLocations::Rsvci::Rsvci()
    :
    svc_name{YType::str, "svc_name"},
    placement_first{YType::str, "placement_first"},
    nodeid_first{YType::str, "nodeid_first"},
    placement_second{YType::str, "placement_second"},
    nodeid_second{YType::str, "nodeid_second"},
    svc_load{YType::uint8, "svc_load"}
{

    yang_name = "rsvci"; yang_parent_name = "rsvc_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

RackServiceInventory::RsvcLocations::Rsvci::~Rsvci()
{
}

bool RackServiceInventory::RsvcLocations::Rsvci::has_data() const
{
    if (is_presence_container) return true;
    return svc_name.is_set
	|| placement_first.is_set
	|| nodeid_first.is_set
	|| placement_second.is_set
	|| nodeid_second.is_set
	|| svc_load.is_set;
}

bool RackServiceInventory::RsvcLocations::Rsvci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(svc_name.yfilter)
	|| ydk::is_set(placement_first.yfilter)
	|| ydk::is_set(nodeid_first.yfilter)
	|| ydk::is_set(placement_second.yfilter)
	|| ydk::is_set(nodeid_second.yfilter)
	|| ydk::is_set(svc_load.yfilter);
}

std::string RackServiceInventory::RsvcLocations::Rsvci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvci";
    ADD_KEY_TOKEN(svc_name, "svc_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RackServiceInventory::RsvcLocations::Rsvci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (svc_name.is_set || is_set(svc_name.yfilter)) leaf_name_data.push_back(svc_name.get_name_leafdata());
    if (placement_first.is_set || is_set(placement_first.yfilter)) leaf_name_data.push_back(placement_first.get_name_leafdata());
    if (nodeid_first.is_set || is_set(nodeid_first.yfilter)) leaf_name_data.push_back(nodeid_first.get_name_leafdata());
    if (placement_second.is_set || is_set(placement_second.yfilter)) leaf_name_data.push_back(placement_second.get_name_leafdata());
    if (nodeid_second.is_set || is_set(nodeid_second.yfilter)) leaf_name_data.push_back(nodeid_second.get_name_leafdata());
    if (svc_load.is_set || is_set(svc_load.yfilter)) leaf_name_data.push_back(svc_load.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RackServiceInventory::RsvcLocations::Rsvci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RackServiceInventory::RsvcLocations::Rsvci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RackServiceInventory::RsvcLocations::Rsvci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "svc_name")
    {
        svc_name = value;
        svc_name.value_namespace = name_space;
        svc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement_first")
    {
        placement_first = value;
        placement_first.value_namespace = name_space;
        placement_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_first")
    {
        nodeid_first = value;
        nodeid_first.value_namespace = name_space;
        nodeid_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "placement_second")
    {
        placement_second = value;
        placement_second.value_namespace = name_space;
        placement_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid_second")
    {
        nodeid_second = value;
        nodeid_second.value_namespace = name_space;
        nodeid_second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svc_load")
    {
        svc_load = value;
        svc_load.value_namespace = name_space;
        svc_load.value_namespace_prefix = name_space_prefix;
    }
}

void RackServiceInventory::RsvcLocations::Rsvci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "svc_name")
    {
        svc_name.yfilter = yfilter;
    }
    if(value_path == "placement_first")
    {
        placement_first.yfilter = yfilter;
    }
    if(value_path == "nodeid_first")
    {
        nodeid_first.yfilter = yfilter;
    }
    if(value_path == "placement_second")
    {
        placement_second.yfilter = yfilter;
    }
    if(value_path == "nodeid_second")
    {
        nodeid_second.yfilter = yfilter;
    }
    if(value_path == "svc_load")
    {
        svc_load.yfilter = yfilter;
    }
}

bool RackServiceInventory::RsvcLocations::Rsvci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "svc_name" || name == "placement_first" || name == "nodeid_first" || name == "placement_second" || name == "nodeid_second" || name == "svc_load")
        return true;
    return false;
}

SdrInventory::SdrInventory()
    :
    sdr_locations(this, {"sdr_location"})
{

    yang_name = "sdr-inventory"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrInventory::~SdrInventory()
{
}

bool SdrInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_locations.len(); index++)
    {
        if(sdr_locations[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventory::has_operation() const
{
    for (std::size_t index=0; index<sdr_locations.len(); index++)
    {
        if(sdr_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:sdr-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr_locations")
    {
        auto c = std::make_shared<SdrInventory::SdrLocations>();
        c->parent = this;
        sdr_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrInventory::clone_ptr() const
{
    return std::make_shared<SdrInventory>();
}

std::string SdrInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_locations")
        return true;
    return false;
}

SdrInventory::SdrLocations::SdrLocations()
    :
    sdr_location{YType::str, "sdr_location"}
        ,
    sdri(this, {"sdr_name"})
{

    yang_name = "sdr_locations"; yang_parent_name = "sdr-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrInventory::SdrLocations::~SdrLocations()
{
}

bool SdrInventory::SdrLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdri.len(); index++)
    {
        if(sdri[index]->has_data())
            return true;
    }
    return sdr_location.is_set;
}

bool SdrInventory::SdrLocations::has_operation() const
{
    for (std::size_t index=0; index<sdri.len(); index++)
    {
        if(sdri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_location.yfilter);
}

std::string SdrInventory::SdrLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:sdr-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrInventory::SdrLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_locations";
    ADD_KEY_TOKEN(sdr_location, "sdr_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::SdrLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_location.is_set || is_set(sdr_location.yfilter)) leaf_name_data.push_back(sdr_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::SdrLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdri")
    {
        auto c = std::make_shared<SdrInventory::SdrLocations::Sdri>();
        c->parent = this;
        sdri.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::SdrLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdri.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventory::SdrLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_location")
    {
        sdr_location = value;
        sdr_location.value_namespace = name_space;
        sdr_location.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::SdrLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_location")
    {
        sdr_location.yfilter = yfilter;
    }
}

bool SdrInventory::SdrLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdri" || name == "sdr_location")
        return true;
    return false;
}

SdrInventory::SdrLocations::Sdri::Sdri()
    :
    sdr_name{YType::str, "sdr_name"},
    sdr_id{YType::uint32, "sdr_id"},
    sdr_vlan_baseid{YType::uint8, "sdr_vlan_baseid"},
    sdr_version{YType::uint64, "sdr_version"}
{

    yang_name = "sdri"; yang_parent_name = "sdr_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventory::SdrLocations::Sdri::~Sdri()
{
}

bool SdrInventory::SdrLocations::Sdri::has_data() const
{
    if (is_presence_container) return true;
    return sdr_name.is_set
	|| sdr_id.is_set
	|| sdr_vlan_baseid.is_set
	|| sdr_version.is_set;
}

bool SdrInventory::SdrLocations::Sdri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(sdr_vlan_baseid.yfilter)
	|| ydk::is_set(sdr_version.yfilter);
}

std::string SdrInventory::SdrLocations::Sdri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdri";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::SdrLocations::Sdri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (sdr_vlan_baseid.is_set || is_set(sdr_vlan_baseid.yfilter)) leaf_name_data.push_back(sdr_vlan_baseid.get_name_leafdata());
    if (sdr_version.is_set || is_set(sdr_version.yfilter)) leaf_name_data.push_back(sdr_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::SdrLocations::Sdri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::SdrLocations::Sdri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrInventory::SdrLocations::Sdri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_vlan_baseid")
    {
        sdr_vlan_baseid = value;
        sdr_vlan_baseid.value_namespace = name_space;
        sdr_vlan_baseid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_version")
    {
        sdr_version = value;
        sdr_version.value_namespace = name_space;
        sdr_version.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::SdrLocations::Sdri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "sdr_id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "sdr_vlan_baseid")
    {
        sdr_vlan_baseid.yfilter = yfilter;
    }
    if(value_path == "sdr_version")
    {
        sdr_version.yfilter = yfilter;
    }
}

bool SdrInventory::SdrLocations::Sdri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_name" || name == "sdr_id" || name == "sdr_vlan_baseid" || name == "sdr_version")
        return true;
    return false;
}

LeaderStatistics::LeaderStatistics()
    :
    ldr_locations(this, {"ldr_location"})
{

    yang_name = "leader-statistics"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

LeaderStatistics::~LeaderStatistics()
{
}

bool LeaderStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldr_locations.len(); index++)
    {
        if(ldr_locations[index]->has_data())
            return true;
    }
    return false;
}

bool LeaderStatistics::has_operation() const
{
    for (std::size_t index=0; index<ldr_locations.len(); index++)
    {
        if(ldr_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LeaderStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:leader-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LeaderStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LeaderStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldr_locations")
    {
        auto c = std::make_shared<LeaderStatistics::LdrLocations>();
        c->parent = this;
        ldr_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LeaderStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ldr_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LeaderStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LeaderStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LeaderStatistics::clone_ptr() const
{
    return std::make_shared<LeaderStatistics>();
}

std::string LeaderStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LeaderStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LeaderStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LeaderStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LeaderStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldr_locations")
        return true;
    return false;
}

LeaderStatistics::LdrLocations::LdrLocations()
    :
    ldr_location{YType::str, "ldr_location"},
    syslead{YType::str, "syslead"},
    bkup_syslead{YType::str, "bkup_syslead"},
    racklead{YType::str, "racklead"},
    bkup_racklead{YType::str, "bkup_racklead"},
    l1_dis{YType::str, "l1_dis"},
    l2_dis{YType::str, "l2_dis"}
{

    yang_name = "ldr_locations"; yang_parent_name = "leader-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

LeaderStatistics::LdrLocations::~LdrLocations()
{
}

bool LeaderStatistics::LdrLocations::has_data() const
{
    if (is_presence_container) return true;
    return ldr_location.is_set
	|| syslead.is_set
	|| bkup_syslead.is_set
	|| racklead.is_set
	|| bkup_racklead.is_set
	|| l1_dis.is_set
	|| l2_dis.is_set;
}

bool LeaderStatistics::LdrLocations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldr_location.yfilter)
	|| ydk::is_set(syslead.yfilter)
	|| ydk::is_set(bkup_syslead.yfilter)
	|| ydk::is_set(racklead.yfilter)
	|| ydk::is_set(bkup_racklead.yfilter)
	|| ydk::is_set(l1_dis.yfilter)
	|| ydk::is_set(l2_dis.yfilter);
}

std::string LeaderStatistics::LdrLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:leader-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string LeaderStatistics::LdrLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldr_locations";
    ADD_KEY_TOKEN(ldr_location, "ldr_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LeaderStatistics::LdrLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldr_location.is_set || is_set(ldr_location.yfilter)) leaf_name_data.push_back(ldr_location.get_name_leafdata());
    if (syslead.is_set || is_set(syslead.yfilter)) leaf_name_data.push_back(syslead.get_name_leafdata());
    if (bkup_syslead.is_set || is_set(bkup_syslead.yfilter)) leaf_name_data.push_back(bkup_syslead.get_name_leafdata());
    if (racklead.is_set || is_set(racklead.yfilter)) leaf_name_data.push_back(racklead.get_name_leafdata());
    if (bkup_racklead.is_set || is_set(bkup_racklead.yfilter)) leaf_name_data.push_back(bkup_racklead.get_name_leafdata());
    if (l1_dis.is_set || is_set(l1_dis.yfilter)) leaf_name_data.push_back(l1_dis.get_name_leafdata());
    if (l2_dis.is_set || is_set(l2_dis.yfilter)) leaf_name_data.push_back(l2_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LeaderStatistics::LdrLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LeaderStatistics::LdrLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LeaderStatistics::LdrLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldr_location")
    {
        ldr_location = value;
        ldr_location.value_namespace = name_space;
        ldr_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslead")
    {
        syslead = value;
        syslead.value_namespace = name_space;
        syslead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkup_syslead")
    {
        bkup_syslead = value;
        bkup_syslead.value_namespace = name_space;
        bkup_syslead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "racklead")
    {
        racklead = value;
        racklead.value_namespace = name_space;
        racklead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkup_racklead")
    {
        bkup_racklead = value;
        bkup_racklead.value_namespace = name_space;
        bkup_racklead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1_dis")
    {
        l1_dis = value;
        l1_dis.value_namespace = name_space;
        l1_dis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2_dis")
    {
        l2_dis = value;
        l2_dis.value_namespace = name_space;
        l2_dis.value_namespace_prefix = name_space_prefix;
    }
}

void LeaderStatistics::LdrLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldr_location")
    {
        ldr_location.yfilter = yfilter;
    }
    if(value_path == "syslead")
    {
        syslead.yfilter = yfilter;
    }
    if(value_path == "bkup_syslead")
    {
        bkup_syslead.yfilter = yfilter;
    }
    if(value_path == "racklead")
    {
        racklead.yfilter = yfilter;
    }
    if(value_path == "bkup_racklead")
    {
        bkup_racklead.yfilter = yfilter;
    }
    if(value_path == "l1_dis")
    {
        l1_dis.yfilter = yfilter;
    }
    if(value_path == "l2_dis")
    {
        l2_dis.yfilter = yfilter;
    }
}

bool LeaderStatistics::LdrLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldr_location" || name == "syslead" || name == "bkup_syslead" || name == "racklead" || name == "bkup_racklead" || name == "l1_dis" || name == "l2_dis")
        return true;
    return false;
}

TopologyNeighbors::TopologyNeighbors()
    :
    nbr_locations(this, {"nbr_location"})
{

    yang_name = "topology-neighbors"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

TopologyNeighbors::~TopologyNeighbors()
{
}

bool TopologyNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbr_locations.len(); index++)
    {
        if(nbr_locations[index]->has_data())
            return true;
    }
    return false;
}

bool TopologyNeighbors::has_operation() const
{
    for (std::size_t index=0; index<nbr_locations.len(); index++)
    {
        if(nbr_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TopologyNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:topology-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TopologyNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TopologyNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr_locations")
    {
        auto c = std::make_shared<TopologyNeighbors::NbrLocations>();
        c->parent = this;
        nbr_locations.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TopologyNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbr_locations.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TopologyNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TopologyNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TopologyNeighbors::clone_ptr() const
{
    return std::make_shared<TopologyNeighbors>();
}

std::string TopologyNeighbors::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TopologyNeighbors::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TopologyNeighbors::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TopologyNeighbors::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TopologyNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr_locations")
        return true;
    return false;
}

TopologyNeighbors::NbrLocations::NbrLocations()
    :
    nbr_location{YType::str, "nbr_location"}
        ,
    nbri(this, {"nbr_system_id", "nbr_area_type"})
{

    yang_name = "nbr_locations"; yang_parent_name = "topology-neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

TopologyNeighbors::NbrLocations::~NbrLocations()
{
}

bool TopologyNeighbors::NbrLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbri.len(); index++)
    {
        if(nbri[index]->has_data())
            return true;
    }
    return nbr_location.is_set;
}

bool TopologyNeighbors::NbrLocations::has_operation() const
{
    for (std::size_t index=0; index<nbri.len(); index++)
    {
        if(nbri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nbr_location.yfilter);
}

std::string TopologyNeighbors::NbrLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:topology-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string TopologyNeighbors::NbrLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr_locations";
    ADD_KEY_TOKEN(nbr_location, "nbr_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TopologyNeighbors::NbrLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_location.is_set || is_set(nbr_location.yfilter)) leaf_name_data.push_back(nbr_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TopologyNeighbors::NbrLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbri")
    {
        auto c = std::make_shared<TopologyNeighbors::NbrLocations::Nbri>();
        c->parent = this;
        nbri.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TopologyNeighbors::NbrLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbri.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TopologyNeighbors::NbrLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr_location")
    {
        nbr_location = value;
        nbr_location.value_namespace = name_space;
        nbr_location.value_namespace_prefix = name_space_prefix;
    }
}

void TopologyNeighbors::NbrLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr_location")
    {
        nbr_location.yfilter = yfilter;
    }
}

bool TopologyNeighbors::NbrLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbri" || name == "nbr_location")
        return true;
    return false;
}

TopologyNeighbors::NbrLocations::Nbri::Nbri()
    :
    nbr_system_id{YType::str, "nbr_system_id"},
    nbr_area_type{YType::str, "nbr_area_type"},
    nbr_interface{YType::str, "nbr_interface"},
    nbr_state{YType::str, "nbr_state"},
    nbr_holdtime{YType::uint64, "nbr_holdtime"},
    nbr_uptime{YType::str, "nbr_uptime"}
{

    yang_name = "nbri"; yang_parent_name = "nbr_locations"; is_top_level_class = false; has_list_ancestor = true; 
}

TopologyNeighbors::NbrLocations::Nbri::~Nbri()
{
}

bool TopologyNeighbors::NbrLocations::Nbri::has_data() const
{
    if (is_presence_container) return true;
    return nbr_system_id.is_set
	|| nbr_area_type.is_set
	|| nbr_interface.is_set
	|| nbr_state.is_set
	|| nbr_holdtime.is_set
	|| nbr_uptime.is_set;
}

bool TopologyNeighbors::NbrLocations::Nbri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_system_id.yfilter)
	|| ydk::is_set(nbr_area_type.yfilter)
	|| ydk::is_set(nbr_interface.yfilter)
	|| ydk::is_set(nbr_state.yfilter)
	|| ydk::is_set(nbr_holdtime.yfilter)
	|| ydk::is_set(nbr_uptime.yfilter);
}

std::string TopologyNeighbors::NbrLocations::Nbri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbri";
    ADD_KEY_TOKEN(nbr_system_id, "nbr_system_id");
    ADD_KEY_TOKEN(nbr_area_type, "nbr_area_type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TopologyNeighbors::NbrLocations::Nbri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_system_id.is_set || is_set(nbr_system_id.yfilter)) leaf_name_data.push_back(nbr_system_id.get_name_leafdata());
    if (nbr_area_type.is_set || is_set(nbr_area_type.yfilter)) leaf_name_data.push_back(nbr_area_type.get_name_leafdata());
    if (nbr_interface.is_set || is_set(nbr_interface.yfilter)) leaf_name_data.push_back(nbr_interface.get_name_leafdata());
    if (nbr_state.is_set || is_set(nbr_state.yfilter)) leaf_name_data.push_back(nbr_state.get_name_leafdata());
    if (nbr_holdtime.is_set || is_set(nbr_holdtime.yfilter)) leaf_name_data.push_back(nbr_holdtime.get_name_leafdata());
    if (nbr_uptime.is_set || is_set(nbr_uptime.yfilter)) leaf_name_data.push_back(nbr_uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TopologyNeighbors::NbrLocations::Nbri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TopologyNeighbors::NbrLocations::Nbri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TopologyNeighbors::NbrLocations::Nbri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr_system_id")
    {
        nbr_system_id = value;
        nbr_system_id.value_namespace = name_space;
        nbr_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr_area_type")
    {
        nbr_area_type = value;
        nbr_area_type.value_namespace = name_space;
        nbr_area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr_interface")
    {
        nbr_interface = value;
        nbr_interface.value_namespace = name_space;
        nbr_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr_state")
    {
        nbr_state = value;
        nbr_state.value_namespace = name_space;
        nbr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr_holdtime")
    {
        nbr_holdtime = value;
        nbr_holdtime.value_namespace = name_space;
        nbr_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr_uptime")
    {
        nbr_uptime = value;
        nbr_uptime.value_namespace = name_space;
        nbr_uptime.value_namespace_prefix = name_space_prefix;
    }
}

void TopologyNeighbors::NbrLocations::Nbri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr_system_id")
    {
        nbr_system_id.yfilter = yfilter;
    }
    if(value_path == "nbr_area_type")
    {
        nbr_area_type.yfilter = yfilter;
    }
    if(value_path == "nbr_interface")
    {
        nbr_interface.yfilter = yfilter;
    }
    if(value_path == "nbr_state")
    {
        nbr_state.yfilter = yfilter;
    }
    if(value_path == "nbr_holdtime")
    {
        nbr_holdtime.yfilter = yfilter;
    }
    if(value_path == "nbr_uptime")
    {
        nbr_uptime.yfilter = yfilter;
    }
}

bool TopologyNeighbors::NbrLocations::Nbri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr_system_id" || name == "nbr_area_type" || name == "nbr_interface" || name == "nbr_state" || name == "nbr_holdtime" || name == "nbr_uptime")
        return true;
    return false;
}

Placement::Placement()
{

    yang_name = "placement"; yang_parent_name = "Cisco-IOS-XR-sysadmin-cm"; is_top_level_class = true; has_list_ancestor = false; 
}

Placement::~Placement()
{
}

bool Placement::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Placement::has_operation() const
{
    return is_set(yfilter);
}

std::string Placement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-cm:placement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Placement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Placement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Placement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Placement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Placement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Placement::clone_ptr() const
{
    return std::make_shared<Placement>();
}

std::string Placement::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Placement::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Placement::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Placement::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Placement::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf AreaType::SYSTEM {0, "SYSTEM"};
const Enum::YLeaf AreaType::RACK {1, "RACK"};
const Enum::YLeaf AreaType::UNKNOWN {2, "UNKNOWN"};


}
}

