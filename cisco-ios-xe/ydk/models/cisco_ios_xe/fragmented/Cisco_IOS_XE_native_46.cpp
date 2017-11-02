
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_46.hpp"
#include "Cisco_IOS_XE_native_47.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Overlay::Logging::Logging()
    :
    event(std::make_shared<Native::Interface::Overlay::Logging::Event>())
{
    event->parent = this;

    yang_name = "logging"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Logging::~Logging()
{
}

bool Native::Interface::Overlay::Logging::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::Overlay::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::Overlay::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::Overlay::Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::Overlay::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::Overlay::Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    trunk_status{YType::empty, "trunk-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Logging::Event::~Event()
{
}

bool Native::Interface::Overlay::Logging::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| trunk_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::Overlay::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::Overlay::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::Overlay::Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::Overlay::Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::Overlay::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "trunk-status" || name == "nfas-status" || name == "power-inline-status" || name == "status")
        return true;
    return false;
}

Native::Interface::Overlay::Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Overlay::Logging::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::Overlay::Logging::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::Overlay::Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Logging::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Logging::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Logging::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Logging::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::Overlay::Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::Overlay::Logging::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::Overlay::Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::Overlay::Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Logging::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Logging::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Logging::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::Overlay::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "mdix"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Mdix::~Mdix()
{
}

bool Native::Interface::Overlay::Mdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Overlay::Mdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Overlay::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Mdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Mdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Mdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Mdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Overlay::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "mop"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Mop::~Mop()
{
}

bool Native::Interface::Overlay::Mop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::Overlay::Mop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::Overlay::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Mop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Mop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Mop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Mop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::Overlay::InterfaceQos::InterfaceQos()
    :
    trust(std::make_shared<Native::Interface::Overlay::InterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::InterfaceQos::~InterfaceQos()
{
}

bool Native::Interface::Overlay::InterfaceQos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::Overlay::InterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::Overlay::InterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::InterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::InterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Overlay::InterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::InterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::Overlay::InterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::InterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::InterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::Overlay::InterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "interface_qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::InterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::Overlay::InterfaceQos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Overlay::InterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Overlay::InterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::InterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::InterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::InterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::InterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::InterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::InterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::Standby()
    :
    version{YType::enumeration, "version"},
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"}
    	,
    delay(std::make_shared<Native::Interface::Overlay::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::~Standby()
{
}

bool Native::Interface::Overlay::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return version.is_set
	|| bfd.is_set
	|| mac_refresh.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Overlay::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Overlay::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Overlay::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Overlay::Standby::UseBia>();
        }
        return use_bia;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "use-bia" || name == "standby-list" || name == "version" || name == "bfd" || name == "mac-refresh")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::Delay::~Delay()
{
}

bool Native::Interface::Overlay::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Overlay::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Overlay::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Overlay::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::Overlay::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Overlay::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Overlay::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Overlay::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Overlay::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Overlay::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Authentication()
    :
    word{YType::str, "word"},
    text{YType::str, "text"}
    	,
    md5(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_data() const
{
    return word.is_set
	|| text.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(text.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "word" || name == "text")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Overlay::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Overlay::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::AccessSession::~AccessSession()
{
}

bool Native::Interface::Overlay::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Overlay::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Overlay::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Overlay::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Overlay::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::Overlay::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Overlay::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Overlay::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Overlay::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Overlay::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Overlay::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Overlay::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::~StormControl()
{
}

bool Native::Interface::Overlay::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Overlay::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Overlay::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Overlay::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Overlay::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Action::~Action()
{
}

bool Native::Interface::Overlay::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Overlay::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Threshold>())
	,bps(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Trust::~Trust()
{
}

bool Native::Interface::Overlay::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Overlay::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Overlay::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Overlay::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Utd::~Utd()
{
}

bool Native::Interface::Overlay::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Overlay::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Overlay::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Overlay::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Overlay::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Overlay::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Overlay::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Overlay::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Overlay::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Overlay::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Overlay::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Overlay::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Overlay::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Overlay::RcvQueue::RcvQueue()
{

    yang_name = "rcv-queue"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Overlay::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Overlay::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Overlay::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Overlay::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Overlay::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::~Peer()
{
}

bool Native::Interface::Overlay::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Overlay::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Overlay::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Overlay::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Overlay::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::~Default_()
{
}

bool Native::Interface::Overlay::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Overlay::Peer::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Overlay::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Overlay::Peer::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Peer::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Peer::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Peer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Overlay::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PmPath::~PmPath()
{
}

bool Native::Interface::Overlay::PmPath::has_data() const
{
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::Overlay::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::Overlay::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::Overlay::CarrierDelay::CarrierDelay()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
    	,
    down(std::make_shared<Native::Interface::Overlay::CarrierDelay::Down>())
	,up(std::make_shared<Native::Interface::Overlay::CarrierDelay::Up>())
{
    down->parent = this;
    up->parent = this;

    yang_name = "carrier-delay"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::CarrierDelay::~CarrierDelay()
{
}

bool Native::Interface::Overlay::CarrierDelay::has_data() const
{
    return seconds.is_set
	|| msec.is_set
	|| (down !=  nullptr && down->has_data())
	|| (up !=  nullptr && up->has_data());
}

bool Native::Interface::Overlay::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| (down !=  nullptr && down->has_operation())
	|| (up !=  nullptr && up->has_operation());
}

std::string Native::Interface::Overlay::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::Overlay::CarrierDelay::Down>();
        }
        return down;
    }

    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Native::Interface::Overlay::CarrierDelay::Up>();
        }
        return up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(down != nullptr)
    {
        children["down"] = down;
    }

    if(up != nullptr)
    {
        children["up"] = up;
    }

    return children;
}

void Native::Interface::Overlay::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up" || name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Overlay::CarrierDelay::Down::Down()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "down"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::CarrierDelay::Down::~Down()
{
}

bool Native::Interface::Overlay::CarrierDelay::Down::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Overlay::CarrierDelay::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Overlay::CarrierDelay::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::CarrierDelay::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::CarrierDelay::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::CarrierDelay::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::CarrierDelay::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::CarrierDelay::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::CarrierDelay::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Overlay::CarrierDelay::Up::Up()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "up"; yang_parent_name = "carrier-delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::CarrierDelay::Up::~Up()
{
}

bool Native::Interface::Overlay::CarrierDelay::Up::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Overlay::CarrierDelay::Up::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Overlay::CarrierDelay::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::CarrierDelay::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::CarrierDelay::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::CarrierDelay::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::CarrierDelay::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::CarrierDelay::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::CarrierDelay::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Overlay::ChannelGroup::ChannelGroup()
    :
    number{YType::uint16, "number"},
    mode{YType::enumeration, "mode"},
    non_silent{YType::empty, "non-silent"},
    link{YType::uint8, "link"},
    auto_{YType::empty, "auto"}
{

    yang_name = "channel-group"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::ChannelGroup::~ChannelGroup()
{
}

bool Native::Interface::Overlay::ChannelGroup::has_data() const
{
    return number.is_set
	|| mode.is_set
	|| non_silent.is_set
	|| link.is_set
	|| auto_.is_set;
}

bool Native::Interface::Overlay::ChannelGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(non_silent.yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Overlay::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:channel-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (non_silent.is_set || is_set(non_silent.yfilter)) leaf_name_data.push_back(non_silent.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-silent")
    {
        non_silent = value;
        non_silent.value_namespace = name_space;
        non_silent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "non-silent")
    {
        non_silent.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mode" || name == "non-silent" || name == "link" || name == "auto")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
{

    yang_name = "ethernet"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::~Ethernet()
{
}

bool Native::Interface::Overlay::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::Interface::Overlay::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::Overlay::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
    	,
    link_monitor(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure>())
	,remote_loopback(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;
    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::has_data() const
{
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_rate.yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_monitor != nullptr)
    {
        children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        children["remote-failure"] = remote_failure;
    }

    if(remote_loopback != nullptr)
    {
        children["remote-loopback"] = remote_loopback;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure" || name == "remote-loopback" || name == "max-rate" || name == "min-rate" || name == "mode" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
    	,
    frame(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::has_data() const
{
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "on" || name == "supported")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    thresh{YType::uint16, "thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    return thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(f_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (f_thresh.is_set || is_set(f_thresh.yfilter)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "f-thresh")
    {
        f_thresh = value;
        f_thresh.value_namespace = name_space;
        f_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "f-thresh")
    {
        f_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "f-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.yfilter)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-thresh")
    {
        e_thresh = value;
        e_thresh.value_namespace = name_space;
        e_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-thresh")
    {
        e_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.yfilter)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh = value;
        crc_thresh.value_namespace = name_space;
        crc_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "err-thresh")
    {
        err_thresh = value;
        err_thresh.value_namespace = name_space;
        err_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "err-thresh")
    {
        err_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_event != nullptr)
    {
        children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        children["link-fault"] = link_fault;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::has_data() const
{
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Negotiation::~Negotiation()
{
}

bool Native::Interface::Overlay::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Overlay::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Overlay::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Overlay::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Synchronous::~Synchronous()
{
}

bool Native::Interface::Overlay::Synchronous::has_data() const
{
    return mode.is_set;
}

bool Native::Interface::Overlay::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"},
    nonegotiate{YType::empty, "nonegotiate"}
{

    yang_name = "speed"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Speed::~Speed()
{
}

bool Native::Interface::Overlay::Speed::has_data() const
{
    return auto_.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set
	|| nonegotiate.is_set;
}

bool Native::Interface::Overlay::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter)
	|| ydk::is_set(nonegotiate.yfilter);
}

std::string Native::Interface::Overlay::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Speed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.yfilter)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.yfilter)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.yfilter)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.yfilter)) leaf_name_data.push_back(value_10000.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
        value_10.value_namespace = name_space;
        value_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
        value_100.value_namespace = name_space;
        value_100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
        value_1000.value_namespace = name_space;
        value_1000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
        value_10000.value_namespace = name_space;
        value_10000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Speed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "value-10")
    {
        value_10.yfilter = yfilter;
    }
    if(value_path == "value-100")
    {
        value_100.yfilter = yfilter;
    }
    if(value_path == "value-1000")
    {
        value_1000.yfilter = yfilter;
    }
    if(value_path == "value-10000")
    {
        value_10000.yfilter = yfilter;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000" || name == "nonegotiate")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::Overlay::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::Overlay::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::~Plim()
{
}

bool Native::Interface::Overlay::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::Overlay::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::Overlay::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Overlay::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::Overlay::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::Overlay::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Overlay::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Overlay::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::Overlay::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::~Qos()
{
}

bool Native::Interface::Overlay::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Queue()
    :
    zero(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero>())
	,strict_priority(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority>())
{
    zero->parent = this;
    strict_priority->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_data() const
{
    return (zero !=  nullptr && zero->has_data())
	|| (strict_priority !=  nullptr && strict_priority->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (zero !=  nullptr && zero->has_operation())
	|| (strict_priority !=  nullptr && strict_priority->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(zero != nullptr)
    {
        children["zero"] = zero;
    }

    if(strict_priority != nullptr)
    {
        children["strict-priority"] = strict_priority;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero" || name == "strict-priority")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
    	,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Pppoe::~Pppoe()
{
}

bool Native::Interface::Overlay::Pppoe::has_data() const
{
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::Overlay::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::Overlay::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::Overlay::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Interface::Overlay::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::Overlay::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::Overlay::Pppoe::Enable::has_data() const
{
    return group.is_set;
}

bool Native::Interface::Overlay::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Overlay::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Service()
{

    yang_name = "service"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::~Service()
{
}

bool Native::Interface::Overlay::Service::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Service::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    trunk{YType::empty, "trunk"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    description{YType::str, "description"},
    evc_name{YType::str, "evc-name"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"}
    	,
    encapsulation(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation>())
	,ip(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip>())
	,ipv6(std::make_shared<Native::Interface::Overlay::Service::Instance::Ipv6>())
	,rewrite(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite>())
	,errdisable(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable>())
	,ethernet_container(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer>())
	,snmp(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp>())
	,bridge_domain(std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain>())
	,mac(std::make_shared<Native::Interface::Overlay::Service::Instance::Mac>())
	,service_policy(std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy>())
	,cfm(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm>())
	,l2protocol(std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol>())
{
    encapsulation->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    rewrite->parent = this;
    errdisable->parent = this;
    ethernet_container->parent = this;
    snmp->parent = this;
    bridge_domain->parent = this;
    mac->parent = this;
    service_policy->parent = this;
    cfm->parent = this;
    l2protocol->parent = this;

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::~Instance()
{
}

bool Native::Interface::Overlay::Service::Instance::has_data() const
{
    return id.is_set
	|| trunk.is_set
	|| gigabitethernet.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| description.is_set
	|| evc_name.is_set
	|| group.is_set
	|| shutdown.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data());
}

bool Native::Interface::Overlay::Service::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ethernet_evc_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(evc_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.yfilter)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.yfilter)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Overlay::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::Overlay::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol>();
        }
        return l2protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        children["ethernet-container"] = ethernet_container;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(l2protocol != nullptr)
    {
        children["l2protocol"] = l2protocol;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
        ethernet_evc_name.value_namespace = name_space;
        ethernet_evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
        evc_name.value_namespace = name_space;
        evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "evc-name")
    {
        evc_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
    	,
    dot1ad(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q>())
	,priority_tagged(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged>())
	,untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;
    priority_tagged->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_data() const
{
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        children["untagged"] = untagged;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Dot1Ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
    	,
    cos2(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_data() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dot1q")
    {
        dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::~Cos2()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Dot1Q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    cos2(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_data() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::~Cos2()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
    	,
    cos_container(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(etype.yfilter)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_container != nullptr)
    {
        children["cos-container"] = cos_container;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_data() const
{
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Acl>())
	,dhcp(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp>())
	,verify(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_data() const
{
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_data() const
{
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_data() const
{
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
        dhcp_snooping.value_namespace = name_space;
        dhcp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping.yfilter = yfilter;
    }
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_data() const
{
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
        traffic_filter.value_namespace = name_space;
        traffic_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pop != nullptr)
    {
        children["pop"] = pop;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(t1_to_1 != nullptr)
    {
        children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        children["t2-to-2"] = t2_to_2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    return mac_security.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi>())
	,loopback(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lmi != nullptr)
    {
        children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        children["loopback"] = loopback;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ce_vlan != nullptr)
    {
        children["ce-vlan"] = ce_vlan;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"}
    	,
    vlan_range(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>())
{
    vlan_range->parent = this;

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| (vlan_range !=  nullptr && vlan_range->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| (vlan_range !=  nullptr && vlan_range->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        if(vlan_range == nullptr)
        {
            vlan_range = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>();
        }
        return vlan_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_range != nullptr)
    {
        children["vlan-range"] = vlan_range;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged")
    {
        untagged = value;
        untagged.value_namespace = name_space;
        untagged.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "untagged")
    {
        untagged.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "any" || name == "default" || name == "untagged")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::VlanRange()
    :
    vlan_id{YType::uint16, "vlan-id"},
    comma{YType::uint16, "comma"},
    hyphen{YType::uint16, "hyphen"}
{

    yang_name = "vlan-range"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::~VlanRange()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_data() const
{
    return vlan_id.is_set
	|| comma.is_set
	|| hyphen.is_set;
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(comma.yfilter)
	|| ydk::is_set(hyphen.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (comma.is_set || is_set(comma.yfilter)) leaf_name_data.push_back(comma.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comma")
    {
        comma = value;
        comma.value_namespace = name_space;
        comma.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "comma")
    {
        comma.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "comma" || name == "hyphen")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Trap>())
	,ifindex(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_data() const
{
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_data() const
{
    return link_status.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Overlay::InterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::Overlay::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Overlay::Standby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Overlay::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Overlay::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Overlay::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Overlay::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Overlay::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Overlay::ChannelGroup::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::Overlay::ChannelGroup::Mode::auto_ {1, "auto"};
const Enum::YLeaf Native::Interface::Overlay::ChannelGroup::Mode::desirable {2, "desirable"};
const Enum::YLeaf Native::Interface::Overlay::ChannelGroup::Mode::on {3, "on"};
const Enum::YLeaf Native::Interface::Overlay::ChannelGroup::Mode::passive {4, "passive"};

const Enum::YLeaf Native::Interface::Overlay::Ethernet::Oam::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::Overlay::Ethernet::Oam::Mode::passive {1, "passive"};

const Enum::YLeaf Native::Interface::Overlay::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Dot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::SecondDot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};


}
}

